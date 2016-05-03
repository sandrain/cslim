#include "compat.h"

static void *pcache1Alloc(int nByte)
{

  void *p = 0;
  ((void) (0));
  if( nByte<=(pcache1_g).szSlot )
{

    sqlite3_mutex_enter((pcache1_g).mutex);
    p = (PgHdr1 *)(pcache1_g).pFree;
    if( p )
{

      (pcache1_g).pFree = (pcache1_g).pFree->pNext;
      (pcache1_g).nFreeSlot--;
      (pcache1_g).bUnderPressure = (pcache1_g).nFreeSlot<(pcache1_g).nReserve;
      ((void) (0));
      sqlite3StatusHighwater(7, nByte);
      sqlite3StatusUp(1, 1);
    }
    sqlite3_mutex_leave((pcache1_g).mutex);
  }
  if( p==0 )
{




    p = sqlite3Malloc(nByte);

    if( p )
{

      int sz = sqlite3MallocSize(p);
      sqlite3_mutex_enter((pcache1_g).mutex);
      sqlite3StatusHighwater(7, nByte);
      sqlite3StatusUp(2, sz);
      sqlite3_mutex_leave((pcache1_g).mutex);
    }

    ;
  }
  return p;
}

static void pcache1Free(void *p)
{

  if( p==0 ) return;
  if( (((uptr)(p)>=(uptr)((pcache1_g).pStart))&&((uptr)(p)<(uptr)((pcache1_g).pEnd))) )
{

    PgFreeslot *pSlot;
    sqlite3_mutex_enter((pcache1_g).mutex);
    sqlite3StatusDown(1, 1);
    pSlot = (PgFreeslot*)p;
    pSlot->pNext = (pcache1_g).pFree;
    (pcache1_g).pFree = pSlot;
    (pcache1_g).nFreeSlot++;
    (pcache1_g).bUnderPressure = (pcache1_g).nFreeSlot<(pcache1_g).nReserve;
    ((void) (0));
    sqlite3_mutex_leave((pcache1_g).mutex);
  }else{
    ((void) (0));
    ;

    {
      int nFreed = 0;
      nFreed = sqlite3MallocSize(p);
      sqlite3_mutex_enter((pcache1_g).mutex);
      sqlite3StatusDown(2, nFreed);
      sqlite3_mutex_leave((pcache1_g).mutex);
    }

    sqlite3_free(p);
  }
}

 void sqlite3_mutex_enter(sqlite3_mutex *p)
{

  if( p )
{

    ((void) (0));
    sqlite3Config.mutex.xMutexEnter(p);
  }
}

static void sqlite3StatusHighwater(int op, int X)
{

  sqlite3StatValueType newValue;
  ;
  ((void) (0));
  newValue = (sqlite3StatValueType)X;
  ((void) (0));
  ((void) (0));
  ((void) (0))
                                                                    ;
  ((void) (0))


                                             ;
  if( newValue>sqlite3Stat.mxValue[op] )
{

    sqlite3Stat.mxValue[op] = newValue;
  }
}

static void sqlite3StatusUp(int op, int N)
{

  ;
  ((void) (0));
  ((void) (0));
  ((void) (0))
                                                                    ;
  sqlite3Stat.nowValue[op] += N;
  if( sqlite3Stat.nowValue[op]>sqlite3Stat.mxValue[op] )
{

    sqlite3Stat.mxValue[op] = sqlite3Stat.nowValue[op];
  }
}

 void sqlite3_mutex_leave(sqlite3_mutex *p)
{

  if( p )
{

    ((void) (0));
    sqlite3Config.mutex.xMutexLeave(p);
  }
}

static void *sqlite3Malloc(u64 n)
{

  void *p;
  if( n==0 || n>=0x7fffff00 )
{






    p = 0;
  }else if( sqlite3Config.bMemstat )
{

    sqlite3_mutex_enter(mem0.mutex);
    mallocWithAlarm((int)n, &p);
    sqlite3_mutex_leave(mem0.mutex);
  }else{
    p = sqlite3Config.m.xMalloc((int)n);
  }
  ((void) (0));
  return p;
}

static int sqlite3MallocSize(void *p)
{

  ((void) (0));
  return sqlite3Config.m.xSize(p);
}

static void sqlite3StatusDown(int op, int N)
{

  ;
  ((void) (0));
  ((void) (0));
  ((void) (0))
                                                                    ;
  ((void) (0));
  sqlite3Stat.nowValue[op] -= N;
}

 void sqlite3_free(void *p)
{

  if( p==0 ) return;
  ((void) (0));
  ((void) (0));
  if( sqlite3Config.bMemstat )
{

    sqlite3_mutex_enter(mem0.mutex);
    sqlite3StatusDown(0, sqlite3MallocSize(p));
    sqlite3StatusDown(9, 1);
    sqlite3Config.m.xFree(p);
    sqlite3_mutex_leave(mem0.mutex);
  }else{
    sqlite3Config.m.xFree(p);
  }
}

static int mallocWithAlarm(int n, void **pp)
{

  int nFull;
  void *p;
  ((void) (0));
  nFull = sqlite3Config.m.xRoundup(n);
  sqlite3StatusHighwater(5, n);
  if( mem0.alarmThreshold>0 )
{

    sqlite3_int64 nUsed = sqlite3StatusValue(0);
    if( nUsed >= mem0.alarmThreshold - nFull )
{

      mem0.nearlyFull = 1;
      sqlite3MallocAlarm(nFull);
    }else{
      mem0.nearlyFull = 0;
    }
  }
  p = sqlite3Config.m.xMalloc(nFull);






  if( p )
{

    nFull = sqlite3MallocSize(p);
    sqlite3StatusUp(0, nFull);
    sqlite3StatusUp(9, 1);
  }
  *pp = p;
  return nFull;
}

static sqlite3_int64 sqlite3StatusValue(int op)
{

  ;
  ((void) (0));
  ((void) (0));
  ((void) (0))
                                                                    ;
  return sqlite3Stat.nowValue[op];
}

static void sqlite3MallocAlarm(int nByte)
{

  if( mem0.alarmThreshold<=0 ) return;
  sqlite3_mutex_leave(mem0.mutex);
  sqlite3_release_memory(nByte);
  sqlite3_mutex_enter(mem0.mutex);
}

 int sqlite3_release_memory(int n)
{







  (void)(n);
  return 0;

}

