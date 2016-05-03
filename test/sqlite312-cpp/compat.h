#include <stdio.h>

static void *pcache1Alloc(int nByte);
static void pcache1Free(void *p);
void sqlite3_mutex_enter(sqlite3_mutex *p);
static void sqlite3StatusHighwater(int op, int X);
static void sqlite3StatusUp(int op, int N);
void sqlite3_mutex_leave(sqlite3_mutex *p);
static void *sqlite3Malloc(u64 n);
static int sqlite3MallocSize(void *p);
static void sqlite3StatusDown(int op, int N);
void sqlite3_free(void *p);
static int mallocWithAlarm(int n, void **pp);
static sqlite3_int64 sqlite3StatusValue(int op);
static void sqlite3MallocAlarm(int nByte);
int sqlite3_release_memory(int n);
