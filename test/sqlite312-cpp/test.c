#include "test.h"

static void sqlite3PageFree(void *p)
{

  pcache1Free(p);
}

static void *sqlite3PageMalloc(int sz)
{

  return pcache1Alloc(sz);
}

