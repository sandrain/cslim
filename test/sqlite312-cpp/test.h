#include <stdio.h>

#include "compat.h"

static void sqlite3PageFree(void *p);
static void *sqlite3PageMalloc(int sz);
