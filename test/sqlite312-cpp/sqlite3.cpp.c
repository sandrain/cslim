# 1 "sqlite3.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "sqlite3.c"
# 260 "sqlite3.c"
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 98 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 261 "sqlite3.c" 2
# 373 "sqlite3.c"
 const char sqlite3_version[] = "3.12.0";
 const char * sqlite3_libversion(void);
 const char * sqlite3_sourceid(void);
 int sqlite3_libversion_number(void);
# 401 "sqlite3.c"
 int sqlite3_compileoption_used(const char *zOptName);
 const char * sqlite3_compileoption_get(int N);
# 441 "sqlite3.c"
 int sqlite3_threadsafe(void);
# 457 "sqlite3.c"
typedef struct sqlite3 sqlite3;
# 482 "sqlite3.c"
  typedef long long int sqlite_int64;
  typedef unsigned long long int sqlite_uint64;

typedef sqlite_int64 sqlite3_int64;
typedef sqlite_uint64 sqlite3_uint64;
# 538 "sqlite3.c"
 int sqlite3_close(sqlite3*);
 int sqlite3_close_v2(sqlite3*);






typedef int (*sqlite3_callback)(void*,int,char**, char**);
# 610 "sqlite3.c"
 int sqlite3_exec(
  sqlite3*,
  const char *sql,
  int (*callback)(void*,int,char**,char**),
  void *,
  char **errmsg
);
# 862 "sqlite3.c"
typedef struct sqlite3_file sqlite3_file;
struct sqlite3_file {
  const struct sqlite3_io_methods *pMethods;
};
# 957 "sqlite3.c"
typedef struct sqlite3_io_methods sqlite3_io_methods;
struct sqlite3_io_methods {
  int iVersion;
  int (*xClose)(sqlite3_file*);
  int (*xRead)(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
  int (*xWrite)(sqlite3_file*, const void*, int iAmt, sqlite3_int64 iOfst);
  int (*xTruncate)(sqlite3_file*, sqlite3_int64 size);
  int (*xSync)(sqlite3_file*, int flags);
  int (*xFileSize)(sqlite3_file*, sqlite3_int64 *pSize);
  int (*xLock)(sqlite3_file*, int);
  int (*xUnlock)(sqlite3_file*, int);
  int (*xCheckReservedLock)(sqlite3_file*, int *pResOut);
  int (*xFileControl)(sqlite3_file*, int op, void *pArg);
  int (*xSectorSize)(sqlite3_file*);
  int (*xDeviceCharacteristics)(sqlite3_file*);

  int (*xShmMap)(sqlite3_file*, int iPg, int pgsz, int, void volatile**);
  int (*xShmLock)(sqlite3_file*, int offset, int n, int flags);
  void (*xShmBarrier)(sqlite3_file*);
  int (*xShmUnmap)(sqlite3_file*, int deleteFlag);

  int (*xFetch)(sqlite3_file*, sqlite3_int64 iOfst, int iAmt, void **pp);
  int (*xUnfetch)(sqlite3_file*, sqlite3_int64 iOfst, void *p);


};
# 1261 "sqlite3.c"
typedef struct sqlite3_mutex sqlite3_mutex;
# 1420 "sqlite3.c"
typedef struct sqlite3_vfs sqlite3_vfs;
typedef void (*sqlite3_syscall_ptr)(void);
struct sqlite3_vfs {
  int iVersion;
  int szOsFile;
  int mxPathname;
  sqlite3_vfs *pNext;
  const char *zName;
  void *pAppData;
  int (*xOpen)(sqlite3_vfs*, const char *zName, sqlite3_file*,
               int flags, int *pOutFlags);
  int (*xDelete)(sqlite3_vfs*, const char *zName, int syncDir);
  int (*xAccess)(sqlite3_vfs*, const char *zName, int flags, int *pResOut);
  int (*xFullPathname)(sqlite3_vfs*, const char *zName, int nOut, char *zOut);
  void *(*xDlOpen)(sqlite3_vfs*, const char *zFilename);
  void (*xDlError)(sqlite3_vfs*, int nByte, char *zErrMsg);
  void (*(*xDlSym)(sqlite3_vfs*,void*, const char *zSymbol))(void);
  void (*xDlClose)(sqlite3_vfs*, void*);
  int (*xRandomness)(sqlite3_vfs*, int nByte, char *zOut);
  int (*xSleep)(sqlite3_vfs*, int microseconds);
  int (*xCurrentTime)(sqlite3_vfs*, double*);
  int (*xGetLastError)(sqlite3_vfs*, int, char *);




  int (*xCurrentTimeInt64)(sqlite3_vfs*, sqlite3_int64*);




  int (*xSetSystemCall)(sqlite3_vfs*, const char *zName, sqlite3_syscall_ptr);
  sqlite3_syscall_ptr (*xGetSystemCall)(sqlite3_vfs*, const char *zName);
  const char *(*xNextSystemCall)(sqlite3_vfs*, const char *zName);





};
# 1598 "sqlite3.c"
 int sqlite3_initialize(void);
 int sqlite3_shutdown(void);
 int sqlite3_os_init(void);
 int sqlite3_os_end(void);
# 1634 "sqlite3.c"
 int sqlite3_config(int, ...);
# 1653 "sqlite3.c"
 int sqlite3_db_config(sqlite3*, int op, ...);
# 1718 "sqlite3.c"
typedef struct sqlite3_mem_methods sqlite3_mem_methods;
struct sqlite3_mem_methods {
  void *(*xMalloc)(int);
  void (*xFree)(void*);
  void *(*xRealloc)(void*,int);
  int (*xSize)(void*);
  int (*xRoundup)(int);
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  void *pAppData;
};
# 2176 "sqlite3.c"
 int sqlite3_extended_result_codes(sqlite3*, int onoff);
# 2228 "sqlite3.c"
 sqlite3_int64 sqlite3_last_insert_rowid(sqlite3*);
# 2281 "sqlite3.c"
 int sqlite3_changes(sqlite3*);
# 2305 "sqlite3.c"
 int sqlite3_total_changes(sqlite3*);
# 2345 "sqlite3.c"
 void sqlite3_interrupt(sqlite3*);
# 2380 "sqlite3.c"
 int sqlite3_complete(const char *sql);
 int sqlite3_complete16(const void *sql);
# 2442 "sqlite3.c"
 int sqlite3_busy_handler(sqlite3*, int(*)(void*,int), void*);
# 2465 "sqlite3.c"
 int sqlite3_busy_timeout(sqlite3*, int ms);
# 2540 "sqlite3.c"
 int sqlite3_get_table(
  sqlite3 *db,
  const char *zSql,
  char ***pazResult,
  int *pnRow,
  int *pnColumn,
  char **pzErrmsg
);
 void sqlite3_free_table(char **result);
# 2654 "sqlite3.c"
 char * sqlite3_mprintf(const char*,...);
 char * sqlite3_vmprintf(const char*, va_list);
 char * sqlite3_snprintf(int,char*,const char*, ...);
 char * sqlite3_vsnprintf(int,char*,const char*, va_list);
# 2747 "sqlite3.c"
 void * sqlite3_malloc(int);
 void * sqlite3_malloc64(sqlite3_uint64);
 void * sqlite3_realloc(void*, int);
 void * sqlite3_realloc64(void*, sqlite3_uint64);
 void sqlite3_free(void*);
 sqlite3_uint64 sqlite3_msize(void*);
# 2777 "sqlite3.c"
 sqlite3_int64 sqlite3_memory_used(void);
 sqlite3_int64 sqlite3_memory_highwater(int resetFlag);
# 2801 "sqlite3.c"
 void sqlite3_randomness(int N, void *P);
# 2884 "sqlite3.c"
 int sqlite3_set_authorizer(
  sqlite3*,
  int (*xAuth)(void*,int,const char*,const char*,const char*,const char*),
  void *pUserData
);
# 2989 "sqlite3.c"
 void * sqlite3_trace(sqlite3*, void(*xTrace)(void*,const char*), void*);
 void * sqlite3_profile(sqlite3*,
   void(*xProfile)(void*,const char*,sqlite3_uint64), void*);
# 3025 "sqlite3.c"
 void sqlite3_progress_handler(sqlite3*, int, int(*)(void*), void*);
# 3254 "sqlite3.c"
 int sqlite3_open(
  const char *filename,
  sqlite3 **ppDb
);
 int sqlite3_open16(
  const void *filename,
  sqlite3 **ppDb
);
 int sqlite3_open_v2(
  const char *filename,
  sqlite3 **ppDb,
  int flags,
  const char *zVfs
);
# 3308 "sqlite3.c"
 const char * sqlite3_uri_parameter(const char *zFilename, const char *zParam);
 int sqlite3_uri_boolean(const char *zFile, const char *zParam, int bDefault);
 sqlite3_int64 sqlite3_uri_int64(const char*, const char*, sqlite3_int64);
# 3354 "sqlite3.c"
 int sqlite3_errcode(sqlite3 *db);
 int sqlite3_extended_errcode(sqlite3 *db);
 const char * sqlite3_errmsg(sqlite3*);
 const void * sqlite3_errmsg16(sqlite3*);
 const char * sqlite3_errstr(int);
# 3384 "sqlite3.c"
typedef struct sqlite3_stmt sqlite3_stmt;
# 3426 "sqlite3.c"
 int sqlite3_limit(sqlite3*, int id, int newVal);
# 3578 "sqlite3.c"
 int sqlite3_prepare(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare_v2(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare16(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
 int sqlite3_prepare16_v2(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
# 3615 "sqlite3.c"
 const char * sqlite3_sql(sqlite3_stmt *pStmt);
# 3647 "sqlite3.c"
 int sqlite3_stmt_readonly(sqlite3_stmt *pStmt);
# 3668 "sqlite3.c"
 int sqlite3_stmt_busy(sqlite3_stmt*);
# 3709 "sqlite3.c"
typedef struct Mem sqlite3_value;
# 3723 "sqlite3.c"
typedef struct sqlite3_context sqlite3_context;
# 3832 "sqlite3.c"
 int sqlite3_bind_blob(sqlite3_stmt*, int, const void*, int n, void(*)(void*));
 int sqlite3_bind_blob64(sqlite3_stmt*, int, const void*, sqlite3_uint64,
                        void(*)(void*));
 int sqlite3_bind_double(sqlite3_stmt*, int, double);
 int sqlite3_bind_int(sqlite3_stmt*, int, int);
 int sqlite3_bind_int64(sqlite3_stmt*, int, sqlite3_int64);
 int sqlite3_bind_null(sqlite3_stmt*, int);
 int sqlite3_bind_text(sqlite3_stmt*,int,const char*,int,void(*)(void*));
 int sqlite3_bind_text16(sqlite3_stmt*, int, const void*, int, void(*)(void*));
 int sqlite3_bind_text64(sqlite3_stmt*, int, const char*, sqlite3_uint64,
                         void(*)(void*), unsigned char encoding);
 int sqlite3_bind_value(sqlite3_stmt*, int, const sqlite3_value*);
 int sqlite3_bind_zeroblob(sqlite3_stmt*, int, int n);
 int sqlite3_bind_zeroblob64(sqlite3_stmt*, int, sqlite3_uint64);
# 3866 "sqlite3.c"
 int sqlite3_bind_parameter_count(sqlite3_stmt*);
# 3894 "sqlite3.c"
 const char * sqlite3_bind_parameter_name(sqlite3_stmt*, int);
# 3911 "sqlite3.c"
 int sqlite3_bind_parameter_index(sqlite3_stmt*, const char *zName);
# 3921 "sqlite3.c"
 int sqlite3_clear_bindings(sqlite3_stmt*);
# 3933 "sqlite3.c"
 int sqlite3_column_count(sqlite3_stmt *pStmt);
# 3962 "sqlite3.c"
 const char * sqlite3_column_name(sqlite3_stmt*, int N);
 const void * sqlite3_column_name16(sqlite3_stmt*, int N);
# 4011 "sqlite3.c"
 const char * sqlite3_column_database_name(sqlite3_stmt*,int);
 const void * sqlite3_column_database_name16(sqlite3_stmt*,int);
 const char * sqlite3_column_table_name(sqlite3_stmt*,int);
 const void * sqlite3_column_table_name16(sqlite3_stmt*,int);
 const char * sqlite3_column_origin_name(sqlite3_stmt*,int);
 const void * sqlite3_column_origin_name16(sqlite3_stmt*,int);
# 4048 "sqlite3.c"
 const char * sqlite3_column_decltype(sqlite3_stmt*,int);
 const void * sqlite3_column_decltype16(sqlite3_stmt*,int);
# 4129 "sqlite3.c"
 int sqlite3_step(sqlite3_stmt*);
# 4150 "sqlite3.c"
 int sqlite3_data_count(sqlite3_stmt *pStmt);
# 4340 "sqlite3.c"
 const void * sqlite3_column_blob(sqlite3_stmt*, int iCol);
 int sqlite3_column_bytes(sqlite3_stmt*, int iCol);
 int sqlite3_column_bytes16(sqlite3_stmt*, int iCol);
 double sqlite3_column_double(sqlite3_stmt*, int iCol);
 int sqlite3_column_int(sqlite3_stmt*, int iCol);
 sqlite3_int64 sqlite3_column_int64(sqlite3_stmt*, int iCol);
 const unsigned char * sqlite3_column_text(sqlite3_stmt*, int iCol);
 const void * sqlite3_column_text16(sqlite3_stmt*, int iCol);
 int sqlite3_column_type(sqlite3_stmt*, int iCol);
 sqlite3_value * sqlite3_column_value(sqlite3_stmt*, int iCol);
# 4377 "sqlite3.c"
 int sqlite3_finalize(sqlite3_stmt *pStmt);
# 4404 "sqlite3.c"
 int sqlite3_reset(sqlite3_stmt *pStmt);
# 4504 "sqlite3.c"
 int sqlite3_create_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
 int sqlite3_create_function16(
  sqlite3 *db,
  const void *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
 int sqlite3_create_function_v2(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*),
  void(*xDestroy)(void*)
);
# 4570 "sqlite3.c"
 int sqlite3_aggregate_count(sqlite3_context*);
 int sqlite3_expired(sqlite3_stmt*);
 int sqlite3_transfer_bindings(sqlite3_stmt*, sqlite3_stmt*);
 int sqlite3_global_recover(void);
 void sqlite3_thread_cleanup(void);
 int sqlite3_memory_alarm(void(*)(void*,sqlite3_int64,int),
                      void*,sqlite3_int64);
# 4625 "sqlite3.c"
 const void * sqlite3_value_blob(sqlite3_value*);
 int sqlite3_value_bytes(sqlite3_value*);
 int sqlite3_value_bytes16(sqlite3_value*);
 double sqlite3_value_double(sqlite3_value*);
 int sqlite3_value_int(sqlite3_value*);
 sqlite3_int64 sqlite3_value_int64(sqlite3_value*);
 const unsigned char * sqlite3_value_text(sqlite3_value*);
 const void * sqlite3_value_text16(sqlite3_value*);
 const void * sqlite3_value_text16le(sqlite3_value*);
 const void * sqlite3_value_text16be(sqlite3_value*);
 int sqlite3_value_type(sqlite3_value*);
 int sqlite3_value_numeric_type(sqlite3_value*);
# 4652 "sqlite3.c"
 unsigned int sqlite3_value_subtype(sqlite3_value*);
# 4668 "sqlite3.c"
 sqlite3_value * sqlite3_value_dup(const sqlite3_value*);
 void sqlite3_value_free(sqlite3_value*);
# 4714 "sqlite3.c"
 void * sqlite3_aggregate_context(sqlite3_context*, int nBytes);
# 4729 "sqlite3.c"
 void * sqlite3_user_data(sqlite3_context*);
# 4741 "sqlite3.c"
 sqlite3 * sqlite3_context_db_handle(sqlite3_context*);
# 4794 "sqlite3.c"
 void * sqlite3_get_auxdata(sqlite3_context*, int N);
 void sqlite3_set_auxdata(sqlite3_context*, int N, void*, void (*)(void*));
# 4812 "sqlite3.c"
typedef void (*sqlite3_destructor_type)(void*);
# 4931 "sqlite3.c"
 void sqlite3_result_blob(sqlite3_context*, const void*, int, void(*)(void*));
 void sqlite3_result_blob64(sqlite3_context*,const void*,
                           sqlite3_uint64,void(*)(void*));
 void sqlite3_result_double(sqlite3_context*, double);
 void sqlite3_result_error(sqlite3_context*, const char*, int);
 void sqlite3_result_error16(sqlite3_context*, const void*, int);
 void sqlite3_result_error_toobig(sqlite3_context*);
 void sqlite3_result_error_nomem(sqlite3_context*);
 void sqlite3_result_error_code(sqlite3_context*, int);
 void sqlite3_result_int(sqlite3_context*, int);
 void sqlite3_result_int64(sqlite3_context*, sqlite3_int64);
 void sqlite3_result_null(sqlite3_context*);
 void sqlite3_result_text(sqlite3_context*, const char*, int, void(*)(void*));
 void sqlite3_result_text64(sqlite3_context*, const char*,sqlite3_uint64,
                           void(*)(void*), unsigned char encoding);
 void sqlite3_result_text16(sqlite3_context*, const void*, int, void(*)(void*));
 void sqlite3_result_text16le(sqlite3_context*, const void*, int,void(*)(void*));
 void sqlite3_result_text16be(sqlite3_context*, const void*, int,void(*)(void*));
 void sqlite3_result_value(sqlite3_context*, sqlite3_value*);
 void sqlite3_result_zeroblob(sqlite3_context*, int n);
 int sqlite3_result_zeroblob64(sqlite3_context*, sqlite3_uint64 n);
# 4966 "sqlite3.c"
 void sqlite3_result_subtype(sqlite3_context*,unsigned int);
# 5048 "sqlite3.c"
 int sqlite3_create_collation(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
 int sqlite3_create_collation_v2(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*),
  void(*xDestroy)(void*)
);
 int sqlite3_create_collation16(
  sqlite3*,
  const void *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
# 5098 "sqlite3.c"
 int sqlite3_collation_needed(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const char*)
);
 int sqlite3_collation_needed16(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const void*)
);
# 5181 "sqlite3.c"
 int sqlite3_sleep(int);
# 5239 "sqlite3.c"
 char *sqlite3_temp_directory;
# 5276 "sqlite3.c"
 char *sqlite3_data_directory;
# 5300 "sqlite3.c"
 int sqlite3_get_autocommit(sqlite3*);
# 5313 "sqlite3.c"
 sqlite3 * sqlite3_db_handle(sqlite3_stmt*);
# 5330 "sqlite3.c"
 const char * sqlite3_db_filename(sqlite3 *db, const char *zDbName);
# 5340 "sqlite3.c"
 int sqlite3_db_readonly(sqlite3 *db, const char *zDbName);
# 5356 "sqlite3.c"
 sqlite3_stmt * sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt);
# 5405 "sqlite3.c"
 void * sqlite3_commit_hook(sqlite3*, int(*)(void*), void*);
 void * sqlite3_rollback_hook(sqlite3*, void(*)(void *), void*);
# 5457 "sqlite3.c"
 void * sqlite3_update_hook(
  sqlite3*,
  void(*)(void *,int ,char const *,char const *,sqlite3_int64),
  void*
);
# 5497 "sqlite3.c"
 int sqlite3_enable_shared_cache(int);
# 5513 "sqlite3.c"
 int sqlite3_release_memory(int);
# 5527 "sqlite3.c"
 int sqlite3_db_release_memory(sqlite3*);
# 5579 "sqlite3.c"
 sqlite3_int64 sqlite3_soft_heap_limit64(sqlite3_int64 N);
# 5590 "sqlite3.c"
 void sqlite3_soft_heap_limit(int N);
# 5660 "sqlite3.c"
 int sqlite3_table_column_metadata(
  sqlite3 *db,
  const char *zDbName,
  const char *zTableName,
  const char *zColumnName,
  char const **pzDataType,
  char const **pzCollSeq,
  int *pNotNull,
  int *pPrimaryKey,
  int *pAutoinc
);
# 5707 "sqlite3.c"
 int sqlite3_load_extension(
  sqlite3 *db,
  const char *zFile,
  const char *zProc,
  char **pzErrMsg
);
# 5728 "sqlite3.c"
 int sqlite3_enable_load_extension(sqlite3 *db, int onoff);
# 5766 "sqlite3.c"
 int sqlite3_auto_extension(void (*xEntryPoint)(void));
# 5778 "sqlite3.c"
 int sqlite3_cancel_auto_extension(void (*xEntryPoint)(void));







 void sqlite3_reset_auto_extension(void);
# 5800 "sqlite3.c"
typedef struct sqlite3_vtab sqlite3_vtab;
typedef struct sqlite3_index_info sqlite3_index_info;
typedef struct sqlite3_vtab_cursor sqlite3_vtab_cursor;
typedef struct sqlite3_module sqlite3_module;
# 5821 "sqlite3.c"
struct sqlite3_module {
  int iVersion;
  int (*xCreate)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xConnect)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xBestIndex)(sqlite3_vtab *pVTab, sqlite3_index_info*);
  int (*xDisconnect)(sqlite3_vtab *pVTab);
  int (*xDestroy)(sqlite3_vtab *pVTab);
  int (*xOpen)(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor);
  int (*xClose)(sqlite3_vtab_cursor*);
  int (*xFilter)(sqlite3_vtab_cursor*, int idxNum, const char *idxStr,
                int argc, sqlite3_value **argv);
  int (*xNext)(sqlite3_vtab_cursor*);
  int (*xEof)(sqlite3_vtab_cursor*);
  int (*xColumn)(sqlite3_vtab_cursor*, sqlite3_context*, int);
  int (*xRowid)(sqlite3_vtab_cursor*, sqlite3_int64 *pRowid);
  int (*xUpdate)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *);
  int (*xBegin)(sqlite3_vtab *pVTab);
  int (*xSync)(sqlite3_vtab *pVTab);
  int (*xCommit)(sqlite3_vtab *pVTab);
  int (*xRollback)(sqlite3_vtab *pVTab);
  int (*xFindFunction)(sqlite3_vtab *pVtab, int nArg, const char *zName,
                       void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
                       void **ppArg);
  int (*xRename)(sqlite3_vtab *pVtab, const char *zNew);


  int (*xSavepoint)(sqlite3_vtab *pVTab, int);
  int (*xRelease)(sqlite3_vtab *pVTab, int);
  int (*xRollbackTo)(sqlite3_vtab *pVTab, int);
};
# 5950 "sqlite3.c"
struct sqlite3_index_info {

  int nConstraint;
  struct sqlite3_index_constraint {
     int iColumn;
     unsigned char op;
     unsigned char usable;
     int iTermOffset;
  } *aConstraint;
  int nOrderBy;
  struct sqlite3_index_orderby {
     int iColumn;
     unsigned char desc;
  } *aOrderBy;

  struct sqlite3_index_constraint_usage {
    int argvIndex;
    unsigned char omit;
  } *aConstraintUsage;
  int idxNum;
  char *idxStr;
  int needToFreeIdxStr;
  int orderByConsumed;
  double estimatedCost;

  sqlite3_int64 estimatedRows;

  int idxFlags;

  sqlite3_uint64 colUsed;
};
# 6031 "sqlite3.c"
 int sqlite3_create_module(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData
);
 int sqlite3_create_module_v2(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData,
  void(*xDestroy)(void*)
);
# 6063 "sqlite3.c"
struct sqlite3_vtab {
  const sqlite3_module *pModule;
  int nRef;
  char *zErrMsg;

};
# 6087 "sqlite3.c"
struct sqlite3_vtab_cursor {
  sqlite3_vtab *pVtab;

};
# 6100 "sqlite3.c"
 int sqlite3_declare_vtab(sqlite3*, const char *zSQL);
# 6119 "sqlite3.c"
 int sqlite3_overload_function(sqlite3*, const char *zFuncName, int nArg);
# 6143 "sqlite3.c"
typedef struct sqlite3_blob sqlite3_blob;
# 6218 "sqlite3.c"
 int sqlite3_blob_open(
  sqlite3*,
  const char *zDb,
  const char *zTable,
  const char *zColumn,
  sqlite3_int64 iRow,
  int flags,
  sqlite3_blob **ppBlob
);
# 6251 "sqlite3.c"
 int sqlite3_blob_reopen(sqlite3_blob *, sqlite3_int64);
# 6274 "sqlite3.c"
 int sqlite3_blob_close(sqlite3_blob *);
# 6290 "sqlite3.c"
 int sqlite3_blob_bytes(sqlite3_blob *);
# 6319 "sqlite3.c"
 int sqlite3_blob_read(sqlite3_blob *, void *Z, int N, int iOffset);
# 6361 "sqlite3.c"
 int sqlite3_blob_write(sqlite3_blob *, const void *z, int n, int iOffset);
# 6392 "sqlite3.c"
 sqlite3_vfs * sqlite3_vfs_find(const char *zVfsName);
 int sqlite3_vfs_register(sqlite3_vfs*, int makeDflt);
 int sqlite3_vfs_unregister(sqlite3_vfs*);
# 6510 "sqlite3.c"
 sqlite3_mutex * sqlite3_mutex_alloc(int);
 void sqlite3_mutex_free(sqlite3_mutex*);
 void sqlite3_mutex_enter(sqlite3_mutex*);
 int sqlite3_mutex_try(sqlite3_mutex*);
 void sqlite3_mutex_leave(sqlite3_mutex*);
# 6581 "sqlite3.c"
typedef struct sqlite3_mutex_methods sqlite3_mutex_methods;
struct sqlite3_mutex_methods {
  int (*xMutexInit)(void);
  int (*xMutexEnd)(void);
  sqlite3_mutex *(*xMutexAlloc)(int);
  void (*xMutexFree)(sqlite3_mutex *);
  void (*xMutexEnter)(sqlite3_mutex *);
  int (*xMutexTry)(sqlite3_mutex *);
  void (*xMutexLeave)(sqlite3_mutex *);
  int (*xMutexHeld)(sqlite3_mutex *);
  int (*xMutexNotheld)(sqlite3_mutex *);
};
# 6624 "sqlite3.c"
 int sqlite3_mutex_held(sqlite3_mutex*);
 int sqlite3_mutex_notheld(sqlite3_mutex*);
# 6665 "sqlite3.c"
 sqlite3_mutex * sqlite3_db_mutex(sqlite3*);
# 6700 "sqlite3.c"
 int sqlite3_file_control(sqlite3*, const char *zDbName, int op, void*);
# 6719 "sqlite3.c"
 int sqlite3_test_control(int op, ...);
# 6782 "sqlite3.c"
 int sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag);
 int sqlite3_status64(
  int op,
  sqlite3_int64 *pCurrent,
  sqlite3_int64 *pHighwater,
  int resetFlag
);
# 6908 "sqlite3.c"
 int sqlite3_db_status(sqlite3*, int op, int *pCur, int *pHiwtr, int resetFlg);
# 7038 "sqlite3.c"
 int sqlite3_stmt_status(sqlite3_stmt*, int op,int resetFlg);
# 7093 "sqlite3.c"
typedef struct sqlite3_pcache sqlite3_pcache;
# 7105 "sqlite3.c"
typedef struct sqlite3_pcache_page sqlite3_pcache_page;
struct sqlite3_pcache_page {
  void *pBuf;
  void *pExtra;
};
# 7270 "sqlite3.c"
typedef struct sqlite3_pcache_methods2 sqlite3_pcache_methods2;
struct sqlite3_pcache_methods2 {
  int iVersion;
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int szExtra, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  sqlite3_pcache_page *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, sqlite3_pcache_page*, int discard);
  void (*xRekey)(sqlite3_pcache*, sqlite3_pcache_page*,
      unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
  void (*xShrink)(sqlite3_pcache*);
};






typedef struct sqlite3_pcache_methods sqlite3_pcache_methods;
struct sqlite3_pcache_methods {
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  void *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, void*, int discard);
  void (*xRekey)(sqlite3_pcache*, void*, unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
};
# 7319 "sqlite3.c"
typedef struct sqlite3_backup sqlite3_backup;
# 7507 "sqlite3.c"
 sqlite3_backup * sqlite3_backup_init(
  sqlite3 *pDest,
  const char *zDestName,
  sqlite3 *pSource,
  const char *zSourceName
);
 int sqlite3_backup_step(sqlite3_backup *p, int nPage);
 int sqlite3_backup_finish(sqlite3_backup *p);
 int sqlite3_backup_remaining(sqlite3_backup *p);
 int sqlite3_backup_pagecount(sqlite3_backup *p);
# 7633 "sqlite3.c"
 int sqlite3_unlock_notify(
  sqlite3 *pBlocked,
  void (*xNotify)(void **apArg, int nArg),
  void *pNotifyArg
);
# 7648 "sqlite3.c"
 int sqlite3_stricmp(const char *, const char *);
 int sqlite3_strnicmp(const char *, const char *, int);
# 7666 "sqlite3.c"
 int sqlite3_strglob(const char *zGlob, const char *zStr);
# 7689 "sqlite3.c"
 int sqlite3_strlike(const char *zGlob, const char *zStr, unsigned int cEsc);
# 7712 "sqlite3.c"
 void sqlite3_log(int iErrCode, const char *zFormat, ...);
# 7748 "sqlite3.c"
 void * sqlite3_wal_hook(
  sqlite3*,
  int(*)(void *,sqlite3*,const char*,int),
  void*
);
# 7783 "sqlite3.c"
 int sqlite3_wal_autocheckpoint(sqlite3 *db, int N);
# 7805 "sqlite3.c"
 int sqlite3_wal_checkpoint(sqlite3 *db, const char *zDb);
# 7899 "sqlite3.c"
 int sqlite3_wal_checkpoint_v2(
  sqlite3 *db,
  const char *zDb,
  int eMode,
  int *pnLog,
  int *pnCkpt
);
# 7935 "sqlite3.c"
 int sqlite3_vtab_config(sqlite3*, int op, ...);
# 7988 "sqlite3.c"
 int sqlite3_vtab_on_conflict(sqlite3 *);
# 8093 "sqlite3.c"
 int sqlite3_stmt_scanstatus(
  sqlite3_stmt *pStmt,
  int idx,
  int iScanStatusOp,
  void *pOut
);
# 8109 "sqlite3.c"
 void sqlite3_stmt_scanstatus_reset(sqlite3_stmt*);
# 8141 "sqlite3.c"
 int sqlite3_db_cacheflush(sqlite3*);
# 8153 "sqlite3.c"
 int sqlite3_system_errno(sqlite3*);
# 8181 "sqlite3.c"
typedef struct sqlite3_snapshot sqlite3_snapshot;
# 8203 "sqlite3.c"
 int sqlite3_snapshot_get(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot **ppSnapshot
);
# 8232 "sqlite3.c"
 int sqlite3_snapshot_open(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot *pSnapshot
);
# 8249 "sqlite3.c"
 void sqlite3_snapshot_free(sqlite3_snapshot*);
# 8285 "sqlite3.c"
typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry;
typedef struct sqlite3_rtree_query_info sqlite3_rtree_query_info;







  typedef double sqlite3_rtree_dbl;
# 8303 "sqlite3.c"
 int sqlite3_rtree_geometry_callback(
  sqlite3 *db,
  const char *zGeom,
  int (*xGeom)(sqlite3_rtree_geometry*, int, sqlite3_rtree_dbl*,int*),
  void *pContext
);






struct sqlite3_rtree_geometry {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void *);
};







 int sqlite3_rtree_query_callback(
  sqlite3 *db,
  const char *zQueryFunc,
  int (*xQueryFunc)(sqlite3_rtree_query_info*),
  void *pContext,
  void (*xDestructor)(void*)
);
# 8347 "sqlite3.c"
struct sqlite3_rtree_query_info {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void*);
  sqlite3_rtree_dbl *aCoord;
  unsigned int *anQueue;
  int nCoord;
  int iLevel;
  int mxLevel;
  sqlite3_int64 iRowid;
  sqlite3_rtree_dbl rParentScore;
  int eParentWithin;
  int eWithin;
  sqlite3_rtree_dbl rScore;

  sqlite3_value **apSqlParam;
};
# 8416 "sqlite3.c"
typedef struct Fts5ExtensionApi Fts5ExtensionApi;
typedef struct Fts5Context Fts5Context;
typedef struct Fts5PhraseIter Fts5PhraseIter;

typedef void (*fts5_extension_function)(
  const Fts5ExtensionApi *pApi,
  Fts5Context *pFts,
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
);

struct Fts5PhraseIter {
  const unsigned char *a;
  const unsigned char *b;
};
# 8646 "sqlite3.c"
struct Fts5ExtensionApi {
  int iVersion;

  void *(*xUserData)(Fts5Context*);

  int (*xColumnCount)(Fts5Context*);
  int (*xRowCount)(Fts5Context*, sqlite3_int64 *pnRow);
  int (*xColumnTotalSize)(Fts5Context*, int iCol, sqlite3_int64 *pnToken);

  int (*xTokenize)(Fts5Context*,
    const char *pText, int nText,
    void *pCtx,
    int (*xToken)(void*, int, const char*, int, int, int)
  );

  int (*xPhraseCount)(Fts5Context*);
  int (*xPhraseSize)(Fts5Context*, int iPhrase);

  int (*xInstCount)(Fts5Context*, int *pnInst);
  int (*xInst)(Fts5Context*, int iIdx, int *piPhrase, int *piCol, int *piOff);

  sqlite3_int64 (*xRowid)(Fts5Context*);
  int (*xColumnText)(Fts5Context*, int iCol, const char **pz, int *pn);
  int (*xColumnSize)(Fts5Context*, int iCol, int *pnToken);

  int (*xQueryPhrase)(Fts5Context*, int iPhrase, void *pUserData,
    int(*)(const Fts5ExtensionApi*,Fts5Context*,void*)
  );
  int (*xSetAuxdata)(Fts5Context*, void *pAux, void(*xDelete)(void*));
  void *(*xGetAuxdata)(Fts5Context*, int bClear);

  int (*xPhraseFirst)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*, int*);
  void (*xPhraseNext)(Fts5Context*, Fts5PhraseIter*, int *piCol, int *piOff);

  int (*xPhraseFirstColumn)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*);
  void (*xPhraseNextColumn)(Fts5Context*, Fts5PhraseIter*, int *piCol);
};
# 8880 "sqlite3.c"
typedef struct Fts5Tokenizer Fts5Tokenizer;
typedef struct fts5_tokenizer fts5_tokenizer;
struct fts5_tokenizer {
  int (*xCreate)(void*, const char **azArg, int nArg, Fts5Tokenizer **ppOut);
  void (*xDelete)(Fts5Tokenizer*);
  int (*xTokenize)(Fts5Tokenizer*,
      void *pCtx,
      int flags,
      const char *pText, int nText,
      int (*xToken)(
        void *pCtx,
        int tflags,
        const char *pToken,
        int nToken,
        int iStart,
        int iEnd
      )
  );
};
# 8917 "sqlite3.c"
typedef struct fts5_api fts5_api;
struct fts5_api {
  int iVersion;


  int (*xCreateTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_tokenizer *pTokenizer,
    void (*xDestroy)(void*)
  );


  int (*xFindTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void **ppContext,
    fts5_tokenizer *pTokenizer
  );


  int (*xCreateFunction)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_extension_function xFunction,
    void (*xDestroy)(void*)
  );
};
# 9536 "sqlite3.c"
typedef struct Hash Hash;
typedef struct HashElem HashElem;
# 9560 "sqlite3.c"
struct Hash {
  unsigned int htsize;
  unsigned int count;
  HashElem *first;
  struct _ht {
    int count;
    HashElem *chain;
  } *ht;
};







struct HashElem {
  HashElem *next, *prev;
  void *data;
  const char *pKey;
};




static void sqlite3HashInit(Hash*);
static void *sqlite3HashInsert(Hash*, const char *pKey, void *pData);
static void *sqlite3HashFind(const Hash*, const char *pKey);
static void sqlite3HashClear(Hash*);
# 9790 "sqlite3.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 365 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 410 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 411 "/usr/include/sys/cdefs.h" 2 3 4
# 366 "/usr/include/features.h" 2 3 4
# 389 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 390 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 122 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4
# 92 "/usr/include/stdio.h" 3 4
typedef __off64_t off_t;




typedef __off64_t off64_t;




typedef __ssize_t ssize_t;









typedef _G_fpos64_t fpos_t;



typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));



# 198 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) __asm__ ("" "tmpfile64") ;






extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);




# 283 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename, const char *__restrict __modes) __asm__ ("" "fopen64")

  ;
extern FILE *freopen (const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream) __asm__ ("" "freopen64")


  ;







extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 640 "/usr/include/stdio.h" 3 4

# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 781 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off64_t __off, int __whence) __asm__ ("" "fseeko64")

                  ;
extern __off64_t ftello (FILE *__stream) __asm__ ("" "ftello64");








# 806 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos) __asm__ ("" "fgetpos64")
                                          ;
extern int fsetpos (FILE *__stream, const fpos_t *__pos) __asm__ ("" "fsetpos64")
                                                          ;








extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 942 "/usr/include/stdio.h" 3 4

# 9791 "sqlite3.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 324 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 44 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 235 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 236 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;





typedef __ino64_t ino_t;




typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 147 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 22 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/select.h" 2 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 22 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/sys/select.h" 2 3 4
# 54 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/sys/select.h" 3 4

# 106 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/sys/select.h" 3 4

# 220 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/sys/sysmacros.h" 3 4

# 223 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;
# 248 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt_t;



typedef __fsblkcnt64_t fsblkcnt_t;



typedef __fsfilcnt64_t fsfilcnt_t;





typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 622 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __asm__ ("" "mkstemp64")
     __attribute__ ((__nonnull__ (1))) ;





extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 644 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __asm__ ("" "mkstemps64")
                     __attribute__ ((__nonnull__ (1))) ;





extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 676 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __asm__ ("" "mkostemp64")
     __attribute__ ((__nonnull__ (1))) ;





extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 697 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags) __asm__ ("" "mkostemps64")

     __attribute__ ((__nonnull__ (1))) ;





extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4

# 9792 "sqlite3.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 106 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 117 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 162 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/string.h" 3 4

# 231 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 258 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 272 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 310 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 337 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 368 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 433 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 484 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 512 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 599 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 639 "/usr/include/string.h" 3 4

# 9793 "sqlite3.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 9794 "sqlite3.c" 2
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 9795 "sqlite3.c" 2
# 9963 "sqlite3.c"
typedef sqlite_int64 i64;
typedef sqlite_uint64 u64;
typedef unsigned int u32;
typedef unsigned short int u16;
typedef short int i16;
typedef unsigned char u8;
typedef signed char i8;
# 9988 "sqlite3.c"
 typedef u32 tRowcnt;
# 10014 "sqlite3.c"
typedef short int LogEst;
# 10037 "sqlite3.c"
  typedef u64 uptr;
# 10197 "sqlite3.c"
typedef struct BusyHandler BusyHandler;
struct BusyHandler {
  int (*xFunc)(void *,int);
  void *pArg;
  int nBusy;
};
# 10291 "sqlite3.c"
typedef struct AggInfo AggInfo;
typedef struct AuthContext AuthContext;
typedef struct AutoincInfo AutoincInfo;
typedef struct Bitvec Bitvec;
typedef struct CollSeq CollSeq;
typedef struct Column Column;
typedef struct Db Db;
typedef struct Schema Schema;
typedef struct Expr Expr;
typedef struct ExprList ExprList;
typedef struct ExprSpan ExprSpan;
typedef struct FKey FKey;
typedef struct FuncDestructor FuncDestructor;
typedef struct FuncDef FuncDef;
typedef struct FuncDefHash FuncDefHash;
typedef struct IdList IdList;
typedef struct Index Index;
typedef struct IndexSample IndexSample;
typedef struct KeyClass KeyClass;
typedef struct KeyInfo KeyInfo;
typedef struct Lookaside Lookaside;
typedef struct LookasideSlot LookasideSlot;
typedef struct Module Module;
typedef struct NameContext NameContext;
typedef struct Parse Parse;
typedef struct PrintfArguments PrintfArguments;
typedef struct RowSet RowSet;
typedef struct Savepoint Savepoint;
typedef struct Select Select;
typedef struct SQLiteThread SQLiteThread;
typedef struct SelectDest SelectDest;
typedef struct SrcList SrcList;
typedef struct StrAccum StrAccum;
typedef struct Table Table;
typedef struct TableLock TableLock;
typedef struct Token Token;
typedef struct TreeView TreeView;
typedef struct Trigger Trigger;
typedef struct TriggerPrg TriggerPrg;
typedef struct TriggerStep TriggerStep;
typedef struct UnpackedRecord UnpackedRecord;
typedef struct VTable VTable;
typedef struct VtabCtx VtabCtx;
typedef struct Walker Walker;
typedef struct WhereInfo WhereInfo;
typedef struct With With;
# 10383 "sqlite3.c"
typedef struct Btree Btree;
typedef struct BtCursor BtCursor;
typedef struct BtShared BtShared;


static int sqlite3BtreeOpen(
  sqlite3_vfs *pVfs,
  const char *zFilename,
  sqlite3 *db,
  Btree **ppBtree,
  int flags,
  int vfsFlags
);
# 10408 "sqlite3.c"
static int sqlite3BtreeClose(Btree*);
static int sqlite3BtreeSetCacheSize(Btree*,int);
static int sqlite3BtreeSetSpillSize(Btree*,int);

static int sqlite3BtreeSetMmapLimit(Btree*,sqlite3_int64);

static int sqlite3BtreeSetPagerFlags(Btree*,unsigned);
static int sqlite3BtreeSetPageSize(Btree *p, int nPagesize, int nReserve, int eFix);
static int sqlite3BtreeGetPageSize(Btree*);
static int sqlite3BtreeMaxPageCount(Btree*,int);
static u32 sqlite3BtreeLastPage(Btree*);
static int sqlite3BtreeSecureDelete(Btree*,int);
static int sqlite3BtreeGetOptimalReserve(Btree*);
static int sqlite3BtreeGetReserveNoMutex(Btree *p);
static int sqlite3BtreeSetAutoVacuum(Btree *, int);
static int sqlite3BtreeGetAutoVacuum(Btree *);
static int sqlite3BtreeBeginTrans(Btree*,int);
static int sqlite3BtreeCommitPhaseOne(Btree*, const char *zMaster);
static int sqlite3BtreeCommitPhaseTwo(Btree*, int);
static int sqlite3BtreeCommit(Btree*);
static int sqlite3BtreeRollback(Btree*,int,int);
static int sqlite3BtreeBeginStmt(Btree*,int);
static int sqlite3BtreeCreateTable(Btree*, int*, int flags);
static int sqlite3BtreeIsInTrans(Btree*);
static int sqlite3BtreeIsInReadTrans(Btree*);
static int sqlite3BtreeIsInBackup(Btree*);
static void *sqlite3BtreeSchema(Btree *, int, void(*)(void *));
static int sqlite3BtreeSchemaLocked(Btree *pBtree);
static int sqlite3BtreeLockTable(Btree *pBtree, int iTab, u8 isWriteLock);
static int sqlite3BtreeSavepoint(Btree *, int, int);

static const char *sqlite3BtreeGetFilename(Btree *);
static const char *sqlite3BtreeGetJournalname(Btree *);
static int sqlite3BtreeCopyFile(Btree *, Btree *);

static int sqlite3BtreeIncrVacuum(Btree *);
# 10458 "sqlite3.c"
static int sqlite3BtreeDropTable(Btree*, int, int*);
static int sqlite3BtreeClearTable(Btree*, int, int*);
static int sqlite3BtreeClearTableOfCursor(BtCursor*);
static int sqlite3BtreeTripAllCursors(Btree*, int, int);

static void sqlite3BtreeGetMeta(Btree *pBtree, int idx, u32 *pValue);
static int sqlite3BtreeUpdateMeta(Btree*, int idx, u32 value);

static int sqlite3BtreeNewDb(Btree *p);
# 10567 "sqlite3.c"
static int sqlite3BtreeCursor(
  Btree*,
  int iTable,
  int wrFlag,
  struct KeyInfo*,
  BtCursor *pCursor
);
static int sqlite3BtreeCursorSize(void);
static void sqlite3BtreeCursorZero(BtCursor*);
static void sqlite3BtreeCursorHintFlags(BtCursor*, unsigned);




static int sqlite3BtreeCloseCursor(BtCursor*);
static int sqlite3BtreeMovetoUnpacked(
  BtCursor*,
  UnpackedRecord *pUnKey,
  i64 intKey,
  int bias,
  int *pRes
);
static int sqlite3BtreeCursorHasMoved(BtCursor*);
static int sqlite3BtreeCursorRestore(BtCursor*, int*);
static int sqlite3BtreeDelete(BtCursor*, u8 flags);





static int sqlite3BtreeInsert(BtCursor*, const void *pKey, i64 nKey,
                                  const void *pData, int nData,
                                  int nZero, int bias, int seekResult);
static int sqlite3BtreeFirst(BtCursor*, int *pRes);
static int sqlite3BtreeLast(BtCursor*, int *pRes);
static int sqlite3BtreeNext(BtCursor*, int *pRes);
static int sqlite3BtreeEof(BtCursor*);
static int sqlite3BtreePrevious(BtCursor*, int *pRes);
static int sqlite3BtreeKeySize(BtCursor*, i64 *pSize);
static int sqlite3BtreeKey(BtCursor*, u32 offset, u32 amt, void*);
static const void *sqlite3BtreeKeyFetch(BtCursor*, u32 *pAmt);
static const void *sqlite3BtreeDataFetch(BtCursor*, u32 *pAmt);
static int sqlite3BtreeDataSize(BtCursor*, u32 *pSize);
static int sqlite3BtreeData(BtCursor*, u32 offset, u32 amt, void*);

static char *sqlite3BtreeIntegrityCheck(Btree*, int *aRoot, int nRoot, int, int*);
static struct Pager *sqlite3BtreePager(Btree*);

static int sqlite3BtreePutData(BtCursor*, u32 offset, u32 amt, void*);
static void sqlite3BtreeIncrblobCursor(BtCursor *);
static void sqlite3BtreeClearCursor(BtCursor *);
static int sqlite3BtreeSetVersion(Btree *pBt, int iVersion);
static int sqlite3BtreeCursorHasHint(BtCursor*, unsigned int mask);
static int sqlite3BtreeIsReadonly(Btree *pBt);
static int sqlite3HeaderSizeBtree(void);






static int sqlite3BtreeCount(BtCursor *, i64 *);
# 10637 "sqlite3.c"
static int sqlite3BtreeCheckpoint(Btree*, int, int *, int *);
# 10646 "sqlite3.c"
static void sqlite3BtreeEnter(Btree*);
static void sqlite3BtreeEnterAll(sqlite3*);
static int sqlite3BtreeSharable(Btree*);
static void sqlite3BtreeEnterCursor(BtCursor*);
# 10658 "sqlite3.c"
static void sqlite3BtreeLeave(Btree*);
static void sqlite3BtreeLeaveCursor(BtCursor*);
static void sqlite3BtreeLeaveAll(sqlite3*);
# 10711 "sqlite3.c"
typedef struct Vdbe Vdbe;





typedef struct Mem Mem;
typedef struct SubProgram SubProgram;






struct VdbeOp {
  u8 opcode;
  signed char p4type;
  u8 opflags;
  u8 p5;
  int p1;
  int p2;
  int p3;
  union p4union {
    int i;
    void *p;
    char *z;
    i64 *pI64;
    double *pReal;
    FuncDef *pFunc;
    sqlite3_context *pCtx;
    CollSeq *pColl;
    Mem *pMem;
    VTable *pVtab;
    KeyInfo *pKeyInfo;
    int *ai;
    SubProgram *pProgram;



    int (*xAdvance)(BtCursor *, int *);
  } p4;
# 10762 "sqlite3.c"
};
typedef struct VdbeOp VdbeOp;





struct SubProgram {
  VdbeOp *aOp;
  int nOp;
  int nMem;
  int nCsr;
  int nOnce;
  void *token;
  SubProgram *pNext;
};





struct VdbeOpList {
  u8 opcode;
  signed char p1;
  signed char p2;
  signed char p3;
};
typedef struct VdbeOpList VdbeOpList;
# 11057 "sqlite3.c"
static Vdbe *sqlite3VdbeCreate(Parse*);
static int sqlite3VdbeAddOp0(Vdbe*,int);
static int sqlite3VdbeAddOp1(Vdbe*,int,int);
static int sqlite3VdbeAddOp2(Vdbe*,int,int,int);
static int sqlite3VdbeGoto(Vdbe*,int);
static int sqlite3VdbeLoadString(Vdbe*,int,const char*);
static void sqlite3VdbeMultiLoad(Vdbe*,int,const char*,...);
static int sqlite3VdbeAddOp3(Vdbe*,int,int,int,int);
static int sqlite3VdbeAddOp4(Vdbe*,int,int,int,int,const char *zP4,int);
static int sqlite3VdbeAddOp4Dup8(Vdbe*,int,int,int,int,const u8*,int);
static int sqlite3VdbeAddOp4Int(Vdbe*,int,int,int,int,int);
static void sqlite3VdbeEndCoroutine(Vdbe*,int);





static VdbeOp *sqlite3VdbeAddOpList(Vdbe*, int nOp, VdbeOpList const *aOp, int iLineno);
static void sqlite3VdbeAddParseSchemaOp(Vdbe*,int,char*);
static void sqlite3VdbeChangeOpcode(Vdbe*, u32 addr, u8);
static void sqlite3VdbeChangeP1(Vdbe*, u32 addr, int P1);
static void sqlite3VdbeChangeP2(Vdbe*, u32 addr, int P2);
static void sqlite3VdbeChangeP3(Vdbe*, u32 addr, int P3);
static void sqlite3VdbeChangeP5(Vdbe*, u8 P5);
static void sqlite3VdbeJumpHere(Vdbe*, int addr);
static int sqlite3VdbeChangeToNoop(Vdbe*, int addr);
static int sqlite3VdbeDeletePriorOpcode(Vdbe*, u8 op);
static void sqlite3VdbeChangeP4(Vdbe*, int addr, const char *zP4, int N);
static void sqlite3VdbeSetP4KeyInfo(Parse*, Index*);
static void sqlite3VdbeUsesBtree(Vdbe*, int);
static VdbeOp *sqlite3VdbeGetOp(Vdbe*, int);
static int sqlite3VdbeMakeLabel(Vdbe*);
static void sqlite3VdbeRunOnlyOnce(Vdbe*);
static void sqlite3VdbeReusable(Vdbe*);
static void sqlite3VdbeDelete(Vdbe*);
static void sqlite3VdbeClearObject(sqlite3*,Vdbe*);
static void sqlite3VdbeMakeReady(Vdbe*,Parse*);
static int sqlite3VdbeFinalize(Vdbe*);
static void sqlite3VdbeResolveLabel(Vdbe*, int);
static int sqlite3VdbeCurrentAddr(Vdbe*);



static void sqlite3VdbeResetStepResult(Vdbe*);
static void sqlite3VdbeRewind(Vdbe*);
static int sqlite3VdbeReset(Vdbe*);
static void sqlite3VdbeSetNumCols(Vdbe*,int);
static int sqlite3VdbeSetColName(Vdbe*, int, int, const char *, void(*)(void*));
static void sqlite3VdbeCountChanges(Vdbe*);
static sqlite3 *sqlite3VdbeDb(Vdbe*);
static void sqlite3VdbeSetSql(Vdbe*, const char *z, int n, int);
static void sqlite3VdbeSwap(Vdbe*,Vdbe*);
static VdbeOp *sqlite3VdbeTakeOpArray(Vdbe*, int*, int*);
static sqlite3_value *sqlite3VdbeGetBoundValue(Vdbe*, int, u8);
static void sqlite3VdbeSetVarmask(Vdbe*, int);

static char *sqlite3VdbeExpandSql(Vdbe*, const char*);

static int sqlite3MemCompare(const Mem*, const Mem*, const CollSeq*);

static void sqlite3VdbeRecordUnpack(KeyInfo*,int,const void*,UnpackedRecord*);
static int sqlite3VdbeRecordCompare(int,const void*,UnpackedRecord*);
static int sqlite3VdbeRecordCompareWithSkip(int, const void *, UnpackedRecord *, int);
static UnpackedRecord *sqlite3VdbeAllocUnpackedRecord(KeyInfo *, char *, int, char **);

typedef int (*RecordCompare)(int,const void*,UnpackedRecord*);
static RecordCompare sqlite3VdbeFindCompare(UnpackedRecord*);


static void sqlite3VdbeLinkSubProgram(Vdbe *, SubProgram *);
# 11233 "sqlite3.c"
typedef u32 Pgno;




typedef struct Pager Pager;




typedef struct PgHdr DbPage;
# 11307 "sqlite3.c"
static int sqlite3PagerOpen(
  sqlite3_vfs*,
  Pager **ppPager,
  const char*,
  int,
  int,
  int,
  void(*)(DbPage*)
);
static int sqlite3PagerClose(Pager *pPager);
static int sqlite3PagerReadFileheader(Pager*, int, unsigned char*);


static void sqlite3PagerSetBusyhandler(Pager*, int(*)(void *), void *);
static int sqlite3PagerSetPagesize(Pager*, u32*, int);



static int sqlite3PagerMaxPageCount(Pager*, int);
static void sqlite3PagerSetCachesize(Pager*, int);
static int sqlite3PagerSetSpillsize(Pager*, int);
static void sqlite3PagerSetMmapLimit(Pager *, sqlite3_int64);
static void sqlite3PagerShrink(Pager*);
static void sqlite3PagerSetFlags(Pager*,unsigned);
static int sqlite3PagerLockingMode(Pager *, int);
static int sqlite3PagerSetJournalMode(Pager *, int);
static int sqlite3PagerGetJournalMode(Pager*);
static int sqlite3PagerOkToChangeJournalMode(Pager*);
static i64 sqlite3PagerJournalSizeLimit(Pager *, i64);
static sqlite3_backup **sqlite3PagerBackupPtr(Pager*);
static int sqlite3PagerFlush(Pager*);


static int sqlite3PagerGet(Pager *pPager, Pgno pgno, DbPage **ppPage, int clrFlag);
static DbPage *sqlite3PagerLookup(Pager *pPager, Pgno pgno);
static void sqlite3PagerRef(DbPage*);
static void sqlite3PagerUnref(DbPage*);
static void sqlite3PagerUnrefNotNull(DbPage*);


static int sqlite3PagerWrite(DbPage*);
static void sqlite3PagerDontWrite(DbPage*);
static int sqlite3PagerMovepage(Pager*,DbPage*,Pgno,int);
static int sqlite3PagerPageRefcount(DbPage*);
static void *sqlite3PagerGetData(DbPage *);
static void *sqlite3PagerGetExtra(DbPage *);


static void sqlite3PagerPagecount(Pager*, int*);
static int sqlite3PagerBegin(Pager*, int exFlag, int);
static int sqlite3PagerCommitPhaseOne(Pager*,const char *zMaster, int);
static int sqlite3PagerExclusiveLock(Pager*);
static int sqlite3PagerSync(Pager *pPager, const char *zMaster);
static int sqlite3PagerCommitPhaseTwo(Pager*);
static int sqlite3PagerRollback(Pager*);
static int sqlite3PagerOpenSavepoint(Pager *pPager, int n);
static int sqlite3PagerSavepoint(Pager *pPager, int op, int iSavepoint);
static int sqlite3PagerSharedLock(Pager *pPager);


static int sqlite3PagerCheckpoint(Pager *pPager, int, int*, int*);
static int sqlite3PagerWalSupported(Pager *pPager);
static int sqlite3PagerWalCallback(Pager *pPager);
static int sqlite3PagerOpenWal(Pager *pPager, int *pisOpen);
static int sqlite3PagerCloseWal(Pager *pPager);
# 11383 "sqlite3.c"
static u8 sqlite3PagerIsreadonly(Pager*);
static u32 sqlite3PagerDataVersion(Pager*);



static int sqlite3PagerMemUsed(Pager*);
static const char *sqlite3PagerFilename(Pager*, int);
static sqlite3_vfs *sqlite3PagerVfs(Pager*);
static sqlite3_file *sqlite3PagerFile(Pager*);
static sqlite3_file *sqlite3PagerJrnlFile(Pager*);
static const char *sqlite3PagerJournalname(Pager*);
static void *sqlite3PagerTempSpace(Pager*);
static int sqlite3PagerIsMemdb(Pager*);
static void sqlite3PagerCacheStat(Pager *, int, int, int *);
static void sqlite3PagerClearCache(Pager *);
static int sqlite3SectorSize(sqlite3_file *);


static void sqlite3PagerTruncateImage(Pager*,Pgno);

static void sqlite3PagerRekey(DbPage*, Pgno, u16);
# 11447 "sqlite3.c"
typedef struct PgHdr PgHdr;
typedef struct PCache PCache;





struct PgHdr {
  sqlite3_pcache_page *pPage;
  void *pData;
  void *pExtra;
  PgHdr *pDirty;
  Pager *pPager;
  Pgno pgno;



  u16 flags;





  i16 nRef;
  PCache *pCache;

  PgHdr *pDirtyNext;
  PgHdr *pDirtyPrev;
};
# 11490 "sqlite3.c"
static int sqlite3PcacheInitialize(void);
static void sqlite3PcacheShutdown(void);




static void sqlite3PCacheBufferSetup(void *, int sz, int n);





static int sqlite3PcacheOpen(
  int szPage,
  int szExtra,
  int bPurgeable,
  int (*xStress)(void*, PgHdr*),
  void *pStress,
  PCache *pToInit
);


static int sqlite3PcacheSetPageSize(PCache *, int);




static int sqlite3PcacheSize(void);




static sqlite3_pcache_page *sqlite3PcacheFetch(PCache*, Pgno, int createFlag);
static int sqlite3PcacheFetchStress(PCache*, Pgno, sqlite3_pcache_page**);
static PgHdr *sqlite3PcacheFetchFinish(PCache*, Pgno, sqlite3_pcache_page *pPage);
static void sqlite3PcacheRelease(PgHdr*);

static void sqlite3PcacheDrop(PgHdr*);
static void sqlite3PcacheMakeDirty(PgHdr*);
static void sqlite3PcacheMakeClean(PgHdr*);
static void sqlite3PcacheCleanAll(PCache*);


static void sqlite3PcacheMove(PgHdr*, Pgno);


static void sqlite3PcacheTruncate(PCache*, Pgno x);


static PgHdr *sqlite3PcacheDirtyList(PCache*);


static void sqlite3PcacheClose(PCache*);


static void sqlite3PcacheClearSyncFlags(PCache *);


static void sqlite3PcacheClear(PCache*);


static int sqlite3PcacheRefCount(PCache*);


static void sqlite3PcacheRef(PgHdr*);

static int sqlite3PcachePageRefcount(PgHdr*);


static int sqlite3PcachePagecount(PCache*);
# 11575 "sqlite3.c"
static void sqlite3PcacheSetCachesize(PCache *, int);
# 11585 "sqlite3.c"
static int sqlite3PcacheSetSpillsize(PCache *, int);


static void sqlite3PcacheShrink(PCache*);
# 11599 "sqlite3.c"
static void sqlite3PCacheSetDefault(void);


static int sqlite3HeaderSizePcache(void);
static int sqlite3HeaderSizePcache1(void);
# 11829 "sqlite3.c"
static int sqlite3OsInit(void);




static int sqlite3OsClose(sqlite3_file*);
static int sqlite3OsRead(sqlite3_file*, void*, int amt, i64 offset);
static int sqlite3OsWrite(sqlite3_file*, const void*, int amt, i64 offset);
static int sqlite3OsTruncate(sqlite3_file*, i64 size);
static int sqlite3OsSync(sqlite3_file*, int);
static int sqlite3OsFileSize(sqlite3_file*, i64 *pSize);
static int sqlite3OsLock(sqlite3_file*, int);
static int sqlite3OsUnlock(sqlite3_file*, int);
static int sqlite3OsCheckReservedLock(sqlite3_file *id, int *pResOut);
static int sqlite3OsFileControl(sqlite3_file*,int,void*);
static void sqlite3OsFileControlHint(sqlite3_file*,int,void*);

static int sqlite3OsSectorSize(sqlite3_file *id);
static int sqlite3OsDeviceCharacteristics(sqlite3_file *id);
static int sqlite3OsShmMap(sqlite3_file *,int,int,int,void volatile **);
static int sqlite3OsShmLock(sqlite3_file *id, int, int, int);
static void sqlite3OsShmBarrier(sqlite3_file *id);
static int sqlite3OsShmUnmap(sqlite3_file *id, int);
static int sqlite3OsFetch(sqlite3_file *id, i64, int, void **);
static int sqlite3OsUnfetch(sqlite3_file *, i64, void *);





static int sqlite3OsOpen(sqlite3_vfs *, const char *, sqlite3_file*, int, int *);
static int sqlite3OsDelete(sqlite3_vfs *, const char *, int);
static int sqlite3OsAccess(sqlite3_vfs *, const char *, int, int *pResOut);
static int sqlite3OsFullPathname(sqlite3_vfs *, const char *, int, char *);

static void *sqlite3OsDlOpen(sqlite3_vfs *, const char *);
static void sqlite3OsDlError(sqlite3_vfs *, int, char *);
static void (*sqlite3OsDlSym(sqlite3_vfs *, void *, const char *))(void);
static void sqlite3OsDlClose(sqlite3_vfs *, void *);

static int sqlite3OsRandomness(sqlite3_vfs *, int, char *);
static int sqlite3OsSleep(sqlite3_vfs *, int);
static int sqlite3OsGetLastError(sqlite3_vfs*);
static int sqlite3OsCurrentTimeInt64(sqlite3_vfs *, sqlite3_int64*);





static int sqlite3OsOpenMalloc(sqlite3_vfs *, const char *, sqlite3_file **, int,int*);
static int sqlite3OsCloseFree(sqlite3_file *);
# 11999 "sqlite3.c"
struct Db {
  char *zName;
  Btree *pBt;
  u8 safety_level;
  u8 bSyncSet;
  Schema *pSchema;
};
# 12024 "sqlite3.c"
struct Schema {
  int schema_cookie;
  int iGeneration;
  Hash tblHash;
  Hash idxHash;
  Hash trigHash;
  Hash fkeyHash;
  Table *pSeqTab;
  u8 file_format;
  u8 enc;
  u16 schemaFlags;
  int cache_size;
};
# 12087 "sqlite3.c"
struct Lookaside {
  u32 bDisable;
  u16 sz;
  u8 bMalloced;
  int nOut;
  int mxOut;
  int anStat[3];
  LookasideSlot *pFree;
  void *pStart;
  void *pEnd;
};
struct LookasideSlot {
  LookasideSlot *pNext;
};
# 12110 "sqlite3.c"
struct FuncDefHash {
  FuncDef *a[23];
};
# 12148 "sqlite3.c"
  typedef int (*sqlite3_xauth)(void*,int,const char*,const char*,const char*,
                               const char*);






struct sqlite3 {
  sqlite3_vfs *pVfs;
  struct Vdbe *pVdbe;
  CollSeq *pDfltColl;
  sqlite3_mutex *mutex;
  Db *aDb;
  int nDb;
  int flags;
  i64 lastRowid;
  i64 szMmap;
  unsigned int openFlags;
  int errCode;
  int errMask;
  int iSysErrno;
  u16 dbOptFlags;
  u8 enc;
  u8 autoCommit;
  u8 temp_store;
  u8 mallocFailed;
  u8 bBenignMalloc;
  u8 dfltLockMode;
  signed char nextAutovac;
  u8 suppressErr;
  u8 vtabOnConflict;
  u8 isTransactionSavepoint;
  int nextPagesize;
  u32 magic;
  int nChange;
  int nTotalChange;
  int aLimit[(11 +1)];
  int nMaxSorterMmap;
  struct sqlite3InitInfo {
    int newTnum;
    u8 iDb;
    u8 busy;
    u8 orphanTrigger;
    u8 imposterTable;
  } init;
  int nVdbeActive;
  int nVdbeRead;
  int nVdbeWrite;
  int nVdbeExec;
  int nVDestroy;
  int nExtension;
  void **aExtension;
  void (*xTrace)(void*,const char*);
  void *pTraceArg;
  void (*xProfile)(void*,const char*,u64);
  void *pProfileArg;
  void *pCommitArg;
  int (*xCommitCallback)(void*);
  void *pRollbackArg;
  void (*xRollbackCallback)(void*);
  void *pUpdateArg;
  void (*xUpdateCallback)(void*,int, const char*,const char*,sqlite_int64);

  int (*xWalCallback)(void *, sqlite3 *, const char *, int);
  void *pWalArg;

  void(*xCollNeeded)(void*,sqlite3*,int eTextRep,const char*);
  void(*xCollNeeded16)(void*,sqlite3*,int eTextRep,const void*);
  void *pCollNeededArg;
  sqlite3_value *pErr;
  union {
    volatile int isInterrupted;
    double notUsed1;
  } u1;
  Lookaside lookaside;

  sqlite3_xauth xAuth;
  void *pAuthArg;


  int (*xProgress)(void *);
  void *pProgressArg;
  unsigned nProgressOps;


  int nVTrans;
  Hash aModule;
  VtabCtx *pVtabCtx;
  VTable **aVTrans;
  VTable *pDisconnect;

  Hash aFunc;
  Hash aCollSeq;
  BusyHandler busyHandler;
  Db aDbStatic[2];
  Savepoint *pSavepoint;
  int busyTimeout;
  int nSavepoint;
  int nStatement;
  i64 nDeferredCons;
  i64 nDeferredImmCons;
  int *pnBytesFreed;
# 12271 "sqlite3.c"
};
# 12376 "sqlite3.c"
struct FuncDef {
  i8 nArg;
  u16 funcFlags;
  void *pUserData;
  FuncDef *pNext;
  void (*xSFunc)(sqlite3_context*,int,sqlite3_value**);
  void (*xFinalize)(sqlite3_context*);
  const char *zName;
  union {
    FuncDef *pHash;
    FuncDestructor *pDestructor;
  } u;
};
# 12404 "sqlite3.c"
struct FuncDestructor {
  int nRef;
  void (*xDestroy)(void *);
  void *pUserData;
};
# 12496 "sqlite3.c"
struct Savepoint {
  char *zName;
  i64 nDeferredCons;
  i64 nDeferredImmCons;
  Savepoint *pNext;
};
# 12517 "sqlite3.c"
struct Module {
  const sqlite3_module *pModule;
  const char *zName;
  void *pAux;
  void (*xDestroy)(void *);
  Table *pEpoTab;
};





struct Column {
  char *zName;
  Expr *pDflt;
  char *zColl;
  u8 notNull;
  char affinity;
  u8 szEst;
  u8 colFlags;
};
# 12554 "sqlite3.c"
struct CollSeq {
  char *zName;
  u8 enc;
  void *pUser;
  int (*xCmp)(void*,int, const void*, int, const void*);
  void (*xDel)(void*);
};
# 12653 "sqlite3.c"
struct VTable {
  sqlite3 *db;
  Module *pMod;
  sqlite3_vtab *pVtab;
  int nRef;
  u8 bConstraint;
  int iSavepoint;
  VTable *pNext;
};





struct Table {
  char *zName;
  Column *aCol;
  Index *pIndex;
  Select *pSelect;
  FKey *pFKey;
  char *zColAff;
  ExprList *pCheck;

  int tnum;
  i16 iPKey;
  i16 nCol;
  u16 nRef;
  LogEst nRowLogEst;
  LogEst szTabRow;



  u8 tabFlags;
  u8 keyConf;

  int addColOffset;


  int nModuleArg;
  char **azModuleArg;
  VTable *pVTable;

  Trigger *pTrigger;
  Schema *pSchema;
  Table *pNextZombie;
};
# 12780 "sqlite3.c"
struct FKey {
  Table *pFrom;
  FKey *pNextFrom;
  char *zTo;
  FKey *pNextTo;
  FKey *pPrevTo;
  int nCol;

  u8 isDeferred;
  u8 aAction[2];
  Trigger *apTrigger[2];
  struct sColMap {
    int iFrom;
    char *zCol;
  } aCol[1];
};
# 12846 "sqlite3.c"
struct KeyInfo {
  u32 nRef;
  u8 enc;
  u16 nField;
  u16 nXField;
  sqlite3 *db;
  u8 *aSortOrder;
  CollSeq *aColl[1];
};
# 12891 "sqlite3.c"
struct UnpackedRecord {
  KeyInfo *pKeyInfo;
  Mem *aMem;
  u16 nField;
  i8 default_rc;
  u8 errCode;
  i8 r1;
  i8 r2;
  u8 eqSeen;
};
# 12937 "sqlite3.c"
struct Index {
  char *zName;
  i16 *aiColumn;
  LogEst *aiRowLogEst;
  Table *pTable;
  char *zColAff;
  Index *pNext;
  Schema *pSchema;
  u8 *aSortOrder;
  const char **azColl;
  Expr *pPartIdxWhere;
  ExprList *aColExpr;
  int tnum;
  LogEst szIdxRow;
  u16 nKeyCol;
  u16 nColumn;
  u8 onError;
  unsigned idxType:2;
  unsigned bUnordered:1;
  unsigned uniqNotNull:1;
  unsigned isResized:1;
  unsigned isCovering:1;
  unsigned noSkipScan:1;
# 12968 "sqlite3.c"
};
# 12994 "sqlite3.c"
struct IndexSample {
  void *p;
  int n;
  tRowcnt *anEq;
  tRowcnt *anLt;
  tRowcnt *anDLt;
};
# 13010 "sqlite3.c"
struct Token {
  const char *z;
  unsigned int n;
};
# 13028 "sqlite3.c"
struct AggInfo {
  u8 directMode;

  u8 useSortingIdx;

  int sortingIdx;
  int sortingIdxPTab;
  int nSortingColumn;
  int mnReg, mxReg;
  ExprList *pGroupBy;
  struct AggInfo_col {
    Table *pTab;
    int iTable;
    int iColumn;
    int iSorterColumn;
    int iMem;
    Expr *pExpr;
  } *aCol;
  int nColumn;
  int nAccumulator;


  struct AggInfo_func {
    Expr *pExpr;
    FuncDef *pFunc;
    int iMem;
    int iDistinct;
  } *aFunc;
  int nFunc;
};
# 13070 "sqlite3.c"
typedef i16 ynVar;
# 13138 "sqlite3.c"
struct Expr {
  u8 op;
  char affinity;
  u32 flags;
  union {
    char *zToken;
    int iValue;
  } u;






  Expr *pLeft;
  Expr *pRight;
  union {
    ExprList *pList;
    Select *pSelect;
  } x;







  int nHeight;

  int iTable;



  ynVar iColumn;

  i16 iAgg;
  i16 iRightJoinTable;
  u8 op2;


  AggInfo *pAggInfo;
  Table *pTab;
};
# 13264 "sqlite3.c"
struct ExprList {
  int nExpr;
  struct ExprList_item {
    Expr *pExpr;
    char *zName;
    char *zSpan;
    u8 sortOrder;
    unsigned done :1;
    unsigned bSpanIsTab :1;
    unsigned reusable :1;
    union {
      struct {
        u16 iOrderByCol;
        u16 iAlias;
      } x;
      int iConstExprReg;
    } u;
  } *a;
};






struct ExprSpan {
  Expr *pExpr;
  const char *zStart;
  const char *zEnd;
};
# 13310 "sqlite3.c"
struct IdList {
  struct IdList_item {
    char *zName;
    int idx;
  } *a;
  int nId;
};
# 13328 "sqlite3.c"
  typedef u64 Bitmask;
# 13362 "sqlite3.c"
struct SrcList {
  int nSrc;
  u32 nAlloc;
  struct SrcList_item {
    Schema *pSchema;
    char *zDatabase;
    char *zName;
    char *zAlias;
    Table *pTab;
    Select *pSelect;
    int addrFillSub;
    int regReturn;
    int regResult;
    struct {
      u8 jointype;
      unsigned notIndexed :1;
      unsigned isIndexedBy :1;
      unsigned isTabFunc :1;
      unsigned isCorrelated :1;
      unsigned viaCoroutine :1;
      unsigned isRecursive :1;
    } fg;

    u8 iSelectId;

    int iCursor;
    Expr *pOn;
    IdList *pUsing;
    Bitmask colUsed;
    union {
      char *zIndexedBy;
      ExprList *pFuncArg;
    } u1;
    Index *pIBIndex;
  } a[1];
};
# 13460 "sqlite3.c"
struct NameContext {
  Parse *pParse;
  SrcList *pSrcList;
  ExprList *pEList;
  AggInfo *pAggInfo;
  NameContext *pNext;
  int nRef;
  int nErr;
  u16 ncFlags;
};
# 13506 "sqlite3.c"
struct Select {
  ExprList *pEList;
  u8 op;
  LogEst nSelectRow;
  u32 selFlags;
  int iLimit, iOffset;



  int addrOpenEphm[2];
  SrcList *pSrc;
  Expr *pWhere;
  ExprList *pGroupBy;
  Expr *pHaving;
  ExprList *pOrderBy;
  Select *pPrior;
  Select *pNext;
  Expr *pLimit;
  Expr *pOffset;
  With *pWith;
};
# 13638 "sqlite3.c"
struct SelectDest {
  u8 eDest;
  char affSdst;
  int iSDParm;
  int iSdst;
  int nSdst;
  ExprList *pOrderBy;
};
# 13656 "sqlite3.c"
struct AutoincInfo {
  AutoincInfo *pNext;
  Table *pTab;
  int iDb;
  int regCtr;
};
# 13688 "sqlite3.c"
struct TriggerPrg {
  Trigger *pTrigger;
  TriggerPrg *pNext;
  SubProgram *pProgram;
  int orconf;
  u32 aColmask[2];
};
# 13707 "sqlite3.c"
  typedef unsigned int yDbMask;
# 13731 "sqlite3.c"
struct Parse {
  sqlite3 *db;
  char *zErrMsg;
  Vdbe *pVdbe;
  int rc;
  u8 colNamesSet;
  u8 checkSchema;
  u8 nested;
  u8 nTempReg;
  u8 isMultiWrite;
  u8 mayAbort;
  u8 hasCompound;
  u8 okConstFactor;
  u8 disableLookaside;
  int aTempReg[8];
  int nRangeReg;
  int iRangeReg;
  int nErr;
  int nTab;
  int nMem;
  int nSet;
  int nOnce;
  int nOpAlloc;
  int szOpAlloc;
  int iFixedOp;
  int ckBase;
  int iSelfTab;
  int iCacheLevel;
  int iCacheCnt;
  int nLabel;
  int *aLabel;
  struct yColCache {
    int iTable;
    i16 iColumn;
    u8 tempReg;
    int iLevel;
    int iReg;
    int lru;
  } aColCache[10];
  ExprList *pConstExpr;
  Token constraintName;
  yDbMask writeMask;
  yDbMask cookieMask;
  int cookieValue[10 +2];
  int regRowid;
  int regRoot;
  int nMaxArg;





  int nTableLock;
  TableLock *aTableLock;

  AutoincInfo *pAinc;


  Parse *pToplevel;
  Table *pTriggerTab;
  int addrCrTab;
  u32 nQueryLoop;
  u32 oldmask;
  u32 newmask;
  u8 eTriggerOp;
  u8 eOrconf;
  u8 disableTriggers;
# 13806 "sqlite3.c"
  ynVar nVar;
  int nzVar;
  u8 iPkSortOrder;
  u8 explain;

  u8 declareVtab;
  int nVtabLock;

  int nAlias;
  int nHeight;

  int iSelectId;
  int iNextSelectId;

  char **azVar;
  Vdbe *pReprepare;
  const char *zTail;
  Table *pNewTable;
  Trigger *pNewTrigger;
  const char *zAuthContext;
  Token sNameToken;
  Token sLastToken;

  Token sArg;
  Table **apVtabLock;

  Table *pZombieTab;
  TriggerPrg *pTriggerPrg;
  With *pWith;
  With *pWithToFree;
};
# 13851 "sqlite3.c"
struct AuthContext {
  const char *zAuthContext;
  Parse *pParse;
};
# 13891 "sqlite3.c"
struct Trigger {
  char *zName;
  char *table;
  u8 op;
  u8 tr_tm;
  Expr *pWhen;
  IdList *pColumns;

  Schema *pSchema;
  Schema *pTabSchema;
  TriggerStep *step_list;
  Trigger *pNext;
};
# 13953 "sqlite3.c"
struct TriggerStep {
  u8 op;
  u8 orconf;
  Trigger *pTrig;
  Select *pSelect;
  char *zTarget;
  Expr *pWhere;
  ExprList *pExprList;
  IdList *pIdList;
  TriggerStep *pNext;
  TriggerStep *pLast;
};






typedef struct DbFixer DbFixer;
struct DbFixer {
  Parse *pParse;
  Schema *pSchema;
  int bVarOnly;
  const char *zDb;
  const char *zType;
  const Token *pName;
};





struct StrAccum {
  sqlite3 *db;
  char *zBase;
  char *zText;
  u32 nChar;
  u32 nAlloc;
  u32 mxAlloc;
  u8 accError;
  u8 printfFlags;
};
# 14008 "sqlite3.c"
typedef struct {
  sqlite3 *db;
  char **pzErrMsg;
  int iDb;
  int rc;
} InitData;






struct Sqlite3Config {
  int bMemstat;
  int bCoreMutex;
  int bFullMutex;
  int bOpenUri;
  int bUseCis;
  int mxStrlen;
  int neverCorrupt;
  int szLookaside;
  int nLookaside;
  int nStmtSpill;
  sqlite3_mem_methods m;
  sqlite3_mutex_methods mutex;
  sqlite3_pcache_methods2 pcache2;
  void *pHeap;
  int nHeap;
  int mnReq, mxReq;
  sqlite3_int64 szMmap;
  sqlite3_int64 mxMmap;
  void *pScratch;
  int szScratch;
  int nScratch;
  void *pPage;
  int szPage;
  int nPage;
  int mxParserStack;
  int sharedCacheEnabled;
  u32 szPma;


  int isInit;
  int inProgress;
  int isMutexInit;
  int isMallocInit;
  int isPCacheInit;
  int nRefInitMutex;
  sqlite3_mutex *pInitMutex;
  void (*xLog)(void*,int,const char*);
  void *pLogArg;
# 14071 "sqlite3.c"
  int (*xTestCallback)(int);

  int bLocaltimeFault;
};
# 14097 "sqlite3.c"
struct Walker {
  Parse *pParse;
  int (*xExprCallback)(Walker*, Expr*);
  int (*xSelectCallback)(Walker*,Select*);
  void (*xSelectCallback2)(Walker*,Select*);
  int walkerDepth;
  u8 eCode;
  union {
    NameContext *pNC;
    int n;
    int iCur;
    SrcList *pSrcList;
    struct SrcCount *pSrcCount;
    struct CCurHint *pCCurHint;
    int *aiCol;
  } u;
};


static int sqlite3WalkExpr(Walker*, Expr*);
static int sqlite3WalkExprList(Walker*, ExprList*);
static int sqlite3WalkSelect(Walker*, Select*);
static int sqlite3WalkSelectExpr(Walker*, Select*);
static int sqlite3WalkSelectFrom(Walker*, Select*);
static int sqlite3ExprWalkNoop(Walker*, Expr*);
# 14135 "sqlite3.c"
struct With {
  int nCte;
  With *pOuter;
  struct Cte {
    char *zName;
    ExprList *pCols;
    Select *pSelect;
    const char *zCteErr;
  } a[1];
};
# 14174 "sqlite3.c"
static int sqlite3CorruptError(int);
static int sqlite3MisuseError(int);
static int sqlite3CantopenError(int);
# 14239 "sqlite3.c"
static int sqlite3IsIdChar(u8);





static int sqlite3StrICmp(const char*,const char*);
static int sqlite3Strlen30(const char*);
static char *sqlite3ColumnType(Column*,char*);


static int sqlite3MallocInit(void);
static void sqlite3MallocEnd(void);
static void *sqlite3Malloc(u64);
static void *sqlite3MallocZero(u64);
static void *sqlite3DbMallocZero(sqlite3*, u64);
static void *sqlite3DbMallocRaw(sqlite3*, u64);
static void *sqlite3DbMallocRawNN(sqlite3*, u64);
static char *sqlite3DbStrDup(sqlite3*,const char*);
static char *sqlite3DbStrNDup(sqlite3*,const char*, u64);
static void *sqlite3Realloc(void*, u64);
static void *sqlite3DbReallocOrFree(sqlite3 *, void *, u64);
static void *sqlite3DbRealloc(sqlite3 *, void *, u64);
static void sqlite3DbFree(sqlite3*, void*);
static int sqlite3MallocSize(void*);
static int sqlite3DbMallocSize(sqlite3*, void*);
static void *sqlite3ScratchMalloc(int);
static void sqlite3ScratchFree(void*);
static void *sqlite3PageMalloc(int);
static void sqlite3PageFree(void*);
static void sqlite3MemSetDefault(void);

static void sqlite3BenignMallocHooks(void (*)(void), void (*)(void));

static int sqlite3HeapNearlyFull(void);
# 14302 "sqlite3.c"
static sqlite3_mutex_methods const *sqlite3DefaultMutex(void);
static sqlite3_mutex_methods const *sqlite3NoopMutex(void);
static sqlite3_mutex *sqlite3MutexAlloc(int);
static int sqlite3MutexInit(void);
static int sqlite3MutexEnd(void);


static void sqlite3MemoryBarrier(void);




static sqlite3_int64 sqlite3StatusValue(int);
static void sqlite3StatusUp(int, int);
static void sqlite3StatusDown(int, int);
static void sqlite3StatusHighwater(int, int);


static sqlite3_mutex *sqlite3Pcache1Mutex(void);
static sqlite3_mutex *sqlite3MallocMutex(void);


static int sqlite3IsNaN(double);
# 14333 "sqlite3.c"
struct PrintfArguments {
  int nArg;
  int nUsed;
  sqlite3_value **apArg;
};

static void sqlite3VXPrintf(StrAccum*, const char*, va_list);
static void sqlite3XPrintf(StrAccum*, const char*, ...);
static char *sqlite3MPrintf(sqlite3*,const char*, ...);
static char *sqlite3VMPrintf(sqlite3*,const char*, va_list);
# 14358 "sqlite3.c"
static void sqlite3SetString(char **, sqlite3*, const char*);
static void sqlite3ErrorMsg(Parse*, const char*, ...);
static int sqlite3Dequote(char*);
static void sqlite3TokenInit(Token*,char*);
static int sqlite3KeywordCode(const unsigned char*, int);
static int sqlite3RunParser(Parse*, const char*, char **);
static void sqlite3FinishCoding(Parse*);
static int sqlite3GetTempReg(Parse*);
static void sqlite3ReleaseTempReg(Parse*,int);
static int sqlite3GetTempRange(Parse*,int);
static void sqlite3ReleaseTempRange(Parse*,int,int);
static void sqlite3ClearTempRegCache(Parse*);



static Expr *sqlite3ExprAlloc(sqlite3*,int,const Token*,int);
static Expr *sqlite3Expr(sqlite3*,int,const char*);
static void sqlite3ExprAttachSubtrees(sqlite3*,Expr*,Expr*,Expr*);
static Expr *sqlite3PExpr(Parse*, int, Expr*, Expr*, const Token*);
static Expr *sqlite3ExprAnd(sqlite3*,Expr*, Expr*);
static Expr *sqlite3ExprFunction(Parse*,ExprList*, Token*);
static void sqlite3ExprAssignVarNumber(Parse*, Expr*);
static void sqlite3ExprDelete(sqlite3*, Expr*);
static ExprList *sqlite3ExprListAppend(Parse*,ExprList*,Expr*);
static void sqlite3ExprListSetSortOrder(ExprList*,int);
static void sqlite3ExprListSetName(Parse*,ExprList*,Token*,int);
static void sqlite3ExprListSetSpan(Parse*,ExprList*,ExprSpan*);
static void sqlite3ExprListDelete(sqlite3*, ExprList*);
static u32 sqlite3ExprListFlags(const ExprList*);
static int sqlite3Init(sqlite3*, char**);
static int sqlite3InitCallback(void*, int, char**, char**);
static void sqlite3Pragma(Parse*,Token*,Token*,Token*,int);
static void sqlite3ResetAllSchemasOfConnection(sqlite3*);
static void sqlite3ResetOneSchema(sqlite3*,int);
static void sqlite3CollapseDatabaseArray(sqlite3*);
static void sqlite3CommitInternalChanges(sqlite3*);
static void sqlite3DeleteColumnNames(sqlite3*,Table*);
static int sqlite3ColumnsFromExprList(Parse*,ExprList*,i16*,Column**);
static Table *sqlite3ResultSetOfSelect(Parse*,Select*);
static void sqlite3OpenMasterTable(Parse *, int);
static Index *sqlite3PrimaryKeyIndex(Table*);
static i16 sqlite3ColumnOfIndex(Index*, i16);
static void sqlite3StartTable(Parse*,Token*,Token*,int,int,int,int);





static void sqlite3AddColumn(Parse*,Token*,Token*);
static void sqlite3AddNotNull(Parse*, int);
static void sqlite3AddPrimaryKey(Parse*, ExprList*, int, int, int);
static void sqlite3AddCheckConstraint(Parse*, Expr*);
static void sqlite3AddDefaultValue(Parse*,ExprSpan*);
static void sqlite3AddCollateType(Parse*, Token*);
static void sqlite3EndTable(Parse*,Token*,Token*,u8,Select*);
static int sqlite3ParseUri(const char*,const char*,unsigned int*,
                    sqlite3_vfs**,char**,char **);
static Btree *sqlite3DbNameToBtree(sqlite3*,const char*);
static int sqlite3CodeOnce(Parse *);




static int sqlite3FaultSim(int);


static Bitvec *sqlite3BitvecCreate(u32);
static int sqlite3BitvecTest(Bitvec*, u32);
static int sqlite3BitvecTestNotNull(Bitvec*, u32);
static int sqlite3BitvecSet(Bitvec*, u32);
static void sqlite3BitvecClear(Bitvec*, u32, void*);
static void sqlite3BitvecDestroy(Bitvec*);
static u32 sqlite3BitvecSize(Bitvec*);

static int sqlite3BitvecBuiltinTest(int,int*);


static RowSet *sqlite3RowSetInit(sqlite3*, void*, unsigned int);
static void sqlite3RowSetClear(RowSet*);
static void sqlite3RowSetInsert(RowSet*, i64);
static int sqlite3RowSetTest(RowSet*, int iBatch, i64);
static int sqlite3RowSetNext(RowSet*, i64*);

static void sqlite3CreateView(Parse*,Token*,Token*,Token*,ExprList*,Select*,int,int);


static int sqlite3ViewGetColumnNames(Parse*,Table*);







static void sqlite3DropTable(Parse*, SrcList*, int, int);
static void sqlite3CodeDropTable(Parse*, Table*, int, int);
static void sqlite3DeleteTable(sqlite3*, Table*);

static void sqlite3AutoincrementBegin(Parse *pParse);
static void sqlite3AutoincrementEnd(Parse *pParse);




static void sqlite3Insert(Parse*, SrcList*, Select*, IdList*, int);
static void *sqlite3ArrayAllocate(sqlite3*,void*,int,int*,int*);
static IdList *sqlite3IdListAppend(sqlite3*, IdList*, Token*);
static int sqlite3IdListIndex(IdList*,const char*);
static SrcList *sqlite3SrcListEnlarge(sqlite3*, SrcList*, int, int);
static SrcList *sqlite3SrcListAppend(sqlite3*, SrcList*, Token*, Token*);
static SrcList *sqlite3SrcListAppendFromTerm(Parse*, SrcList*, Token*, Token*,
                                      Token*, Select*, Expr*, IdList*);
static void sqlite3SrcListIndexedBy(Parse *, SrcList *, Token *);
static void sqlite3SrcListFuncArgs(Parse*, SrcList*, ExprList*);
static int sqlite3IndexedByLookup(Parse *, struct SrcList_item *);
static void sqlite3SrcListShiftJoinType(SrcList*);
static void sqlite3SrcListAssignCursors(Parse*, SrcList*);
static void sqlite3IdListDelete(sqlite3*, IdList*);
static void sqlite3SrcListDelete(sqlite3*, SrcList*);
static Index *sqlite3AllocateIndexObject(sqlite3*,i16,int,char**);
static Index *sqlite3CreateIndex(Parse*,Token*,Token*,SrcList*,ExprList*,int,Token*,
                          Expr*, int, int);
static void sqlite3DropIndex(Parse*, SrcList*, int);
static int sqlite3Select(Parse*, Select*, SelectDest*);
static Select *sqlite3SelectNew(Parse*,ExprList*,SrcList*,Expr*,ExprList*,
                         Expr*,ExprList*,u32,Expr*,Expr*);
static void sqlite3SelectDelete(sqlite3*, Select*);
static Table *sqlite3SrcListLookup(Parse*, SrcList*);
static int sqlite3IsReadOnly(Parse*, Table*, int);
static void sqlite3OpenTable(Parse*, int iCur, int iDb, Table*, int);



static void sqlite3DeleteFrom(Parse*, SrcList*, Expr*);
static void sqlite3Update(Parse*, SrcList*, ExprList*, Expr*, int);
static WhereInfo *sqlite3WhereBegin(Parse*,SrcList*,Expr*,ExprList*,ExprList*,u16,int);
static void sqlite3WhereEnd(WhereInfo*);
static LogEst sqlite3WhereOutputRowCount(WhereInfo*);
static int sqlite3WhereIsDistinct(WhereInfo*);
static int sqlite3WhereIsOrdered(WhereInfo*);
static int sqlite3WhereIsSorted(WhereInfo*);
static int sqlite3WhereContinueLabel(WhereInfo*);
static int sqlite3WhereBreakLabel(WhereInfo*);
static int sqlite3WhereOkOnePass(WhereInfo*, int*);



static void sqlite3ExprCodeLoadIndexColumn(Parse*, Index*, int, int, int);
static int sqlite3ExprCodeGetColumn(Parse*, Table*, int, int, int, u8);
static void sqlite3ExprCodeGetColumnToReg(Parse*, Table*, int, int, int);
static void sqlite3ExprCodeGetColumnOfTable(Vdbe*, Table*, int, int, int);
static void sqlite3ExprCodeMove(Parse*, int, int, int);
static void sqlite3ExprCacheStore(Parse*, int, int, int);
static void sqlite3ExprCachePush(Parse*);
static void sqlite3ExprCachePop(Parse*);
static void sqlite3ExprCacheRemove(Parse*, int, int);
static void sqlite3ExprCacheClear(Parse*);
static void sqlite3ExprCacheAffinityChange(Parse*, int, int);
static void sqlite3ExprCode(Parse*, Expr*, int);
static void sqlite3ExprCodeCopy(Parse*, Expr*, int);
static void sqlite3ExprCodeFactorable(Parse*, Expr*, int);
static void sqlite3ExprCodeAtInit(Parse*, Expr*, int, u8);
static int sqlite3ExprCodeTemp(Parse*, Expr*, int*);
static int sqlite3ExprCodeTarget(Parse*, Expr*, int);
static void sqlite3ExprCodeAndCache(Parse*, Expr*, int);
static int sqlite3ExprCodeExprList(Parse*, ExprList*, int, int, u8);



static void sqlite3ExprIfTrue(Parse*, Expr*, int, int);
static void sqlite3ExprIfFalse(Parse*, Expr*, int, int);
static void sqlite3ExprIfFalseDup(Parse*, Expr*, int, int);
static Table *sqlite3FindTable(sqlite3*,const char*, const char*);
static Table *sqlite3LocateTable(Parse*,int isView,const char*, const char*);
static Table *sqlite3LocateTableItem(Parse*,int isView,struct SrcList_item *);
static Index *sqlite3FindIndex(sqlite3*,const char*, const char*);
static void sqlite3UnlinkAndDeleteTable(sqlite3*,int,const char*);
static void sqlite3UnlinkAndDeleteIndex(sqlite3*,int,const char*);
static void sqlite3Vacuum(Parse*);
static int sqlite3RunVacuum(char**, sqlite3*);
static char *sqlite3NameFromToken(sqlite3*, Token*);
static int sqlite3ExprCompare(Expr*, Expr*, int);
static int sqlite3ExprListCompare(ExprList*, ExprList*, int);
static int sqlite3ExprImpliesExpr(Expr*, Expr*, int);
static void sqlite3ExprAnalyzeAggregates(NameContext*, Expr*);
static void sqlite3ExprAnalyzeAggList(NameContext*,ExprList*);
static int sqlite3FunctionUsesThisSrc(Expr*, SrcList*);
static Vdbe *sqlite3GetVdbe(Parse*);

static void sqlite3PrngSaveState(void);
static void sqlite3PrngRestoreState(void);

static void sqlite3RollbackAll(sqlite3*,int);
static void sqlite3CodeVerifySchema(Parse*, int);
static void sqlite3CodeVerifyNamedSchema(Parse*, const char *zDb);
static void sqlite3BeginTransaction(Parse*, int);
static void sqlite3CommitTransaction(Parse*);
static void sqlite3RollbackTransaction(Parse*);
static void sqlite3Savepoint(Parse*, int, Token*);
static void sqlite3CloseSavepoints(sqlite3 *);
static void sqlite3LeaveMutexAndCloseZombie(sqlite3*);
static int sqlite3ExprIsConstant(Expr*);
static int sqlite3ExprIsConstantNotJoin(Expr*);
static int sqlite3ExprIsConstantOrFunction(Expr*, u8);
static int sqlite3ExprIsTableConstant(Expr*,int);



static int sqlite3ExprIsInteger(Expr*, int*);
static int sqlite3ExprCanBeNull(const Expr*);
static int sqlite3ExprNeedsNoAffinityChange(const Expr*, char);
static int sqlite3IsRowid(const char*);
static void sqlite3GenerateRowDelete(
    Parse*,Table*,Trigger*,int,int,int,i16,u8,u8,u8,int);
static void sqlite3GenerateRowIndexDelete(Parse*, Table*, int, int, int*, int);
static int sqlite3GenerateIndexKey(Parse*, Index*, int, int, int, int*,Index*,int);
static void sqlite3ResolvePartIdxLabel(Parse*,int);
static void sqlite3GenerateConstraintChecks(Parse*,Table*,int*,int,int,int,int,
                                     u8,u8,int,int*,int*);
static void sqlite3CompleteInsertion(Parse*,Table*,int,int,int,int*,int,int,int);
static int sqlite3OpenTableAndIndices(Parse*, Table*, int, u8, int, u8*, int*, int*);
static void sqlite3BeginWriteOperation(Parse*, int, int);
static void sqlite3MultiWrite(Parse*);
static void sqlite3MayAbort(Parse*);
static void sqlite3HaltConstraint(Parse*, int, int, char*, i8, u8);
static void sqlite3UniqueConstraint(Parse*, int, Index*);
static void sqlite3RowidConstraint(Parse*, int, Table*);
static Expr *sqlite3ExprDup(sqlite3*,Expr*,int);
static ExprList *sqlite3ExprListDup(sqlite3*,ExprList*,int);
static SrcList *sqlite3SrcListDup(sqlite3*,SrcList*,int);
static IdList *sqlite3IdListDup(sqlite3*,IdList*);
static Select *sqlite3SelectDup(sqlite3*,Select*,int);





static void sqlite3InsertBuiltinFuncs(FuncDef*,int);
static FuncDef *sqlite3FindFunction(sqlite3*,const char*,int,u8,u8);
static void sqlite3RegisterBuiltinFunctions(void);
static void sqlite3RegisterDateTimeFunctions(void);
static void sqlite3RegisterPerConnectionBuiltinFunctions(sqlite3*);
static int sqlite3SafetyCheckOk(sqlite3*);
static int sqlite3SafetyCheckSickOrOk(sqlite3*);
static void sqlite3ChangeCookie(Parse*, int);


static void sqlite3MaterializeView(Parse*, Table*, Expr*, int);



static void sqlite3BeginTrigger(Parse*, Token*,Token*,int,int,IdList*,SrcList*,
                           Expr*,int, int);
static void sqlite3FinishTrigger(Parse*, TriggerStep*, Token*);
static void sqlite3DropTrigger(Parse*, SrcList*, int);
static void sqlite3DropTriggerPtr(Parse*, Trigger*);
static Trigger *sqlite3TriggersExist(Parse *, Table*, int, ExprList*, int *pMask);
static Trigger *sqlite3TriggerList(Parse *, Table *);
static void sqlite3CodeRowTrigger(Parse*, Trigger *, int, ExprList*, int, Table *,
                            int, int, int);
static void sqlite3CodeRowTriggerDirect(Parse *, Trigger *, Table *, int, int, int);
  void sqliteViewTriggers(Parse*, Table*, Expr*, int, ExprList*);
static void sqlite3DeleteTriggerStep(sqlite3*, TriggerStep*);
static TriggerStep *sqlite3TriggerSelectStep(sqlite3*,Select*);
static TriggerStep *sqlite3TriggerInsertStep(sqlite3*,Token*, IdList*,
                                        Select*,u8);
static TriggerStep *sqlite3TriggerUpdateStep(sqlite3*,Token*,ExprList*, Expr*, u8);
static TriggerStep *sqlite3TriggerDeleteStep(sqlite3*,Token*, Expr*);
static void sqlite3DeleteTrigger(sqlite3*, Trigger*);
static void sqlite3UnlinkAndDeleteTrigger(sqlite3*,int,const char*);
static u32 sqlite3TriggerColmask(Parse*,Trigger*,ExprList*,int,int,Table*,int);
# 14644 "sqlite3.c"
static int sqlite3JoinType(Parse*, Token*, Token*, Token*);
static void sqlite3CreateForeignKey(Parse*, ExprList*, Token*, ExprList*, int);
static void sqlite3DeferForeignKey(Parse*, int);

static void sqlite3AuthRead(Parse*,Expr*,Schema*,SrcList*);
static int sqlite3AuthCheck(Parse*,int, const char*, const char*, const char*);
static void sqlite3AuthContextPush(Parse*, AuthContext*, const char*);
static void sqlite3AuthContextPop(AuthContext*);
static int sqlite3AuthReadCol(Parse*, const char *, const char *, int);






static void sqlite3Attach(Parse*, Expr*, Expr*, Expr*);
static void sqlite3Detach(Parse*, Expr*);
static void sqlite3FixInit(DbFixer*, Parse*, int, const char*, const Token*);
static int sqlite3FixSrcList(DbFixer*, SrcList*);
static int sqlite3FixSelect(DbFixer*, Select*);
static int sqlite3FixExpr(DbFixer*, Expr*);
static int sqlite3FixExprList(DbFixer*, ExprList*);
static int sqlite3FixTriggerStep(DbFixer*, TriggerStep*);
static int sqlite3AtoF(const char *z, double*, int, u8);
static int sqlite3GetInt32(const char *, int*);
static int sqlite3Atoi(const char*);
static int sqlite3Utf16ByteLen(const void *pData, int nChar);
static int sqlite3Utf8CharLen(const char *pData, int nByte);
static u32 sqlite3Utf8Read(const u8**);
static LogEst sqlite3LogEst(u64);
static LogEst sqlite3LogEstAdd(LogEst,LogEst);

static LogEst sqlite3LogEstFromDouble(double);
# 14689 "sqlite3.c"
static int sqlite3PutVarint(unsigned char*, u64);
static u8 sqlite3GetVarint(const unsigned char *, u64 *);
static u8 sqlite3GetVarint32(const unsigned char *, u32 *);
static int sqlite3VarintLen(u64 v);
# 14708 "sqlite3.c"
static const char *sqlite3IndexAffinityStr(sqlite3*, Index*);
static void sqlite3TableAffinity(Vdbe*, Table*, int);
static char sqlite3CompareAffinity(Expr *pExpr, char aff2);
static int sqlite3IndexAffinityOk(Expr *pExpr, char idx_affinity);
static char sqlite3ExprAffinity(Expr *pExpr);
static int sqlite3Atoi64(const char*, i64*, int, u8);
static int sqlite3DecOrHexToI64(const char*, i64*);
static void sqlite3ErrorWithMsg(sqlite3*, int, const char*,...);
static void sqlite3Error(sqlite3*,int);
static void sqlite3SystemError(sqlite3*,int);
static void *sqlite3HexToBlob(sqlite3*, const char *z, int n);
static u8 sqlite3HexToInt(int h);
static int sqlite3TwoPartName(Parse *, Token *, Token *, Token **);





static const char *sqlite3ErrStr(int);
static int sqlite3ReadSchema(Parse *pParse);
static CollSeq *sqlite3FindCollSeq(sqlite3*,u8 enc, const char*,int);
static CollSeq *sqlite3LocateCollSeq(Parse *pParse, const char*zName);
static CollSeq *sqlite3ExprCollSeq(Parse *pParse, Expr *pExpr);
static Expr *sqlite3ExprAddCollateToken(Parse *pParse, Expr*, const Token*, int);
static Expr *sqlite3ExprAddCollateString(Parse*,Expr*,const char*);
static Expr *sqlite3ExprSkipCollate(Expr*);
static int sqlite3CheckCollSeq(Parse *, CollSeq *);
static int sqlite3CheckObjectName(Parse *, const char *);
static void sqlite3VdbeSetChanges(sqlite3 *, int);
static int sqlite3AddInt64(i64*,i64);
static int sqlite3SubInt64(i64*,i64);
static int sqlite3MulInt64(i64*,i64);
static int sqlite3AbsInt32(int);





static u8 sqlite3GetBoolean(const char *z,u8);

static const void *sqlite3ValueText(sqlite3_value*, u8);
static int sqlite3ValueBytes(sqlite3_value*, u8);
static void sqlite3ValueSetStr(sqlite3_value*, int, const void *,u8,
                        void(*)(void*));
static void sqlite3ValueSetNull(sqlite3_value*);
static void sqlite3ValueFree(sqlite3_value*);
static sqlite3_value *sqlite3ValueNew(sqlite3 *);
static char *sqlite3Utf16to8(sqlite3 *, const void*, int, u8);
static int sqlite3ValueFromExpr(sqlite3 *, Expr *, u8, u8, sqlite3_value **);
static void sqlite3ValueApplyAffinity(sqlite3_value *, u8, u8);
# 14770 "sqlite3.c"
static void sqlite3RootPageMoved(sqlite3*, int, int, int);
static void sqlite3Reindex(Parse*, Token*, Token*);
static void sqlite3AlterFunctions(void);
static void sqlite3AlterRenameTable(Parse*, SrcList*, Token*);
static int sqlite3GetToken(const unsigned char *, int *);
static void sqlite3NestedParse(Parse*, const char*, ...);
static void sqlite3ExpirePreparedStatements(sqlite3*);
static int sqlite3CodeSubselect(Parse *, Expr *, int, int);
static void sqlite3SelectPrep(Parse*, Select*, NameContext*);
static void sqlite3SelectWrongNumTermsError(Parse *pParse, Select *p);
static int sqlite3MatchSpanName(const char*, const char*, const char*, const char*);
static int sqlite3ResolveExprNames(NameContext*, Expr*);
static int sqlite3ResolveExprListNames(NameContext*, ExprList*);
static void sqlite3ResolveSelectNames(Parse*, Select*, NameContext*);
static void sqlite3ResolveSelfReference(Parse*,Table*,int,Expr*,ExprList*);
static int sqlite3ResolveOrderGroupBy(Parse*, Select*, ExprList*, const char*);
static void sqlite3ColumnDefault(Vdbe *, Table *, int, int);
static void sqlite3AlterFinishAddColumn(Parse *, Token *);
static void sqlite3AlterBeginAddColumn(Parse *, SrcList *);
static CollSeq *sqlite3GetCollSeq(Parse*, u8, CollSeq *, const char*);
static char sqlite3AffinityType(const char*, u8*);
static void sqlite3Analyze(Parse*, Token*, Token*);
static int sqlite3InvokeBusyHandler(BusyHandler*);
static int sqlite3FindDb(sqlite3*, Token*);
static int sqlite3FindDbName(sqlite3 *, const char *);
static int sqlite3AnalysisLoad(sqlite3*,int iDB);
static void sqlite3DeleteIndexSamples(sqlite3*,Index*);
static void sqlite3DefaultRowEst(Index*);
static void sqlite3RegisterLikeFunctions(sqlite3*, int);
static int sqlite3IsLikeFunction(sqlite3*,Expr*,int*,char*);
static void sqlite3SchemaClear(void *);
static Schema *sqlite3SchemaGet(sqlite3 *, Btree *);
static int sqlite3SchemaToIndex(sqlite3 *db, Schema *);
static KeyInfo *sqlite3KeyInfoAlloc(sqlite3*,int,int);
static void sqlite3KeyInfoUnref(KeyInfo*);
static KeyInfo *sqlite3KeyInfoRef(KeyInfo*);
static KeyInfo *sqlite3KeyInfoOfIndex(Parse*, Index*);



static int sqlite3CreateFunc(sqlite3 *, const char *, int, int, void *,
  void (*)(sqlite3_context*,int,sqlite3_value **),
  void (*)(sqlite3_context*,int,sqlite3_value **), void (*)(sqlite3_context*),
  FuncDestructor *pDestructor
);
static void sqlite3OomFault(sqlite3*);
static void sqlite3OomClear(sqlite3*);
static int sqlite3ApiExit(sqlite3 *db, int);
static int sqlite3OpenTempDatabase(Parse *);

static void sqlite3StrAccumInit(StrAccum*, sqlite3*, char*, int, int);
static void sqlite3StrAccumAppend(StrAccum*,const char*,int);
static void sqlite3StrAccumAppendAll(StrAccum*,const char*);
static void sqlite3AppendChar(StrAccum*,int,char);
static char *sqlite3StrAccumFinish(StrAccum*);
static void sqlite3StrAccumReset(StrAccum*);
static void sqlite3SelectDestInit(SelectDest*,int,int);
static Expr *sqlite3CreateColumnExpr(sqlite3 *, SrcList *, int, int);

static void sqlite3BackupRestart(sqlite3_backup *);
static void sqlite3BackupUpdate(sqlite3_backup *, Pgno, const u8 *);
# 14843 "sqlite3.c"
static void *sqlite3ParserAlloc(void*(*)(u64));
static void sqlite3ParserFree(void*, void(*)(void*));
static void sqlite3Parser(void*, int, Token, Parse*);




static void sqlite3AutoLoadExtensions(sqlite3*);

static void sqlite3CloseExtensions(sqlite3*);





static void sqlite3TableLock(Parse *, int, int, u8, const char *);
# 14879 "sqlite3.c"
static void sqlite3VtabClear(sqlite3 *db, Table*);
static void sqlite3VtabDisconnect(sqlite3 *db, Table *p);
static int sqlite3VtabSync(sqlite3 *db, Vdbe*);
static int sqlite3VtabRollback(sqlite3 *db);
static int sqlite3VtabCommit(sqlite3 *db);
static void sqlite3VtabLock(VTable *);
static void sqlite3VtabUnlock(VTable *);
static void sqlite3VtabUnlockList(sqlite3*);
static int sqlite3VtabSavepoint(sqlite3 *, int, int);
static void sqlite3VtabImportErrmsg(Vdbe*, sqlite3_vtab*);
static VTable *sqlite3GetVTable(sqlite3*, Table*);


static int sqlite3VtabEponymousTableInit(Parse*,Module*);
static void sqlite3VtabEponymousTableClear(sqlite3*,Module*);
static void sqlite3VtabMakeWritable(Parse*,Table*);
static void sqlite3VtabBeginParse(Parse*, Token*, Token*, Token*, int);
static void sqlite3VtabFinishParse(Parse*, Token*);
static void sqlite3VtabArgInit(Parse*);
static void sqlite3VtabArgExtend(Parse*, Token*);
static int sqlite3VtabCallCreate(sqlite3*, int, const char *, char **);
static int sqlite3VtabCallConnect(Parse*, Table*);
static int sqlite3VtabCallDestroy(sqlite3*, int, const char *);
static int sqlite3VtabBegin(sqlite3 *, VTable *);
static FuncDef *sqlite3VtabOverloadFunction(sqlite3 *,FuncDef*, int nArg, Expr*);
static void sqlite3InvalidFunction(sqlite3_context*,int,sqlite3_value**);
static sqlite3_int64 sqlite3StmtCurrentTime(sqlite3_context*);
static int sqlite3VdbeParameterIndex(Vdbe*, const char*, int);
static int sqlite3TransferBindings(sqlite3_stmt *, sqlite3_stmt *);
static void sqlite3ParserReset(Parse*);
static int sqlite3Reprepare(Vdbe*);
static void sqlite3ExprListCheckLength(Parse*, ExprList*, const char*);
static CollSeq *sqlite3BinaryCompareCollSeq(Parse *, Expr *, Expr *);
static int sqlite3TempInMemory(const sqlite3*);
static const char *sqlite3JournalModename(int);

static int sqlite3Checkpoint(sqlite3*, int, int, int*, int*);
static int sqlite3WalDefaultHook(void*,sqlite3*,const char*,int);


static With *sqlite3WithAdd(Parse*,With*,Token*,ExprList*,Select*);
static void sqlite3WithDelete(sqlite3*,With*);
static void sqlite3WithPush(Parse*, With*, u8);
# 14935 "sqlite3.c"
static void sqlite3FkCheck(Parse*, Table*, int, int, int*, int);
static void sqlite3FkDropTable(Parse*, SrcList *, Table*);
static void sqlite3FkActions(Parse*, Table*, ExprList*, int, int*, int);
static int sqlite3FkRequired(Parse*, Table*, int*, int);
static u32 sqlite3FkOldmask(Parse*, Table*);
static FKey *sqlite3FkReferences(Table *);
# 14949 "sqlite3.c"
static void sqlite3FkDelete(sqlite3 *, Table*);
static int sqlite3FkLocateIndex(Parse*,Table*,FKey*,Index**,int**);
# 14969 "sqlite3.c"
static void sqlite3BeginBenignMalloc(void);
static void sqlite3EndBenignMalloc(void);
# 14990 "sqlite3.c"
static int sqlite3FindInIndex(Parse *, Expr *, u32, int*);

static int sqlite3JournalOpen(sqlite3_vfs *, const char *, sqlite3_file *, int, int);
static int sqlite3JournalSize(sqlite3_vfs *);




static int sqlite3JournalIsInMemory(sqlite3_file *p);
static void sqlite3MemJournalOpen(sqlite3_file *);

static void sqlite3ExprSetHeightAndFlags(Parse *pParse, Expr *p);

static int sqlite3SelectExprHeight(Select *);
static int sqlite3ExprCheckHeight(Parse*, int);





static u32 sqlite3Get4byte(const u8*);
static void sqlite3Put4byte(u8*, u32);
# 15087 "sqlite3.c"
static int sqlite3ThreadCreate(SQLiteThread**,void*(*)(void*),void*);
static int sqlite3ThreadJoin(SQLiteThread*, void**);
# 15122 "sqlite3.c"
static const unsigned char sqlite3UpperToLower[] = {

      0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
     18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
     36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53,
     54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 97, 98, 99,100,101,102,103,
    104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,
    122, 91, 92, 93, 94, 95, 96, 97, 98, 99,100,101,102,103,104,105,106,107,
    108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,
    126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
    144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,
    162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,
    180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,
    198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,
    216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,
    234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,
    252,253,254,255
# 15158 "sqlite3.c"
};
# 15191 "sqlite3.c"
static const unsigned char sqlite3CtypeMap[256] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  0x00, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x02,
  0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x00, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x22,
  0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
  0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
  0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00,

  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,

  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40
};
# 15276 "sqlite3.c"
static struct Sqlite3Config sqlite3Config = {
   1,
   1,
   1==1,
   0,
   1,
   0x7ffffffe,
   0,
   128,
   500,
   (64*1024),
   {0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0},
   {0,0,0,0,0,0,0,0,0,0,0,0,0},
   (void*)0,
   0,
   0, 0,
   0,
   0x7fff0000,
   (void*)0,
   0,
   0,
   (void*)0,
   0,
   100,
   0,
   0,
   250,

   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
# 15323 "sqlite3.c"
   0,

   0
};






static FuncDefHash sqlite3BuiltinFunctions;




static const Token sqlite3IntTokens[] = {
   { "0", 1 },
   { "1", 1 }
};
# 15363 "sqlite3.c"
static int sqlite3PendingByte = 0x40000000;
# 15373 "sqlite3.c"
static const unsigned char sqlite3OpcodeProperty[] = { 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x10, 0x00, 0x01, 0x00, 0x01, 0x01, 0x02, 0x01, 0x02, 0x03, 0x12, 0x08, 0x00, 0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x02, 0x02, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x26, 0x26, 0x10, 0x10, 0x00, 0x03, 0x03, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x00, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x00, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x00, 0x00, 0x10, 0x01, 0x01, 0x01, 0x01, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x23, 0x0b, 0x01, 0x10, 0x10, 0x00, 0x01, 0x04, 0x03, 0x1a, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x10, 0x01, 0x00, 0x00, 0x00,};




static const char sqlite3StrBINARY[] = "BINARY";
# 15410 "sqlite3.c"
static const char * const azCompileOpt[] = {
# 15753 "sqlite3.c"
  "SYSTEM_MALLOC",
# 15765 "sqlite3.c"
  "THREADSAFE=" "1",
# 15779 "sqlite3.c"
};
# 15788 "sqlite3.c"
 int sqlite3_compileoption_used(const char *zOptName)
{

  int i, n;







  if( sqlite3_strnicmp(zOptName, "SQLITE_", 7)==0 ) zOptName += 7;
  n = sqlite3Strlen30(zOptName);



  for(i=0; i<((int)(sizeof(azCompileOpt)/sizeof(azCompileOpt[0]))); i++)
{

    if( sqlite3_strnicmp(zOptName, azCompileOpt[i], n)==0
     && sqlite3IsIdChar((unsigned char)azCompileOpt[i][n])==0
    )
{

      return 1;
    }
  }
  return 0;
}





 const char * sqlite3_compileoption_get(int N)
{

  if( N>=0 && N<((int)(sizeof(azCompileOpt)/sizeof(azCompileOpt[0]))) )
{

    return azCompileOpt[N];
  }
  return 0;
}
# 15889 "sqlite3.c"
typedef struct VdbeOp Op;




typedef unsigned Bool;


typedef struct VdbeSorter VdbeSorter;


typedef struct Explain Explain;


typedef struct AuxData AuxData;
# 15921 "sqlite3.c"
typedef struct VdbeCursor VdbeCursor;
struct VdbeCursor {
  u8 eCurType;
  i8 iDb;
  u8 nullRow;
  u8 deferredMoveto;
  u8 isTable;




  Bool isEphemeral:1;
  Bool useRandomRowid:1;
  Bool isOrdered:1;
  Pgno pgnoRoot;
  i16 nField;
  u16 nHdrParsed;
  union {
    BtCursor *pCursor;
    sqlite3_vtab_cursor *pVCur;
    int pseudoTableReg;
    VdbeSorter *pSorter;
  } uc;
  Btree *pBt;
  KeyInfo *pKeyInfo;
  int seekResult;
  i64 seqCount;
  i64 movetoTarget;
  VdbeCursor *pAltCursor;
  int *aAltMap;
# 15964 "sqlite3.c"
  u32 cacheStatus;
  u32 payloadSize;
  u32 szRow;
  u32 iHdrOffset;
  const u8 *aRow;
  u32 *aOffset;
  u32 aType[1];



};
# 15997 "sqlite3.c"
typedef struct VdbeFrame VdbeFrame;
struct VdbeFrame {
  Vdbe *v;
  VdbeFrame *pParent;
  Op *aOp;
  i64 *anExec;
  Mem *aMem;
  u8 *aOnceFlag;
  VdbeCursor **apCsr;
  void *token;
  i64 lastRowid;
  AuxData *pAuxData;
  int nCursor;
  int pc;
  int nOp;
  int nMem;
  int nOnceFlag;
  int nChildMem;
  int nChildCsr;
  int nChange;
  int nDbChange;
};
# 16032 "sqlite3.c"
struct Mem {
  union MemValue {
    double r;
    i64 i;
    int nZero;
    FuncDef *pDef;
    RowSet *pRowSet;
    VdbeFrame *pFrame;
  } u;
  u16 flags;
  u8 enc;
  u8 eSubtype;
  int n;
  char *z;

  char *zMalloc;
  int szMalloc;
  u32 uTemp;
  sqlite3 *db;
  void (*xDel)(void*);




};
# 16133 "sqlite3.c"
struct AuxData {
  int iOp;
  int iArg;
  void *pAux;
  void (*xDelete)(void *);
  AuxData *pNext;
};
# 16154 "sqlite3.c"
struct sqlite3_context {
  Mem *pOut;
  FuncDef *pFunc;
  Mem *pMem;
  Vdbe *pVdbe;
  int iOp;
  int isError;
  u8 skipFlag;
  u8 fErrorOrAux;
  u8 argc;
  sqlite3_value *argv[1];
};





struct Explain {
  Vdbe *pVdbe;
  StrAccum str;
  int nIndent;
  u16 aIndent[100];
  char zBase[100];
};




typedef unsigned bft;

typedef struct ScanStatus ScanStatus;
struct ScanStatus {
  int addrExplain;
  int addrLoop;
  int addrVisit;
  int iSelectID;
  LogEst nEst;
  char *zName;
};
# 16201 "sqlite3.c"
struct Vdbe {
  sqlite3 *db;
  Op *aOp;
  Mem *aMem;
  Mem **apArg;
  Mem *aColName;
  Mem *pResultSet;
  Parse *pParse;
  int nMem;
  int nOp;
  int nCursor;
  u32 magic;
  char *zErrMsg;
  Vdbe *pPrev,*pNext;
  VdbeCursor **apCsr;
  Mem *aVar;
  char **azVar;
  ynVar nVar;
  ynVar nzVar;
  u32 cacheCtr;
  int pc;
  int rc;



  u16 nResColumn;
  u8 errorAction;
  bft expired:1;
  bft doingRerun:1;
  u8 minWriteFileFormat;
  bft explain:2;
  bft changeCntOn:1;
  bft runOnlyOnce:1;
  bft usesStmtJournal:1;
  bft readOnly:1;
  bft bIsReader:1;
  bft isPrepareV2:1;
  int nChange;
  yDbMask btreeMask;
  yDbMask lockMask;
  int iStatement;
  u32 aCounter[5];

  i64 startTime;

  i64 iCurrentTime;
  i64 nFkConstraint;
  i64 nStmtDefCons;
  i64 nStmtDefImmCons;
  char *zSql;
  void *pFree;
  VdbeFrame *pFrame;
  VdbeFrame *pDelFrame;
  int nFrame;
  u32 expmask;
  SubProgram *pProgram;
  int nOnceFlag;
  u8 *aOnceFlag;
  AuxData *pAuxData;





};
# 16278 "sqlite3.c"
static void sqlite3VdbeError(Vdbe*, const char *, ...);
static void sqlite3VdbeFreeCursor(Vdbe *, VdbeCursor*);
void sqliteVdbePopStack(Vdbe*,int);
static int sqlite3VdbeCursorMoveto(VdbeCursor**, int*);
static int sqlite3VdbeCursorRestore(VdbeCursor*);



static u32 sqlite3VdbeSerialTypeLen(u32);
static u8 sqlite3VdbeOneByteSerialTypeLen(u8);
static u32 sqlite3VdbeSerialType(Mem*, int, u32*);
static u32 sqlite3VdbeSerialPut(unsigned char*, Mem*, u32);
static u32 sqlite3VdbeSerialGet(const unsigned char*, u32, Mem*);
static void sqlite3VdbeDeleteAuxData(sqlite3*, AuxData**, int, int);

int sqlite2BtreeKeyCompare(BtCursor *, const void *, int, int, int *);
static int sqlite3VdbeIdxKeyCompare(sqlite3*,VdbeCursor*,UnpackedRecord*,int*);
static int sqlite3VdbeIdxRowid(sqlite3*, BtCursor*, i64*);
static int sqlite3VdbeExec(Vdbe*);
static int sqlite3VdbeList(Vdbe*);
static int sqlite3VdbeHalt(Vdbe*);
static int sqlite3VdbeChangeEncoding(Mem *, int);
static int sqlite3VdbeMemTooBig(Mem*);
static int sqlite3VdbeMemCopy(Mem*, const Mem*);
static void sqlite3VdbeMemShallowCopy(Mem*, const Mem*, int);
static void sqlite3VdbeMemMove(Mem*, Mem*);
static int sqlite3VdbeMemNulTerminate(Mem*);
static int sqlite3VdbeMemSetStr(Mem*, const char*, int, u8, void(*)(void*));
static void sqlite3VdbeMemSetInt64(Mem*, i64);



static void sqlite3VdbeMemSetDouble(Mem*, double);

static void sqlite3VdbeMemInit(Mem*,sqlite3*,u16);
static void sqlite3VdbeMemSetNull(Mem*);
static void sqlite3VdbeMemSetZeroBlob(Mem*,int);
static void sqlite3VdbeMemSetRowSet(Mem*);
static int sqlite3VdbeMemMakeWriteable(Mem*);
static int sqlite3VdbeMemStringify(Mem*, u8, u8);
static i64 sqlite3VdbeIntValue(Mem*);
static int sqlite3VdbeMemIntegerify(Mem*);
static double sqlite3VdbeRealValue(Mem*);
static void sqlite3VdbeIntegerAffinity(Mem*);
static int sqlite3VdbeMemRealify(Mem*);
static int sqlite3VdbeMemNumerify(Mem*);
static void sqlite3VdbeMemCast(Mem*,u8,u8);
static int sqlite3VdbeMemFromBtree(BtCursor*,u32,u32,int,Mem*);
static void sqlite3VdbeMemRelease(Mem *p);
static int sqlite3VdbeMemFinalize(Mem*, FuncDef*);
static const char *sqlite3OpcodeName(int);
static int sqlite3VdbeMemGrow(Mem *pMem, int n, int preserve);
static int sqlite3VdbeMemClearAndResize(Mem *pMem, int n);
static int sqlite3VdbeCloseStatement(Vdbe *, int);
static void sqlite3VdbeFrameDelete(VdbeFrame*);
static int sqlite3VdbeFrameRestore(VdbeFrame *);
static int sqlite3VdbeTransferError(Vdbe *p);

static int sqlite3VdbeSorterInit(sqlite3 *, int, VdbeCursor *);
static void sqlite3VdbeSorterReset(sqlite3 *, VdbeSorter *);
static void sqlite3VdbeSorterClose(sqlite3 *, VdbeCursor *);
static int sqlite3VdbeSorterRowkey(const VdbeCursor *, Mem *);
static int sqlite3VdbeSorterNext(sqlite3 *, const VdbeCursor *, int *);
static int sqlite3VdbeSorterRewind(const VdbeCursor *, int *);
static int sqlite3VdbeSorterWrite(const VdbeCursor *, Mem *);
static int sqlite3VdbeSorterCompare(const VdbeCursor *, Mem *, int, int *);


static void sqlite3VdbeEnter(Vdbe*);





static void sqlite3VdbeLeave(Vdbe*);
# 16363 "sqlite3.c"
static int sqlite3VdbeCheckFk(Vdbe *, int);




static int sqlite3VdbeMemTranslate(Mem*, u8);




static int sqlite3VdbeMemHandleBom(Mem *pMem);


static int sqlite3VdbeMemExpandBlob(Mem *);
# 16392 "sqlite3.c"
typedef sqlite3_int64 sqlite3StatValueType;



typedef struct sqlite3StatType sqlite3StatType;
static struct sqlite3StatType {
  sqlite3StatValueType nowValue[10];
  sqlite3StatValueType mxValue[10];
} sqlite3Stat = { {0,}, {0,} };





static const char statMutex[] = {
  0,
  1,
  1,
  0,
  0,
  0,
  0,
  1,
  0,
  0,
};
# 16438 "sqlite3.c"
static sqlite3_int64 sqlite3StatusValue(int op)
{

  ;
  ((void) (0));
  ((void) (0));
  ((void) (0))
                                                                    ;
  return sqlite3Stat.nowValue[op];
}
# 16458 "sqlite3.c"
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




 int sqlite3_status64(
  int op,
  sqlite3_int64 *pCurrent,
  sqlite3_int64 *pHighwater,
  int resetFlag
)
{

  sqlite3_mutex *pMutex;
  ;
  if( op<0 || op>=((int)(sizeof(sqlite3Stat.nowValue)/sizeof(sqlite3Stat.nowValue[0]))) )
{

    return sqlite3MisuseError(16513);
  }



  pMutex = statMutex[op] ? sqlite3Pcache1Mutex() : sqlite3MallocMutex();
  sqlite3_mutex_enter(pMutex);
  *pCurrent = sqlite3Stat.nowValue[op];
  *pHighwater = sqlite3Stat.mxValue[op];
  if( resetFlag )
{

    sqlite3Stat.mxValue[op] = sqlite3Stat.nowValue[op];
  }
  sqlite3_mutex_leave(pMutex);
  (void)pMutex;
  return 0;
}
 int sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag)
{

  sqlite3_int64 iCur, iHwtr;
  int rc;



  rc = sqlite3_status64(op, &iCur, &iHwtr, resetFlag);
  if( rc==0 )
{

    *pCurrent = (int)iCur;
    *pHighwater = (int)iHwtr;
  }
  return rc;
}




 int sqlite3_db_status(
  sqlite3 *db,
  int op,
  int *pCurrent,
  int *pHighwater,
  int resetFlag
)
{

  int rc = 0;





  sqlite3_mutex_enter(db->mutex);
  switch( op )
{

    case 0: {
      *pCurrent = db->lookaside.nOut;
      *pHighwater = db->lookaside.mxOut;
      if( resetFlag )
{

        db->lookaside.mxOut = db->lookaside.nOut;
      }
      break;
    }

    case 4:
    case 5:
    case 6: {
      ;
      ;
      ;
      ((void) (0));
      ((void) (0));
      *pCurrent = 0;
      *pHighwater = db->lookaside.anStat[op - 4];
      if( resetFlag )
{

        db->lookaside.anStat[op - 4] = 0;
      }
      break;
    }






    case 1: {
      int totalUsed = 0;
      int i;
      sqlite3BtreeEnterAll(db);
      for(i=0; i<db->nDb; i++)
{

        Btree *pBt = db->aDb[i].pBt;
        if( pBt )
{

          Pager *pPager = sqlite3BtreePager(pBt);
          totalUsed += sqlite3PagerMemUsed(pPager);
        }
      }
      sqlite3BtreeLeaveAll(db);
      *pCurrent = totalUsed;
      *pHighwater = 0;
      break;
    }






    case 2: {
      int i;
      int nByte = 0;

      sqlite3BtreeEnterAll(db);
      db->pnBytesFreed = &nByte;
      for(i=0; i<db->nDb; i++)
{

        Schema *pSchema = db->aDb[i].pSchema;
        if( (pSchema!=0) )
{

          HashElem *p;

          nByte += sqlite3Config.m.xRoundup(sizeof(HashElem)) * (
              pSchema->tblHash.count
            + pSchema->trigHash.count
            + pSchema->idxHash.count
            + pSchema->fkeyHash.count
          );
          nByte += sqlite3_msize(pSchema->tblHash.ht);
          nByte += sqlite3_msize(pSchema->trigHash.ht);
          nByte += sqlite3_msize(pSchema->idxHash.ht);
          nByte += sqlite3_msize(pSchema->fkeyHash.ht);

          for(p=((&pSchema->trigHash)->first); p; p=((p)->next))
{

            sqlite3DeleteTrigger(db, (Trigger*)((p)->data));
          }
          for(p=((&pSchema->tblHash)->first); p; p=((p)->next))
{

            sqlite3DeleteTable(db, (Table *)((p)->data));
          }
        }
      }
      db->pnBytesFreed = 0;
      sqlite3BtreeLeaveAll(db);

      *pHighwater = 0;
      *pCurrent = nByte;
      break;
    }






    case 3: {
      struct Vdbe *pVdbe;
      int nByte = 0;

      db->pnBytesFreed = &nByte;
      for(pVdbe=db->pVdbe; pVdbe; pVdbe=pVdbe->pNext)
{

        sqlite3VdbeClearObject(db, pVdbe);
        sqlite3DbFree(db, pVdbe);
      }
      db->pnBytesFreed = 0;

      *pHighwater = 0;
      *pCurrent = nByte;

      break;
    }






    case 7:
    case 8:
    case 9:{
      int i;
      int nRet = 0;
      ((void) (0));
      ((void) (0));

      for(i=0; i<db->nDb; i++)
{

        if( db->aDb[i].pBt )
{

          Pager *pPager = sqlite3BtreePager(db->aDb[i].pBt);
          sqlite3PagerCacheStat(pPager, op, resetFlag, &nRet);
        }
      }
      *pHighwater = 0;


      *pCurrent = nRet;
      break;
    }





    case 10: {
      *pHighwater = 0;
      *pCurrent = db->nDeferredImmCons>0 || db->nDeferredCons>0;
      break;
    }

    default: {
      rc = 1;
    }
  }
  sqlite3_mutex_leave(db->mutex);
  return rc;
}
# 16767 "sqlite3.c"
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 88 "/usr/include/bits/time.h" 3 4
# 1 "/usr/include/bits/timex.h" 1 3 4
# 25 "/usr/include/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 89 "/usr/include/bits/time.h" 2 3 4




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) __attribute__ ((__nothrow__ , __leaf__));


# 42 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__ , __leaf__));







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));






extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 403 "/usr/include/time.h" 3 4
extern int getdate_err;
# 412 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 426 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);



# 16768 "sqlite3.c" 2







typedef struct DateTime DateTime;
struct DateTime {
  sqlite3_int64 iJD;
  int Y, M, D;
  int h, m;
  int tz;
  double s;
  char validYMD;
  char validHMS;
  char validJD;
  char validTZ;
  char tzSet;
};
# 16817 "sqlite3.c"
static int getDigits(const char *zDate, const char *zFormat, ...)
{



  static const u16 aMx[] = { 12, 14, 24, 31, 59, 9999 };
  va_list ap;
  int cnt = 0;
  char nextC;
  __builtin_va_start(ap,zFormat);
  do{
    char N = zFormat[0] - '0';
    char min = zFormat[1] - '0';
    int val = 0;
    u16 max;

    ((void) (0));
    max = aMx[zFormat[2] - 'a'];
    nextC = zFormat[3];
    val = 0;
    while( N-- )
{

      if( !(sqlite3CtypeMap[(unsigned char)(*zDate)]&0x04) )
{

        goto end_getDigits;
      }
      val = val*10 + *zDate - '0';
      zDate++;
    }
    if( val<(int)min || val>(int)max || (nextC!=0 && nextC!=*zDate) )
{

      goto end_getDigits;
    }
    *__builtin_va_arg(ap,int*) = val;
    zDate++;
    cnt++;
    zFormat += 4;
  }while( nextC );
end_getDigits:
  __builtin_va_end(ap);
  return cnt;
}
# 16871 "sqlite3.c"
static int parseTimezone(const char *zDate, DateTime *p)
{

  int sgn = 0;
  int nHr, nMn;
  int c;
  while( (sqlite3CtypeMap[(unsigned char)(*zDate)]&0x01) )
{
 zDate++; }
  p->tz = 0;
  c = *zDate;
  if( c=='-' )
{

    sgn = -1;
  }else if( c=='+' )
{

    sgn = +1;
  }else if( c=='Z' || c=='z' )
{

    zDate++;
    goto zulu_time;
  }else{
    return c!=0;
  }
  zDate++;
  if( getDigits(zDate, "20b:20e", &nHr, &nMn)!=2 )
{

    return 1;
  }
  zDate += 5;
  p->tz = sgn*(nMn + nHr*60);
zulu_time:
  while( (sqlite3CtypeMap[(unsigned char)(*zDate)]&0x01) )
{
 zDate++; }
  p->tzSet = 1;
  return *zDate!=0;
}
# 16907 "sqlite3.c"
static int parseHhMmSs(const char *zDate, DateTime *p)
{

  int h, m, s;
  double ms = 0.0;
  if( getDigits(zDate, "20c:20e", &h, &m)!=2 )
{

    return 1;
  }
  zDate += 5;
  if( *zDate==':' )
{

    zDate++;
    if( getDigits(zDate, "20e", &s)!=1 )
{

      return 1;
    }
    zDate += 2;
    if( *zDate=='.' && (sqlite3CtypeMap[(unsigned char)(zDate[1])]&0x04) )
{

      double rScale = 1.0;
      zDate++;
      while( (sqlite3CtypeMap[(unsigned char)(*zDate)]&0x04) )
{

        ms = ms*10.0 + *zDate - '0';
        rScale *= 10.0;
        zDate++;
      }
      ms /= rScale;
    }
  }else{
    s = 0;
  }
  p->validJD = 0;
  p->validHMS = 1;
  p->h = h;
  p->m = m;
  p->s = s + ms;
  if( parseTimezone(zDate, p) ) return 1;
  p->validTZ = (p->tz!=0)?1:0;
  return 0;
}







static void computeJD(DateTime *p)
{

  int Y, M, D, A, B, X1, X2;

  if( p->validJD ) return;
  if( p->validYMD )
{

    Y = p->Y;
    M = p->M;
    D = p->D;
  }else{
    Y = 2000;
    M = 1;
    D = 1;
  }
  if( M<=2 )
{

    Y--;
    M += 12;
  }
  A = Y/100;
  B = 2 - A + (A/4);
  X1 = 36525*(Y+4716)/100;
  X2 = 306001*(M+1)/10000;
  p->iJD = (sqlite3_int64)((X1 + X2 + D + B - 1524.5 ) * 86400000);
  p->validJD = 1;
  if( p->validHMS )
{

    p->iJD += p->h*3600000 + p->m*60000 + (sqlite3_int64)(p->s*1000);
    if( p->validTZ )
{

      p->iJD -= p->tz*60000;
      p->validYMD = 0;
      p->validHMS = 0;
      p->validTZ = 0;
    }
  }
}
# 16995 "sqlite3.c"
static int parseYyyyMmDd(const char *zDate, DateTime *p)
{

  int Y, M, D, neg;

  if( zDate[0]=='-' )
{

    zDate++;
    neg = 1;
  }else{
    neg = 0;
  }
  if( getDigits(zDate, "40f-21a-21d", &Y, &M, &D)!=3 )
{

    return 1;
  }
  zDate += 10;
  while( (sqlite3CtypeMap[(unsigned char)(*zDate)]&0x01) || 'T'==*(u8*)zDate )
{
 zDate++; }
  if( parseHhMmSs(zDate, p)==0 )
{


  }else if( *zDate==0 )
{

    p->validHMS = 0;
  }else{
    return 1;
  }
  p->validJD = 0;
  p->validYMD = 1;
  p->Y = neg ? -Y : Y;
  p->M = M;
  p->D = D;
  if( p->validTZ )
{

    computeJD(p);
  }
  return 0;
}






static int setDateTimeToCurrent(sqlite3_context *context, DateTime *p)
{

  p->iJD = sqlite3StmtCurrentTime(context);
  if( p->iJD>0 )
{

    p->validJD = 1;
    return 0;
  }else{
    return 1;
  }
}
# 17058 "sqlite3.c"
static int parseDateOrTime(
  sqlite3_context *context,
  const char *zDate,
  DateTime *p
)
{

  double r;
  if( parseYyyyMmDd(zDate,p)==0 )
{

    return 0;
  }else if( parseHhMmSs(zDate, p)==0 )
{

    return 0;
  }else if( sqlite3StrICmp(zDate,"now")==0)
{

    return setDateTimeToCurrent(context, p);
  }else if( sqlite3AtoF(zDate, &r, sqlite3Strlen30(zDate), 1) )
{

    p->iJD = (sqlite3_int64)(r*86400000.0 + 0.5);
    p->validJD = 1;
    return 0;
  }
  return 1;
}




static void computeYMD(DateTime *p)
{

  int Z, A, B, C, D, E, X1;
  if( p->validYMD ) return;
  if( !p->validJD )
{

    p->Y = 2000;
    p->M = 1;
    p->D = 1;
  }else{
    Z = (int)((p->iJD + 43200000)/86400000);
    A = (int)((Z - 1867216.25)/36524.25);
    A = Z + 1 + A - (A/4);
    B = A + 1524;
    C = (int)((B - 122.1)/365.25);
    D = (36525*(C&32767))/100;
    E = (int)((B-D)/30.6001);
    X1 = (int)(30.6001*E);
    p->D = B - D - X1;
    p->M = E<14 ? E-1 : E-13;
    p->Y = p->M>2 ? C - 4716 : C - 4715;
  }
  p->validYMD = 1;
}




static void computeHMS(DateTime *p)
{

  int s;
  if( p->validHMS ) return;
  computeJD(p);
  s = (int)((p->iJD + 43200000) % 86400000);
  p->s = s/1000.0;
  s = (int)p->s;
  p->s -= s;
  p->h = s/3600;
  s -= p->h*3600;
  p->m = s/60;
  p->s += s - p->m*60;
  p->validHMS = 1;
}




static void computeYMD_HMS(DateTime *p)
{

  computeYMD(p);
  computeHMS(p);
}




static void clearYMD_HMS_TZ(DateTime *p)
{

  p->validYMD = 0;
  p->validHMS = 0;
  p->validTZ = 0;
}
# 17171 "sqlite3.c"
static int osLocaltime(time_t *t, struct tm *pTm)
{

  int rc;

  struct tm *pX;

  sqlite3_mutex *mutex = sqlite3MutexAlloc(2);

  sqlite3_mutex_enter(mutex);
  pX = localtime(t);

  if( sqlite3Config.bLocaltimeFault ) pX = 0;

  if( pX ) *pTm = *pX;
  sqlite3_mutex_leave(mutex);
  rc = pX==0;
# 17196 "sqlite3.c"
  return rc;
}
# 17210 "sqlite3.c"
static sqlite3_int64 localtimeOffset(
  DateTime *p,
  sqlite3_context *pCtx,
  int *pRc
)
{

  DateTime x, y;
  time_t t;
  struct tm sLocal;


  memset(&sLocal, 0, sizeof(sLocal));

  x = *p;
  computeYMD_HMS(&x);
  if( x.Y<1971 || x.Y>=2038 )
{






    x.Y = 2000;
    x.M = 1;
    x.D = 1;
    x.h = 0;
    x.m = 0;
    x.s = 0.0;
  } else {
    int s = (int)(x.s + 0.5);
    x.s = s;
  }
  x.tz = 0;
  x.validJD = 0;
  computeJD(&x);
  t = (time_t)(x.iJD/1000 - 21086676*(i64)10000);
  if( osLocaltime(&t, &sLocal) )
{

    sqlite3_result_error(pCtx, "local time unavailable", -1);
    *pRc = 1;
    return 0;
  }
  y.Y = sLocal.tm_year + 1900;
  y.M = sLocal.tm_mon + 1;
  y.D = sLocal.tm_mday;
  y.h = sLocal.tm_hour;
  y.m = sLocal.tm_min;
  y.s = sLocal.tm_sec;
  y.validYMD = 1;
  y.validHMS = 1;
  y.validJD = 0;
  y.validTZ = 0;
  computeJD(&y);
  *pRc = 0;
  return y.iJD - x.iJD;
}
# 17289 "sqlite3.c"
static int parseModifier(sqlite3_context *pCtx, const char *zMod, DateTime *p)
{

  int rc = 1;
  int n;
  double r;
  char *z, zBuf[30];
  z = zBuf;
  for(n=0; n<((int)(sizeof(zBuf)/sizeof(zBuf[0])))-1 && zMod[n]; n++)
{

    z[n] = (char)sqlite3UpperToLower[(u8)zMod[n]];
  }
  z[n] = 0;
  switch( z[0] )
{


    case 'l': {





      if( strcmp(z, "localtime")==0 )
{

        computeJD(p);
        p->iJD += localtimeOffset(p, pCtx, &rc);
        clearYMD_HMS_TZ(p);
      }
      break;
    }

    case 'u': {






      if( strcmp(z, "unixepoch")==0 && p->validJD )
{

        p->iJD = (p->iJD + 43200)/86400 + 21086676*(i64)10000000;
        clearYMD_HMS_TZ(p);
        rc = 0;
      }

      else if( strcmp(z, "utc")==0 )
{

        if( p->tzSet==0 )
{

          sqlite3_int64 c1;
          computeJD(p);
          c1 = localtimeOffset(p, pCtx, &rc);
          if( rc==0 )
{

            p->iJD -= c1;
            clearYMD_HMS_TZ(p);
            p->iJD += c1 - localtimeOffset(p, pCtx, &rc);
          }
          p->tzSet = 1;
        }else{
          rc = 0;
        }
      }

      break;
    }
    case 'w': {







      if( strncmp(z, "weekday ", 8)==0
               && sqlite3AtoF(&z[8], &r, sqlite3Strlen30(&z[8]), 1)
               && (n=(int)r)==r && n>=0 && r<7 )
{

        sqlite3_int64 Z;
        computeYMD_HMS(p);
        p->validTZ = 0;
        p->validJD = 0;
        computeJD(p);
        Z = ((p->iJD + 129600000)/86400000) % 7;
        if( Z>n ) Z -= 7;
        p->iJD += (n - Z)*86400000;
        clearYMD_HMS_TZ(p);
        rc = 0;
      }
      break;
    }
    case 's': {






      if( strncmp(z, "start of ", 9)!=0 ) break;
      z += 9;
      computeYMD(p);
      p->validHMS = 1;
      p->h = p->m = 0;
      p->s = 0.0;
      p->validTZ = 0;
      p->validJD = 0;
      if( strcmp(z,"month")==0 )
{

        p->D = 1;
        rc = 0;
      }else if( strcmp(z,"year")==0 )
{

        computeYMD(p);
        p->M = 1;
        p->D = 1;
        rc = 0;
      }else if( strcmp(z,"day")==0 )
{

        rc = 0;
      }
      break;
    }
    case '+':
    case '-':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9': {
      double rRounder;
      for(n=1; z[n] && z[n]!=':' && !(sqlite3CtypeMap[(unsigned char)(z[n])]&0x01); n++)
{
}
      if( !sqlite3AtoF(z, &r, n, 1) )
{

        rc = 1;
        break;
      }
      if( z[n]==':' )
{






        const char *z2 = z;
        DateTime tx;
        sqlite3_int64 day;
        if( !(sqlite3CtypeMap[(unsigned char)(*z2)]&0x04) ) z2++;
        memset(&tx, 0, sizeof(tx));
        if( parseHhMmSs(z2, &tx) ) break;
        computeJD(&tx);
        tx.iJD -= 43200000;
        day = tx.iJD/86400000;
        tx.iJD -= day*86400000;
        if( z[0]=='-' ) tx.iJD = -tx.iJD;
        computeJD(p);
        clearYMD_HMS_TZ(p);
        p->iJD += tx.iJD;
        rc = 0;
        break;
      }
      z += n;
      while( (sqlite3CtypeMap[(unsigned char)(*z)]&0x01) ) z++;
      n = sqlite3Strlen30(z);
      if( n>10 || n<3 ) break;
      if( z[n-1]=='s' )
{
 z[n-1] = 0; n--; }
      computeJD(p);
      rc = 0;
      rRounder = r<0 ? -0.5 : +0.5;
      if( n==3 && strcmp(z,"day")==0 )
{

        p->iJD += (sqlite3_int64)(r*86400000.0 + rRounder);
      }else if( n==4 && strcmp(z,"hour")==0 )
{

        p->iJD += (sqlite3_int64)(r*(86400000.0/24.0) + rRounder);
      }else if( n==6 && strcmp(z,"minute")==0 )
{

        p->iJD += (sqlite3_int64)(r*(86400000.0/(24.0*60.0)) + rRounder);
      }else if( n==6 && strcmp(z,"second")==0 )
{

        p->iJD += (sqlite3_int64)(r*(86400000.0/(24.0*60.0*60.0)) + rRounder);
      }else if( n==5 && strcmp(z,"month")==0 )
{

        int x, y;
        computeYMD_HMS(p);
        p->M += (int)r;
        x = p->M>0 ? (p->M-1)/12 : (p->M-12)/12;
        p->Y += x;
        p->M -= x*12;
        p->validJD = 0;
        computeJD(p);
        y = (int)r;
        if( y!=r )
{

          p->iJD += (sqlite3_int64)((r - y)*30.0*86400000.0 + rRounder);
        }
      }else if( n==4 && strcmp(z,"year")==0 )
{

        int y = (int)r;
        computeYMD_HMS(p);
        p->Y += y;
        p->validJD = 0;
        computeJD(p);
        if( y!=r )
{

          p->iJD += (sqlite3_int64)((r - y)*365.0*86400000.0 + rRounder);
        }
      }else{
        rc = 1;
      }
      clearYMD_HMS_TZ(p);
      break;
    }
    default: {
      break;
    }
  }
  return rc;
}
# 17499 "sqlite3.c"
static int isDate(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv,
  DateTime *p
)
{

  int i;
  const unsigned char *z;
  int eType;
  memset(p, 0, sizeof(*p));
  if( argc==0 )
{

    return setDateTimeToCurrent(context, p);
  }
  if( (eType = sqlite3_value_type(argv[0]))==2
                   || eType==1 )
{

    p->iJD = (sqlite3_int64)(sqlite3_value_double(argv[0])*86400000.0 + 0.5);
    p->validJD = 1;
  }else{
    z = sqlite3_value_text(argv[0]);
    if( !z || parseDateOrTime(context, (char*)z, p) )
{

      return 1;
    }
  }
  for(i=1; i<argc; i++)
{

    z = sqlite3_value_text(argv[i]);
    if( z==0 || parseModifier(context, (char*)z, p) ) return 1;
  }
  return 0;
}
# 17540 "sqlite3.c"
static void juliandayFunc(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
)
{

  DateTime x;
  if( isDate(context, argc, argv, &x)==0 )
{

    computeJD(&x);
    sqlite3_result_double(context, x.iJD/86400000.0);
  }
}






static void datetimeFunc(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
)
{

  DateTime x;
  if( isDate(context, argc, argv, &x)==0 )
{

    char zBuf[100];
    computeYMD_HMS(&x);
    sqlite3_snprintf(sizeof(zBuf), zBuf, "%04d-%02d-%02d %02d:%02d:%02d",
                     x.Y, x.M, x.D, x.h, x.m, (int)(x.s));
    sqlite3_result_text(context, zBuf, -1, ((sqlite3_destructor_type)-1));
  }
}






static void timeFunc(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
)
{

  DateTime x;
  if( isDate(context, argc, argv, &x)==0 )
{

    char zBuf[100];
    computeHMS(&x);
    sqlite3_snprintf(sizeof(zBuf), zBuf, "%02d:%02d:%02d", x.h, x.m, (int)x.s);
    sqlite3_result_text(context, zBuf, -1, ((sqlite3_destructor_type)-1));
  }
}






static void dateFunc(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
)
{

  DateTime x;
  if( isDate(context, argc, argv, &x)==0 )
{

    char zBuf[100];
    computeYMD(&x);
    sqlite3_snprintf(sizeof(zBuf), zBuf, "%04d-%02d-%02d", x.Y, x.M, x.D);
    sqlite3_result_text(context, zBuf, -1, ((sqlite3_destructor_type)-1));
  }
}
# 17629 "sqlite3.c"
static void strftimeFunc(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
)
{

  DateTime x;
  u64 n;
  size_t i,j;
  char *z;
  sqlite3 *db;
  const char *zFmt;
  char zBuf[100];
  if( argc==0 ) return;
  zFmt = (const char*)sqlite3_value_text(argv[0]);
  if( zFmt==0 || isDate(context, argc-1, argv+1, &x) ) return;
  db = sqlite3_context_db_handle(context);
  for(i=0, n=1; zFmt[i]; i++, n++)
{

    if( zFmt[i]=='%' )
{

      switch( zFmt[i+1] )
{

        case 'd':
        case 'H':
        case 'm':
        case 'M':
        case 'S':
        case 'W':
          n++;

        case 'w':
        case '%':
          break;
        case 'f':
          n += 8;
          break;
        case 'j':
          n += 3;
          break;
        case 'Y':
          n += 8;
          break;
        case 's':
        case 'J':
          n += 50;
          break;
        default:
          return;
      }
      i++;
    }
  }
  ;
  ;
  ;
  ;
  if( n<sizeof(zBuf) )
{

    z = zBuf;
  }else if( n>(u64)db->aLimit[0] )
{

    sqlite3_result_error_toobig(context);
    return;
  }else{
    z = sqlite3DbMallocRawNN(db, (int)n);
    if( z==0 )
{

      sqlite3_result_error_nomem(context);
      return;
    }
  }
  computeJD(&x);
  computeYMD_HMS(&x);
  for(i=j=0; zFmt[i]; i++)
{

    if( zFmt[i]!='%' )
{

      z[j++] = zFmt[i];
    }else{
      i++;
      switch( zFmt[i] )
{

        case 'd': sqlite3_snprintf(3, &z[j],"%02d",x.D); j+=2; break;
        case 'f': {
          double s = x.s;
          if( s>59.999 ) s = 59.999;
          sqlite3_snprintf(7, &z[j],"%06.3f", s);
          j += sqlite3Strlen30(&z[j]);
          break;
        }
        case 'H': sqlite3_snprintf(3, &z[j],"%02d",x.h); j+=2; break;
        case 'W':
        case 'j': {
          int nDay;
          DateTime y = x;
          y.validJD = 0;
          y.M = 1;
          y.D = 1;
          computeJD(&y);
          nDay = (int)((x.iJD-y.iJD+43200000)/86400000);
          if( zFmt[i]=='W' )
{

            int wd;
            wd = (int)(((x.iJD+43200000)/86400000)%7);
            sqlite3_snprintf(3, &z[j],"%02d",(nDay+7-wd)/7);
            j += 2;
          }else{
            sqlite3_snprintf(4, &z[j],"%03d",nDay+1);
            j += 3;
          }
          break;
        }
        case 'J': {
          sqlite3_snprintf(20, &z[j],"%.16g",x.iJD/86400000.0);
          j+=sqlite3Strlen30(&z[j]);
          break;
        }
        case 'm': sqlite3_snprintf(3, &z[j],"%02d",x.M); j+=2; break;
        case 'M': sqlite3_snprintf(3, &z[j],"%02d",x.m); j+=2; break;
        case 's': {
          sqlite3_snprintf(30,&z[j],"%lld",
                           (i64)(x.iJD/1000 - 21086676*(i64)10000));
          j += sqlite3Strlen30(&z[j]);
          break;
        }
        case 'S': sqlite3_snprintf(3,&z[j],"%02d",(int)x.s); j+=2; break;
        case 'w': {
          z[j++] = (char)(((x.iJD+129600000)/86400000) % 7) + '0';
          break;
        }
        case 'Y': {
          sqlite3_snprintf(5,&z[j],"%04d",x.Y); j+=sqlite3Strlen30(&z[j]);
          break;
        }
        default: z[j++] = '%'; break;
      }
    }
  }
  z[j] = 0;
  sqlite3_result_text(context, z, -1,
                      z==zBuf ? ((sqlite3_destructor_type)-1) : ((sqlite3_destructor_type)sqlite3MallocSize));
}






static void ctimeFunc(
  sqlite3_context *context,
  int NotUsed,
  sqlite3_value **NotUsed2
)
{

  (void)(NotUsed),(void)(NotUsed2);
  timeFunc(context, 0, 0);
}






static void cdateFunc(
  sqlite3_context *context,
  int NotUsed,
  sqlite3_value **NotUsed2
)
{

  (void)(NotUsed),(void)(NotUsed2);
  dateFunc(context, 0, 0);
}






static void ctimestampFunc(
  sqlite3_context *context,
  int NotUsed,
  sqlite3_value **NotUsed2
)
{

  (void)(NotUsed),(void)(NotUsed2);
  datetimeFunc(context, 0, 0);
}
# 17856 "sqlite3.c"
static void sqlite3RegisterDateTimeFunctions(void)
{

  static FuncDef aDateTimeFuncs[] = {

    {-1, 0x2000|1|(0*0x0020), ((void*)(long int)(0)), 0, juliandayFunc, 0, "julianday", {0} },
    {-1, 0x2000|1|(0*0x0020), ((void*)(long int)(0)), 0, dateFunc, 0, "date", {0} },
    {-1, 0x2000|1|(0*0x0020), ((void*)(long int)(0)), 0, timeFunc, 0, "time", {0} },
    {-1, 0x2000|1|(0*0x0020), ((void*)(long int)(0)), 0, datetimeFunc, 0, "datetime", {0} },
    {-1, 0x2000|1|(0*0x0020), ((void*)(long int)(0)), 0, strftimeFunc, 0, "strftime", {0} },
    {0, 0x2000|1|(0*0x0020), ((void*)(long int)(0)), 0, ctimeFunc, 0, "current_time", {0} },
    {0, 0x2000|1|(0*0x0020), ((void*)(long int)(0)), 0, ctimestampFunc, 0, "current_timestamp", {0} },
    {0, 0x2000|1|(0*0x0020), ((void*)(long int)(0)), 0, cdateFunc, 0, "current_date", {0} },





  };
  sqlite3InsertBuiltinFuncs(aDateTimeFuncs, ((int)(sizeof(aDateTimeFuncs)/sizeof(aDateTimeFuncs[0]))));
}
# 17961 "sqlite3.c"
static int sqlite3OsClose(sqlite3_file *pId)
{

  int rc = 0;
  if( pId->pMethods )
{

    rc = pId->pMethods->xClose(pId);
    pId->pMethods = 0;
  }
  return rc;
}
static int sqlite3OsRead(sqlite3_file *id, void *pBuf, int amt, i64 offset)
{

  ;
  return id->pMethods->xRead(id, pBuf, amt, offset);
}
static int sqlite3OsWrite(sqlite3_file *id, const void *pBuf, int amt, i64 offset)
{

  ;
  return id->pMethods->xWrite(id, pBuf, amt, offset);
}
static int sqlite3OsTruncate(sqlite3_file *id, i64 size)
{

  return id->pMethods->xTruncate(id, size);
}
static int sqlite3OsSync(sqlite3_file *id, int flags)
{

  ;
  return id->pMethods->xSync(id, flags);
}
static int sqlite3OsFileSize(sqlite3_file *id, i64 *pSize)
{

  ;
  return id->pMethods->xFileSize(id, pSize);
}
static int sqlite3OsLock(sqlite3_file *id, int lockType)
{

  ;
  return id->pMethods->xLock(id, lockType);
}
static int sqlite3OsUnlock(sqlite3_file *id, int lockType)
{

  return id->pMethods->xUnlock(id, lockType);
}
static int sqlite3OsCheckReservedLock(sqlite3_file *id, int *pResOut)
{

  ;
  return id->pMethods->xCheckReservedLock(id, pResOut);
}
# 18008 "sqlite3.c"
static int sqlite3OsFileControl(sqlite3_file *id, int op, void *pArg)
{

# 18024 "sqlite3.c"
  return id->pMethods->xFileControl(id, op, pArg);
}
static void sqlite3OsFileControlHint(sqlite3_file *id, int op, void *pArg)
{

  (void)id->pMethods->xFileControl(id, op, pArg);
}

static int sqlite3OsSectorSize(sqlite3_file *id)
{

  int (*xSectorSize)(sqlite3_file*) = id->pMethods->xSectorSize;
  return (xSectorSize ? xSectorSize(id) : 4096);
}
static int sqlite3OsDeviceCharacteristics(sqlite3_file *id)
{

  return id->pMethods->xDeviceCharacteristics(id);
}
static int sqlite3OsShmLock(sqlite3_file *id, int offset, int n, int flags)
{

  return id->pMethods->xShmLock(id, offset, n, flags);
}
static void sqlite3OsShmBarrier(sqlite3_file *id)
{

  id->pMethods->xShmBarrier(id);
}
static int sqlite3OsShmUnmap(sqlite3_file *id, int deleteFlag)
{

  return id->pMethods->xShmUnmap(id, deleteFlag);
}
static int sqlite3OsShmMap(
  sqlite3_file *id,
  int iPage,
  int pgsz,
  int bExtend,
  void volatile **pp
)
{

  ;
  return id->pMethods->xShmMap(id, iPage, pgsz, bExtend, pp);
}



static int sqlite3OsFetch(sqlite3_file *id, i64 iOff, int iAmt, void **pp)
{

  ;
  return id->pMethods->xFetch(id, iOff, iAmt, pp);
}
static int sqlite3OsUnfetch(sqlite3_file *id, i64 iOff, void *p)
{

  return id->pMethods->xUnfetch(id, iOff, p);
}
# 18081 "sqlite3.c"
static int sqlite3OsOpen(
  sqlite3_vfs *pVfs,
  const char *zPath,
  sqlite3_file *pFile,
  int flags,
  int *pFlagsOut
)
{

  int rc;
  ;




  rc = pVfs->xOpen(pVfs, zPath, pFile, flags & 0x87f7f, pFlagsOut);
  ((void) (0));
  return rc;
}
static int sqlite3OsDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
{

  ;
  ((void) (0));
  return pVfs->xDelete(pVfs, zPath, dirSync);
}
static int sqlite3OsAccess(
  sqlite3_vfs *pVfs,
  const char *zPath,
  int flags,
  int *pResOut
)
{

  ;
  return pVfs->xAccess(pVfs, zPath, flags, pResOut);
}
static int sqlite3OsFullPathname(
  sqlite3_vfs *pVfs,
  const char *zPath,
  int nPathOut,
  char *zPathOut
)
{

  ;
  zPathOut[0] = 0;
  return pVfs->xFullPathname(pVfs, zPath, nPathOut, zPathOut);
}

static void *sqlite3OsDlOpen(sqlite3_vfs *pVfs, const char *zPath)
{

  return pVfs->xDlOpen(pVfs, zPath);
}
static void sqlite3OsDlError(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
{

  pVfs->xDlError(pVfs, nByte, zBufOut);
}
static void (*sqlite3OsDlSym(sqlite3_vfs *pVfs, void *pHdle, const char *zSym))(void)
{

  return pVfs->xDlSym(pVfs, pHdle, zSym);
}
static void sqlite3OsDlClose(sqlite3_vfs *pVfs, void *pHandle)
{

  pVfs->xDlClose(pVfs, pHandle);
}

static int sqlite3OsRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
{

  return pVfs->xRandomness(pVfs, nByte, zBufOut);
}
static int sqlite3OsSleep(sqlite3_vfs *pVfs, int nMicro)
{

  return pVfs->xSleep(pVfs, nMicro);
}
static int sqlite3OsGetLastError(sqlite3_vfs *pVfs)
{

  return pVfs->xGetLastError ? pVfs->xGetLastError(pVfs, 0, 0) : 0;
}
static int sqlite3OsCurrentTimeInt64(sqlite3_vfs *pVfs, sqlite3_int64 *pTimeOut)
{

  int rc;






  if( pVfs->iVersion>=2 && pVfs->xCurrentTimeInt64 )
{

    rc = pVfs->xCurrentTimeInt64(pVfs, pTimeOut);
  }else{
    double r;
    rc = pVfs->xCurrentTime(pVfs, &r);
    *pTimeOut = (sqlite3_int64)(r*86400000.0);
  }
  return rc;
}

static int sqlite3OsOpenMalloc(
  sqlite3_vfs *pVfs,
  const char *zFile,
  sqlite3_file **ppFile,
  int flags,
  int *pOutFlags
)
{

  int rc;
  sqlite3_file *pFile;
  pFile = (sqlite3_file *)sqlite3MallocZero(pVfs->szOsFile);
  if( pFile )
{

    rc = sqlite3OsOpen(pVfs, zFile, pFile, flags, pOutFlags);
    if( rc!=0 )
{

      sqlite3_free(pFile);
    }else{
      *ppFile = pFile;
    }
  }else{
    rc = 7;
  }
  return rc;
}
static int sqlite3OsCloseFree(sqlite3_file *pFile)
{

  int rc = 0;
  ((void) (0));
  rc = sqlite3OsClose(pFile);
  sqlite3_free(pFile);
  return rc;
}







static int sqlite3OsInit(void)
{

  void *p = sqlite3_malloc(10);
  if( p==0 ) return 7;
  sqlite3_free(p);
  return sqlite3_os_init();
}




static sqlite3_vfs * vfsList = 0;






 sqlite3_vfs * sqlite3_vfs_find(const char *zVfs)
{

  sqlite3_vfs *pVfs = 0;

  sqlite3_mutex *mutex;


  int rc = sqlite3_initialize();
  if( rc ) return 0;


  mutex = sqlite3MutexAlloc(2);

  sqlite3_mutex_enter(mutex);
  for(pVfs = vfsList; pVfs; pVfs=pVfs->pNext)
{

    if( zVfs==0 ) break;
    if( strcmp(zVfs, pVfs->zName)==0 ) break;
  }
  sqlite3_mutex_leave(mutex);
  return pVfs;
}




static void vfsUnlink(sqlite3_vfs *pVfs)
{

  ((void) (0));
  if( pVfs==0 )
{


  }else if( vfsList==pVfs )
{

    vfsList = pVfs->pNext;
  }else if( vfsList )
{

    sqlite3_vfs *p = vfsList;
    while( p->pNext && p->pNext!=pVfs )
{

      p = p->pNext;
    }
    if( p->pNext==pVfs )
{

      p->pNext = pVfs->pNext;
    }
  }
}






 int sqlite3_vfs_register(sqlite3_vfs *pVfs, int makeDflt)
{

  sqlite3_mutex *mutex;

  int rc = sqlite3_initialize();
  if( rc ) return rc;





  mutex = sqlite3MutexAlloc(2);
  sqlite3_mutex_enter(mutex);
  vfsUnlink(pVfs);
  if( makeDflt || vfsList==0 )
{

    pVfs->pNext = vfsList;
    vfsList = pVfs;
  }else{
    pVfs->pNext = vfsList->pNext;
    vfsList->pNext = pVfs;
  }
  ((void) (0));
  sqlite3_mutex_leave(mutex);
  return 0;
}




 int sqlite3_vfs_unregister(sqlite3_vfs *pVfs)
{


  sqlite3_mutex *mutex = sqlite3MutexAlloc(2);

  sqlite3_mutex_enter(mutex);
  vfsUnlink(pVfs);
  sqlite3_mutex_leave(mutex);
  return 0;
}
# 18335 "sqlite3.c"
typedef struct BenignMallocHooks BenignMallocHooks;
static struct BenignMallocHooks {
  void (*xBenignBegin)(void);
  void (*xBenignEnd)(void);
} sqlite3Hooks = { 0, 0 };
# 18361 "sqlite3.c"
static void sqlite3BenignMallocHooks(
  void (*xBenignBegin)(void),
  void (*xBenignEnd)(void)
)
{

  ;
  sqlite3Hooks.xBenignBegin = xBenignBegin;
  sqlite3Hooks.xBenignEnd = xBenignEnd;
}






static void sqlite3BeginBenignMalloc(void)
{

  ;
  if( sqlite3Hooks.xBenignBegin )
{

    sqlite3Hooks.xBenignBegin();
  }
}
static void sqlite3EndBenignMalloc(void)
{

  ;
  if( sqlite3Hooks.xBenignEnd )
{

    sqlite3Hooks.xBenignEnd();
  }
}
# 18579 "sqlite3.c"
static void *sqlite3MemMalloc(int nByte)
{

# 18588 "sqlite3.c"
  sqlite3_int64 *p;
  ((void) (0));
  nByte = (((nByte)+7)&~7);
  p = malloc(nByte+8);
  if( p )
{

    p[0] = nByte;
    p++;
  }else{
    ;
    sqlite3_log(7, "failed to allocate %u bytes of memory", nByte);
  }
  return (void *)p;

}
# 18611 "sqlite3.c"
static void sqlite3MemFree(void *pPrior)
{




  sqlite3_int64 *p = (sqlite3_int64*)pPrior;
  ((void) (0));
  p--;
  free(p);

}





static int sqlite3MemSize(void *pPrior)
{





  sqlite3_int64 *p;
  ((void) (0));
  p = (sqlite3_int64*)pPrior;
  p--;
  return (int)p[0];

}
# 18649 "sqlite3.c"
static void *sqlite3MemRealloc(void *pPrior, int nByte)
{

# 18660 "sqlite3.c"
  sqlite3_int64 *p = (sqlite3_int64*)pPrior;
  ((void) (0));
  ((void) (0));
  p--;
  p = realloc((p),(nByte+8));
  if( p )
{

    p[0] = nByte;
    p++;
  }else{
    ;
    sqlite3_log(7,
      "failed memory resize %u to %u bytes",
      sqlite3MemSize(pPrior), nByte);
  }
  return (void*)p;

}




static int sqlite3MemRoundup(int n)
{

  return (((n)+7)&~7);
}




static int sqlite3MemInit(void *NotUsed)
{

# 18717 "sqlite3.c"
  (void)(NotUsed);
  return 0;
}




static void sqlite3MemShutdown(void *NotUsed)
{

  (void)(NotUsed);
  return;
}







static void sqlite3MemSetDefault(void)
{

  static const sqlite3_mem_methods defaultMethods = {
     sqlite3MemMalloc,
     sqlite3MemFree,
     sqlite3MemRealloc,
     sqlite3MemSize,
     sqlite3MemRoundup,
     sqlite3MemInit,
     sqlite3MemShutdown,
     0
  };
  sqlite3_config(4, &defaultMethods);
}
# 20584 "sqlite3.c"
static int sqlite3MutexInit(void)
{

  int rc = 0;
  if( !sqlite3Config.mutex.xMutexAlloc )
{






    sqlite3_mutex_methods const *pFrom;
    sqlite3_mutex_methods *pTo = &sqlite3Config.mutex;

    if( sqlite3Config.bCoreMutex )
{

      pFrom = sqlite3DefaultMutex();
    }else{
      pFrom = sqlite3NoopMutex();
    }
    pTo->xMutexInit = pFrom->xMutexInit;
    pTo->xMutexEnd = pFrom->xMutexEnd;
    pTo->xMutexFree = pFrom->xMutexFree;
    pTo->xMutexEnter = pFrom->xMutexEnter;
    pTo->xMutexTry = pFrom->xMutexTry;
    pTo->xMutexLeave = pFrom->xMutexLeave;
    pTo->xMutexHeld = pFrom->xMutexHeld;
    pTo->xMutexNotheld = pFrom->xMutexNotheld;
    sqlite3MemoryBarrier();
    pTo->xMutexAlloc = pFrom->xMutexAlloc;
  }
  ((void) (0));
  rc = sqlite3Config.mutex.xMutexInit();





  return rc;
}





static int sqlite3MutexEnd(void)
{

  int rc = 0;
  if( sqlite3Config.mutex.xMutexEnd )
{

    rc = sqlite3Config.mutex.xMutexEnd();
  }





  return rc;
}




 sqlite3_mutex * sqlite3_mutex_alloc(int id)
{


  if( id<=1 && sqlite3_initialize() ) return 0;
  if( id>1 && sqlite3MutexInit() ) return 0;

  ((void) (0));
  return sqlite3Config.mutex.xMutexAlloc(id);
}

static sqlite3_mutex *sqlite3MutexAlloc(int id)
{

  if( !sqlite3Config.bCoreMutex )
{

    return 0;
  }
  ((void) (0));
  ((void) (0));
  return sqlite3Config.mutex.xMutexAlloc(id);
}




 void sqlite3_mutex_free(sqlite3_mutex *p)
{

  if( p )
{

    ((void) (0));
    sqlite3Config.mutex.xMutexFree(p);
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





 int sqlite3_mutex_try(sqlite3_mutex *p)
{

  int rc = 0;
  if( p )
{

    ((void) (0));
    return sqlite3Config.mutex.xMutexTry(p);
  }
  return rc;
}







 void sqlite3_mutex_leave(sqlite3_mutex *p)
{

  if( p )
{

    ((void) (0));
    sqlite3Config.mutex.xMutexLeave(p);
  }
}
# 20762 "sqlite3.c"
static int noopMutexInit(void)
{
 return 0; }
static int noopMutexEnd(void)
{
 return 0; }
static sqlite3_mutex *noopMutexAlloc(int id)
{

  (void)(id);
  return (sqlite3_mutex*)8;
}
static void noopMutexFree(sqlite3_mutex *p)
{
 (void)(p); return; }
static void noopMutexEnter(sqlite3_mutex *p)
{
 (void)(p); return; }
static int noopMutexTry(sqlite3_mutex *p)
{

  (void)(p);
  return 0;
}
static void noopMutexLeave(sqlite3_mutex *p)
{
 (void)(p); return; }

static sqlite3_mutex_methods const *sqlite3NoopMutex(void)
{

  static const sqlite3_mutex_methods sMutex = {
    noopMutexInit,
    noopMutexEnd,
    noopMutexAlloc,
    noopMutexFree,
    noopMutexEnter,
    noopMutexTry,
    noopMutexLeave,

    0,
    0,
  };

  return &sMutex;
}
# 20967 "sqlite3.c"
# 1 "/usr/include/pthread.h" 1 3 4
# 23 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 28 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 29 "/usr/include/sched.h" 2 3 4
# 43 "/usr/include/sched.h" 3 4
# 1 "/usr/include/bits/sched.h" 1 3 4
# 72 "/usr/include/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };





extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) __attribute__ ((__nothrow__ , __leaf__));


extern int unshare (int __flags) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getcpu (void) __attribute__ ((__nothrow__ , __leaf__));


extern int setns (int __fd, int __nstype) __attribute__ ((__nothrow__ , __leaf__));











struct __sched_param
  {
    int __sched_priority;
  };
# 118 "/usr/include/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 201 "/usr/include/bits/sched.h" 3 4


extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  __attribute__ ((__nothrow__ , __leaf__));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__ , __leaf__));


# 44 "/usr/include/sched.h" 2 3 4







extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_yield (void) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__ , __leaf__));
# 118 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));



# 24 "/usr/include/pthread.h" 2 3 4



# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 26 "/usr/include/bits/setjmp.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 28 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 114 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 155 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 190 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 228 "/usr/include/pthread.h" 3 4





extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) __attribute__ ((__nothrow__ , __leaf__));







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) __attribute__ ((__nothrow__ , __leaf__));



extern pthread_t pthread_self (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int pthread_getconcurrency (void) __attribute__ ((__nothrow__ , __leaf__));


extern int pthread_setconcurrency (int __level) __attribute__ ((__nothrow__ , __leaf__));







extern int pthread_yield (void) __attribute__ ((__nothrow__ , __leaf__));




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 494 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 506 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 540 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
# 680 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     ;
# 692 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  ;
# 715 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel_defer (__pthread_unwind_buf_t *__buf)
     ;
# 728 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel_restore (__pthread_unwind_buf_t *__buf)
  ;



extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__noreturn__))

     __attribute__ ((__weak__))

     ;



struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) __attribute__ ((__nothrow__));





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 806 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,
        int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 888 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 1000 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1044 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1111 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern void *pthread_getspecific (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 1145 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) __attribute__ ((__nothrow__ , __leaf__));
# 1159 "/usr/include/pthread.h" 3 4

# 20968 "sqlite3.c" 2
# 20983 "sqlite3.c"
struct sqlite3_mutex {
  pthread_mutex_t mutex;
# 20993 "sqlite3.c"
};
# 21032 "sqlite3.c"
static void sqlite3MemoryBarrier(void)
{




  __sync_synchronize();

}




static int pthreadMutexInit(void)
{
 return 0; }
static int pthreadMutexEnd(void)
{
 return 0; }
# 21094 "sqlite3.c"
static sqlite3_mutex *pthreadMutexAlloc(int iType)
{

  static sqlite3_mutex staticMutexes[] = {
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } },
    { { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } } }
  };
  sqlite3_mutex *p;
  switch( iType )
{

    case 1: {
      p = sqlite3MallocZero( sizeof(*p) );
      if( p )
{







        pthread_mutexattr_t recursiveAttr;
        pthread_mutexattr_init(&recursiveAttr);
        pthread_mutexattr_settype(&recursiveAttr, PTHREAD_MUTEX_RECURSIVE);
        pthread_mutex_init(&p->mutex, &recursiveAttr);
        pthread_mutexattr_destroy(&recursiveAttr);

      }
      break;
    }
    case 0: {
      p = sqlite3MallocZero( sizeof(*p) );
      if( p )
{

        pthread_mutex_init(&p->mutex, 0);
      }
      break;
    }
    default: {






      p = &staticMutexes[iType-2];
      break;
    }
  }



  return p;
}







static void pthreadMutexFree(sqlite3_mutex *p)
{

  ((void) (0));



  {
    pthread_mutex_destroy(&p->mutex);
    sqlite3_free(p);
  }





}
# 21186 "sqlite3.c"
static void pthreadMutexEnter(sqlite3_mutex *p)
{

  ((void) (0));
# 21214 "sqlite3.c"
  pthread_mutex_lock(&p->mutex);
# 21227 "sqlite3.c"
}
static int pthreadMutexTry(sqlite3_mutex *p)
{

  int rc;
  ((void) (0));
# 21260 "sqlite3.c"
  if( pthread_mutex_trylock(&p->mutex)==0 )
{





    rc = 0;
  }else{
    rc = 5;
  }







  return rc;
}







static void pthreadMutexLeave(sqlite3_mutex *p)
{

  ((void) (0));




  ((void) (0));






  pthread_mutex_unlock(&p->mutex);







}

static sqlite3_mutex_methods const *sqlite3DefaultMutex(void)
{

  static const sqlite3_mutex_methods sMutex = {
    pthreadMutexInit,
    pthreadMutexEnd,
    pthreadMutexAlloc,
    pthreadMutexFree,
    pthreadMutexEnter,
    pthreadMutexTry,
    pthreadMutexLeave,




    0,
    0

  };

  return &sMutex;
}
# 22048 "sqlite3.c"
 int sqlite3_release_memory(int n)
{







  (void)(n);
  return 0;

}





typedef struct ScratchFreeslot {
  struct ScratchFreeslot *pNext;
} ScratchFreeslot;




static struct Mem0Global {
  sqlite3_mutex *mutex;
  sqlite3_int64 alarmThreshold;







  void *pScratchEnd;
  ScratchFreeslot *pScratchFree;
  u32 nScratchFree;





  int nearlyFull;
} mem0 = { 0, 0, 0, 0, 0, 0 };






static sqlite3_mutex *sqlite3MallocMutex(void)
{

  return mem0.mutex;
}







 int sqlite3_memory_alarm(
  void(*xCallback)(void *pArg, sqlite3_int64 used,int N),
  void *pArg,
  sqlite3_int64 iThreshold
)
{

  (void)xCallback;
  (void)pArg;
  (void)iThreshold;
  return 0;
}






 sqlite3_int64 sqlite3_soft_heap_limit64(sqlite3_int64 n)
{

  sqlite3_int64 priorLimit;
  sqlite3_int64 excess;
  sqlite3_int64 nUsed;

  int rc = sqlite3_initialize();
  if( rc ) return -1;

  sqlite3_mutex_enter(mem0.mutex);
  priorLimit = mem0.alarmThreshold;
  if( n<0 )
{

    sqlite3_mutex_leave(mem0.mutex);
    return priorLimit;
  }
  mem0.alarmThreshold = n;
  nUsed = sqlite3StatusValue(0);
  mem0.nearlyFull = (n>0 && n<=nUsed);
  sqlite3_mutex_leave(mem0.mutex);
  excess = sqlite3_memory_used() - n;
  if( excess>0 ) sqlite3_release_memory((int)(excess & 0x7fffffff));
  return priorLimit;
}
 void sqlite3_soft_heap_limit(int n)
{

  if( n<0 ) n = 0;
  sqlite3_soft_heap_limit64(n);
}




static int sqlite3MallocInit(void)
{

  int rc;
  if( sqlite3Config.m.xMalloc==0 )
{

    sqlite3MemSetDefault();
  }
  memset(&mem0, 0, sizeof(mem0));
  mem0.mutex = sqlite3MutexAlloc(3);
  if( sqlite3Config.pScratch && sqlite3Config.szScratch>=100
      && sqlite3Config.nScratch>0 )
{

    int i, n, sz;
    ScratchFreeslot *pSlot;
    sz = ((sqlite3Config.szScratch)&~7);
    sqlite3Config.szScratch = sz;
    pSlot = (ScratchFreeslot*)sqlite3Config.pScratch;
    n = sqlite3Config.nScratch;
    mem0.pScratchFree = pSlot;
    mem0.nScratchFree = n;
    for(i=0; i<n-1; i++)
{

      pSlot->pNext = (ScratchFreeslot*)(sz+(char*)pSlot);
      pSlot = pSlot->pNext;
    }
    pSlot->pNext = 0;
    mem0.pScratchEnd = (void*)&pSlot[1];
  }else{
    mem0.pScratchEnd = 0;
    sqlite3Config.pScratch = 0;
    sqlite3Config.szScratch = 0;
    sqlite3Config.nScratch = 0;
  }
  if( sqlite3Config.pPage==0 || sqlite3Config.szPage<512
      || sqlite3Config.nPage<=0 )
{

    sqlite3Config.pPage = 0;
    sqlite3Config.szPage = 0;
  }
  rc = sqlite3Config.m.xInit(sqlite3Config.m.pAppData);
  if( rc!=0 ) memset(&mem0, 0, sizeof(mem0));
  return rc;
}






static int sqlite3HeapNearlyFull(void)
{

  return mem0.nearlyFull;
}




static void sqlite3MallocEnd(void)
{

  if( sqlite3Config.m.xShutdown )
{

    sqlite3Config.m.xShutdown(sqlite3Config.m.pAppData);
  }
  memset(&mem0, 0, sizeof(mem0));
}




 sqlite3_int64 sqlite3_memory_used(void)
{

  sqlite3_int64 res, mx;
  sqlite3_status64(0, &res, &mx, 0);
  return res;
}






 sqlite3_int64 sqlite3_memory_highwater(int resetFlag)
{

  sqlite3_int64 res, mx;
  sqlite3_status64(0, &res, &mx, resetFlag);
  return mx;
}




static void sqlite3MallocAlarm(int nByte)
{

  if( mem0.alarmThreshold<=0 ) return;
  sqlite3_mutex_leave(mem0.mutex);
  sqlite3_release_memory(nByte);
  sqlite3_mutex_enter(mem0.mutex);
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






 void * sqlite3_malloc(int n)
{


  if( sqlite3_initialize() ) return 0;

  return n<=0 ? 0 : sqlite3Malloc(n);
}
 void * sqlite3_malloc64(sqlite3_uint64 n)
{


  if( sqlite3_initialize() ) return 0;

  return sqlite3Malloc(n);
}
# 22337 "sqlite3.c"
static void *sqlite3ScratchMalloc(int n)
{

  void *p;
  ((void) (0));

  sqlite3_mutex_enter(mem0.mutex);
  sqlite3StatusHighwater(8, n);
  if( mem0.nScratchFree && sqlite3Config.szScratch>=n )
{

    p = mem0.pScratchFree;
    mem0.pScratchFree = mem0.pScratchFree->pNext;
    mem0.nScratchFree--;
    sqlite3StatusUp(3, 1);
    sqlite3_mutex_leave(mem0.mutex);
  }else{
    sqlite3_mutex_leave(mem0.mutex);
    p = sqlite3Malloc(n);
    if( sqlite3Config.bMemstat && p )
{

      sqlite3_mutex_enter(mem0.mutex);
      sqlite3StatusUp(4, sqlite3MallocSize(p));
      sqlite3_mutex_leave(mem0.mutex);
    }
    ;
  }
  ((void) (0));
# 22372 "sqlite3.c"
  return p;
}
static void sqlite3ScratchFree(void *p)
{

  if( p )
{

# 22386 "sqlite3.c"
    if( (((uptr)(p)>=(uptr)(sqlite3Config.pScratch))&&((uptr)(p)<(uptr)(mem0.pScratchEnd))) )
{


      ScratchFreeslot *pSlot;
      pSlot = (ScratchFreeslot*)p;
      sqlite3_mutex_enter(mem0.mutex);
      pSlot->pNext = mem0.pScratchFree;
      mem0.pScratchFree = pSlot;
      mem0.nScratchFree++;
      ((void) (0));
      sqlite3StatusDown(3, 1);
      sqlite3_mutex_leave(mem0.mutex);
    }else{

      ((void) (0));
      ((void) (0));
      ;
      if( sqlite3Config.bMemstat )
{

        int iSize = sqlite3MallocSize(p);
        sqlite3_mutex_enter(mem0.mutex);
        sqlite3StatusDown(4, iSize);
        sqlite3StatusDown(0, iSize);
        sqlite3StatusDown(9, 1);
        sqlite3Config.m.xFree(p);
        sqlite3_mutex_leave(mem0.mutex);
      }else{
        sqlite3Config.m.xFree(p);
      }
    }
  }
}





static int isLookaside(sqlite3 *db, void *p)
{

  return (((uptr)(p)>=(uptr)(db->lookaside.pStart))&&((uptr)(p)<(uptr)(db->lookaside.pEnd)));
}
# 22432 "sqlite3.c"
static int sqlite3MallocSize(void *p)
{

  ((void) (0));
  return sqlite3Config.m.xSize(p);
}
static int sqlite3DbMallocSize(sqlite3 *db, void *p)
{

  ((void) (0));
  if( db==0 || !isLookaside(db,p) )
{

# 22448 "sqlite3.c"
    return sqlite3Config.m.xSize(p);
  }else{
    ((void) (0));
    return db->lookaside.sz;
  }
}
 sqlite3_uint64 sqlite3_msize(void *p)
{

  ((void) (0));
  ((void) (0));
  return p ? sqlite3Config.m.xSize(p) : 0;
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





static __attribute__((noinline)) void measureAllocationSize(sqlite3 *db, void *p)
{

  *db->pnBytesFreed += sqlite3DbMallocSize(db,p);
}





static void sqlite3DbFree(sqlite3 *db, void *p)
{

  ((void) (0));
  if( p==0 ) return;
  if( db )
{

    if( db->pnBytesFreed )
{

      measureAllocationSize(db, p);
      return;
    }
    if( isLookaside(db, p) )
{

      LookasideSlot *pBuf = (LookasideSlot*)p;




      pBuf->pNext = db->lookaside.pFree;
      db->lookaside.pFree = pBuf;
      db->lookaside.nOut--;
      return;
    }
  }
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ;
  sqlite3_free(p);
}




static void *sqlite3Realloc(void *pOld, u64 nBytes)
{

  int nOld, nNew, nDiff;
  void *pNew;
  ((void) (0));
  ((void) (0));
  if( pOld==0 )
{

    return sqlite3Malloc(nBytes);
  }
  if( nBytes==0 )
{

    sqlite3_free(pOld);
    return 0;
  }
  if( nBytes>=0x7fffff00 )
{


    return 0;
  }
  nOld = sqlite3MallocSize(pOld);



  nNew = sqlite3Config.m.xRoundup((int)nBytes);
  if( nOld==nNew )
{

    pNew = pOld;
  }else if( sqlite3Config.bMemstat )
{

    sqlite3_mutex_enter(mem0.mutex);
    sqlite3StatusHighwater(5, (int)nBytes);
    nDiff = nNew - nOld;
    if( sqlite3StatusValue(0) >=
          mem0.alarmThreshold-nDiff )
{

      sqlite3MallocAlarm(nDiff);
    }
    pNew = sqlite3Config.m.xRealloc(pOld, nNew);
    if( pNew==0 && mem0.alarmThreshold>0 )
{

      sqlite3MallocAlarm((int)nBytes);
      pNew = sqlite3Config.m.xRealloc(pOld, nNew);
    }
    if( pNew )
{

      nNew = sqlite3MallocSize(pNew);
      sqlite3StatusUp(0, nNew-nOld);
    }
    sqlite3_mutex_leave(mem0.mutex);
  }else{
    pNew = sqlite3Config.m.xRealloc(pOld, nNew);
  }
  ((void) (0));
  return pNew;
}





 void * sqlite3_realloc(void *pOld, int n)
{


  if( sqlite3_initialize() ) return 0;

  if( n<0 ) n = 0;
  return sqlite3Realloc(pOld, n);
}
 void * sqlite3_realloc64(void *pOld, sqlite3_uint64 n)
{


  if( sqlite3_initialize() ) return 0;

  return sqlite3Realloc(pOld, n);
}





static void *sqlite3MallocZero(u64 n)
{

  void *p = sqlite3Malloc(n);
  if( p )
{

    memset(p, 0, (size_t)n);
  }
  return p;
}





static void *sqlite3DbMallocZero(sqlite3 *db, u64 n)
{

  void *p;
  ;
  p = sqlite3DbMallocRaw(db, n);
  if( p ) memset(p, 0, (size_t)n);
  return p;
}





static __attribute__((noinline)) void *dbMallocRawFinish(sqlite3 *db, u64 n)
{

  void *p;
  ((void) (0));
  p = sqlite3Malloc(n);
  if( !p ) sqlite3OomFault(db);
 
                                                                        ;
  return p;
}
# 22646 "sqlite3.c"
static void *sqlite3DbMallocRaw(sqlite3 *db, u64 n)
{

  void *p;
  if( db ) return sqlite3DbMallocRawNN(db, n);
  p = sqlite3Malloc(n);
  ;
  return p;
}
static void *sqlite3DbMallocRawNN(sqlite3 *db, u64 n)
{


  LookasideSlot *pBuf;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( db->lookaside.bDisable==0 )
{

    ((void) (0));
    if( n>db->lookaside.sz )
{

      db->lookaside.anStat[1]++;
    }else if( (pBuf = db->lookaside.pFree)==0 )
{

      db->lookaside.anStat[2]++;
    }else{
      db->lookaside.pFree = pBuf->pNext;
      db->lookaside.nOut++;
      db->lookaside.anStat[0]++;
      if( db->lookaside.nOut>db->lookaside.mxOut )
{

        db->lookaside.mxOut = db->lookaside.nOut;
      }
      return (void*)pBuf;
    }
  }else if( db->mallocFailed )
{

    return 0;
  }
# 22685 "sqlite3.c"
  return dbMallocRawFinish(db, n);
}


static __attribute__((noinline)) void *dbReallocFinish(sqlite3 *db, void *p, u64 n);





static void *sqlite3DbRealloc(sqlite3 *db, void *p, u64 n)
{

  ((void) (0));
  if( p==0 ) return sqlite3DbMallocRawNN(db, n);
  ((void) (0));
  if( isLookaside(db,p) && n<=db->lookaside.sz ) return p;
  return dbReallocFinish(db, p, n);
}
static __attribute__((noinline)) void *dbReallocFinish(sqlite3 *db, void *p, u64 n)
{

  void *pNew = 0;
  ((void) (0));
  ((void) (0));
  if( db->mallocFailed==0 )
{

    if( isLookaside(db, p) )
{

      pNew = sqlite3DbMallocRawNN(db, n);
      if( pNew )
{

        memcpy(pNew, p, db->lookaside.sz);
        sqlite3DbFree(db, p);
      }
    }else{
      ((void) (0));
      ((void) (0));
      ;
      pNew = sqlite3_realloc64(p, n);
      if( !pNew )
{

        sqlite3OomFault(db);
      }
     
                                                                           ;
    }
  }
  return pNew;
}





static void *sqlite3DbReallocOrFree(sqlite3 *db, void *p, u64 n)
{

  void *pNew;
  pNew = sqlite3DbRealloc(db, p, n);
  if( !pNew )
{

    sqlite3DbFree(db, p);
  }
  return pNew;
}
# 22748 "sqlite3.c"
static char *sqlite3DbStrDup(sqlite3 *db, const char *z)
{

  char *zNew;
  size_t n;
  if( z==0 )
{

    return 0;
  }
  n = sqlite3Strlen30(z) + 1;
  ((void) (0));
  zNew = sqlite3DbMallocRaw(db, (int)n);
  if( zNew )
{

    memcpy(zNew, z, n);
  }
  return zNew;
}
static char *sqlite3DbStrNDup(sqlite3 *db, const char *z, u64 n)
{

  char *zNew;
  ((void) (0));
  if( z==0 )
{

    return 0;
  }
  ((void) (0));
  zNew = sqlite3DbMallocRawNN(db, n+1);
  if( zNew )
{

    memcpy(zNew, z, (size_t)n);
    zNew[n] = 0;
  }
  return zNew;
}




static void sqlite3SetString(char **pz, sqlite3 *db, const char *zNew)
{

  sqlite3DbFree(db, *pz);
  *pz = sqlite3DbStrDup(db, zNew);
}







static void sqlite3OomFault(sqlite3 *db)
{

  if( db->mallocFailed==0 && db->bBenignMalloc==0 )
{

    db->mallocFailed = 1;
    if( db->nVdbeExec>0 )
{

      db->u1.isInterrupted = 1;
    }
    db->lookaside.bDisable++;
  }
}
# 22808 "sqlite3.c"
static void sqlite3OomClear(sqlite3 *db)
{

  if( db->mallocFailed && db->nVdbeExec==0 )
{

    db->mallocFailed = 0;
    db->u1.isInterrupted = 0;
    ((void) (0));
    db->lookaside.bDisable--;
  }
}




static __attribute__((noinline)) int apiOomError(sqlite3 *db)
{

  sqlite3OomClear(db);
  sqlite3Error(db, 7);
  return 7;
}
# 22838 "sqlite3.c"
static int sqlite3ApiExit(sqlite3* db, int rc)
{





  ((void) (0));
  ((void) (0));
  if( db->mallocFailed || rc==(10 | (12<<8)) )
{

    return apiOomError(db);
  }
  return rc & db->errMask;
}
# 22895 "sqlite3.c"
typedef unsigned char etByte;





typedef struct et_info {
  char fmttype;
  etByte base;
  etByte flags;
  etByte type;
  etByte charset;
  etByte prefix;
} et_info;
# 22922 "sqlite3.c"
static const char aDigits[] = "0123456789ABCDEF0123456789abcdef";
static const char aPrefix[] = "-x0\000X0";
static const et_info fmtinfo[] = {
  { 'd', 10, 1, 1, 0, 0 },
  { 's', 0, 4, 6, 0, 0 },
  { 'g', 0, 1, 4, 30, 0 },
  { 'z', 0, 4, 7, 0, 0 },
  { 'q', 0, 4, 10, 0, 0 },
  { 'Q', 0, 4, 11, 0, 0 },
  { 'w', 0, 4, 15, 0, 0 },
  { 'c', 0, 0, 9, 0, 0 },
  { 'o', 8, 0, 1, 0, 2 },
  { 'u', 10, 0, 1, 0, 0 },
  { 'x', 16, 0, 1, 16, 1 },
  { 'X', 16, 0, 1, 0, 4 },

  { 'f', 0, 1, 2, 0, 0 },
  { 'e', 0, 1, 3, 30, 0 },
  { 'E', 0, 1, 3, 14, 0 },
  { 'G', 0, 1, 4, 14, 0 },

  { 'i', 10, 1, 1, 0, 0 },
  { 'n', 0, 0, 5, 0, 0 },
  { '%', 0, 0, 8, 0, 0 },
  { 'p', 16, 0, 14, 0, 1 },



  { 'T', 0, 2, 12, 0, 0 },
  { 'S', 0, 2, 13, 0, 0 },
  { 'r', 10, 3, 16, 0, 0 },
};
# 22973 "sqlite3.c"
static char et_getdigit(long double *val, int *cnt)
{

  int digit;
  long double d;
  if( (*cnt)<=0 ) return '0';
  (*cnt)--;
  digit = (int)*val;
  d = digit;
  digit += '0';
  *val = (*val - d)*10.0;
  return (char)digit;
}





static void setStrAccumError(StrAccum *p, u8 eError)
{

  ((void) (0));
  p->accError = eError;
  p->nAlloc = 0;
}




static sqlite3_int64 getIntArg(PrintfArguments *p)
{

  if( p->nArg<=p->nUsed ) return 0;
  return sqlite3_value_int64(p->apArg[p->nUsed++]);
}
static double getDoubleArg(PrintfArguments *p)
{

  if( p->nArg<=p->nUsed ) return 0.0;
  return sqlite3_value_double(p->apArg[p->nUsed++]);
}
static char *getTextArg(PrintfArguments *p)
{

  if( p->nArg<=p->nUsed ) return 0;
  return (char*)sqlite3_value_text(p->apArg[p->nUsed++]);
}
# 23024 "sqlite3.c"
static void sqlite3VXPrintf(
  StrAccum *pAccum,
  const char *fmt,
  va_list ap
)
{

  int c;
  char *bufpt;
  int precision;
  int length;
  int idx;
  int width;
  etByte flag_leftjustify;
  etByte flag_plussign;
  etByte flag_blanksign;
  etByte flag_alternateform;
  etByte flag_altform2;
  etByte flag_zeropad;
  etByte flag_long;
  etByte flag_longlong;
  etByte done;
  etByte xtype = 0;
  u8 bArgList;
  u8 useIntern;
  char prefix;
  sqlite_uint64 longvalue;
  long double realvalue;
  const et_info *infop;
  char *zOut;
  int nOut;
  char *zExtra = 0;

  int exp, e2;
  int nsd;
  double rounder;
  etByte flag_dp;
  etByte flag_rtz;

  PrintfArguments *pArgList = 0;
  char buf[70];

  bufpt = 0;
  if( pAccum->printfFlags )
{

    if( (bArgList = (pAccum->printfFlags & 0x02))!=0 )
{

      pArgList = __builtin_va_arg(ap,PrintfArguments*);
    }
    useIntern = pAccum->printfFlags & 0x01;
  }else{
    bArgList = useIntern = 0;
  }
  for(; (c=(*fmt))!=0; ++fmt)
{

    if( c!='%' )
{

      bufpt = (char *)fmt;



      do{ fmt++; }while( *fmt && *fmt != '%' );

      sqlite3StrAccumAppend(pAccum, bufpt, (int)(fmt - bufpt));
      if( *fmt==0 ) break;
    }
    if( (c=(*++fmt))==0 )
{

      sqlite3StrAccumAppend(pAccum, "%", 1);
      break;
    }

    flag_leftjustify = flag_plussign = flag_blanksign =
     flag_alternateform = flag_altform2 = flag_zeropad = 0;
    done = 0;
    do{
      switch( c )
{

        case '-': flag_leftjustify = 1; break;
        case '+': flag_plussign = 1; break;
        case ' ': flag_blanksign = 1; break;
        case '#': flag_alternateform = 1; break;
        case '!': flag_altform2 = 1; break;
        case '0': flag_zeropad = 1; break;
        default: done = 1; break;
      }
    }while( !done && (c=(*++fmt))!=0 );

    if( c=='*' )
{

      if( bArgList )
{

        width = (int)getIntArg(pArgList);
      }else{
        width = __builtin_va_arg(ap,int);
      }
      if( width<0 )
{

        flag_leftjustify = 1;
        width = width >= -2147483647 ? -width : 0;
      }
      c = *++fmt;
    }else{
      unsigned wx = 0;
      while( c>='0' && c<='9' )
{

        wx = wx*10 + c - '0';
        c = *++fmt;
      }
      ;
      width = wx & 0x7fffffff;
    }
    ((void) (0));







    if( c=='.' )
{

      c = *++fmt;
      if( c=='*' )
{

        if( bArgList )
{

          precision = (int)getIntArg(pArgList);
        }else{
          precision = __builtin_va_arg(ap,int);
        }
        c = *++fmt;
        if( precision<0 )
{

          precision = precision >= -2147483647 ? -precision : -1;
        }
      }else{
        unsigned px = 0;
        while( c>='0' && c<='9' )
{

          px = px*10 + c - '0';
          c = *++fmt;
        }
        ;
        precision = px & 0x7fffffff;
      }
    }else{
      precision = -1;
    }
    ((void) (0));
# 23165 "sqlite3.c"
    if( c=='l' )
{

      flag_long = 1;
      c = *++fmt;
      if( c=='l' )
{

        flag_longlong = 1;
        c = *++fmt;
      }else{
        flag_longlong = 0;
      }
    }else{
      flag_long = flag_longlong = 0;
    }

    infop = &fmtinfo[0];
    xtype = 0;
    for(idx=0; idx<((int)(sizeof(fmtinfo)/sizeof(fmtinfo[0]))); idx++)
{

      if( c==fmtinfo[idx].fmttype )
{

        infop = &fmtinfo[idx];
        if( useIntern || (infop->flags & 2)==0 )
{

          xtype = infop->type;
        }else{
          return;
        }
        break;
      }
    }
# 23213 "sqlite3.c"
    switch( xtype )
{

      case 14:
        flag_longlong = sizeof(char*)==sizeof(i64);
        flag_long = sizeof(char*)==sizeof(long int);

      case 16:
      case 1:
        if( infop->flags & 1 )
{

          i64 v;
          if( bArgList )
{

            v = getIntArg(pArgList);
          }else if( flag_longlong )
{

            v = __builtin_va_arg(ap,i64);
          }else if( flag_long )
{

            v = __builtin_va_arg(ap,long int);
          }else{
            v = __builtin_va_arg(ap,int);
          }
          if( v<0 )
{

            if( v==(((i64)-1) - (0xffffffff|(((i64)0x7fffffff)<<32))) )
{

              longvalue = ((u64)1)<<63;
            }else{
              longvalue = -v;
            }
            prefix = '-';
          }else{
            longvalue = v;
            if( flag_plussign ) prefix = '+';
            else if( flag_blanksign ) prefix = ' ';
            else prefix = 0;
          }
        }else{
          if( bArgList )
{

            longvalue = (u64)getIntArg(pArgList);
          }else if( flag_longlong )
{

            longvalue = __builtin_va_arg(ap,u64);
          }else if( flag_long )
{

            longvalue = __builtin_va_arg(ap,unsigned long int);
          }else{
            longvalue = __builtin_va_arg(ap,unsigned int);
          }
          prefix = 0;
        }
        if( longvalue==0 ) flag_alternateform = 0;
        if( flag_zeropad && precision<width-(prefix!=0) )
{

          precision = width-(prefix!=0);
        }
        if( precision<70 -10 )
{

          nOut = 70;
          zOut = buf;
        }else{
          nOut = precision + 10;
          zOut = zExtra = sqlite3Malloc( nOut );
          if( zOut==0 )
{

            setStrAccumError(pAccum, 1);
            return;
          }
        }
        bufpt = &zOut[nOut-1];
        if( xtype==16 )
{

          static const char zOrd[] = "thstndrd";
          int x = (int)(longvalue % 10);
          if( x>=4 || (longvalue/10)%10==1 )
{

            x = 0;
          }
          *(--bufpt) = zOrd[x*2+1];
          *(--bufpt) = zOrd[x*2];
        }
        {
          const char *cset = &aDigits[infop->charset];
          u8 base = infop->base;
          do{
            *(--bufpt) = cset[longvalue%base];
            longvalue = longvalue/base;
          }while( longvalue>0 );
        }
        length = (int)(&zOut[nOut-1]-bufpt);
        for(idx=precision-length; idx>0; idx--)
{

          *(--bufpt) = '0';
        }
        if( prefix ) *(--bufpt) = prefix;
        if( flag_alternateform && infop->prefix )
{

          const char *pre;
          char x;
          pre = &aPrefix[infop->prefix];
          for(; (x=(*pre))!=0; pre++) *(--bufpt) = x;
        }
        length = (int)(&zOut[nOut-1]-bufpt);
        break;
      case 2:
      case 3:
      case 4:
        if( bArgList )
{

          realvalue = getDoubleArg(pArgList);
        }else{
          realvalue = __builtin_va_arg(ap,double);
        }



        if( precision<0 ) precision = 6;
        if( realvalue<0.0 )
{

          realvalue = -realvalue;
          prefix = '-';
        }else{
          if( flag_plussign ) prefix = '+';
          else if( flag_blanksign ) prefix = ' ';
          else prefix = 0;
        }
        if( xtype==4 && precision>0 ) precision--;
        ;
        for(idx=precision&0xfff, rounder=0.5; idx>0; idx--, rounder*=0.1)
{
}
        if( xtype==2 ) realvalue += rounder;

        exp = 0;
        if( sqlite3IsNaN((double)realvalue) )
{

          bufpt = "NaN";
          length = 3;
          break;
        }
        if( realvalue>0.0 )
{

          long double scale = 1.0;
          while( realvalue>=1e100*scale && exp<=350 )
{
 scale *= 1e100;exp+=100;}
          while( realvalue>=1e10*scale && exp<=350 )
{
 scale *= 1e10; exp+=10; }
          while( realvalue>=10.0*scale && exp<=350 )
{
 scale *= 10.0; exp++; }
          realvalue /= scale;
          while( realvalue<1e-8 )
{
 realvalue *= 1e8; exp-=8; }
          while( realvalue<1.0 )
{
 realvalue *= 10.0; exp--; }
          if( exp>350 )
{

            bufpt = buf;
            buf[0] = prefix;
            memcpy(buf+(prefix!=0),"Inf",4);
            length = 3+(prefix!=0);
            break;
          }
        }
        bufpt = buf;




        if( xtype!=2 )
{

          realvalue += rounder;
          if( realvalue>=10.0 )
{
 realvalue *= 0.1; exp++; }
        }
        if( xtype==4 )
{

          flag_rtz = !flag_alternateform;
          if( exp<-4 || exp>precision )
{

            xtype = 3;
          }else{
            precision = precision - exp;
            xtype = 2;
          }
        }else{
          flag_rtz = flag_altform2;
        }
        if( xtype==3 )
{

          e2 = 0;
        }else{
          e2 = exp;
        }
        if( ((e2)>(0)?(e2):(0))+(i64)precision+(i64)width > 70 - 15 )
{

          bufpt = zExtra
              = sqlite3Malloc( ((e2)>(0)?(e2):(0))+(i64)precision+(i64)width+15 );
          if( bufpt==0 )
{

            setStrAccumError(pAccum, 1);
            return;
          }
        }
        zOut = bufpt;
        nsd = 16 + flag_altform2*10;
        flag_dp = (precision>0 ?1:0) | flag_alternateform | flag_altform2;

        if( prefix )
{

          *(bufpt++) = prefix;
        }

        if( e2<0 )
{

          *(bufpt++) = '0';
        }else{
          for(; e2>=0; e2--)
{

            *(bufpt++) = et_getdigit(&realvalue,&nsd);
          }
        }

        if( flag_dp )
{

          *(bufpt++) = '.';
        }


        for(e2++; e2<0; precision--, e2++)
{

          ((void) (0));
          *(bufpt++) = '0';
        }

        while( (precision--)>0 )
{

          *(bufpt++) = et_getdigit(&realvalue,&nsd);
        }

        if( flag_rtz && flag_dp )
{

          while( bufpt[-1]=='0' ) *(--bufpt) = 0;
          ((void) (0));
          if( bufpt[-1]=='.' )
{

            if( flag_altform2 )
{

              *(bufpt++) = '0';
            }else{
              *(--bufpt) = 0;
            }
          }
        }

        if( xtype==3 )
{

          *(bufpt++) = aDigits[infop->charset];
          if( exp<0 )
{

            *(bufpt++) = '-'; exp = -exp;
          }else{
            *(bufpt++) = '+';
          }
          if( exp>=100 )
{

            *(bufpt++) = (char)((exp/100)+'0');
            exp %= 100;
          }
          *(bufpt++) = (char)(exp/10+'0');
          *(bufpt++) = (char)(exp%10+'0');
        }
        *bufpt = 0;




        length = (int)(bufpt-zOut);
        bufpt = zOut;



        if( flag_zeropad && !flag_leftjustify && length < width)
{

          int i;
          int nPad = width - length;
          for(i=width; i>=nPad; i--)
{

            bufpt[i] = bufpt[i-nPad];
          }
          i = prefix!=0;
          while( nPad-- ) bufpt[i++] = '0';
          length = width;
        }

        break;
      case 5:
        if( !bArgList )
{

          *(__builtin_va_arg(ap,int*)) = pAccum->nChar;
        }
        length = width = 0;
        break;
      case 8:
        buf[0] = '%';
        bufpt = buf;
        length = 1;
        break;
      case 9:
        if( bArgList )
{

          bufpt = getTextArg(pArgList);
          c = bufpt ? bufpt[0] : 0;
        }else{
          c = __builtin_va_arg(ap,int);
        }
        if( precision>1 )
{

          width -= precision-1;
          if( width>1 && !flag_leftjustify )
{

            sqlite3AppendChar(pAccum, width-1, ' ');
            width = 0;
          }
          sqlite3AppendChar(pAccum, precision-1, c);
        }
        length = 1;
        buf[0] = c;
        bufpt = buf;
        break;
      case 6:
      case 7:
        if( bArgList )
{

          bufpt = getTextArg(pArgList);
          xtype = 6;
        }else{
          bufpt = __builtin_va_arg(ap,char*);
        }
        if( bufpt==0 )
{

          bufpt = "";
        }else if( xtype==7 )
{

          zExtra = bufpt;
        }
        if( precision>=0 )
{

          for(length=0; length<precision && bufpt[length]; length++)
{
}
        }else{
          length = sqlite3Strlen30(bufpt);
        }
        break;
      case 10:
      case 11:
      case 15: {
        int i, j, k, n, isnull;
        int needQuote;
        char ch;
        char q = ((xtype==15)?'"':'\'');
        char *escarg;

        if( bArgList )
{

          escarg = getTextArg(pArgList);
        }else{
          escarg = __builtin_va_arg(ap,char*);
        }
        isnull = escarg==0;
        if( isnull ) escarg = (xtype==11 ? "NULL" : "(NULL)");
        k = precision;
        for(i=n=0; k!=0 && (ch=escarg[i])!=0; i++, k--)
{

          if( ch==q ) n++;
        }
        needQuote = !isnull && xtype==11;
        n += i + 3;
        if( n>70 )
{

          bufpt = zExtra = sqlite3Malloc( n );
          if( bufpt==0 )
{

            setStrAccumError(pAccum, 1);
            return;
          }
        }else{
          bufpt = buf;
        }
        j = 0;
        if( needQuote ) bufpt[j++] = q;
        k = i;
        for(i=0; i<k; i++)
{

          bufpt[j++] = ch = escarg[i];
          if( ch==q ) bufpt[j++] = ch;
        }
        if( needQuote ) bufpt[j++] = q;
        bufpt[j] = 0;
        length = j;



        break;
      }
      case 12: {
        Token *pToken = __builtin_va_arg(ap,Token*);
        ((void) (0));
        if( pToken && pToken->n )
{

          sqlite3StrAccumAppend(pAccum, (const char*)pToken->z, pToken->n);
        }
        length = width = 0;
        break;
      }
      case 13: {
        SrcList *pSrc = __builtin_va_arg(ap,SrcList*);
        int k = __builtin_va_arg(ap,int);
        struct SrcList_item *pItem = &pSrc->a[k];
        ((void) (0));
        ((void) (0));
        if( pItem->zDatabase )
{

          sqlite3StrAccumAppendAll(pAccum, pItem->zDatabase);
          sqlite3StrAccumAppend(pAccum, ".", 1);
        }
        sqlite3StrAccumAppendAll(pAccum, pItem->zName);
        length = width = 0;
        break;
      }
      default: {
        ((void) (0));
        return;
      }
    }





    width -= length;
    if( width>0 && !flag_leftjustify ) sqlite3AppendChar(pAccum, width, ' ');
    sqlite3StrAccumAppend(pAccum, bufpt, length);
    if( width>0 && flag_leftjustify ) sqlite3AppendChar(pAccum, width, ' ');

    if( zExtra )
{

      sqlite3DbFree(pAccum->db, zExtra);
      zExtra = 0;
    }
  }
}
# 23607 "sqlite3.c"
static int sqlite3StrAccumEnlarge(StrAccum *p, int N)
{

  char *zNew;
  ((void) (0));
  if( p->accError )
{

    ;
    ;
    return 0;
  }
  if( p->mxAlloc==0 )
{

    N = p->nAlloc - p->nChar - 1;
    setStrAccumError(p, 2);
    return N;
  }else{
    char *zOld = (((p)->printfFlags & 0x04)!=0) ? p->zText : 0;
    i64 szNew = p->nChar;
    ((void) (0));
    szNew += N + 1;
    if( szNew+p->nChar<=p->mxAlloc )
{



      szNew += p->nChar;
    }
    if( szNew > p->mxAlloc )
{

      sqlite3StrAccumReset(p);
      setStrAccumError(p, 2);
      return 0;
    }else{
      p->nAlloc = (int)szNew;
    }
    if( p->db )
{

      zNew = sqlite3DbRealloc(p->db, zOld, p->nAlloc);
    }else{
      zNew = sqlite3_realloc64(zOld, p->nAlloc);
    }
    if( zNew )
{

      ((void) (0));
      if( !(((p)->printfFlags & 0x04)!=0) && p->nChar>0 ) memcpy(zNew, p->zText, p->nChar);
      p->zText = zNew;
      p->nAlloc = sqlite3DbMallocSize(p->db, zNew);
      p->printfFlags |= 0x04;
    }else{
      sqlite3StrAccumReset(p);
      setStrAccumError(p, 1);
      return 0;
    }
  }
  return N;
}




static void sqlite3AppendChar(StrAccum *p, int N, char c)
{

  ;
  if( p->nChar+(i64)N >= p->nAlloc && (N = sqlite3StrAccumEnlarge(p, N))<=0 )
{

    return;
  }
  ((void) (0));
  while( (N--)>0 ) p->zText[p->nChar++] = c;
}
# 23676 "sqlite3.c"
static void __attribute__((noinline)) enlargeAndAppend(StrAccum *p, const char *z, int N)
{

  N = sqlite3StrAccumEnlarge(p, N);
  if( N>0 )
{

    memcpy(&p->zText[p->nChar], z, N);
    p->nChar += N;
  }
  ((void) (0));
}





static void sqlite3StrAccumAppend(StrAccum *p, const char *z, int N)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( p->nChar+N >= p->nAlloc )
{

    enlargeAndAppend(p,z,N);
  }else{
    ((void) (0));
    p->nChar += N;
    memcpy(&p->zText[p->nChar-N], z, N);
  }
}




static void sqlite3StrAccumAppendAll(StrAccum *p, const char *z)
{

  sqlite3StrAccumAppend(p, z, sqlite3Strlen30(z));
}







static char *sqlite3StrAccumFinish(StrAccum *p)
{

  if( p->zText )
{

    ((void) (0));
    p->zText[p->nChar] = 0;
    if( p->mxAlloc>0 && !(((p)->printfFlags & 0x04)!=0) )
{

      p->zText = sqlite3DbMallocRaw(p->db, p->nChar+1 );
      if( p->zText )
{

        memcpy(p->zText, p->zBase, p->nChar+1);
        p->printfFlags |= 0x04;
      }else{
        setStrAccumError(p, 1);
      }
    }
  }
  return p->zText;
}




static void sqlite3StrAccumReset(StrAccum *p)
{

  ((void) (0));
  if( (((p)->printfFlags & 0x04)!=0) )
{

    sqlite3DbFree(p->db, p->zText);
    p->printfFlags &= ~0x04;
  }
  p->zText = 0;
}
# 23759 "sqlite3.c"
static void sqlite3StrAccumInit(StrAccum *p, sqlite3 *db, char *zBase, int n, int mx)
{

  p->zText = p->zBase = zBase;
  p->db = db;
  p->nChar = 0;
  p->nAlloc = n;
  p->mxAlloc = mx;
  p->accError = 0;
  p->printfFlags = 0;
}





static char *sqlite3VMPrintf(sqlite3 *db, const char *zFormat, va_list ap)
{

  char *z;
  char zBase[70];
  StrAccum acc;
  ((void) (0));
  sqlite3StrAccumInit(&acc, db, zBase, sizeof(zBase),
                      db->aLimit[0]);
  acc.printfFlags = 0x01;
  sqlite3VXPrintf(&acc, zFormat, ap);
  z = sqlite3StrAccumFinish(&acc);
  if( acc.accError==1 )
{

    sqlite3OomFault(db);
  }
  return z;
}





static char *sqlite3MPrintf(sqlite3 *db, const char *zFormat, ...)
{

  va_list ap;
  char *z;
  __builtin_va_start(ap,zFormat);
  z = sqlite3VMPrintf(db, zFormat, ap);
  __builtin_va_end(ap);
  return z;
}





 char * sqlite3_vmprintf(const char *zFormat, va_list ap)
{

  char *z;
  char zBase[70];
  StrAccum acc;
# 23818 "sqlite3.c"
  if( sqlite3_initialize() ) return 0;

  sqlite3StrAccumInit(&acc, 0, zBase, sizeof(zBase), 1000000000);
  sqlite3VXPrintf(&acc, zFormat, ap);
  z = sqlite3StrAccumFinish(&acc);
  return z;
}





 char * sqlite3_mprintf(const char *zFormat, ...)
{

  va_list ap;
  char *z;

  if( sqlite3_initialize() ) return 0;

  __builtin_va_start(ap,zFormat);
  z = sqlite3_vmprintf(zFormat, ap);
  __builtin_va_end(ap);
  return z;
}
# 23855 "sqlite3.c"
 char * sqlite3_vsnprintf(int n, char *zBuf, const char *zFormat, va_list ap)
{

  StrAccum acc;
  if( n<=0 ) return zBuf;







  sqlite3StrAccumInit(&acc, 0, zBuf, n, 0);
  sqlite3VXPrintf(&acc, zFormat, ap);
  return sqlite3StrAccumFinish(&acc);
}
 char * sqlite3_snprintf(int n, char *zBuf, const char *zFormat, ...)
{

  char *z;
  va_list ap;
  __builtin_va_start(ap,zFormat);
  z = sqlite3_vsnprintf(n, zBuf, zFormat, ap);
  __builtin_va_end(ap);
  return z;
}
# 23892 "sqlite3.c"
static void renderLogMsg(int iErrCode, const char *zFormat, va_list ap)
{

  StrAccum acc;
  char zMsg[70*3];

  sqlite3StrAccumInit(&acc, 0, zMsg, sizeof(zMsg), 0);
  sqlite3VXPrintf(&acc, zFormat, ap);
  sqlite3Config.xLog(sqlite3Config.pLogArg, iErrCode,
                           sqlite3StrAccumFinish(&acc));
}




 void sqlite3_log(int iErrCode, const char *zFormat, ...)
{

  va_list ap;
  if( sqlite3Config.xLog )
{

    __builtin_va_start(ap,zFormat);
    renderLogMsg(iErrCode, zFormat, ap);
    __builtin_va_end(ap);
  }
}
# 23939 "sqlite3.c"
static void sqlite3XPrintf(StrAccum *p, const char *zFormat, ...)
{

  va_list ap;
  __builtin_va_start(ap,zFormat);
  sqlite3VXPrintf(p, zFormat, ap);
  __builtin_va_end(ap);
}
# 24467 "sqlite3.c"
static struct sqlite3PrngType {
  unsigned char isInit;
  unsigned char i, j;
  unsigned char s[256];
} sqlite3Prng;




 void sqlite3_randomness(int N, void *pBuf)
{

  unsigned char t;
  unsigned char *zBuf = pBuf;
# 24494 "sqlite3.c"
  sqlite3_mutex *mutex;



  if( sqlite3_initialize() ) return;



  mutex = sqlite3MutexAlloc(5);


  sqlite3_mutex_enter(mutex);
  if( N<=0 || pBuf==0 )
{

    sqlite3Prng.isInit = 0;
    sqlite3_mutex_leave(mutex);
    return;
  }
# 24521 "sqlite3.c"
  if( !sqlite3Prng.isInit )
{

    int i;
    char k[256];
    sqlite3Prng.j = 0;
    sqlite3Prng.i = 0;
    sqlite3OsRandomness(sqlite3_vfs_find(0), 256, k);
    for(i=0; i<256; i++)
{

      sqlite3Prng.s[i] = (u8)i;
    }
    for(i=0; i<256; i++)
{

      sqlite3Prng.j += sqlite3Prng.s[i] + k[i];
      t = sqlite3Prng.s[sqlite3Prng.j];
      sqlite3Prng.s[sqlite3Prng.j] = sqlite3Prng.s[i];
      sqlite3Prng.s[i] = t;
    }
    sqlite3Prng.isInit = 1;
  }

  ((void) (0));
  do{
    sqlite3Prng.i++;
    t = sqlite3Prng.s[sqlite3Prng.i];
    sqlite3Prng.j += t;
    sqlite3Prng.s[sqlite3Prng.i] = sqlite3Prng.s[sqlite3Prng.j];
    sqlite3Prng.s[sqlite3Prng.j] = t;
    t += sqlite3Prng.s[sqlite3Prng.i];
    *(zBuf++) = sqlite3Prng.s[t];
  }while( --N );
  sqlite3_mutex_leave(mutex);
}
# 24562 "sqlite3.c"
static struct sqlite3PrngType sqlite3SavedPrng;
static void sqlite3PrngSaveState(void)
{

  memcpy(
    &sqlite3SavedPrng,
    &sqlite3Prng,
    sizeof(sqlite3Prng)
  );
}
static void sqlite3PrngRestoreState(void)
{

  memcpy(
    &sqlite3Prng,
    &sqlite3SavedPrng,
    sizeof(sqlite3Prng)
  );
}
# 24622 "sqlite3.c"
struct SQLiteThread {
  pthread_t tid;
  int done;
  void *pOut;
  void *(*xTask)(void*);
  void *pIn;
};


static int sqlite3ThreadCreate(
  SQLiteThread **ppThread,
  void *(*xTask)(void*),
  void *pIn
)
{

  SQLiteThread *p;
  int rc;

  ((void) (0));
  ((void) (0));

  ((void) (0));

  *ppThread = 0;
  p = sqlite3Malloc(sizeof(*p));
  if( p==0 ) return 7;
  memset(p, 0, sizeof(*p));
  p->xTask = xTask;
  p->pIn = pIn;




  if( sqlite3FaultSim(200) )
{

    rc = 1;
  }else{
    rc = pthread_create(&p->tid, 0, xTask, pIn);
  }
  if( rc )
{

    p->done = 1;
    p->pOut = xTask(pIn);
  }
  *ppThread = p;
  return 0;
}


static int sqlite3ThreadJoin(SQLiteThread *p, void **ppOut)
{

  int rc;

  ((void) (0));
  if( (p==0) ) return 7;
  if( p->done )
{

    *ppOut = p->pOut;
    rc = 0;
  }else{
    rc = pthread_join(p->tid, ppOut) ? 1 : 0;
  }
  sqlite3_free(p);
  return rc;
}
# 24909 "sqlite3.c"
static const unsigned char sqlite3Utf8Trans1[] = {
  0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
  0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
  0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
  0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
  0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
  0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
  0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
  0x00, 0x01, 0x02, 0x03, 0x00, 0x01, 0x00, 0x00,
};
# 25023 "sqlite3.c"
static u32 sqlite3Utf8Read(
  const unsigned char **pz
)
{

  unsigned int c;




  c = *((*pz)++);
  if( c>=0xc0 )
{

    c = sqlite3Utf8Trans1[c-0xc0];
    while( (*(*pz) & 0xc0)==0x80 )
{

      c = (c<<6) + (0x3f & *((*pz)++));
    }
    if( c<0x80
        || (c&0xFFFFF800)==0xD800
        || (c&0xFFFFFFFE)==0xFFFE )
{
 c = 0xFFFD; }
  }
  return c;
}
# 25059 "sqlite3.c"
static __attribute__((noinline)) int sqlite3VdbeMemTranslate(Mem *pMem, u8 desiredEnc)
{

  int len;
  unsigned char *zOut;
  unsigned char *zIn;
  unsigned char *zTerm;
  unsigned char *z;
  unsigned int c;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
# 25085 "sqlite3.c"
  if( pMem->enc!=1 && desiredEnc!=1 )
{

    u8 temp;
    int rc;
    rc = sqlite3VdbeMemMakeWriteable(pMem);
    if( rc!=0 )
{

      ((void) (0));
      return 7;
    }
    zIn = (u8*)pMem->z;
    zTerm = &zIn[pMem->n&~1];
    while( zIn<zTerm )
{

      temp = *zIn;
      *zIn = *(zIn+1);
      zIn++;
      *zIn++ = temp;
    }
    pMem->enc = desiredEnc;
    goto translate_out;
  }


  if( desiredEnc==1 )
{






    pMem->n &= ~1;
    len = pMem->n * 2 + 1;
  }else{





    len = pMem->n * 2 + 2;
  }







  zIn = (u8*)pMem->z;
  zTerm = &zIn[pMem->n];
  zOut = sqlite3DbMallocRaw(pMem->db, len);
  if( !zOut )
{

    return 7;
  }
  z = zOut;

  if( pMem->enc==1 )
{

    if( desiredEnc==2 )
{


      while( zIn<zTerm )
{

        c = *(zIn++); if( c>=0xc0 )
{
 c = sqlite3Utf8Trans1[c-0xc0]; while( zIn!=zTerm && (*zIn & 0xc0)==0x80 )
{
 c = (c<<6) + (0x3f & *(zIn++)); } if( c<0x80 || (c&0xFFFFF800)==0xD800 || (c&0xFFFFFFFE)==0xFFFE )
{
 c = 0xFFFD; } };
        { if( c<=0xFFFF )
{
 *z++ = (u8)(c&0x00FF); *z++ = (u8)((c>>8)&0x00FF); }else{ *z++ = (u8)(((c>>10)&0x003F) + (((c-0x10000)>>10)&0x00C0)); *z++ = (u8)(0x00D8 + (((c-0x10000)>>18)&0x03)); *z++ = (u8)(c&0x00FF); *z++ = (u8)(0x00DC + ((c>>8)&0x03)); } };
      }
    }else{
      ((void) (0));

      while( zIn<zTerm )
{

        c = *(zIn++); if( c>=0xc0 )
{
 c = sqlite3Utf8Trans1[c-0xc0]; while( zIn!=zTerm && (*zIn & 0xc0)==0x80 )
{
 c = (c<<6) + (0x3f & *(zIn++)); } if( c<0x80 || (c&0xFFFFF800)==0xD800 || (c&0xFFFFFFFE)==0xFFFE )
{
 c = 0xFFFD; } };
        { if( c<=0xFFFF )
{
 *z++ = (u8)((c>>8)&0x00FF); *z++ = (u8)(c&0x00FF); }else{ *z++ = (u8)(0x00D8 + (((c-0x10000)>>18)&0x03)); *z++ = (u8)(((c>>10)&0x003F) + (((c-0x10000)>>10)&0x00C0)); *z++ = (u8)(0x00DC + ((c>>8)&0x03)); *z++ = (u8)(c&0x00FF); } };
      }
    }
    pMem->n = (int)(z - zOut);
    *z++ = 0;
  }else{
    ((void) (0));
    if( pMem->enc==2 )
{


      while( zIn<zTerm )
{

        { c = (*zIn++); c += ((*zIn++)<<8); if( c>=0xD800 && c<0xE000 && zIn<zTerm )
{
 int c2 = (*zIn++); c2 += ((*zIn++)<<8); c = (c2&0x03FF) + ((c&0x003F)<<10) + (((c&0x03C0)+0x0040)<<10); } };
        { if( c<0x00080 )
{
 *z++ = (u8)(c&0xFF); } else if( c<0x00800 )
{
 *z++ = 0xC0 + (u8)((c>>6)&0x1F); *z++ = 0x80 + (u8)(c & 0x3F); } else if( c<0x10000 )
{
 *z++ = 0xE0 + (u8)((c>>12)&0x0F); *z++ = 0x80 + (u8)((c>>6) & 0x3F); *z++ = 0x80 + (u8)(c & 0x3F); }else{ *z++ = 0xF0 + (u8)((c>>18) & 0x07); *z++ = 0x80 + (u8)((c>>12) & 0x3F); *z++ = 0x80 + (u8)((c>>6) & 0x3F); *z++ = 0x80 + (u8)(c & 0x3F); } };
      }
    }else{

      while( zIn<zTerm )
{

        { c = ((*zIn++)<<8); c += (*zIn++); if( c>=0xD800 && c<0xE000 && zIn<zTerm )
{
 int c2 = ((*zIn++)<<8); c2 += (*zIn++); c = (c2&0x03FF) + ((c&0x003F)<<10) + (((c&0x03C0)+0x0040)<<10); } };
        { if( c<0x00080 )
{
 *z++ = (u8)(c&0xFF); } else if( c<0x00800 )
{
 *z++ = 0xC0 + (u8)((c>>6)&0x1F); *z++ = 0x80 + (u8)(c & 0x3F); } else if( c<0x10000 )
{
 *z++ = 0xE0 + (u8)((c>>12)&0x0F); *z++ = 0x80 + (u8)((c>>6) & 0x3F); *z++ = 0x80 + (u8)(c & 0x3F); }else{ *z++ = 0xF0 + (u8)((c>>18) & 0x07); *z++ = 0x80 + (u8)((c>>12) & 0x3F); *z++ = 0x80 + (u8)((c>>6) & 0x3F); *z++ = 0x80 + (u8)(c & 0x3F); } };
      }
    }
    pMem->n = (int)(z - zOut);
  }
  *z = 0;
  ((void) (0));

  c = pMem->flags;
  sqlite3VdbeMemRelease(pMem);
  pMem->flags = 0x0002|0x0200|(c&(0x001f|0x8000));
  pMem->enc = desiredEnc;
  pMem->z = (char*)zOut;
  pMem->zMalloc = pMem->z;
  pMem->szMalloc = sqlite3DbMallocSize(pMem->db, pMem->z);

translate_out:







  return 0;
}
# 25202 "sqlite3.c"
static int sqlite3VdbeMemHandleBom(Mem *pMem)
{

  int rc = 0;
  u8 bom = 0;

  ((void) (0));
  if( pMem->n>1 )
{

    u8 b1 = *(u8 *)pMem->z;
    u8 b2 = *(((u8 *)pMem->z) + 1);
    if( b1==0xFE && b2==0xFF )
{

      bom = 3;
    }
    if( b1==0xFF && b2==0xFE )
{

      bom = 2;
    }
  }

  if( bom )
{

    rc = sqlite3VdbeMemMakeWriteable(pMem);
    if( rc==0 )
{

      pMem->n -= 2;
      memmove(pMem->z, &pMem->z[2], pMem->n);
      pMem->z[pMem->n] = '\0';
      pMem->z[pMem->n+1] = '\0';
      pMem->flags |= 0x0200;
      pMem->enc = bom;
    }
  }
  return rc;
}
# 25240 "sqlite3.c"
static int sqlite3Utf8CharLen(const char *zIn, int nByte)
{

  int r = 0;
  const u8 *z = (const u8*)zIn;
  const u8 *zTerm;
  if( nByte>=0 )
{

    zTerm = &z[nByte];
  }else{
    zTerm = (const u8*)(-1);
  }
  ((void) (0));
  while( *z!=0 && z<zTerm )
{

    { if( (*(z++))>=0xc0 )
{
 while( (*z & 0xc0)==0x80 )
{
 z++; } } };
    r++;
  }
  return r;
}
# 25294 "sqlite3.c"
static char *sqlite3Utf16to8(sqlite3 *db, const void *z, int nByte, u8 enc)
{

  Mem m;
  memset(&m, 0, sizeof(m));
  m.db = db;
  sqlite3VdbeMemSetStr(&m, z, nByte, enc, ((sqlite3_destructor_type)0));
  sqlite3VdbeChangeEncoding(&m, 1);
  if( db->mallocFailed )
{

    sqlite3VdbeMemRelease(&m);
    m.z = 0;
  }
  ((void) (0));
  ((void) (0));
  ((void) (0));
  return m.z;
}






static int sqlite3Utf16ByteLen(const void *zIn, int nChar)
{

  int c;
  unsigned char const *z = zIn;
  int n = 0;

  if( 2==3 )
{

    while( n<nChar )
{

      { c = ((*z++)<<8); c += (*z++); if( c>=0xD800 && c<0xE000 && 1 )
{
 int c2 = ((*z++)<<8); c2 += (*z++); c = (c2&0x03FF) + ((c&0x003F)<<10) + (((c&0x03C0)+0x0040)<<10); } };
      n++;
    }
  }else{
    while( n<nChar )
{

      { c = (*z++); c += ((*z++)<<8); if( c>=0xD800 && c<0xE000 && 1 )
{
 int c2 = (*z++); c2 += ((*z++)<<8); c = (c2&0x03FF) + ((c&0x003F)<<10) + (((c&0x03C0)+0x0040)<<10); } };
      n++;
    }
  }
  return (int)(z-(unsigned char const *)zIn);
}
# 25436 "sqlite3.c"
static int sqlite3FaultSim(int iTest)
{

  int (*xCallback)(int) = sqlite3Config.xTestCallback;
  return xCallback ? xCallback(iTest) : 0;
}
# 25449 "sqlite3.c"
static int sqlite3IsNaN(double x)
{

  int rc;
# 25478 "sqlite3.c"
  volatile double y = x;
  volatile double z = y;
  rc = (y!=z);



  ;
  return rc;
}
# 25497 "sqlite3.c"
static int sqlite3Strlen30(const char *z)
{

  if( z==0 ) return 0;
  return 0x3fffffff & (int)strlen(z);
}
# 25509 "sqlite3.c"
static char *sqlite3ColumnType(Column *pCol, char *zDflt)
{

  if( (pCol->colFlags & 0x0004)==0 ) return zDflt;
  return pCol->zName + strlen(pCol->zName) + 1;
}






static __attribute__((noinline)) void sqlite3ErrorFinish(sqlite3 *db, int err_code)
{

  if( db->pErr ) sqlite3ValueSetNull(db->pErr);
  sqlite3SystemError(db, err_code);
}






static void sqlite3Error(sqlite3 *db, int err_code)
{

  ((void) (0));
  db->errCode = err_code;
  if( err_code || db->pErr ) sqlite3ErrorFinish(db, err_code);
}





static void sqlite3SystemError(sqlite3 *db, int rc)
{

  if( rc==(10 | (12<<8)) ) return;
  rc &= 0xff;
  if( rc==14 || rc==10 )
{

    db->iSysErrno = sqlite3OsGetLastError(db->pVfs);
  }
}
# 25568 "sqlite3.c"
static void sqlite3ErrorWithMsg(sqlite3 *db, int err_code, const char *zFormat, ...)
{

  ((void) (0));
  db->errCode = err_code;
  sqlite3SystemError(db, err_code);
  if( zFormat==0 )
{

    sqlite3Error(db, err_code);
  }else if( db->pErr || (db->pErr = sqlite3ValueNew(db))!=0 )
{

    char *z;
    va_list ap;
    __builtin_va_start(ap,zFormat);
    z = sqlite3VMPrintf(db, zFormat, ap);
    __builtin_va_end(ap);
    sqlite3ValueSetStr(db->pErr, -1, z, 1, ((sqlite3_destructor_type)sqlite3MallocSize));
  }
}
# 25601 "sqlite3.c"
static void sqlite3ErrorMsg(Parse *pParse, const char *zFormat, ...)
{

  char *zMsg;
  va_list ap;
  sqlite3 *db = pParse->db;
  __builtin_va_start(ap,zFormat);
  zMsg = sqlite3VMPrintf(db, zFormat, ap);
  __builtin_va_end(ap);
  if( db->suppressErr )
{

    sqlite3DbFree(db, zMsg);
  }else{
    pParse->nErr++;
    sqlite3DbFree(db, pParse->zErrMsg);
    pParse->zErrMsg = zMsg;
    pParse->rc = 1;
  }
}
# 25635 "sqlite3.c"
static int sqlite3Dequote(char *z)
{

  char quote;
  int i, j;
  if( z==0 ) return -1;
  quote = z[0];
  switch( quote )
{

    case '\'': break;
    case '"': break;
    case '`': break;
    case '[': quote = ']'; break;
    default: return -1;
  }
  for(i=1, j=0;; i++)
{

    ((void) (0));
    if( z[i]==quote )
{

      if( z[i+1]==quote )
{

        z[j++] = quote;
        i++;
      }else{
        break;
      }
    }else{
      z[j++] = z[i];
    }
  }
  z[j] = 0;
  return j;
}




static void sqlite3TokenInit(Token *p, char *z)
{

  p->z = z;
  p->n = sqlite3Strlen30(z);
}
# 25685 "sqlite3.c"
 int sqlite3_stricmp(const char *zLeft, const char *zRight)
{

  if( zLeft==0 )
{

    return zRight ? -1 : 0;
  }else if( zRight==0 )
{

    return 1;
  }
  return sqlite3StrICmp(zLeft, zRight);
}
static int sqlite3StrICmp(const char *zLeft, const char *zRight)
{

  unsigned char *a, *b;
  int c;
  a = (unsigned char *)zLeft;
  b = (unsigned char *)zRight;
  for(;;)
{

    c = (int)sqlite3UpperToLower[*a] - (int)sqlite3UpperToLower[*b];
    if( c || *a==0 ) break;
    a++;
    b++;
  }
  return c;
}
 int sqlite3_strnicmp(const char *zLeft, const char *zRight, int N)
{

  register unsigned char *a, *b;
  if( zLeft==0 )
{

    return zRight ? -1 : 0;
  }else if( zRight==0 )
{

    return 1;
  }
  a = (unsigned char *)zLeft;
  b = (unsigned char *)zRight;
  while( N-- > 0 && *a!=0 && sqlite3UpperToLower[*a]==sqlite3UpperToLower[*b])
{
 a++; b++; }
  return N<0 ? 0 : sqlite3UpperToLower[*a] - sqlite3UpperToLower[*b];
}
# 25741 "sqlite3.c"
static int sqlite3AtoF(const char *z, double *pResult, int length, u8 enc)
{


  int incr;
  const char *zEnd = z + length;

  int sign = 1;
  i64 s = 0;
  int d = 0;
  int esign = 1;
  int e = 0;
  int eValid = 1;
  double result;
  int nDigits = 0;
  int nonNum = 0;

  ((void) (0));
  *pResult = 0.0;

  if( enc==1 )
{

    incr = 1;
  }else{
    int i;
    incr = 2;
    ((void) (0));
    for(i=3-enc; i<length && z[i]==0; i+=2)
{
}
    nonNum = i<length;
    zEnd = z+i+enc-3;
    z += (enc&1);
  }


  while( z<zEnd && (sqlite3CtypeMap[(unsigned char)(*z)]&0x01) ) z+=incr;
  if( z>=zEnd ) return 0;


  if( *z=='-' )
{

    sign = -1;
    z+=incr;
  }else if( *z=='+' )
{

    z+=incr;
  }


  while( z<zEnd && z[0]=='0' ) z+=incr, nDigits++;


  while( z<zEnd && (sqlite3CtypeMap[(unsigned char)(*z)]&0x04) && s<(((0xffffffff|(((i64)0x7fffffff)<<32))-9)/10) )
{

    s = s*10 + (*z - '0');
    z+=incr, nDigits++;
  }



  while( z<zEnd && (sqlite3CtypeMap[(unsigned char)(*z)]&0x04) ) z+=incr, nDigits++, d++;
  if( z>=zEnd ) goto do_atof_calc;


  if( *z=='.' )
{

    z+=incr;


    while( z<zEnd && (sqlite3CtypeMap[(unsigned char)(*z)]&0x04) && s<(((0xffffffff|(((i64)0x7fffffff)<<32))-9)/10) )
{

      s = s*10 + (*z - '0');
      z+=incr, nDigits++, d--;
    }

    while( z<zEnd && (sqlite3CtypeMap[(unsigned char)(*z)]&0x04) ) z+=incr, nDigits++;
  }
  if( z>=zEnd ) goto do_atof_calc;


  if( *z=='e' || *z=='E' )
{

    z+=incr;
    eValid = 0;
    if( z>=zEnd ) goto do_atof_calc;

    if( *z=='-' )
{

      esign = -1;
      z+=incr;
    }else if( *z=='+' )
{

      z+=incr;
    }

    while( z<zEnd && (sqlite3CtypeMap[(unsigned char)(*z)]&0x04) )
{

      e = e<10000 ? (e*10 + (*z - '0')) : 10000;
      z+=incr;
      eValid = 1;
    }
  }


  if( nDigits && eValid )
{

    while( z<zEnd && (sqlite3CtypeMap[(unsigned char)(*z)]&0x01) ) z+=incr;
  }

do_atof_calc:

  e = (e*esign) + d;
  if( e<0 ) {
    esign = -1;
    e *= -1;
  } else {
    esign = 1;
  }


  if( !s ) {


    result = (sign<0 && nDigits) ? -(double)0 : (double)0;
  } else {

    if( esign>0 )
{

      while( s<((0xffffffff|(((i64)0x7fffffff)<<32))/10) && e>0 ) e--,s*=10;
    }else{
      while( !(s%10) && e>0 ) e--,s/=10;
    }


    s = sign<0 ? -s : s;



    if( e )
{

      long double scale = 1.0;

      if( e>307 && e<342 )
{

        while( e%308 ) { scale *= 1.0e+1; e -= 1; }
        if( esign<0 )
{

          result = s / scale;
          result /= 1.0e+308;
        }else{
          result = s * scale;
          result *= 1.0e+308;
        }
      }else if( e>=342 )
{

        if( esign<0 )
{

          result = 0.0*s;
        }else{
          result = 1e308*1e308*s;
        }
      }else{


        while( e%22 ) { scale *= 1.0e+1; e -= 1; }
        while( e>0 ) { scale *= 1.0e+22; e -= 22; }
        if( esign<0 )
{

          result = s / scale;
        }else{
          result = s * scale;
        }
      }
    } else {
      result = (double)s;
    }
  }


  *pResult = result;


  return z>=zEnd && nDigits>0 && eValid && nonNum==0;



}
# 25922 "sqlite3.c"
static int compare2pow63(const char *zNum, int incr)
{

  int c = 0;
  int i;

  const char *pow63 = "922337203685477580";
  for(i=0; c==0 && i<18; i++)
{

    c = (zNum[i*incr]-pow63[i])*10;
  }
  if( c==0 )
{

    c = zNum[18*incr] - '8';
    ;
    ;
    ;
  }
  return c;
}
# 25958 "sqlite3.c"
static int sqlite3Atoi64(const char *zNum, i64 *pNum, int length, u8 enc)
{

  int incr;
  u64 u = 0;
  int neg = 0;
  int i;
  int c = 0;
  int nonNum = 0;
  const char *zStart;
  const char *zEnd = zNum + length;
  ((void) (0));
  if( enc==1 )
{

    incr = 1;
  }else{
    incr = 2;
    ((void) (0));
    for(i=3-enc; i<length && zNum[i]==0; i+=2)
{
}
    nonNum = i<length;
    zEnd = zNum+i+enc-3;
    zNum += (enc&1);
  }
  while( zNum<zEnd && (sqlite3CtypeMap[(unsigned char)(*zNum)]&0x01) ) zNum+=incr;
  if( zNum<zEnd )
{

    if( *zNum=='-' )
{

      neg = 1;
      zNum+=incr;
    }else if( *zNum=='+' )
{

      zNum+=incr;
    }
  }
  zStart = zNum;
  while( zNum<zEnd && zNum[0]=='0' )
{
 zNum+=incr; }
  for(i=0; &zNum[i]<zEnd && (c=zNum[i])>='0' && c<='9'; i+=incr)
{

    u = u*10 + c - '0';
  }
  if( u>(0xffffffff|(((i64)0x7fffffff)<<32)) )
{

    *pNum = neg ? (((i64)-1) - (0xffffffff|(((i64)0x7fffffff)<<32))) : (0xffffffff|(((i64)0x7fffffff)<<32));
  }else if( neg )
{

    *pNum = -(i64)u;
  }else{
    *pNum = (i64)u;
  }
  ;
  ;
  ;
  if( (c!=0 && &zNum[i]<zEnd) || (i==0 && zStart==zNum)
       || i>19*incr || nonNum )
{



    return 1;
  }else if( i<19*incr )
{


    ((void) (0));
    return 0;
  }else{

    c = compare2pow63(zNum, incr);
    if( c<0 )
{


      ((void) (0));
      return 0;
    }else if( c>0 )
{


      return 1;
    }else{


      ((void) (0));
      return neg ? 0 : 2;
    }
  }
}
# 26041 "sqlite3.c"
static int sqlite3DecOrHexToI64(const char *z, i64 *pOut)
{


  if( z[0]=='0'
   && (z[1]=='x' || z[1]=='X')
   && (sqlite3CtypeMap[(unsigned char)(z[2])]&0x08)
  )
{

    u64 u = 0;
    int i, k;
    for(i=2; z[i]=='0'; i++)
{
}
    for(k=i; (sqlite3CtypeMap[(unsigned char)(z[k])]&0x08); k++)
{

      u = u*16 + sqlite3HexToInt(z[k]);
    }
    memcpy(pOut, &u, 8);
    return (z[k]==0 && k-i<=16) ? 0 : 1;
  }else

  {
    return sqlite3Atoi64(z, pOut, sqlite3Strlen30(z), 1);
  }
}
# 26072 "sqlite3.c"
static int sqlite3GetInt32(const char *zNum, int *pValue)
{

  sqlite_int64 v = 0;
  int i, c;
  int neg = 0;
  if( zNum[0]=='-' )
{

    neg = 1;
    zNum++;
  }else if( zNum[0]=='+' )
{

    zNum++;
  }

  else if( zNum[0]=='0'
        && (zNum[1]=='x' || zNum[1]=='X')
        && (sqlite3CtypeMap[(unsigned char)(zNum[2])]&0x08)
  )
{

    u32 u = 0;
    zNum += 2;
    while( zNum[0]=='0' ) zNum++;
    for(i=0; (sqlite3CtypeMap[(unsigned char)(zNum[i])]&0x08) && i<8; i++)
{

      u = u*16 + sqlite3HexToInt(zNum[i]);
    }
    if( (u&0x80000000)==0 && (sqlite3CtypeMap[(unsigned char)(zNum[i])]&0x08)==0 )
{

      memcpy(pValue, &u, 4);
      return 1;
    }else{
      return 0;
    }
  }

  while( zNum[0]=='0' ) zNum++;
  for(i=0; i<11 && (c = zNum[i] - '0')>=0 && c<=9; i++)
{

    v = v*10 + c;
  }






  ;
  if( i>10 )
{

    return 0;
  }
  ;
  if( v-neg>2147483647 )
{

    return 0;
  }
  if( neg )
{

    v = -v;
  }
  *pValue = (int)v;
  return 1;
}





static int sqlite3Atoi(const char *z)
{

  int x = 0;
  if( z ) sqlite3GetInt32(z, &x);
  return x;
}
# 26165 "sqlite3.c"
static int __attribute__((noinline)) putVarint64(unsigned char *p, u64 v)
{

  int i, j, n;
  u8 buf[10];
  if( v & (((u64)0xff000000)<<32) )
{

    p[8] = (u8)v;
    v >>= 8;
    for(i=7; i>=0; i--)
{

      p[i] = (u8)((v & 0x7f) | 0x80);
      v >>= 7;
    }
    return 9;
  }
  n = 0;
  do{
    buf[n++] = (u8)((v & 0x7f) | 0x80);
    v >>= 7;
  }while( v!=0 );
  buf[0] &= 0x7f;
  ((void) (0));
  for(i=0, j=n-1; j>=0; j--, i++)
{

    p[i] = buf[j];
  }
  return n;
}
static int sqlite3PutVarint(unsigned char *p, u64 v)
{

  if( v<=0x7f )
{

    p[0] = v&0x7f;
    return 1;
  }
  if( v<=0x3fff )
{

    p[0] = ((v>>7)&0x7f)|0x80;
    p[1] = v&0x7f;
    return 2;
  }
  return putVarint64(p,v);
}
# 26219 "sqlite3.c"
static u8 sqlite3GetVarint(const unsigned char *p, u64 *v)
{

  u32 a,b,s;

  a = *p;

  if (!(a&0x80))
  {
    *v = a;
    return 1;
  }

  p++;
  b = *p;

  if (!(b&0x80))
  {
    a &= 0x7f;
    a = a<<7;
    a |= b;
    *v = a;
    return 2;
  }


  ((void) (0));
  ((void) (0));

  p++;
  a = a<<14;
  a |= *p;

  if (!(a&0x80))
  {
    a &= 0x001fc07f;
    b &= 0x7f;
    b = b<<7;
    a |= b;
    *v = a;
    return 3;
  }


  a &= 0x001fc07f;
  p++;
  b = b<<14;
  b |= *p;

  if (!(b&0x80))
  {
    b &= 0x001fc07f;


    a = a<<7;
    a |= b;
    *v = a;
    return 4;
  }






  b &= 0x001fc07f;
  s = a;


  p++;
  a = a<<14;
  a |= *p;

  if (!(a&0x80))
  {




    b = b<<7;
    a |= b;
    s = s>>18;
    *v = ((u64)s)<<32 | a;
    return 5;
  }


  s = s<<7;
  s |= b;


  p++;
  b = b<<14;
  b |= *p;

  if (!(b&0x80))
  {


    a &= 0x001fc07f;
    a = a<<7;
    a |= b;
    s = s>>18;
    *v = ((u64)s)<<32 | a;
    return 6;
  }

  p++;
  a = a<<14;
  a |= *p;

  if (!(a&0x80))
  {
    a &= 0xf01fc07f;
    b &= 0x001fc07f;
    b = b<<7;
    a |= b;
    s = s>>11;
    *v = ((u64)s)<<32 | a;
    return 7;
  }


  a &= 0x001fc07f;
  p++;
  b = b<<14;
  b |= *p;

  if (!(b&0x80))
  {
    b &= 0xf01fc07f;


    a = a<<7;
    a |= b;
    s = s>>4;
    *v = ((u64)s)<<32 | a;
    return 8;
  }

  p++;
  a = a<<15;
  a |= *p;




  b &= 0x001fc07f;
  b = b<<8;
  a |= b;

  s = s<<4;
  b = p[-4];
  b &= 0x7f;
  b = b>>3;
  s |= b;

  *v = ((u64)s)<<32 | a;

  return 9;
}
# 26390 "sqlite3.c"
static u8 sqlite3GetVarint32(const unsigned char *p, u32 *v)
{

  u32 a,b;



  a = *p;
# 26407 "sqlite3.c"
  p++;
  b = *p;

  if (!(b&0x80))
  {

    a &= 0x7f;
    a = a<<7;
    *v = a | b;
    return 2;
  }


  p++;
  a = a<<14;
  a |= *p;

  if (!(a&0x80))
  {

    a &= (0x7f<<14)|(0x7f);
    b &= 0x7f;
    b = b<<7;
    *v = a | b;
    return 3;
  }
# 26444 "sqlite3.c"
  {
    u64 v64;
    u8 n;

    p -= 2;
    n = sqlite3GetVarint(p, &v64);
    ((void) (0));
    if( (v64 & ((((u64)1)<<32)-1))!=v64 )
{

      *v = 0xffffffff;
    }else{
      *v = (u32)v64;
    }
    return n;
  }
# 26507 "sqlite3.c"
}





static int sqlite3VarintLen(u64 v)
{

  int i;
  for(i=1; (v >>= 7)!=0; i++)
{
 ((void) (0)); }
  return i;
}





static u32 sqlite3Get4byte(const u8 *p)
{







  u32 x;
  memcpy(&x,p,4);
  return __builtin_bswap32(x);
# 26542 "sqlite3.c"
}
static void sqlite3Put4byte(unsigned char *p, u32 v)
{





  u32 x = __builtin_bswap32(v);
  memcpy(p,&x,4);
# 26560 "sqlite3.c"
}
# 26569 "sqlite3.c"
static u8 sqlite3HexToInt(int h)
{

  ((void) (0));

  h += 9*(1&(h>>6));




  return (u8)(h & 0xf);
}
# 26587 "sqlite3.c"
static void *sqlite3HexToBlob(sqlite3 *db, const char *z, int n)
{

  char *zBlob;
  int i;

  zBlob = (char *)sqlite3DbMallocRawNN(db, n/2 + 1);
  n--;
  if( zBlob )
{

    for(i=0; i<n; i+=2)
{

      zBlob[i/2] = (sqlite3HexToInt(z[i])<<4) | sqlite3HexToInt(z[i+1]);
    }
    zBlob[i/2] = 0;
  }
  return zBlob;
}







static void logBadConnection(const char *zType)
{

  sqlite3_log(21,
     "API call with %s database connection pointer",
     zType
  );
}
# 26629 "sqlite3.c"
static int sqlite3SafetyCheckOk(sqlite3 *db)
{

  u32 magic;
  if( db==0 )
{

    logBadConnection("NULL");
    return 0;
  }
  magic = db->magic;
  if( magic!=0xa029a697 )
{

    if( sqlite3SafetyCheckSickOrOk(db) )
{

      ;
      logBadConnection("unopened");
    }
    return 0;
  }else{
    return 1;
  }
}
static int sqlite3SafetyCheckSickOrOk(sqlite3 *db)
{

  u32 magic;
  magic = db->magic;
  if( magic!=0x4b771290 &&
      magic!=0xa029a697 &&
      magic!=0xf03b7906 )
{

    ;
    logBadConnection("invalid");
    return 0;
  }else{
    return 1;
  }
}







static int sqlite3AddInt64(i64 *pA, i64 iB)
{

  i64 iA = *pA;
  ; ;
  ; ;
  if( iB>=0 )
{

    ;
    ;
    if( iA>0 && (0xffffffff|(((i64)0x7fffffff)<<32)) - iA < iB ) return 1;
  }else{
    ;
    ;
    if( iA<0 && -(iA + (0xffffffff|(((i64)0x7fffffff)<<32))) > iB + 1 ) return 1;
  }
  *pA += iB;
  return 0;
}
static int sqlite3SubInt64(i64 *pA, i64 iB)
{

  ;
  if( iB==(((i64)-1) - (0xffffffff|(((i64)0x7fffffff)<<32))) )
{

    ; ;
    if( (*pA)>=0 ) return 1;
    *pA -= iB;
    return 0;
  }else{
    return sqlite3AddInt64(pA, -iB);
  }
}


static int sqlite3MulInt64(i64 *pA, i64 iB)
{

  i64 iA = *pA;
  i64 iA1, iA0, iB1, iB0, r;

  iA1 = iA/(((i64)1)<<32);
  iA0 = iA % (((i64)1)<<32);
  iB1 = iB/(((i64)1)<<32);
  iB0 = iB % (((i64)1)<<32);
  if( iA1==0 )
{

    if( iB1==0 )
{

      *pA *= iB;
      return 0;
    }
    r = iA0*iB1;
  }else if( iB1==0 )
{

    r = iA1*iB0;
  }else{

    return 1;
  }
  ;
  ;
  ;
  ;
  if( r<(-(((i64)1)<<31)) || r>=(((i64)1)<<31) ) return 1;
  r *= (((i64)1)<<32);
  if( sqlite3AddInt64(&r, iA0*iB0) ) return 1;
  *pA = r;
  return 0;
}





static int sqlite3AbsInt32(int x)
{

  if( x>=0 ) return x;
  if( x==(int)0x80000000 ) return 0x7fffffff;
  return -x;
}
# 26773 "sqlite3.c"
static LogEst sqlite3LogEstAdd(LogEst a, LogEst b)
{

  static const unsigned char x[] = {
     10, 10,
      9, 9,
      8, 8,
      7, 7, 7,
      6, 6, 6,
      5, 5, 5,
      4, 4, 4, 4,
      3, 3, 3, 3, 3, 3,
      2, 2, 2, 2, 2, 2, 2,
  };
  if( a>=b )
{

    if( a>b+49 ) return a;
    if( a>b+31 ) return a+1;
    return a+x[a-b];
  }else{
    if( b>a+49 ) return b;
    if( b>a+31 ) return b+1;
    return b+x[b-a];
  }
}





static LogEst sqlite3LogEst(u64 x)
{

  static LogEst a[] = { 0, 2, 3, 5, 6, 7, 8, 9 };
  LogEst y = 40;
  if( x<8 )
{

    if( x<2 ) return 0;
    while( x<8 )
{
 y -= 10; x <<= 1; }
  }else{
    while( x>255 )
{
 y += 40; x >>= 4; }
    while( x>15 )
{
 y += 10; x >>= 1; }
  }
  return a[x&7] + y - 10;
}






static LogEst sqlite3LogEstFromDouble(double x)
{

  u64 a;
  LogEst e;
  ((void) (0));
  if( x<=1 ) return 0;
  if( x<=2000000000 ) return sqlite3LogEst((u64)x);
  memcpy(&a, &x, 8);
  e = (a>>52) - 1022;
  return e*10;
}
# 26882 "sqlite3.c"
static void sqlite3HashInit(Hash *pNew)
{

  ((void) (0));
  pNew->first = 0;
  pNew->count = 0;
  pNew->htsize = 0;
  pNew->ht = 0;
}





static void sqlite3HashClear(Hash *pH)
{

  HashElem *elem;

  ((void) (0));
  elem = pH->first;
  pH->first = 0;
  sqlite3_free(pH->ht);
  pH->ht = 0;
  pH->htsize = 0;
  while( elem )
{

    HashElem *next_elem = elem->next;
    sqlite3_free(elem);
    elem = next_elem;
  }
  pH->count = 0;
}




static unsigned int strHash(const char *z)
{

  unsigned int h = 0;
  unsigned char c;
  while( (c = (unsigned char)*z++)!=0 )
{

    h = (h<<3) ^ h ^ sqlite3UpperToLower[c];
  }
  return h;
}





static void insertElement(
  Hash *pH,
  struct _ht *pEntry,
  HashElem *pNew
)
{

  HashElem *pHead;
  if( pEntry )
{

    pHead = pEntry->count ? pEntry->chain : 0;
    pEntry->count++;
    pEntry->chain = pNew;
  }else{
    pHead = 0;
  }
  if( pHead )
{

    pNew->next = pHead;
    pNew->prev = pHead->prev;
    if( pHead->prev )
{
 pHead->prev->next = pNew; }
    else { pH->first = pNew; }
    pHead->prev = pNew;
  }else{
    pNew->next = pH->first;
    if( pH->first )
{
 pH->first->prev = pNew; }
    pNew->prev = 0;
    pH->first = pNew;
  }
}
# 26961 "sqlite3.c"
static int rehash(Hash *pH, unsigned int new_size)
{

  struct _ht *new_ht;
  HashElem *elem, *next_elem;


  if( new_size*sizeof(struct _ht)>1024 )
{

    new_size = 1024/sizeof(struct _ht);
  }
  if( new_size==pH->htsize ) return 0;
# 26980 "sqlite3.c"
  sqlite3BeginBenignMalloc();
  new_ht = (struct _ht *)sqlite3Malloc( new_size*sizeof(struct _ht) );
  sqlite3EndBenignMalloc();

  if( new_ht==0 ) return 0;
  sqlite3_free(pH->ht);
  pH->ht = new_ht;
  pH->htsize = new_size = sqlite3MallocSize(new_ht)/sizeof(struct _ht);
  memset(new_ht, 0, new_size*sizeof(struct _ht));
  for(elem=pH->first, pH->first=0; elem; elem = next_elem)
{

    unsigned int h = strHash(elem->pKey) % new_size;
    next_elem = elem->next;
    insertElement(pH, &new_ht[h], elem);
  }
  return 1;
}





static HashElem *findElementWithHash(
  const Hash *pH,
  const char *pKey,
  unsigned int *pHash
)
{

  HashElem *elem;
  int count;
  unsigned int h;

  if( pH->ht )
{

    struct _ht *pEntry;
    h = strHash(pKey) % pH->htsize;
    pEntry = &pH->ht[h];
    elem = pEntry->chain;
    count = pEntry->count;
  }else{
    h = 0;
    elem = pH->first;
    count = pH->count;
  }
  *pHash = h;
  while( count-- )
{

    ((void) (0));
    if( sqlite3StrICmp(elem->pKey,pKey)==0 )
{

      return elem;
    }
    elem = elem->next;
  }
  return 0;
}




static void removeElementGivenHash(
  Hash *pH,
  HashElem* elem,
  unsigned int h
)
{

  struct _ht *pEntry;
  if( elem->prev )
{

    elem->prev->next = elem->next;
  }else{
    pH->first = elem->next;
  }
  if( elem->next )
{

    elem->next->prev = elem->prev;
  }
  if( pH->ht )
{

    pEntry = &pH->ht[h];
    if( pEntry->chain==elem )
{

      pEntry->chain = elem->next;
    }
    pEntry->count--;
    ((void) (0));
  }
  sqlite3_free( elem );
  pH->count--;
  if( pH->count==0 )
{

    ((void) (0));
    ((void) (0));
    sqlite3HashClear(pH);
  }
}





static void *sqlite3HashFind(const Hash *pH, const char *pKey)
{

  HashElem *elem;
  unsigned int h;

  ((void) (0));
  ((void) (0));
  elem = findElementWithHash(pH, pKey, &h);
  return elem ? elem->data : 0;
}
# 27094 "sqlite3.c"
static void *sqlite3HashInsert(Hash *pH, const char *pKey, void *data)
{

  unsigned int h;
  HashElem *elem;
  HashElem *new_elem;

  ((void) (0));
  ((void) (0));
  elem = findElementWithHash(pH,pKey,&h);
  if( elem )
{

    void *old_data = elem->data;
    if( data==0 )
{

      removeElementGivenHash(pH,elem,h);
    }else{
      elem->data = data;
      elem->pKey = pKey;
    }
    return old_data;
  }
  if( data==0 ) return 0;
  new_elem = (HashElem*)sqlite3Malloc( sizeof(HashElem) );
  if( new_elem==0 ) return data;
  new_elem->pKey = pKey;
  new_elem->data = data;
  pH->count++;
  if( pH->count>=10 && pH->count > 2*pH->htsize )
{

    if( rehash(pH, pH->count*2) )
{

      ((void) (0));
      h = strHash(pKey) % pH->htsize;
    }
  }
  insertElement(pH, pH->ht ? &pH->ht[h] : 0, new_elem);
  return 0;
}
# 27140 "sqlite3.c"
static const char *sqlite3OpcodeName(int i)
{

 static const char *const azName[] = {
              "Savepoint" ,
              "AutoCommit" ,
              "Transaction" ,
              "SorterNext" ,
              "PrevIfOpen" ,
              "NextIfOpen" ,
              "Prev" ,
              "Next" ,
              "Checkpoint" ,
              "JournalMode" ,
              "Vacuum" ,
              "VFilter" ,
              "VUpdate" ,
              "Goto" ,
              "Gosub" ,
              "Return" ,
              "InitCoroutine" ,
              "EndCoroutine" ,
              "Yield" ,
              "Not" ,
              "HaltIfNull" ,
              "Halt" ,
              "Integer" ,
              "Int64" ,
              "String" ,
              "Null" ,
              "SoftNull" ,
              "Blob" ,
              "Variable" ,
              "Move" ,
              "Copy" ,
              "SCopy" ,
              "IntCopy" ,
              "ResultRow" ,
              "CollSeq" ,
              "Function0" ,
              "Function" ,
              "AddImm" ,
              "MustBeInt" ,
              "RealAffinity" ,
              "Cast" ,
              "Permutation" ,
              "Compare" ,
              "Jump" ,
              "Once" ,
              "If" ,
              "IfNot" ,
              "Column" ,
              "Affinity" ,
              "MakeRecord" ,
              "Count" ,
              "ReadCookie" ,
              "SetCookie" ,
              "ReopenIdx" ,
              "OpenRead" ,
              "OpenWrite" ,
              "OpenAutoindex" ,
              "OpenEphemeral" ,
              "SorterOpen" ,
              "SequenceTest" ,
              "OpenPseudo" ,
              "Close" ,
              "ColumnsUsed" ,
              "SeekLT" ,
              "SeekLE" ,
              "SeekGE" ,
              "SeekGT" ,
              "NoConflict" ,
              "NotFound" ,
              "Found" ,
              "NotExists" ,
              "Or" ,
              "And" ,
              "Sequence" ,
              "NewRowid" ,
              "Insert" ,
              "IsNull" ,
              "NotNull" ,
              "Ne" ,
              "Eq" ,
              "Gt" ,
              "Le" ,
              "Lt" ,
              "Ge" ,
              "InsertInt" ,
              "BitAnd" ,
              "BitOr" ,
              "ShiftLeft" ,
              "ShiftRight" ,
              "Add" ,
              "Subtract" ,
              "Multiply" ,
              "Divide" ,
              "Remainder" ,
              "Concat" ,
              "Delete" ,
              "BitNot" ,
              "String8" ,
              "ResetCount" ,
              "SorterCompare" ,
              "SorterData" ,
              "RowKey" ,
              "RowData" ,
              "Rowid" ,
              "NullRow" ,
              "Last" ,
              "SorterSort" ,
              "Sort" ,
              "Rewind" ,
              "SorterInsert" ,
              "IdxInsert" ,
              "IdxDelete" ,
              "Seek" ,
              "IdxRowid" ,
              "IdxLE" ,
              "IdxGT" ,
              "IdxLT" ,
              "IdxGE" ,
              "Destroy" ,
              "Clear" ,
              "ResetSorter" ,
              "CreateIndex" ,
              "CreateTable" ,
              "ParseSchema" ,
              "LoadAnalysis" ,
              "DropTable" ,
              "DropIndex" ,
              "DropTrigger" ,
              "IntegrityCk" ,
              "RowSetAdd" ,
              "RowSetRead" ,
              "RowSetTest" ,
              "Program" ,
              "Real" ,
              "Param" ,
              "FkCounter" ,
              "FkIfZero" ,
              "MemMax" ,
              "IfPos" ,
              "OffsetLimit" ,
              "IfNotZero" ,
              "DecrJumpZero" ,
              "JumpZeroIncr" ,
              "AggStep0" ,
              "AggStep" ,
              "AggFinal" ,
              "IncrVacuum" ,
              "Expire" ,
              "TableLock" ,
              "VBegin" ,
              "VCreate" ,
              "VDestroy" ,
              "VOpen" ,
              "VColumn" ,
              "VNext" ,
              "VRename" ,
              "Pagecount" ,
              "MaxPgcnt" ,
              "Init" ,
              "CursorHint" ,
              "Noop" ,
              "Explain" ,
  };
  return azName[i];
}
# 27401 "sqlite3.c"
# 1 "/usr/include/sys/stat.h" 1 3 4
# 102 "/usr/include/sys/stat.h" 3 4


# 1 "/usr/include/bits/stat.h" 1 3 4
# 46 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];



  };
# 105 "/usr/include/sys/stat.h" 2 3 4
# 216 "/usr/include/sys/stat.h" 3 4
extern int stat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "stat64") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (1, 2)));
extern int fstat (int __fd, struct stat *__buf) __asm__ ("" "fstat64") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));






extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 242 "/usr/include/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file, struct stat *__restrict __buf, int __flag) __asm__ ("" "fstatat64") __attribute__ ((__nothrow__ , __leaf__))


                 __attribute__ ((__nonnull__ (2, 3)));






extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 266 "/usr/include/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "lstat64") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1, 2)));





extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));




extern __mode_t getumask (void) __attribute__ ((__nothrow__ , __leaf__));



extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 409 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf) __asm__ ("" "__fxstat64") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename, struct stat *__stat_buf) __asm__ ("" "__xstat64") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename, struct stat *__stat_buf) __asm__ ("" "__lxstat64") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename, struct stat *__stat_buf, int __flag) __asm__ ("" "__fxstatat64") __attribute__ ((__nothrow__ , __leaf__))


                    __attribute__ ((__nonnull__ (3, 4)));
# 431 "/usr/include/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
# 533 "/usr/include/sys/stat.h" 3 4

# 27402 "sqlite3.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 35 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;




    __off64_t l_start;
    __off64_t l_len;

    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };



# 1 "/usr/include/bits/fcntl-linux.h" 1 3 4
# 38 "/usr/include/bits/fcntl-linux.h" 3 4
# 1 "/usr/include/bits/uio.h" 1 3 4
# 43 "/usr/include/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 39 "/usr/include/bits/fcntl-linux.h" 2 3 4
# 258 "/usr/include/bits/fcntl-linux.h" 3 4
enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 333 "/usr/include/bits/fcntl-linux.h" 3 4
struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};










extern ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    __attribute__ ((__nothrow__ , __leaf__));






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern ssize_t vmsplice (int __fdout, const struct iovec *__iov,
    size_t __count, unsigned int __flags);





extern ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
         __off64_t *__offout, size_t __len,
         unsigned int __flags);





extern ssize_t tee (int __fdin, int __fdout, size_t __len,
      unsigned int __flags);
# 392 "/usr/include/bits/fcntl-linux.h" 3 4
extern int fallocate (int __fd, int __mode, __off64_t __offset, __off64_t __len) __asm__ ("" "fallocate64")

                     ;





extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) __attribute__ ((__nothrow__ , __leaf__));





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);




# 61 "/usr/include/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 77 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/bits/stat.h" 1 3 4
# 78 "/usr/include/fcntl.h" 2 3 4
# 169 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 182 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __asm__ ("" "open64")
     __attribute__ ((__nonnull__ (1)));





extern int open64 (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 207 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...) __asm__ ("" "openat64")
                    __attribute__ ((__nonnull__ (2)));





extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 228 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __asm__ ("" "creat64")
                  __attribute__ ((__nonnull__ (1)));





extern int creat64 (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 257 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, __off64_t __len) __asm__ ("" "lockf64");





extern int lockf64 (int __fd, int __cmd, off64_t __len);
# 275 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off64_t __offset, __off64_t __len, int __advise) __asm__ ("" "posix_fadvise64") __attribute__ ((__nothrow__ , __leaf__))

                      ;





extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 296 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off64_t __offset, __off64_t __len) __asm__ ("" "posix_fallocate64")

                           ;





extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);
# 315 "/usr/include/fcntl.h" 3 4

# 27403 "sqlite3.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 205 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 206 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 22 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 2 3 4
# 210 "/usr/include/unistd.h" 2 3 4
# 229 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 230 "/usr/include/unistd.h" 2 3 4
# 270 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 290 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 340 "/usr/include/unistd.h" 3 4
extern __off64_t lseek (int __fd, __off64_t __offset, int __whence) __asm__ ("" "lseek64") __attribute__ ((__nothrow__ , __leaf__))

             ;





extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ , __leaf__));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 391 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64")

                    ;
extern ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pwrite64")

                     ;
# 407 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ , __leaf__)) ;
# 435 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 447 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 472 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 514 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ , __leaf__));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 24 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 613 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 663 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ , __leaf__)) ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ , __leaf__)) ;






extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 874 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 875 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) __attribute__ ((__nothrow__ , __leaf__));






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 1000 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off64_t __length) __asm__ ("" "truncate64") __attribute__ ((__nothrow__ , __leaf__))

                  __attribute__ ((__nonnull__ (1))) ;





extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1022 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off64_t __length) __asm__ ("" "ftruncate64") __attribute__ ((__nothrow__ , __leaf__))
                        ;





extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1040 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1061 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1115 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 1154 "/usr/include/unistd.h" 3 4

# 27404 "sqlite3.c" 2

# 1 "/usr/include/sys/time.h" 1 3 4
# 27 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 28 "/usr/include/sys/time.h" 2 3 4
# 37 "/usr/include/sys/time.h" 3 4

# 55 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 71 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     __attribute__ ((__nothrow__ , __leaf__));





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ , __leaf__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };




typedef enum __itimer_which __itimer_which_t;






extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ , __leaf__));




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ , __leaf__));




extern int utimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));






extern int futimesat (int __fd, const char *__file,
        const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));
# 189 "/usr/include/sys/time.h" 3 4

# 27406 "sqlite3.c" 2
# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4




# 1 "/usr/include/bits/errno.h" 1 3 4
# 24 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/bits/errno.h" 2 3 4
# 50 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 54 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;




# 68 "/usr/include/errno.h" 3 4
typedef int error_t;
# 27407 "sqlite3.c" 2

# 1 "/usr/include/sys/mman.h" 1 3 4
# 25 "/usr/include/sys/mman.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 26 "/usr/include/sys/mman.h" 2 3 4
# 41 "/usr/include/sys/mman.h" 3 4
# 1 "/usr/include/bits/mman.h" 1 3 4
# 45 "/usr/include/bits/mman.h" 3 4
# 1 "/usr/include/bits/mman-linux.h" 1 3 4
# 45 "/usr/include/bits/mman.h" 2 3 4
# 42 "/usr/include/sys/mman.h" 2 3 4





# 61 "/usr/include/sys/mman.h" 3 4
extern void * mmap (void *__addr, size_t __len, int __prot, int __flags, int __fd, __off64_t __offset) __asm__ ("" "mmap64") __attribute__ ((__nothrow__ , __leaf__))


                ;





extern void *mmap64 (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off64_t __offset) __attribute__ ((__nothrow__ , __leaf__));




extern int munmap (void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int mprotect (void *__addr, size_t __len, int __prot) __attribute__ ((__nothrow__ , __leaf__));







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ , __leaf__));



extern int posix_madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ , __leaf__));




extern int mlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));


extern int munlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int mlockall (int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern int munlockall (void) __attribute__ ((__nothrow__ , __leaf__));







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     __attribute__ ((__nothrow__ , __leaf__));
# 133 "/usr/include/sys/mman.h" 3 4
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
       int __flags, ...) __attribute__ ((__nothrow__ , __leaf__));



extern int remap_file_pages (void *__start, size_t __size, int __prot,
        size_t __pgoff, int __flags) __attribute__ ((__nothrow__ , __leaf__));




extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);


# 27409 "sqlite3.c" 2
# 27491 "sqlite3.c"
typedef struct unixShm unixShm;
typedef struct unixShmNode unixShmNode;
typedef struct unixInodeInfo unixInodeInfo;
typedef struct UnixUnusedFd UnixUnusedFd;







struct UnixUnusedFd {
  int fd;
  int flags;
  UnixUnusedFd *pNext;
};





typedef struct unixFile unixFile;
struct unixFile {
  sqlite3_io_methods const *pMethod;
  sqlite3_vfs *pVfs;
  unixInodeInfo *pInode;
  int h;
  unsigned char eFileLock;
  unsigned short int ctrlFlags;
  int lastErrno;
  void *lockingContext;
  UnixUnusedFd *pUnused;
  const char *zPath;
  unixShm *pShm;
  int szChunk;

  int nFetchOut;
  sqlite3_int64 mmapSize;
  sqlite3_int64 mmapSizeActual;
  sqlite3_int64 mmapSizeMax;
  void *pMapRegion;
# 27566 "sqlite3.c"
};





static pid_t randomnessPid = 0;
# 27847 "sqlite3.c"
static int posixOpen(const char *zFile, int flags, int mode)
{

  return open(zFile, flags, mode);
}


static int openDirectory(const char*, int*);
static int unixGetpagesize(void);







static struct unix_syscall {
  const char *zName;
  sqlite3_syscall_ptr pCurrent;
  sqlite3_syscall_ptr pDefault;
} aSyscall[] = {
  { "open", (sqlite3_syscall_ptr)posixOpen, 0 },


  { "close", (sqlite3_syscall_ptr)close, 0 },


  { "access", (sqlite3_syscall_ptr)access, 0 },


  { "getcwd", (sqlite3_syscall_ptr)getcwd, 0 },


  { "stat", (sqlite3_syscall_ptr)stat, 0 },
# 27891 "sqlite3.c"
  { "fstat", (sqlite3_syscall_ptr)fstat, 0 },



  { "ftruncate", (sqlite3_syscall_ptr)ftruncate, 0 },


  { "fcntl", (sqlite3_syscall_ptr)fcntl, 0 },


  { "read", (sqlite3_syscall_ptr)read, 0 },





  { "pread", (sqlite3_syscall_ptr)0, 0 },






  { "pread64", (sqlite3_syscall_ptr)0, 0 },



  { "write", (sqlite3_syscall_ptr)write, 0 },





  { "pwrite", (sqlite3_syscall_ptr)0, 0 },







  { "pwrite64", (sqlite3_syscall_ptr)0, 0 },




  { "fchmod", (sqlite3_syscall_ptr)fchmod, 0 },





  { "fallocate", (sqlite3_syscall_ptr)0, 0 },



  { "unlink", (sqlite3_syscall_ptr)unlink, 0 },


  { "openDirectory", (sqlite3_syscall_ptr)openDirectory, 0 },


  { "mkdir", (sqlite3_syscall_ptr)mkdir, 0 },


  { "rmdir", (sqlite3_syscall_ptr)rmdir, 0 },



  { "fchown", (sqlite3_syscall_ptr)fchown, 0 },





  { "geteuid", (sqlite3_syscall_ptr)geteuid, 0 },



  { "mmap", (sqlite3_syscall_ptr)mmap, 0 },






  { "munmap", (sqlite3_syscall_ptr)munmap, 0 },






  { "mremap", (sqlite3_syscall_ptr)mremap, 0 },






  { "getpagesize", (sqlite3_syscall_ptr)unixGetpagesize, 0 },






  { "readlink", (sqlite3_syscall_ptr)readlink, 0 },






  { "lstat", (sqlite3_syscall_ptr)lstat, 0 },





};







static int robustFchown(int fd, uid_t uid, gid_t gid)
{


  return ((uid_t(*)(void))aSyscall[21].pCurrent)() ? 0 : ((int(*)(int,uid_t,gid_t))aSyscall[20].pCurrent)(fd,uid,gid);



}







static int unixSetSystemCall(
  sqlite3_vfs *pNotUsed,
  const char *zName,
  sqlite3_syscall_ptr pNewFunc
)
{

  unsigned int i;
  int rc = 12;

  (void)(pNotUsed);
  if( zName==0 )
{




    rc = 0;
    for(i=0; i<sizeof(aSyscall)/sizeof(aSyscall[0]); i++)
{

      if( aSyscall[i].pDefault )
{

        aSyscall[i].pCurrent = aSyscall[i].pDefault;
      }
    }
  }else{



    for(i=0; i<sizeof(aSyscall)/sizeof(aSyscall[0]); i++)
{

      if( strcmp(zName, aSyscall[i].zName)==0 )
{

        if( aSyscall[i].pDefault==0 )
{

          aSyscall[i].pDefault = aSyscall[i].pCurrent;
        }
        rc = 0;
        if( pNewFunc==0 ) pNewFunc = aSyscall[i].pDefault;
        aSyscall[i].pCurrent = pNewFunc;
        break;
      }
    }
  }
  return rc;
}






static sqlite3_syscall_ptr unixGetSystemCall(
  sqlite3_vfs *pNotUsed,
  const char *zName
)
{

  unsigned int i;

  (void)(pNotUsed);
  for(i=0; i<sizeof(aSyscall)/sizeof(aSyscall[0]); i++)
{

    if( strcmp(zName, aSyscall[i].zName)==0 ) return aSyscall[i].pCurrent;
  }
  return 0;
}







static const char *unixNextSystemCall(sqlite3_vfs *p, const char *zName)
{

  int i = -1;

  (void)(p);
  if( zName )
{

    for(i=0; i<((int)(sizeof(aSyscall)/sizeof(aSyscall[0])))-1; i++)
{

      if( strcmp(zName, aSyscall[i].zName)==0 ) break;
    }
  }
  for(i++; i<((int)(sizeof(aSyscall)/sizeof(aSyscall[0]))); i++)
{

    if( aSyscall[i].pCurrent!=0 ) return aSyscall[i].zName;
  }
  return 0;
}
# 28136 "sqlite3.c"
static int robust_open(const char *z, int f, mode_t m)
{

  int fd;
  mode_t m2 = m ? m : 0644;
  while(1)
{


    fd = ((int(*)(const char*,int,int))aSyscall[0].pCurrent)(z,f|02000000,m2);



    if( fd<0 )
{

      if( (*__errno_location ())==4 ) continue;
      break;
    }
    if( fd>=3 ) break;
    ((int(*)(int))aSyscall[1].pCurrent)(fd);
    sqlite3_log(28,
                "attempt to open \"%s\" as file descriptor %d", z, fd);
    fd = -1;
    if( ((int(*)(const char*,int,int))aSyscall[0].pCurrent)("/dev/null", f, m)<0 ) break;
  }
  if( fd>=0 )
{

    if( m!=0 )
{

      struct stat statbuf;
      if( ((int(*)(int,struct stat*))aSyscall[5].pCurrent)(fd, &statbuf)==0
       && statbuf.st_size==0
       && (statbuf.st_mode&0777)!=m
      )
{

        ((int(*)(int,mode_t))aSyscall[14].pCurrent)(fd, m);
      }
    }



  }
  return fd;
}
# 28187 "sqlite3.c"
static void unixEnterMutex(void)
{

  sqlite3_mutex_enter(sqlite3MutexAlloc(11));
}
static void unixLeaveMutex(void)
{

  sqlite3_mutex_leave(sqlite3MutexAlloc(11));
}
# 28285 "sqlite3.c"
static int robust_ftruncate(int h, sqlite3_int64 sz)
{

  int rc;
# 28296 "sqlite3.c"
  do{ rc = ((int(*)(int,off_t))aSyscall[6].pCurrent)(h,sz); }while( rc<0 && (*__errno_location ())==4 );
  return rc;
}
# 28310 "sqlite3.c"
static int sqliteErrorFromPosixError(int posixError, int sqliteIOErr) {
  ((void) (0))


                                                           ;
  switch (posixError) {
  case 13:
  case 11:
  case 110:
  case 16:
  case 4:
  case 37:


    return 5;

  case 1:
    return 3;

  default:
    return sqliteIOErr;
  }
}
# 28352 "sqlite3.c"
struct vxworksFileId {
  struct vxworksFileId *pNext;
  int nRef;
  int nName;
  char *zCanonicalName;
};
# 28567 "sqlite3.c"
struct unixFileId {
  dev_t dev;



  ino_t ino;

};
# 28585 "sqlite3.c"
struct unixInodeInfo {
  struct unixFileId fileId;
  int nShared;
  unsigned char eFileLock;
  unsigned char bProcessLock;
  int nRef;
  unixShmNode *pShmNode;
  int nLock;
  UnixUnusedFd *pUnused;
  unixInodeInfo *pNext;
  unixInodeInfo *pPrev;







};




static unixInodeInfo *inodeList = 0;
# 28627 "sqlite3.c"
static int unixLogErrorAtLine(
  int errcode,
  const char *zFunc,
  const char *zPath,
  int iLine
)
{

  char *zErr;
  int iErrno = (*__errno_location ());
# 28664 "sqlite3.c"
  zErr = "";





  if( zPath==0 ) zPath = "";
  sqlite3_log(errcode,
      "os_unix.c:%d: (%d) %s(%s) - %s",
      iLine, iErrno, zFunc, zPath, zErr
  );

  return errcode;
}
# 28692 "sqlite3.c"
static void robust_close(unixFile *pFile, int h, int lineno)
{

  if( ((int(*)(int))aSyscall[1].pCurrent)(h) )
{

    unixLogErrorAtLine((10 | (16<<8)), "close",
                       pFile ? pFile->zPath : 0, lineno);
  }
}





static void storeLastErrno(unixFile *pFile, int error)
{

  pFile->lastErrno = error;
}




static void closePendingFds(unixFile *pFile)
{

  unixInodeInfo *pInode = pFile->pInode;
  UnixUnusedFd *p;
  UnixUnusedFd *pNext;
  for(p=pInode->pUnused; p; p=pNext)
{

    pNext = p->pNext;
    robust_close(pFile, p->fd, 28716);
    sqlite3_free(p);
  }
  pInode->pUnused = 0;
}







static void releaseInodeInfo(unixFile *pFile)
{

  unixInodeInfo *pInode = pFile->pInode;
  ((void) (0));
  if( (pInode) )
{

    pInode->nRef--;
    if( pInode->nRef==0 )
{

      ((void) (0));
      closePendingFds(pFile);
      if( pInode->pPrev )
{

        ((void) (0));
        pInode->pPrev->pNext = pInode->pNext;
      }else{
        ((void) (0));
        inodeList = pInode->pNext;
      }
      if( pInode->pNext )
{

        ((void) (0));
        pInode->pNext->pPrev = pInode->pPrev;
      }
      sqlite3_free(pInode);
    }
  }
}
# 28762 "sqlite3.c"
static int findInodeInfo(
  unixFile *pFile,
  unixInodeInfo **ppInode
)
{

  int rc;
  int fd;
  struct unixFileId fileId;
  struct stat statbuf;
  unixInodeInfo *pInode = 0;

  ((void) (0));




  fd = pFile->h;
  rc = ((int(*)(int,struct stat*))aSyscall[5].pCurrent)(fd, &statbuf);
  if( rc!=0 )
{

    storeLastErrno(pFile, (*__errno_location ()));



    return 10;
  }
# 28812 "sqlite3.c"
  memset(&fileId, 0, sizeof(fileId));
  fileId.dev = statbuf.st_dev;



  fileId.ino = statbuf.st_ino;

  pInode = inodeList;
  while( pInode && memcmp(&fileId, &pInode->fileId, sizeof(fileId)) )
{

    pInode = pInode->pNext;
  }
  if( pInode==0 )
{

    pInode = sqlite3_malloc64( sizeof(*pInode) );
    if( pInode==0 )
{

      return 7;
    }
    memset(pInode, 0, sizeof(*pInode));
    memcpy(&pInode->fileId, &fileId, sizeof(fileId));
    pInode->nRef = 1;
    pInode->pNext = inodeList;
    pInode->pPrev = 0;
    if( inodeList ) inodeList->pPrev = pInode;
    inodeList = pInode;
  }else{
    pInode->nRef++;
  }
  *ppInode = pInode;
  return 0;
}




static int fileHasMoved(unixFile *pFile)
{




  struct stat buf;
  return pFile->pInode!=0 &&
      (((int(*)(const char*,struct stat*))aSyscall[4].pCurrent)(pFile->zPath, &buf)!=0 || buf.st_ino!=pFile->pInode->fileId.ino);

}
# 28865 "sqlite3.c"
static void verifyDbFile(unixFile *pFile)
{

  struct stat buf;
  int rc;


  if( pFile->ctrlFlags & 0x80 ) return;

  rc = ((int(*)(int,struct stat*))aSyscall[5].pCurrent)(pFile->h, &buf);
  if( rc!=0 )
{

    sqlite3_log(28, "cannot fstat db file %s", pFile->zPath);
    return;
  }
  if( buf.st_nlink==0 )
{

    sqlite3_log(28, "file unlinked while open: %s", pFile->zPath);
    return;
  }
  if( buf.st_nlink>1 )
{

    sqlite3_log(28, "multiple links to file: %s", pFile->zPath);
    return;
  }
  if( fileHasMoved(pFile) )
{

    sqlite3_log(28, "file renamed while open: %s", pFile->zPath);
    return;
  }
}
# 28898 "sqlite3.c"
static int unixCheckReservedLock(sqlite3_file *id, int *pResOut)
{

  int rc = 0;
  int reserved = 0;
  unixFile *pFile = (unixFile*)id;

  ;

  ((void) (0));
  ((void) (0));
  unixEnterMutex();


  if( pFile->pInode->eFileLock>1 )
{

    reserved = 1;
  }




  if( !reserved && !pFile->pInode->bProcessLock )
{

    struct flock lock;
    lock.l_whence = 0;
    lock.l_start = (sqlite3PendingByte+1);
    lock.l_len = 1;
    lock.l_type = 1;
    if( ((int(*)(int,int,...))aSyscall[7].pCurrent)(pFile->h, 5, &lock) )
{

      rc = (10 | (14<<8));
      storeLastErrno(pFile, (*__errno_location ()));
    } else if( lock.l_type!=2 )
{

      reserved = 1;
    }
  }


  unixLeaveMutex();
  ;

  *pResOut = reserved;
  return rc;
}
# 28958 "sqlite3.c"
static int unixFileLock(unixFile *pFile, struct flock *pLock)
{

  int rc;
  unixInodeInfo *pInode = pFile->pInode;
  ((void) (0));
  ((void) (0));
  if( (pFile->ctrlFlags & (0x01|0x02))==0x01 )
{

    if( pInode->bProcessLock==0 )
{

      struct flock lock;
      ((void) (0));
      lock.l_whence = 0;
      lock.l_start = (sqlite3PendingByte+2);
      lock.l_len = 510;
      lock.l_type = 1;
      rc = ((int(*)(int,int,...))aSyscall[7].pCurrent)(pFile->h, 6, &lock);
      if( rc<0 ) return rc;
      pInode->bProcessLock = 1;
      pInode->nLock++;
    }else{
      rc = 0;
    }
  }else{
    rc = ((int(*)(int,int,...))aSyscall[7].pCurrent)(pFile->h, 6, pLock);
  }
  return rc;
}
# 29008 "sqlite3.c"
static int unixLock(sqlite3_file *id, int eFileLock)
{

# 29047 "sqlite3.c"
  int rc = 0;
  unixFile *pFile = (unixFile*)id;
  unixInodeInfo *pInode;
  struct flock lock;
  int tErrno = 0;

  ((void) (0));
 


                   ;





  if( pFile->eFileLock>=eFileLock )
{

   
                                   ;
    return 0;
  }






  ((void) (0));
  ((void) (0));
  ((void) (0));



  unixEnterMutex();
  pInode = pFile->pInode;




  if( (pFile->eFileLock!=pInode->eFileLock &&
          (pInode->eFileLock>=3 || eFileLock>1))
  )
{

    rc = 5;
    goto end_lock;
  }





  if( eFileLock==1 &&
      (pInode->eFileLock==1 || pInode->eFileLock==2) )
{

    ((void) (0));
    ((void) (0));
    ((void) (0));
    pFile->eFileLock = 1;
    pInode->nShared++;
    pInode->nLock++;
    goto end_lock;
  }






  lock.l_len = 1L;
  lock.l_whence = 0;
  if( eFileLock==1
      || (eFileLock==4 && pFile->eFileLock<3)
  )
{

    lock.l_type = (eFileLock==1?0:1);
    lock.l_start = sqlite3PendingByte;
    if( unixFileLock(pFile, &lock) )
{

      tErrno = (*__errno_location ());
      rc = sqliteErrorFromPosixError(tErrno, (10 | (15<<8)));
      if( rc!=5 )
{

        storeLastErrno(pFile, tErrno);
      }
      goto end_lock;
    }
  }





  if( eFileLock==1 )
{

    ((void) (0));
    ((void) (0));
    ((void) (0));


    lock.l_start = (sqlite3PendingByte+2);
    lock.l_len = 510;
    if( unixFileLock(pFile, &lock) )
{

      tErrno = (*__errno_location ());
      rc = sqliteErrorFromPosixError(tErrno, (10 | (15<<8)));
    }


    lock.l_start = sqlite3PendingByte;
    lock.l_len = 1L;
    lock.l_type = 2;
    if( unixFileLock(pFile, &lock) && rc==0 )
{


      tErrno = (*__errno_location ());
      rc = (10 | (8<<8));
    }

    if( rc )
{

      if( rc!=5 )
{

        storeLastErrno(pFile, tErrno);
      }
      goto end_lock;
    }else{
      pFile->eFileLock = 1;
      pInode->nLock++;
      pInode->nShared = 1;
    }
  }else if( eFileLock==4 && pInode->nShared>1 )
{



    rc = 5;
  }else{




    ((void) (0));
    lock.l_type = 1;

    ((void) (0));
    if( eFileLock==2 )
{

      lock.l_start = (sqlite3PendingByte+1);
      lock.l_len = 1L;
    }else{
      lock.l_start = (sqlite3PendingByte+2);
      lock.l_len = 510;
    }

    if( unixFileLock(pFile, &lock) )
{

      tErrno = (*__errno_location ());
      rc = sqliteErrorFromPosixError(tErrno, (10 | (15<<8)));
      if( rc!=5 )
{

        storeLastErrno(pFile, tErrno);
      }
    }
  }
# 29215 "sqlite3.c"
  if( rc==0 )
{

    pFile->eFileLock = eFileLock;
    pInode->eFileLock = eFileLock;
  }else if( eFileLock==4 )
{

    pFile->eFileLock = 3;
    pInode->eFileLock = 3;
  }

end_lock:
  unixLeaveMutex();
 
                                       ;
  return rc;
}





static void setPendingFd(unixFile *pFile)
{

  unixInodeInfo *pInode = pFile->pInode;
  UnixUnusedFd *p = pFile->pUnused;
  p->pNext = pInode->pUnused;
  pInode->pUnused = p;
  pFile->h = -1;
  pFile->pUnused = 0;
}
# 29256 "sqlite3.c"
static int posixUnlock(sqlite3_file *id, int eFileLock, int handleNFSUnlock)
{

  unixFile *pFile = (unixFile*)id;
  unixInodeInfo *pInode;
  struct flock lock;
  int rc = 0;

  ((void) (0));
 

                   ;

  ((void) (0));
  if( pFile->eFileLock<=eFileLock )
{

    return 0;
  }
  unixEnterMutex();
  pInode = pFile->pInode;
  ((void) (0));
  if( pFile->eFileLock>1 )
{

    ((void) (0));
# 29298 "sqlite3.c"
    if( eFileLock==1 )
{


      (void)handleNFSUnlock;
      ((void) (0));
# 29342 "sqlite3.c"
      {
        lock.l_type = 0;
        lock.l_whence = 0;
        lock.l_start = (sqlite3PendingByte+2);
        lock.l_len = 510;
        if( unixFileLock(pFile, &lock) )
{







          rc = (10 | (9<<8));
          storeLastErrno(pFile, (*__errno_location ()));
          goto end_unlock;
        }
      }
    }
    lock.l_type = 2;
    lock.l_whence = 0;
    lock.l_start = sqlite3PendingByte;
    lock.l_len = 2L; ((void) (0));
    if( unixFileLock(pFile, &lock)==0 )
{

      pInode->eFileLock = 1;
    }else{
      rc = (10 | (8<<8));
      storeLastErrno(pFile, (*__errno_location ()));
      goto end_unlock;
    }
  }
  if( eFileLock==0 )
{





    pInode->nShared--;
    if( pInode->nShared==0 )
{

      lock.l_type = 2;
      lock.l_whence = 0;
      lock.l_start = lock.l_len = 0L;
      if( unixFileLock(pFile, &lock)==0 )
{

        pInode->eFileLock = 0;
      }else{
        rc = (10 | (8<<8));
        storeLastErrno(pFile, (*__errno_location ()));
        pInode->eFileLock = 0;
        pFile->eFileLock = 0;
      }
    }





    pInode->nLock--;
    ((void) (0));
    if( pInode->nLock==0 )
{

      closePendingFds(pFile);
    }
  }

end_unlock:
  unixLeaveMutex();
  if( rc==0 ) pFile->eFileLock = eFileLock;
  return rc;
}
# 29416 "sqlite3.c"
static int unixUnlock(sqlite3_file *id, int eFileLock)
{


  ((void) (0));

  return posixUnlock(id, eFileLock, 0);
}


static int unixMapfile(unixFile *pFd, i64 nByte);
static void unixUnmapfile(unixFile *pFd);
# 29438 "sqlite3.c"
static int closeUnixFile(sqlite3_file *id)
{

  unixFile *pFile = (unixFile*)id;

  unixUnmapfile(pFile);

  if( pFile->h>=0 )
{

    robust_close(pFile, pFile->h, 29444);
    pFile->h = -1;
  }
# 29463 "sqlite3.c"
  ;
  ;
  sqlite3_free(pFile->pUnused);
  memset(pFile, 0, sizeof(unixFile));
  return 0;
}




static int unixClose(sqlite3_file *id)
{

  int rc = 0;
  unixFile *pFile = (unixFile *)id;
  verifyDbFile(pFile);
  unixUnlock(id, 0);
  unixEnterMutex();




  ((void) (0));
  if( (pFile->pInode) && pFile->pInode->nLock )
{






    setPendingFd(pFile);
  }
  releaseInodeInfo(pFile);
  rc = closeUnixFile(id);
  unixLeaveMutex();
  return rc;
}
# 29518 "sqlite3.c"
static int nolockCheckReservedLock(sqlite3_file *NotUsed, int *pResOut)
{

  (void)(NotUsed);
  *pResOut = 0;
  return 0;
}
static int nolockLock(sqlite3_file *NotUsed, int NotUsed2)
{

  (void)(NotUsed),(void)(NotUsed2);
  return 0;
}
static int nolockUnlock(sqlite3_file *NotUsed, int NotUsed2)
{

  (void)(NotUsed),(void)(NotUsed2);
  return 0;
}




static int nolockClose(sqlite3_file *id) {
  return closeUnixFile(id);
}
# 29580 "sqlite3.c"
static int dotlockCheckReservedLock(sqlite3_file *id, int *pResOut) {
  int rc = 0;
  int reserved = 0;
  unixFile *pFile = (unixFile*)id;

  ;

  ((void) (0));
  reserved = ((int(*)(const char*,int))aSyscall[2].pCurrent)((const char*)pFile->lockingContext, 0)==0;
  ;
  *pResOut = reserved;
  return rc;
}
# 29621 "sqlite3.c"
static int dotlockLock(sqlite3_file *id, int eFileLock) {
  unixFile *pFile = (unixFile*)id;
  char *zLockFile = (char *)pFile->lockingContext;
  int rc = 0;





  if( pFile->eFileLock > 0 )
{

    pFile->eFileLock = eFileLock;




    utimes(zLockFile, ((void *)0));

    return 0;
  }


  rc = ((int(*)(const char*,mode_t))aSyscall[18].pCurrent)(zLockFile, 0777);
  if( rc<0 )
{


    int tErrno = (*__errno_location ());
    if( 17 == tErrno )
{

      rc = 5;
    } else {
      rc = sqliteErrorFromPosixError(tErrno, (10 | (15<<8)));
      if( rc!=5 )
{

        storeLastErrno(pFile, tErrno);
      }
    }
    return rc;
  }


  pFile->eFileLock = eFileLock;
  return rc;
}
# 29671 "sqlite3.c"
static int dotlockUnlock(sqlite3_file *id, int eFileLock) {
  unixFile *pFile = (unixFile*)id;
  char *zLockFile = (char *)pFile->lockingContext;
  int rc;

  ((void) (0));
 
                                          ;
  ((void) (0));


  if( pFile->eFileLock==eFileLock )
{

    return 0;
  }




  if( eFileLock==1 )
{

    pFile->eFileLock = 1;
    return 0;
  }


  ((void) (0));
  rc = ((int(*)(const char*))aSyscall[19].pCurrent)(zLockFile);
  if( rc<0 )
{

    int tErrno = (*__errno_location ());
    if( tErrno==2 )
{

      rc = 0;
    }else{
      rc = (10 | (8<<8));
      storeLastErrno(pFile, tErrno);
    }
    return rc;
  }
  pFile->eFileLock = 0;
  return 0;
}




static int dotlockClose(sqlite3_file *id) {
  unixFile *pFile = (unixFile*)id;
  ((void) (0));
  dotlockUnlock(id, 0);
  sqlite3_free(pFile->lockingContext);
  return closeUnixFile(id);
}
# 30622 "sqlite3.c"
static int seekAndRead(unixFile *id, sqlite3_int64 offset, void *pBuf, int cnt)
{

  int got;
  int prior = 0;

  i64 newOffset;

  ;
  ((void) (0));
  ((void) (0));
  do{







    newOffset = lseek(id->h, offset, 0);
    ;
    if( newOffset<0 )
{

      storeLastErrno((unixFile*)id, (*__errno_location ()));
      return -1;
    }
    got = ((ssize_t(*)(int,void*,size_t))aSyscall[8].pCurrent)(id->h, pBuf, cnt);

    if( got==cnt ) break;
    if( got<0 )
{

      if( (*__errno_location ())==4 )
{
 got = 1; continue; }
      prior = 0;
      storeLastErrno((unixFile*)id, (*__errno_location ()));
      break;
    }else if( got>0 )
{

      cnt -= got;
      offset += got;
      prior += got;
      pBuf = (void*)(got + (char*)pBuf);
    }
  }while( got>0 );
  ;
 
                                                           ;
  return got+prior;
}






static int unixRead(
  sqlite3_file *id,
  void *pBuf,
  int amt,
  sqlite3_int64 offset
)
{

  unixFile *pFile = (unixFile *)id;
  int got;
  ((void) (0));
  ((void) (0));
  ((void) (0));
# 30695 "sqlite3.c"
  if( offset<pFile->mmapSize )
{

    if( offset+amt <= pFile->mmapSize )
{

      memcpy(pBuf, &((u8 *)(pFile->pMapRegion))[offset], amt);
      return 0;
    }else{
      int nCopy = pFile->mmapSize - offset;
      memcpy(pBuf, &((u8 *)(pFile->pMapRegion))[offset], nCopy);
      pBuf = &((u8 *)pBuf)[nCopy];
      amt -= nCopy;
      offset += nCopy;
    }
  }


  got = seekAndRead(pFile, offset, pBuf, amt);
  if( got==amt )
{

    return 0;
  }else if( got<0 )
{


    return (10 | (1<<8));
  }else{
    storeLastErrno(pFile, 0);

    memset(&((char*)pBuf)[got], 0, amt-got);
    return (10 | (2<<8));
  }
}
# 30730 "sqlite3.c"
static int seekAndWriteFd(
  int fd,
  i64 iOff,
  const void *pBuf,
  int nBuf,
  int *piErrno
)
{

  int rc = 0;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  nBuf &= 0x1ffff;
  ;






  do{
    i64 iSeek = lseek(fd, iOff, 0);
    ;
    if( iSeek<0 )
{

      rc = -1;
      break;
    }
    rc = ((ssize_t(*)(int,const void*,size_t))aSyscall[11].pCurrent)(fd, pBuf, nBuf);
  }while( rc<0 && (*__errno_location ())==4 );


  ;
  ;

  if( rc<0 ) *piErrno = (*__errno_location ());
  return rc;
}
# 30776 "sqlite3.c"
static int seekAndWrite(unixFile *id, i64 offset, const void *pBuf, int cnt)
{

  return seekAndWriteFd(id->h, offset, pBuf, cnt, &id->lastErrno);
}






static int unixWrite(
  sqlite3_file *id,
  const void *pBuf,
  int amt,
  sqlite3_int64 offset
)
{

  unixFile *pFile = (unixFile*)id;
  int wrote = 0;
  ((void) (0));
  ((void) (0));
# 30844 "sqlite3.c"
  while( (wrote = seekAndWrite(pFile, offset, pBuf, amt))<amt && wrote>0 )
{

    amt -= wrote;
    offset += wrote;
    pBuf = &((char*)pBuf)[wrote];
  }
  ;
  ;

  if( amt>wrote )
{

    if( wrote<0 && pFile->lastErrno!=28 )
{


      return (10 | (3<<8));
    }else{
      storeLastErrno(pFile, 0);
      return 13;
    }
  }

  return 0;
}
# 30920 "sqlite3.c"
static int full_fsync(int fd, int fullSync, int dataOnly)
{

  int rc;
# 30934 "sqlite3.c"
  (void)(fullSync);
  (void)(dataOnly);
# 30979 "sqlite3.c"
  rc = fsync(fd);







  if( 0 && rc!= -1 )
{

    rc = 0;
  }
  return rc;
}
# 31016 "sqlite3.c"
static int openDirectory(const char *zFilename, int *pFd)
{

  int ii;
  int fd = -1;
  char zDirname[512 +1];

  sqlite3_snprintf(512, zDirname, "%s", zFilename);
  for(ii=(int)strlen(zDirname); ii>0 && zDirname[ii]!='/'; ii--);
  if( ii>0 )
{

    zDirname[ii] = '\0';
  }else{
    if( zDirname[0]!='/' ) zDirname[0] = '.';
    zDirname[1] = 0;
  }
  fd = robust_open(zDirname, 00|0, 0);
  if( fd>=0 )
{

    ;
  }
  *pFd = fd;
  if( fd>=0 ) return 0;
  return unixLogErrorAtLine(sqlite3CantopenError(31035),"openDirectory",zDirname,31035);
}
# 31053 "sqlite3.c"
static int unixSync(sqlite3_file *id, int flags)
{

  int rc;
  unixFile *pFile = (unixFile*)id;

  int isDataOnly = (flags&0x00010);
  int isFullsync = (flags&0x0F)==0x00003;


  ((void) (0))

   ;




  ;

  ((void) (0));
  ;
  rc = full_fsync(pFile->h, isFullsync, isDataOnly);
  ;
  if( rc )
{

    storeLastErrno(pFile, (*__errno_location ()));
    return unixLogErrorAtLine((10 | (4<<8)),"full_fsync",pFile->zPath,31076);
  }





  if( pFile->ctrlFlags & 0x08 )
{

    int dirfd;
   
                                        ;
    rc = ((int(*)(const char*,int*))aSyscall[17].pCurrent)(pFile->zPath, &dirfd);
    if( rc==0 )
{

      full_fsync(dirfd, 0, 0);
      robust_close(pFile, dirfd, 31090);
    }else{
      ((void) (0));
      rc = 0;
    }
    pFile->ctrlFlags &= ~0x08;
  }
  return rc;
}




static int unixTruncate(sqlite3_file *id, i64 nByte)
{

  unixFile *pFile = (unixFile *)id;
  int rc;
  ((void) (0));
  ;






  if( pFile->szChunk>0 )
{

    nByte = ((nByte + pFile->szChunk - 1)/pFile->szChunk) * pFile->szChunk;
  }

  rc = robust_ftruncate(pFile->h, nByte);
  if( rc )
{

    storeLastErrno(pFile, (*__errno_location ()));
    return unixLogErrorAtLine((10 | (6<<8)),"ftruncate",pFile->zPath,31121);
  }else{
# 31141 "sqlite3.c"
    if( nByte<pFile->mmapSize )
{

      pFile->mmapSize = nByte;
    }


    return 0;
  }
}




static int unixFileSize(sqlite3_file *id, i64 *pSize)
{

  int rc;
  struct stat buf;
  ((void) (0));
  rc = ((int(*)(int,struct stat*))aSyscall[5].pCurrent)(((unixFile*)id)->h, &buf);
  ;
  if( rc!=0 )
{

    storeLastErrno((unixFile*)id, (*__errno_location ()));
    return (10 | (7<<8));
  }
  *pSize = buf.st_size;







  if( *pSize==1 ) *pSize = 0;


  return 0;
}
# 31191 "sqlite3.c"
static int fcntlSizeHint(unixFile *pFile, i64 nByte)
{

  if( pFile->szChunk>0 )
{

    i64 nSize;
    struct stat buf;

    if( ((int(*)(int,struct stat*))aSyscall[5].pCurrent)(pFile->h, &buf) )
{

      return (10 | (7<<8));
    }

    nSize = ((nByte+pFile->szChunk-1) / pFile->szChunk) * pFile->szChunk;
    if( nSize>(i64)buf.st_size )
{

# 31220 "sqlite3.c"
      int nBlk = buf.st_blksize;
      int nWrite = 0;
      i64 iWrite;

      iWrite = (buf.st_size/nBlk)*nBlk + nBlk - 1;
      ((void) (0));
      ((void) (0));
      for( ; iWrite<nSize+nBlk-1; iWrite+=nBlk )
{

        if( iWrite>=nSize ) iWrite = nSize - 1;
        nWrite = seekAndWrite(pFile, iWrite, "", 1);
        if( nWrite!=1 ) return (10 | (3<<8));
      }

    }
  }


  if( pFile->mmapSizeMax>0 && nByte>pFile->mmapSize )
{

    int rc;
    if( pFile->szChunk<=0 )
{

      if( robust_ftruncate(pFile->h, nByte) )
{

        storeLastErrno(pFile, (*__errno_location ()));
        return unixLogErrorAtLine((10 | (6<<8)),"ftruncate",pFile->zPath,31242);
      }
    }

    rc = unixMapfile(pFile, nByte);
    return rc;
  }


  return 0;
}







static void unixModeBit(unixFile *pFile, unsigned char mask, int *pArg)
{

  if( *pArg<0 )
{

    *pArg = (pFile->ctrlFlags & mask)!=0;
  }else if( (*pArg)==0 )
{

    pFile->ctrlFlags &= ~mask;
  }else{
    pFile->ctrlFlags |= mask;
  }
}


static int unixGetTempname(int nBuf, char *zBuf);




static int unixFileControl(sqlite3_file *id, int op, void *pArg)
{

  unixFile *pFile = (unixFile*)id;
  switch( op )
{

    case 1: {
      *(int*)pArg = pFile->eFileLock;
      return 0;
    }
    case 4: {
      *(int*)pArg = pFile->lastErrno;
      return 0;
    }
    case 6: {
      pFile->szChunk = *(int *)pArg;
      return 0;
    }
    case 5: {
      int rc;
      ;
      rc = fcntlSizeHint(pFile, *(i64 *)pArg);
      ;
      return rc;
    }
    case 10: {
      unixModeBit(pFile, 0x04, (int*)pArg);
      return 0;
    }
    case 13: {
      unixModeBit(pFile, 0x10, (int*)pArg);
      return 0;
    }
    case 12: {
      *(char**)pArg = sqlite3_mprintf("%s", pFile->pVfs->zName);
      return 0;
    }
    case 16: {
      char *zTFile = sqlite3_malloc64( pFile->pVfs->mxPathname );
      if( zTFile )
{

        unixGetTempname(pFile->pVfs->mxPathname, zTFile);
        *(char**)pArg = zTFile;
      }
      return 0;
    }
    case 20: {
      *(int*)pArg = fileHasMoved(pFile);
      return 0;
    }

    case 18: {
      i64 newLimit = *(i64*)pArg;
      int rc = 0;
      if( newLimit>sqlite3Config.mxMmap )
{

        newLimit = sqlite3Config.mxMmap;
      }
      *(i64*)pArg = pFile->mmapSizeMax;
      if( newLimit>=0 && newLimit!=pFile->mmapSizeMax && pFile->nFetchOut==0 )
{

        pFile->mmapSizeMax = newLimit;
        if( pFile->mmapSize>0 )
{

          unixUnmapfile(pFile);
          rc = unixMapfile(pFile, -1);
        }
      }
      return rc;
    }
# 31357 "sqlite3.c"
  }
  return 12;
}
# 31372 "sqlite3.c"
static int unixSectorSize(sqlite3_file *NotUsed)
{

  (void)(NotUsed);
  return 4096;
}
# 31471 "sqlite3.c"
static int unixDeviceCharacteristics(sqlite3_file *id)
{

  unixFile *p = (unixFile*)id;
  int rc = 0;




  if( p->ctrlFlags & 0x10 )
{

    rc |= 0x00001000;
  }
  return rc;
}
# 31492 "sqlite3.c"
static int unixGetpagesize(void)
{






  return (int)sysconf(_SC_PAGESIZE);

}
# 31535 "sqlite3.c"
struct unixShmNode {
  unixInodeInfo *pInode;
  sqlite3_mutex *mutex;
  char *zFilename;
  int h;
  int szRegion;
  u16 nRegion;
  u8 isReadonly;
  char **apRegion;
  int nRef;
  unixShm *pFirst;





};
# 31566 "sqlite3.c"
struct unixShm {
  unixShmNode *pShmNode;
  unixShm *pNext;
  u8 hasMutex;
  u8 id;
  u16 sharedMask;
  u16 exclMask;
};
# 31587 "sqlite3.c"
static int unixShmSystemLock(
  unixFile *pFile,
  int lockType,
  int ofst,
  int n
)
{

  unixShmNode *pShmNode;
  struct flock f;
  int rc = 0;


  pShmNode = pFile->pInode->pShmNode;
  ((void) (0));


  ((void) (0));


  ((void) (0));

  if( pShmNode->h>=0 )
{


    memset(&f, 0, sizeof(f));
    f.l_type = lockType;
    f.l_whence = 0;
    f.l_start = ofst;
    f.l_len = n;

    rc = ((int(*)(int,int,...))aSyscall[7].pCurrent)(pShmNode->h, 6, &f);
    rc = (rc!=(-1)) ? 0 : 5;
  }
# 31654 "sqlite3.c"
  return rc;
}
# 31666 "sqlite3.c"
static int unixShmRegionPerMap(void)
{

  int shmsz = 32*1024;
  int pgsz = ((int(*)(void))aSyscall[25].pCurrent)();
  ((void) (0));
  if( pgsz<shmsz ) return 1;
  return pgsz/shmsz;
}







static void unixShmPurge(unixFile *pFd)
{

  unixShmNode *p = pFd->pInode->pShmNode;
  ((void) (0));
  if( p && (p->nRef==0) )
{

    int nShmPerMap = unixShmRegionPerMap();
    int i;
    ((void) (0));
    sqlite3_mutex_free(p->mutex);
    for(i=0; i<p->nRegion; i+=nShmPerMap)
{

      if( p->h>=0 )
{

        ((void*(*)(void*,size_t))aSyscall[23].pCurrent)(p->apRegion[i], p->szRegion);
      }else{
        sqlite3_free(p->apRegion[i]);
      }
    }
    sqlite3_free(p->apRegion);
    if( p->h>=0 )
{

      robust_close(pFd, p->h, 31697);
      p->h = -1;
    }
    p->pInode->pShmNode = 0;
    sqlite3_free(p);
  }
}
# 31740 "sqlite3.c"
static int unixOpenSharedMemory(unixFile *pDbFd)
{

  struct unixShm *p = 0;
  struct unixShmNode *pShmNode;
  int rc;
  unixInodeInfo *pInode;
  char *zShmFilename;
  int nShmFilename;


  p = sqlite3_malloc64( sizeof(*p) );
  if( p==0 ) return 7;
  memset(p, 0, sizeof(*p));
  ((void) (0));




  unixEnterMutex();
  pInode = pDbFd->pInode;
  pShmNode = pInode->pShmNode;
  if( pShmNode==0 )
{

    struct stat sStat;

    const char *zBasePath = pDbFd->zPath;






    if( ((int(*)(int,struct stat*))aSyscall[5].pCurrent)(pDbFd->h, &sStat) )
{

      rc = (10 | (7<<8));
      goto shm_open_err;
    }




    nShmFilename = 6 + (int)strlen(zBasePath);

    pShmNode = sqlite3_malloc64( sizeof(*pShmNode) + nShmFilename );
    if( pShmNode==0 )
{

      rc = 7;
      goto shm_open_err;
    }
    memset(pShmNode, 0, sizeof(*pShmNode)+nShmFilename);
    zShmFilename = pShmNode->zFilename = (char*)&pShmNode[1];





    sqlite3_snprintf(nShmFilename, zShmFilename, "%s-shm", zBasePath);
    ;

    pShmNode->h = -1;
    pDbFd->pInode->pShmNode = pShmNode;
    pShmNode->pInode = pDbFd->pInode;
    pShmNode->mutex = sqlite3_mutex_alloc(0);
    if( pShmNode->mutex==0 )
{

      rc = 7;
      goto shm_open_err;
    }

    if( pInode->bProcessLock==0 )
{

      int openFlags = 02 | 0100;
      if( sqlite3_uri_boolean(pDbFd->zPath, "readonly_shm", 0) )
{

        openFlags = 00;
        pShmNode->isReadonly = 1;
      }
      pShmNode->h = robust_open(zShmFilename, openFlags, (sStat.st_mode&0777));
      if( pShmNode->h<0 )
{

        rc = unixLogErrorAtLine(sqlite3CantopenError(31812),"open",zShmFilename,31812);
        goto shm_open_err;
      }





      robustFchown(pShmNode->h, sStat.st_uid, sStat.st_gid);




      rc = 0;
      if( unixShmSystemLock(pDbFd, 1, (((22+8)*4)+8), 1)==0 )
{

        if( robust_ftruncate(pShmNode->h, 0) )
{

          rc = unixLogErrorAtLine((10 | (18<<8)),"ftruncate",zShmFilename,31828);
        }
      }
      if( rc==0 )
{

        rc = unixShmSystemLock(pDbFd, 0, (((22+8)*4)+8), 1);
      }
      if( rc ) goto shm_open_err;
    }
  }


  p->pShmNode = pShmNode;



  pShmNode->nRef++;
  pDbFd->pShm = p;
  unixLeaveMutex();
# 31854 "sqlite3.c"
  sqlite3_mutex_enter(pShmNode->mutex);
  p->pNext = pShmNode->pFirst;
  pShmNode->pFirst = p;
  sqlite3_mutex_leave(pShmNode->mutex);
  return 0;


shm_open_err:
  unixShmPurge(pDbFd);
  sqlite3_free(p);
  unixLeaveMutex();
  return rc;
}
# 31887 "sqlite3.c"
static int unixShmMap(
  sqlite3_file *fd,
  int iRegion,
  int szRegion,
  int bExtend,
  void volatile **pp
)
{

  unixFile *pDbFd = (unixFile*)fd;
  unixShm *p;
  unixShmNode *pShmNode;
  int rc = 0;
  int nShmPerMap = unixShmRegionPerMap();
  int nReqRegion;


  if( pDbFd->pShm==0 )
{

    rc = unixOpenSharedMemory(pDbFd);
    if( rc!=0 ) return rc;
  }

  p = pDbFd->pShm;
  pShmNode = p->pShmNode;
  sqlite3_mutex_enter(pShmNode->mutex);
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));


  nReqRegion = ((iRegion+nShmPerMap) / nShmPerMap) * nShmPerMap;

  if( pShmNode->nRegion<nReqRegion )
{

    char **apNew;
    int nByte = nReqRegion*szRegion;
    struct stat sStat;

    pShmNode->szRegion = szRegion;

    if( pShmNode->h>=0 )
{





      if( ((int(*)(int,struct stat*))aSyscall[5].pCurrent)(pShmNode->h, &sStat) )
{

        rc = (10 | (19<<8));
        goto shmpage_out;
      }

      if( sStat.st_size<nByte )
{




        if( !bExtend )
{

          goto shmpage_out;
        }
# 31950 "sqlite3.c"
        else{
          static const int pgsz = 4096;
          int iPg;


          ((void) (0));
          for(iPg=(sStat.st_size/pgsz); iPg<(nByte/pgsz); iPg++)
{

            int x = 0;
            if( seekAndWriteFd(pShmNode->h, iPg*pgsz + pgsz-1, "", 1, &x)!=1 )
{

              const char *zFile = pShmNode->zFilename;
              rc = unixLogErrorAtLine((10 | (19<<8)),"write",zFile,31960);
              goto shmpage_out;
            }
          }
        }
      }
    }


    apNew = (char **)sqlite3_realloc(
        pShmNode->apRegion, nReqRegion*sizeof(char *)
    );
    if( !apNew )
{

      rc = (10 | (12<<8));
      goto shmpage_out;
    }
    pShmNode->apRegion = apNew;
    while( pShmNode->nRegion<nReqRegion )
{

      int nMap = szRegion*nShmPerMap;
      int i;
      void *pMem;
      if( pShmNode->h>=0 )
{

        pMem = ((void*(*)(void*,size_t,int,int,int,off_t))aSyscall[22].pCurrent)(0, nMap,
            pShmNode->isReadonly ? 0x1 : 0x1|0x2,
            0x01, pShmNode->h, szRegion*(i64)pShmNode->nRegion
        );
        if( pMem==((void *) -1) )
{

          rc = unixLogErrorAtLine((10 | (21<<8)),"mmap",pShmNode->zFilename,31987);
          goto shmpage_out;
        }
      }else{
        pMem = sqlite3_malloc64(szRegion);
        if( pMem==0 )
{

          rc = 7;
          goto shmpage_out;
        }
        memset(pMem, 0, szRegion);
      }

      for(i=0; i<nShmPerMap; i++)
{

        pShmNode->apRegion[pShmNode->nRegion+i] = &((char*)pMem)[szRegion*i];
      }
      pShmNode->nRegion += nShmPerMap;
    }
  }

shmpage_out:
  if( pShmNode->nRegion>iRegion )
{

    *pp = pShmNode->apRegion[iRegion];
  }else{
    *pp = 0;
  }
  if( pShmNode->isReadonly && rc==0 ) rc = 8;
  sqlite3_mutex_leave(pShmNode->mutex);
  return rc;
}
# 32025 "sqlite3.c"
static int unixShmLock(
  sqlite3_file *fd,
  int ofst,
  int n,
  int flags
)
{

  unixFile *pDbFd = (unixFile*)fd;
  unixShm *p = pDbFd->pShm;
  unixShm *pX;
  unixShmNode *pShmNode = p->pShmNode;
  int rc = 0;
  u16 mask;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0))


                                                             ;
  ((void) (0));
  ((void) (0));
  ((void) (0));

  mask = (1<<(ofst+n)) - (1<<ofst);
  ((void) (0));
  sqlite3_mutex_enter(pShmNode->mutex);
  if( flags & 1 )
{

    u16 allMask = 0;


    for(pX=pShmNode->pFirst; pX; pX=pX->pNext)
{

      if( pX==p ) continue;
      ((void) (0));
      allMask |= pX->sharedMask;
    }


    if( (mask & allMask)==0 )
{

      rc = unixShmSystemLock(pDbFd, 2, ofst+((22+8)*4), n);
    }else{
      rc = 0;
    }


    if( rc==0 )
{

      p->exclMask &= ~mask;
      p->sharedMask &= ~mask;
    }
  }else if( flags & 4 )
{

    u16 allShared = 0;





    for(pX=pShmNode->pFirst; pX; pX=pX->pNext)
{

      if( (pX->exclMask & mask)!=0 )
{

        rc = 5;
        break;
      }
      allShared |= pX->sharedMask;
    }


    if( rc==0 )
{

      if( (allShared & mask)==0 )
{

        rc = unixShmSystemLock(pDbFd, 0, ofst+((22+8)*4), n);
      }else{
        rc = 0;
      }
    }


    if( rc==0 )
{

      p->sharedMask |= mask;
    }
  }else{



    for(pX=pShmNode->pFirst; pX; pX=pX->pNext)
{

      if( (pX->exclMask & mask)!=0 || (pX->sharedMask & mask)!=0 )
{

        rc = 5;
        break;
      }
    }




    if( rc==0 )
{

      rc = unixShmSystemLock(pDbFd, 1, ofst+((22+8)*4), n);
      if( rc==0 )
{

        ((void) (0));
        p->exclMask |= mask;
      }
    }
  }
  sqlite3_mutex_leave(pShmNode->mutex);
 
                                                           ;
  return rc;
}







static void unixShmBarrier(
  sqlite3_file *fd
)
{

  (void)(fd);
  sqlite3MemoryBarrier();
  unixEnterMutex();
  unixLeaveMutex();
}
# 32153 "sqlite3.c"
static int unixShmUnmap(
  sqlite3_file *fd,
  int deleteFlag
)
{

  unixShm *p;
  unixShmNode *pShmNode;
  unixShm **pp;
  unixFile *pDbFd;

  pDbFd = (unixFile*)fd;
  p = pDbFd->pShm;
  if( p==0 ) return 0;
  pShmNode = p->pShmNode;

  ((void) (0));
  ((void) (0));



  sqlite3_mutex_enter(pShmNode->mutex);
  for(pp=&pShmNode->pFirst; (*pp)!=p; pp = &(*pp)->pNext)
{
}
  *pp = p->pNext;


  sqlite3_free(p);
  pDbFd->pShm = 0;
  sqlite3_mutex_leave(pShmNode->mutex);



  unixEnterMutex();
  ((void) (0));
  pShmNode->nRef--;
  if( pShmNode->nRef==0 )
{

    if( deleteFlag && pShmNode->h>=0 )
{

      ((int(*)(const char*))aSyscall[16].pCurrent)(pShmNode->zFilename);
    }
    unixShmPurge(pDbFd);
  }
  unixLeaveMutex();

  return 0;
}
# 32209 "sqlite3.c"
static void unixUnmapfile(unixFile *pFd)
{

  ((void) (0));
  if( pFd->pMapRegion )
{

    ((void*(*)(void*,size_t))aSyscall[23].pCurrent)(pFd->pMapRegion, pFd->mmapSizeActual);
    pFd->pMapRegion = 0;
    pFd->mmapSize = 0;
    pFd->mmapSizeActual = 0;
  }
}
# 32234 "sqlite3.c"
static void unixRemapfile(
  unixFile *pFd,
  i64 nNew
)
{

  const char *zErr = "mmap";
  int h = pFd->h;
  u8 *pOrig = (u8 *)pFd->pMapRegion;
  i64 nOrig = pFd->mmapSizeActual;
  u8 *pNew = 0;
  int flags = 0x1;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));





  if( pOrig )
{


    i64 nReuse = pFd->mmapSize;




    u8 *pReq = &pOrig[nReuse];


    if( nReuse!=nOrig )
{

      ((void*(*)(void*,size_t))aSyscall[23].pCurrent)(pReq, nOrig-nReuse);
    }


    pNew = ((void*(*)(void*,size_t,size_t,int,...))aSyscall[24].pCurrent)(pOrig, nReuse, nNew, 1);
    zErr = "mremap";
# 32286 "sqlite3.c"
    if( pNew==((void *) -1) || pNew==0 )
{

      ((void*(*)(void*,size_t))aSyscall[23].pCurrent)(pOrig, nReuse);
    }
  }


  if( pNew==0 )
{

    pNew = ((void*(*)(void*,size_t,int,int,int,off_t))aSyscall[22].pCurrent)(0, nNew, flags, 0x01, h, 0);
  }

  if( pNew==((void *) -1) )
{

    pNew = 0;
    nNew = 0;
    unixLogErrorAtLine(0,zErr,pFd->zPath,32299);




    pFd->mmapSizeMax = 0;
  }
  pFd->pMapRegion = (void *)pNew;
  pFd->mmapSize = pFd->mmapSizeActual = nNew;
}
# 32326 "sqlite3.c"
static int unixMapfile(unixFile *pFd, i64 nMap)
{

  ((void) (0));
  ((void) (0));
  if( pFd->nFetchOut>0 ) return 0;

  if( nMap<0 )
{

    struct stat statbuf;
    if( ((int(*)(int,struct stat*))aSyscall[5].pCurrent)(pFd->h, &statbuf) )
{

      return (10 | (7<<8));
    }
    nMap = statbuf.st_size;
  }
  if( nMap>pFd->mmapSizeMax )
{

    nMap = pFd->mmapSizeMax;
  }

  ((void) (0));
  if( nMap!=pFd->mmapSize )
{

    unixRemapfile(pFd, nMap);
  }

  return 0;
}
# 32363 "sqlite3.c"
static int unixFetch(sqlite3_file *fd, i64 iOff, int nAmt, void **pp)
{


  unixFile *pFd = (unixFile *)fd;

  *pp = 0;


  if( pFd->mmapSizeMax>0 )
{

    if( pFd->pMapRegion==0 )
{

      int rc = unixMapfile(pFd, -1);
      if( rc!=0 ) return rc;
    }
    if( pFd->mmapSize >= iOff+nAmt )
{

      *pp = &((u8 *)pFd->pMapRegion)[iOff];
      pFd->nFetchOut++;
    }
  }

  return 0;
}
# 32394 "sqlite3.c"
static int unixUnfetch(sqlite3_file *fd, i64 iOff, void *p)
{


  unixFile *pFd = (unixFile *)fd;
  (void)(iOff);




  ((void) (0));


  ((void) (0));

  if( p )
{

    pFd->nFetchOut--;
  }else{
    unixUnmapfile(pFd);
  }

  ((void) (0));





  return 0;
}
# 32496 "sqlite3.c"
static const sqlite3_io_methods posixIoMethods = { 3, unixClose, unixRead, unixWrite, unixTruncate, unixSync, unixFileSize, unixLock, unixUnlock, unixCheckReservedLock, unixFileControl, unixSectorSize, unixDeviceCharacteristics, unixShmMap, unixShmLock, unixShmBarrier, unixShmUnmap, unixFetch, unixUnfetch, }; static const sqlite3_io_methods *posixIoFinderImpl(const char *z, unixFile *p)
{
 (void)(z); (void)(p); return &posixIoMethods; } static const sqlite3_io_methods *(*const posixIoFinder)(const char*,unixFile *p) = posixIoFinderImpl;
# 32506 "sqlite3.c"
static const sqlite3_io_methods nolockIoMethods = { 3, nolockClose, unixRead, unixWrite, unixTruncate, unixSync, unixFileSize, nolockLock, nolockUnlock, nolockCheckReservedLock, unixFileControl, unixSectorSize, unixDeviceCharacteristics, 0, unixShmLock, unixShmBarrier, unixShmUnmap, unixFetch, unixUnfetch, }; static const sqlite3_io_methods *nolockIoFinderImpl(const char *z, unixFile *p)
{
 (void)(z); (void)(p); return &nolockIoMethods; } static const sqlite3_io_methods *(*const nolockIoFinder)(const char*,unixFile *p) = nolockIoFinderImpl;
# 32516 "sqlite3.c"
static const sqlite3_io_methods dotlockIoMethods = { 1, dotlockClose, unixRead, unixWrite, unixTruncate, unixSync, unixFileSize, dotlockLock, dotlockUnlock, dotlockCheckReservedLock, unixFileControl, unixSectorSize, unixDeviceCharacteristics, 0, unixShmLock, unixShmBarrier, unixShmUnmap, unixFetch, unixUnfetch, }; static const sqlite3_io_methods *dotlockIoFinderImpl(const char *z, unixFile *p)
{
 (void)(z); (void)(p); return &dotlockIoMethods; } static const sqlite3_io_methods *(*const dotlockIoFinder)(const char*,unixFile *p) = dotlockIoFinderImpl;
# 32711 "sqlite3.c"
typedef const sqlite3_io_methods *(*finder_type)(const char*,unixFile*);
# 32724 "sqlite3.c"
static int fillInUnixFile(
  sqlite3_vfs *pVfs,
  int h,
  sqlite3_file *pId,
  const char *zFilename,
  int ctrlFlags
)
{

  const sqlite3_io_methods *pLockingStyle;
  unixFile *pNew = (unixFile *)pId;
  int rc = 0;

  ((void) (0));
# 32745 "sqlite3.c"
  ((void) (0));



  ((void) (0));

  ;
  pNew->h = h;
  pNew->pVfs = pVfs;
  pNew->zPath = zFilename;
  pNew->ctrlFlags = (u8)ctrlFlags;

  pNew->mmapSizeMax = sqlite3Config.szMmap;

  if( sqlite3_uri_boolean(((ctrlFlags & 0x40) ? zFilename : 0),
                           "psow", 1) )
{

    pNew->ctrlFlags |= 0x10;
  }
  if( strcmp(pVfs->zName,"unix-excl")==0 )
{

    pNew->ctrlFlags |= 0x01;
  }
# 32775 "sqlite3.c"
  if( ctrlFlags & 0x80 )
{

    pLockingStyle = &nolockIoMethods;
  }else{
    pLockingStyle = (**(finder_type*)pVfs->pAppData)(zFilename, pNew);






  }

  if( pLockingStyle == &posixIoMethods



  )
{

    unixEnterMutex();
    rc = findInodeInfo(pNew, &pNew->pInode);
    if( rc!=0 )
{

# 32813 "sqlite3.c"
      robust_close(pNew, h, 32813);
      h = -1;
    }
    unixLeaveMutex();
  }
# 32847 "sqlite3.c"
  else if( pLockingStyle == &dotlockIoMethods )
{




    char *zLockFile;
    int nFilename;
    ((void) (0));
    nFilename = (int)strlen(zFilename) + 6;
    zLockFile = (char *)sqlite3_malloc64(nFilename);
    if( zLockFile==0 )
{

      rc = 7;
    }else{
      sqlite3_snprintf(nFilename, zLockFile, "%s" ".lock", zFilename);
    }
    pNew->lockingContext = zLockFile;
  }
# 32888 "sqlite3.c"
  storeLastErrno(pNew, 0);
# 32897 "sqlite3.c"
  if( rc!=0 )
{

    if( h>=0 ) robust_close(pNew, h, 32898);
  }else{
    pNew->pMethod = pLockingStyle;
    ;
    verifyDbFile(pNew);
  }
  return rc;
}





static const char *unixTempFileDir(void)
{

  static const char *azDirs[] = {
     0,
     0,
     "/var/tmp",
     "/usr/tmp",
     "/tmp",
     "."
  };
  unsigned int i;
  struct stat buf;
  const char *zDir = sqlite3_temp_directory;

  if( !azDirs[0] ) azDirs[0] = getenv("SQLITE_TMPDIR");
  if( !azDirs[1] ) azDirs[1] = getenv("TMPDIR");
  for(i=0; i<sizeof(azDirs)/sizeof(azDirs[0]); zDir=azDirs[i++])
{

    if( zDir==0 ) continue;
    if( ((int(*)(const char*,struct stat*))aSyscall[4].pCurrent)(zDir, &buf) ) continue;
    if( !((((buf.st_mode)) & 0170000) == (0040000)) ) continue;
    if( ((int(*)(const char*,int))aSyscall[2].pCurrent)(zDir, 07) ) continue;
    break;
  }
  return zDir;
}






static int unixGetTempname(int nBuf, char *zBuf)
{

  const char *zDir;
  int iLimit = 0;





  ;

  zDir = unixTempFileDir();
  do{
    u64 r;
    sqlite3_randomness(sizeof(r), &r);
    ((void) (0));
    zBuf[nBuf-2] = 0;
    sqlite3_snprintf(nBuf, zBuf, "%s/""etilqs_""%llx%c",
                     zDir, r, 0);
    if( zBuf[nBuf-2]!=0 || (iLimit++)>10 ) return 1;
  }while( ((int(*)(const char*,int))aSyscall[2].pCurrent)(zBuf,0)==0 );
  return 0;
}
# 32989 "sqlite3.c"
static UnixUnusedFd *findReusableFd(const char *zPath, int flags)
{

  UnixUnusedFd *pUnused = 0;







  struct stat sStat;
# 33008 "sqlite3.c"
  if( 0==((int(*)(const char*,struct stat*))aSyscall[4].pCurrent)(zPath, &sStat) )
{

    unixInodeInfo *pInode;

    unixEnterMutex();
    pInode = inodeList;
    while( pInode && (pInode->fileId.dev!=sStat.st_dev
                     || pInode->fileId.ino!=sStat.st_ino) )
{

       pInode = pInode->pNext;
    }
    if( pInode )
{

      UnixUnusedFd **pp;
      for(pp=&pInode->pUnused; *pp && (*pp)->flags!=flags; pp=&((*pp)->pNext));
      pUnused = *pp;
      if( pUnused )
{

        *pp = pUnused->pNext;
      }
    }
    unixLeaveMutex();
  }

  return pUnused;
}
# 33052 "sqlite3.c"
static int findCreateFileMode(
  const char *zPath,
  int flags,
  mode_t *pMode,
  uid_t *pUid,
  gid_t *pGid
)
{

  int rc = 0;
  *pMode = 0;
  *pUid = 0;
  *pGid = 0;
  if( flags & (0x00080000|0x00000800) )
{

    char zDb[512 +1];
    int nDb;
    struct stat sStat;
# 33080 "sqlite3.c"
    nDb = sqlite3Strlen30(zPath) - 1;
    while( zPath[nDb]!='-' )
{




      ((void) (0));
      ((void) (0));





      nDb--;
    }
    memcpy(zDb, zPath, nDb);
    zDb[nDb] = '\0';

    if( 0==((int(*)(const char*,struct stat*))aSyscall[4].pCurrent)(zDb, &sStat) )
{

      *pMode = sStat.st_mode & 0777;
      *pUid = sStat.st_uid;
      *pGid = sStat.st_gid;
    }else{
      rc = (10 | (7<<8));
    }
  }else if( flags & 0x00000008 )
{

    *pMode = 0600;
  }
  return rc;
}
# 33132 "sqlite3.c"
static int unixOpen(
  sqlite3_vfs *pVfs,
  const char *zPath,
  sqlite3_file *pFile,
  int flags,
  int *pOutFlags
)
{

  unixFile *p = (unixFile *)pFile;
  int fd = -1;
  int openFlags = 0;
  int eType = flags&0xFFFFFF00;
  int noLock;
  int rc = 0;
  int ctrlFlags = 0;

  int isExclusive = (flags & 0x00000010);
  int isDelete = (flags & 0x00000008);
  int isCreate = (flags & 0x00000004);
  int isReadonly = (flags & 0x00000001);
  int isReadWrite = (flags & 0x00000002);
# 33163 "sqlite3.c"
  int syncDir = (isCreate && (
        eType==0x00004000
     || eType==0x00000800
     || eType==0x00080000
  ));




  char zTmpname[512 +2];
  const char *zName = zPath;
# 33182 "sqlite3.c"
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));



  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));


  ((void) (0))



   ;






  if( randomnessPid!=(pid_t)getpid() )
{

    randomnessPid = (pid_t)getpid();
    sqlite3_randomness(0,0);
  }

  memset(p, 0, sizeof(unixFile));

  if( eType==0x00000100 )
{

    UnixUnusedFd *pUnused;
    pUnused = findReusableFd(zName, flags);
    if( pUnused )
{

      fd = pUnused->fd;
    }else{
      pUnused = sqlite3_malloc64(sizeof(*pUnused));
      if( !pUnused )
{

        return 7;
      }
    }
    p->pUnused = pUnused;




    ((void) (0));

  }else if( !zName )
{


    ((void) (0));
    rc = unixGetTempname(pVfs->mxPathname, zTmpname);
    if( rc!=0 )
{

      return rc;
    }
    zName = zTmpname;



    ((void) (0));
  }





  if( isReadonly ) openFlags |= 00;
  if( isReadWrite ) openFlags |= 02;
  if( isCreate ) openFlags |= 0100;
  if( isExclusive ) openFlags |= (0200|0400000);
  openFlags |= (0|0);

  if( fd<0 )
{

    mode_t openMode;
    uid_t uid;
    gid_t gid;
    rc = findCreateFileMode(zName, flags, &openMode, &uid, &gid);
    if( rc!=0 )
{

      ((void) (0));
      ((void) (0));
      return rc;
    }
    fd = robust_open(zName, openFlags, openMode);
    ;
    ((void) (0));
    if( fd<0 && (*__errno_location ())!=21 && isReadWrite )
{


      flags &= ~(0x00000002|0x00000004);
      openFlags &= ~(02|0100);
      flags |= 0x00000001;
      openFlags |= 00;
      isReadonly = 1;
      fd = robust_open(zName, openFlags, openMode);
    }
    if( fd<0 )
{

      rc = unixLogErrorAtLine(sqlite3CantopenError(33278),"open",zName,33278);
      goto open_finished;
    }





    if( flags & (0x00080000|0x00000800) )
{

      robustFchown(fd, uid, gid);
    }
  }
  ((void) (0));
  if( pOutFlags )
{

    *pOutFlags = flags;
  }

  if( p->pUnused )
{

    p->pUnused->fd = fd;
    p->pUnused->flags = flags;
  }

  if( isDelete )
{

# 33310 "sqlite3.c"
    ((int(*)(const char*))aSyscall[16].pCurrent)(zName);

  }
# 33334 "sqlite3.c"
  if( isDelete ) ctrlFlags |= 0x20;
  if( isReadonly ) ctrlFlags |= 0x02;
  noLock = eType!=0x00000100;
  if( noLock ) ctrlFlags |= 0x80;
  if( syncDir ) ctrlFlags |= 0x08;
  if( flags & 0x00000040 ) ctrlFlags |= 0x40;
# 33374 "sqlite3.c"
  rc = fillInUnixFile(pVfs, fd, pFile, zPath, ctrlFlags);

open_finished:
  if( rc!=0 )
{

    sqlite3_free(p->pUnused);
  }
  return rc;
}






static int unixDelete(
  sqlite3_vfs *NotUsed,
  const char *zPath,
  int dirSync
)
{

  int rc = 0;
  (void)(NotUsed);
  ;
  if( ((int(*)(const char*))aSyscall[16].pCurrent)(zPath)==(-1) )
{

    if( (*__errno_location ())==2



    )
{

      rc = (10 | (23<<8));
    }else{
      rc = unixLogErrorAtLine((10 | (10<<8)),"unlink",zPath,33404);
    }
    return rc;
  }

  if( (dirSync & 1)!=0 )
{

    int fd;
    rc = ((int(*)(const char*,int*))aSyscall[17].pCurrent)(zPath, &fd);
    if( rc==0 )
{

      if( full_fsync(fd,0,0) )
{

        rc = unixLogErrorAtLine((10 | (5<<8)),"fsync",zPath,33414);
      }
      robust_close(0, fd, 33416);
    }else{
      ((void) (0));
      rc = 0;
    }
  }

  return rc;
}
# 33436 "sqlite3.c"
static int unixAccess(
  sqlite3_vfs *NotUsed,
  const char *zPath,
  int flags,
  int *pResOut
)
{

  (void)(NotUsed);
  ;
  ((void) (0));



  ((void) (0));

  if( flags==0 )
{

    struct stat buf;
    *pResOut = (0==((int(*)(const char*,struct stat*))aSyscall[4].pCurrent)(zPath, &buf) && buf.st_size>0);
  }else{
    *pResOut = ((int(*)(const char*,int))aSyscall[2].pCurrent)(zPath, 2|4)==0;
  }
  return 0;
}




static int mkFullPathname(
  const char *zPath,
  char *zOut,
  int nOut
)
{

  int nPath = sqlite3Strlen30(zPath);
  int iOff = 0;
  if( zPath[0]!='/' )
{

    if( ((char*(*)(char*,size_t))aSyscall[3].pCurrent)(zOut, nOut-2)==0 )
{

      return unixLogErrorAtLine(sqlite3CantopenError(33471),"getcwd",zPath,33471);
    }
    iOff = sqlite3Strlen30(zOut);
    zOut[iOff++] = '/';
  }
  if( (iOff+nPath+1)>nOut )
{



    zOut[iOff] = '\0';
    return sqlite3CantopenError(33480);
  }
  sqlite3_snprintf(nOut-iOff, &zOut[iOff], "%s", zPath);
  return 0;
}
# 33495 "sqlite3.c"
static int unixFullPathname(
  sqlite3_vfs *pVfs,
  const char *zPath,
  int nOut,
  char *zOut
)
{




  int rc = 0;
  int nByte;
  int nLink = 1;
  const char *zIn = zPath;
  char *zDel = 0;

  ((void) (0));
  (void)(pVfs);






  ;

  do {



    int bLink = 0;
    struct stat buf;
    if( ((int(*)(const char*,struct stat*))aSyscall[27].pCurrent)(zIn, &buf)!=0 )
{

      if( (*__errno_location ())!=2 )
{

        rc = unixLogErrorAtLine(sqlite3CantopenError(33528),"lstat",zIn,33528);
      }
    }else{
      bLink = ((((buf.st_mode)) & 0170000) == (0120000));
    }

    if( bLink )
{

      if( zDel==0 )
{

        zDel = sqlite3_malloc(nOut);
        if( zDel==0 ) rc = 7;
      }else if( ++nLink>100 )
{

        rc = sqlite3CantopenError(33539);
      }

      if( rc==0 )
{

        nByte = ((ssize_t(*)(const char*,char*,size_t))aSyscall[26].pCurrent)(zIn, zDel, nOut-1);
        if( nByte<0 )
{

          rc = unixLogErrorAtLine(sqlite3CantopenError(33545),"readlink",zIn,33545);
        }else{
          if( zDel[0]!='/' )
{

            int n;
            for(n = sqlite3Strlen30(zIn); n>0 && zIn[n-1]!='/'; n--);
            if( nByte+n+1>nOut )
{

              rc = sqlite3CantopenError(33551);
            }else{
              memmove(&zDel[n], zDel, nByte+1);
              memcpy(zDel, zIn, n);
              nByte += n;
            }
          }
          zDel[nByte] = '\0';
        }
      }

      zIn = zDel;
    }

    ((void) (0));
    if( rc==0 && zIn!=zOut )
{

      rc = mkFullPathname(zIn, zOut, nOut);
    }
    if( bLink==0 ) break;
    zIn = zOut;
  }while( rc==0 );

  sqlite3_free(zDel);
  return rc;

}







# 1 "/usr/include/dlfcn.h" 1 3 4
# 24 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/bits/dlfcn.h" 1 3 4
# 57 "/usr/include/bits/dlfcn.h" 3 4



extern void _dl_mcount_wrapper_check (void *__selfpc) __attribute__ ((__nothrow__ , __leaf__));


# 28 "/usr/include/dlfcn.h" 2 3 4
# 44 "/usr/include/dlfcn.h" 3 4
typedef long int Lmid_t;











extern void *dlopen (const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) __attribute__ ((__nothrow__));



extern void *dlvsym (void *__restrict __handle,
       const char *__restrict __name,
       const char *__restrict __version)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));





extern char *dlerror (void) __attribute__ ((__nothrow__ , __leaf__));





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;
  Dl_serpath dls_serpath[1];
} Dl_serinfo;




# 33585 "sqlite3.c" 2
static void *unixDlOpen(sqlite3_vfs *NotUsed, const char *zFilename)
{

  (void)(NotUsed);
  return dlopen(zFilename, 0x00002 | 0x00100);
}
# 33597 "sqlite3.c"
static void unixDlError(sqlite3_vfs *NotUsed, int nBuf, char *zBufOut)
{

  const char *zErr;
  (void)(NotUsed);
  unixEnterMutex();
  zErr = dlerror();
  if( zErr )
{

    sqlite3_snprintf(nBuf, zBufOut, "%s", zErr);
  }
  unixLeaveMutex();
}
static void (*unixDlSym(sqlite3_vfs *NotUsed, void *p, const char*zSym))(void)
{

# 33625 "sqlite3.c"
  void (*(*x)(void*,const char*))(void);
  (void)(NotUsed);
  x = (void(*(*)(void*,const char*))(void))dlsym;
  return (*x)(p, zSym);
}
static void unixDlClose(sqlite3_vfs *NotUsed, void *pHandle)
{

  (void)(NotUsed);
  dlclose(pHandle);
}
# 33644 "sqlite3.c"
static int unixRandomness(sqlite3_vfs *NotUsed, int nBuf, char *zBuf)
{

  (void)(NotUsed);
  ((void) (0));
# 33660 "sqlite3.c"
  memset(zBuf, 0, nBuf);
  randomnessPid = (pid_t)getpid();

  {
    int fd, got;
    fd = robust_open("/dev/urandom", 00, 0);
    if( fd<0 )
{

      time_t t;
      time(&t);
      memcpy(zBuf, &t, sizeof(t));
      memcpy(&zBuf[sizeof(t)], &randomnessPid, sizeof(randomnessPid));
      ((void) (0));
      nBuf = sizeof(t) + sizeof(randomnessPid);
    }else{
      do{ got = ((ssize_t(*)(int,void*,size_t))aSyscall[8].pCurrent)(fd, zBuf, nBuf); }while( got<0 && (*__errno_location ())==4 );
      robust_close(0, fd, 33675);
    }
  }

  return nBuf;
}
# 33691 "sqlite3.c"
static int unixSleep(sqlite3_vfs *NotUsed, int microseconds)
{

# 33705 "sqlite3.c"
  int seconds = (microseconds+999999)/1000000;
  sleep(seconds);
  (void)(NotUsed);
  return seconds*1000000;

}
# 33731 "sqlite3.c"
static int unixCurrentTimeInt64(sqlite3_vfs *NotUsed, sqlite3_int64 *piNow)
{

  static const sqlite3_int64 unixEpoch = 24405875*(sqlite3_int64)8640000;
  int rc = 0;
# 33743 "sqlite3.c"
  struct timeval sNow;
  (void)gettimeofday(&sNow, 0);
  *piNow = unixEpoch + 1000*(sqlite3_int64)sNow.tv_sec + sNow.tv_usec/1000;







  (void)(NotUsed);
  return rc;
}







static int unixCurrentTime(sqlite3_vfs *NotUsed, double *prNow)
{

  sqlite3_int64 i = 0;
  int rc;
  (void)(NotUsed);
  rc = unixCurrentTimeInt64(0, &i);
  *prNow = i/86400000.0;
  return rc;
}
# 33781 "sqlite3.c"
static int unixGetLastError(sqlite3_vfs *NotUsed, int NotUsed2, char *NotUsed3)
{

  (void)(NotUsed);
  (void)(NotUsed2);
  (void)(NotUsed3);
  return (*__errno_location ());
}
# 34986 "sqlite3.c"
 int sqlite3_os_init(void)
{

# 35039 "sqlite3.c"
  static sqlite3_vfs aVfs[] = {





    { 3, sizeof(unixFile), 512, 0, "unix", (void*)&posixIoFinder, unixOpen, unixDelete, unixAccess, unixFullPathname, unixDlOpen, unixDlError, unixDlSym, unixDlClose, unixRandomness, unixSleep, unixCurrentTime, unixGetLastError, unixCurrentTimeInt64, unixSetSystemCall, unixGetSystemCall, unixNextSystemCall, },

    { 3, sizeof(unixFile), 512, 0, "unix-none", (void*)&nolockIoFinder, unixOpen, unixDelete, unixAccess, unixFullPathname, unixDlOpen, unixDlError, unixDlSym, unixDlClose, unixRandomness, unixSleep, unixCurrentTime, unixGetLastError, unixCurrentTimeInt64, unixSetSystemCall, unixGetSystemCall, unixNextSystemCall, },
    { 3, sizeof(unixFile), 512, 0, "unix-dotfile", (void*)&dotlockIoFinder, unixOpen, unixDelete, unixAccess, unixFullPathname, unixDlOpen, unixDlError, unixDlSym, unixDlClose, unixRandomness, unixSleep, unixCurrentTime, unixGetLastError, unixCurrentTimeInt64, unixSetSystemCall, unixGetSystemCall, unixNextSystemCall, },
    { 3, sizeof(unixFile), 512, 0, "unix-excl", (void*)&posixIoFinder, unixOpen, unixDelete, unixAccess, unixFullPathname, unixDlOpen, unixDlError, unixDlSym, unixDlClose, unixRandomness, unixSleep, unixCurrentTime, unixGetLastError, unixCurrentTimeInt64, unixSetSystemCall, unixGetSystemCall, unixNextSystemCall, },
# 35064 "sqlite3.c"
  };
  unsigned int i;



  ((void) (0));


  for(i=0; i<(sizeof(aVfs)/sizeof(sqlite3_vfs)); i++)
{

    sqlite3_vfs_register(&aVfs[i], i==0);
  }
  return 0;
}
# 35085 "sqlite3.c"
 int sqlite3_os_end(void)
{

  return 0;
}
# 41080 "sqlite3.c"
struct Bitvec {
  u32 iSize;
  u32 nSet;


  u32 iDivisor;



  union {
    u8 aBitmap[((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u8))];
    u32 aHash[((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32))];
    Bitvec *apSub[((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(Bitvec *))];
  } u;
};






static Bitvec *sqlite3BitvecCreate(u32 iSize)
{

  Bitvec *p;
  ((void) (0));
  p = sqlite3MallocZero( sizeof(*p) );
  if( p )
{

    p->iSize = iSize;
  }
  return p;
}






static int sqlite3BitvecTestNotNull(Bitvec *p, u32 i)
{

  ((void) (0));
  i--;
  if( i>=p->iSize ) return 0;
  while( p->iDivisor )
{

    u32 bin = i/p->iDivisor;
    i = i%p->iDivisor;
    p = p->u.apSub[bin];
    if (!p) {
      return 0;
    }
  }
  if( p->iSize<=(((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u8))*8) )
{

    return (p->u.aBitmap[i/8] & (1<<(i&(8 -1))))!=0;
  } else{
    u32 h = (((i++)*1)%((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32)));
    while( p->u.aHash[h] )
{

      if( p->u.aHash[h]==i ) return 1;
      h = (h+1) % ((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32));
    }
    return 0;
  }
}
static int sqlite3BitvecTest(Bitvec *p, u32 i)
{

  return p!=0 && sqlite3BitvecTestNotNull(p,i);
}
# 41155 "sqlite3.c"
static int sqlite3BitvecSet(Bitvec *p, u32 i)
{

  u32 h;
  if( p==0 ) return 0;
  ((void) (0));
  ((void) (0));
  i--;
  while((p->iSize > (((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u8))*8)) && p->iDivisor) {
    u32 bin = i/p->iDivisor;
    i = i%p->iDivisor;
    if( p->u.apSub[bin]==0 )
{

      p->u.apSub[bin] = sqlite3BitvecCreate( p->iDivisor );
      if( p->u.apSub[bin]==0 ) return 7;
    }
    p = p->u.apSub[bin];
  }
  if( p->iSize<=(((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u8))*8) )
{

    p->u.aBitmap[i/8] |= 1 << (i&(8 -1));
    return 0;
  }
  h = (((i++)*1)%((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32)));



  if( !p->u.aHash[h] )
{

    if (p->nSet<(((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32))-1)) {
      goto bitvec_set_end;
    } else {
      goto bitvec_set_rehash;
    }
  }


  do {
    if( p->u.aHash[h]==i ) return 0;
    h++;
    if( h>=((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32)) ) h = 0;
  } while( p->u.aHash[h] );



bitvec_set_rehash:
  if( p->nSet>=(((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32))/2) )
{

    unsigned int j;
    int rc;
    u32 *aiValues = sqlite3DbMallocRaw(0,sizeof(p->u.aHash));
    if( aiValues==0 )
{

      return 7;
    }else{
      memcpy(aiValues, p->u.aHash, sizeof(p->u.aHash));
      memset(p->u.apSub, 0, sizeof(p->u.apSub));
      p->iDivisor = (p->iSize + ((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(Bitvec *)) - 1)/((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(Bitvec *));
      rc = sqlite3BitvecSet(p, i);
      for(j=0; j<((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32)); j++)
{

        if( aiValues[j] ) rc |= sqlite3BitvecSet(p, aiValues[j]);
      }
      sqlite3DbFree(0,aiValues);
      return rc;
    }
  }
bitvec_set_end:
  p->nSet++;
  p->u.aHash[h] = i;
  return 0;
}







static void sqlite3BitvecClear(Bitvec *p, u32 i, void *pBuf)
{

  if( p==0 ) return;
  ((void) (0));
  i--;
  while( p->iDivisor )
{

    u32 bin = i/p->iDivisor;
    i = i%p->iDivisor;
    p = p->u.apSub[bin];
    if (!p) {
      return;
    }
  }
  if( p->iSize<=(((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u8))*8) )
{

    p->u.aBitmap[i/8] &= ~(1 << (i&(8 -1)));
  }else{
    unsigned int j;
    u32 *aiValues = pBuf;
    memcpy(aiValues, p->u.aHash, sizeof(p->u.aHash));
    memset(p->u.aHash, 0, sizeof(p->u.aHash));
    p->nSet = 0;
    for(j=0; j<((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32)); j++)
{

      if( aiValues[j] && aiValues[j]!=(i+1) )
{

        u32 h = (((aiValues[j]-1)*1)%((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32)));
        p->nSet++;
        while( p->u.aHash[h] )
{

          h++;
          if( h>=((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(u32)) ) h = 0;
        }
        p->u.aHash[h] = aiValues[j];
      }
    }
  }
}




static void sqlite3BitvecDestroy(Bitvec *p)
{

  if( p==0 ) return;
  if( p->iDivisor )
{

    unsigned int i;
    for(i=0; i<((((512 -(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))/sizeof(Bitvec *)); i++)
{

      sqlite3BitvecDestroy(p->u.apSub[i]);
    }
  }
  sqlite3_free(p);
}





static u32 sqlite3BitvecSize(Bitvec *p)
{

  return p->iSize;
}
# 41323 "sqlite3.c"
static int sqlite3BitvecBuiltinTest(int sz, int *aOp)
{

  Bitvec *pBitvec = 0;
  unsigned char *pV = 0;
  int rc = -1;
  int i, nx, pc, op;
  void *pTmpSpace;



  pBitvec = sqlite3BitvecCreate( sz );
  pV = sqlite3MallocZero( (sz+7)/8 + 1 );
  pTmpSpace = sqlite3_malloc64(512);
  if( pBitvec==0 || pV==0 || pTmpSpace==0 ) goto bitvec_end;


  sqlite3BitvecSet(0, 1);
  sqlite3BitvecClear(0, 1, pTmpSpace);


  pc = 0;
  while( (op = aOp[pc])!=0 )
{

    switch( op )
{

      case 1:
      case 2:
      case 5: {
        nx = 4;
        i = aOp[pc+2] - 1;
        aOp[pc+2] += aOp[pc+3];
        break;
      }
      case 3:
      case 4:
      default: {
        nx = 2;
        sqlite3_randomness(sizeof(i), &i);
        break;
      }
    }
    if( (--aOp[pc+1]) > 0 ) nx = 0;
    pc += nx;
    i = (i & 0x7fffffff)%sz;
    if( (op & 1)!=0 )
{

      pV[(i+1)>>3] |= (1<<((i+1)&7));
      if( op!=5 )
{

        if( sqlite3BitvecSet(pBitvec, i+1) ) goto bitvec_end;
      }
    }else{
      pV[(i+1)>>3] &= ~(1<<((i+1)&7));
      sqlite3BitvecClear(pBitvec, i+1, pTmpSpace);
    }
  }






  rc = sqlite3BitvecTest(0,0) + sqlite3BitvecTest(pBitvec, sz+1)
          + sqlite3BitvecTest(pBitvec, 0)
          + (sqlite3BitvecSize(pBitvec) - sz);
  for(i=1; i<=sz; i++)
{

    if( ((pV[i>>3]&(1<<(i&7)))!=0)!=sqlite3BitvecTest(pBitvec,i) )
{

      rc = i;
      break;
    }
  }


bitvec_end:
  sqlite3_free(pTmpSpace);
  sqlite3_free(pV);
  sqlite3BitvecDestroy(pBitvec);
  return rc;
}
# 41419 "sqlite3.c"
struct PCache {
  PgHdr *pDirty, *pDirtyTail;
  PgHdr *pSynced;
  int nRefSum;
  int szCache;
  int szSpill;
  int szPage;
  int szExtra;
  u8 bPurgeable;
  u8 eCreate;
  int (*xStress)(void*,PgHdr*);
  void *pStress;
  sqlite3_pcache *pCache;
};
# 41447 "sqlite3.c"
static void pcacheManageDirtyList(PgHdr *pPage, u8 addRemove)
{

  PCache *p = pPage->pCache;

  if( addRemove & 1 )
{

    ((void) (0));
    ((void) (0));


    if( p->pSynced==pPage )
{

      PgHdr *pSynced = pPage->pDirtyPrev;
      while( pSynced && (pSynced->flags&0x008) )
{

        pSynced = pSynced->pDirtyPrev;
      }
      p->pSynced = pSynced;
    }

    if( pPage->pDirtyNext )
{

      pPage->pDirtyNext->pDirtyPrev = pPage->pDirtyPrev;
    }else{
      ((void) (0));
      p->pDirtyTail = pPage->pDirtyPrev;
    }
    if( pPage->pDirtyPrev )
{

      pPage->pDirtyPrev->pDirtyNext = pPage->pDirtyNext;
    }else{
      ((void) (0));
      p->pDirty = pPage->pDirtyNext;
      if( p->pDirty==0 && p->bPurgeable )
{

        ((void) (0));
        p->eCreate = 2;
      }
    }
    pPage->pDirtyNext = 0;
    pPage->pDirtyPrev = 0;
  }
  if( addRemove & 2 )
{

    ((void) (0));

    pPage->pDirtyNext = p->pDirty;
    if( pPage->pDirtyNext )
{

      ((void) (0));
      pPage->pDirtyNext->pDirtyPrev = pPage;
    }else{
      p->pDirtyTail = pPage;
      if( p->bPurgeable )
{

        ((void) (0));
        p->eCreate = 1;
      }
    }
    p->pDirty = pPage;
    if( !p->pSynced && 0==(pPage->flags&0x008) )
{

      p->pSynced = pPage;
    }
  }
}





static void pcacheUnpin(PgHdr *p)
{

  if( p->pCache->bPurgeable )
{

    sqlite3Config.pcache2.xUnpin(p->pCache->pCache, p->pPage, 0);
  }
}





static int numberOfCachePages(PCache *p)
{

  if( p->szCache>=0 )
{



    return p->szCache;
  }else{



    return (int)((-1024*(i64)p->szCache)/(p->szPage+p->szExtra));
  }
}






static int sqlite3PcacheInitialize(void)
{

  if( sqlite3Config.pcache2.xInit==0 )
{




    sqlite3PCacheSetDefault();
  }
  return sqlite3Config.pcache2.xInit(sqlite3Config.pcache2.pArg);
}
static void sqlite3PcacheShutdown(void)
{

  if( sqlite3Config.pcache2.xShutdown )
{


    sqlite3Config.pcache2.xShutdown(sqlite3Config.pcache2.pArg);
  }
}




static int sqlite3PcacheSize(void)
{
 return sizeof(PCache); }







static int sqlite3PcacheOpen(
  int szPage,
  int szExtra,
  int bPurgeable,
  int (*xStress)(void*,PgHdr*),
  void *pStress,
  PCache *p
)
{

  memset(p, 0, sizeof(PCache));
  p->szPage = 1;
  p->szExtra = szExtra;
  p->bPurgeable = bPurgeable;
  p->eCreate = 2;
  p->xStress = xStress;
  p->pStress = pStress;
  p->szCache = 100;
  p->szSpill = 1;
  return sqlite3PcacheSetPageSize(p, szPage);
}





static int sqlite3PcacheSetPageSize(PCache *pCache, int szPage)
{

  ((void) (0));
  if( pCache->szPage )
{

    sqlite3_pcache *pNew;
    pNew = sqlite3Config.pcache2.xCreate(
                szPage, pCache->szExtra + (((sizeof(PgHdr))+7)&~7),
                pCache->bPurgeable
    );
    if( pNew==0 ) return 7;
    sqlite3Config.pcache2.xCachesize(pNew, numberOfCachePages(pCache));
    if( pCache->pCache )
{

      sqlite3Config.pcache2.xDestroy(pCache->pCache);
    }
    pCache->pCache = pNew;
    pCache->szPage = szPage;
  }
  return 0;
}
# 41629 "sqlite3.c"
static sqlite3_pcache_page *sqlite3PcacheFetch(
  PCache *pCache,
  Pgno pgno,
  int createFlag
)
{

  int eCreate;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
# 41648 "sqlite3.c"
  eCreate = createFlag & pCache->eCreate;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  return sqlite3Config.pcache2.xFetch(pCache->pCache, pgno, eCreate);
}
# 41666 "sqlite3.c"
static int sqlite3PcacheFetchStress(
  PCache *pCache,
  Pgno pgno,
  sqlite3_pcache_page **ppPage
)
{

  PgHdr *pPg;
  if( pCache->eCreate==2 ) return 0;

  if( sqlite3PcachePagecount(pCache)>pCache->szSpill )
{






    for(pPg=pCache->pSynced;
        pPg && (pPg->nRef || (pPg->flags&0x008));
        pPg=pPg->pDirtyPrev
    );
    pCache->pSynced = pPg;
    if( !pPg )
{

      for(pPg=pCache->pDirtyTail; pPg && pPg->nRef; pPg=pPg->pDirtyPrev);
    }
    if( pPg )
{

      int rc;







      rc = pCache->xStress(pCache->pStress, pPg);
      if( rc!=0 && rc!=5 )
{

        return rc;
      }
    }
  }
  *ppPage = sqlite3Config.pcache2.xFetch(pCache->pCache, pgno, 2);
  return *ppPage==0 ? 7 : 0;
}
# 41716 "sqlite3.c"
static __attribute__((noinline)) PgHdr *pcacheFetchFinishWithInit(
  PCache *pCache,
  Pgno pgno,
  sqlite3_pcache_page *pPage
)
{

  PgHdr *pPgHdr;
  ((void) (0));
  pPgHdr = (PgHdr*)pPage->pExtra;
  ((void) (0));
  memset(pPgHdr, 0, sizeof(PgHdr));
  pPgHdr->pPage = pPage;
  pPgHdr->pData = pPage->pBuf;
  pPgHdr->pExtra = (void *)&pPgHdr[1];
  memset(pPgHdr->pExtra, 0, pCache->szExtra);
  pPgHdr->pCache = pCache;
  pPgHdr->pgno = pgno;
  pPgHdr->flags = 0x001;
  return sqlite3PcacheFetchFinish(pCache,pgno,pPage);
}







static PgHdr *sqlite3PcacheFetchFinish(
  PCache *pCache,
  Pgno pgno,
  sqlite3_pcache_page *pPage
)
{

  PgHdr *pPgHdr;

  ((void) (0));
  pPgHdr = (PgHdr *)pPage->pExtra;

  if( !pPgHdr->pPage )
{

    return pcacheFetchFinishWithInit(pCache, pgno, pPage);
  }
  pCache->nRefSum++;
  pPgHdr->nRef++;
  return pPgHdr;
}





static void __attribute__((noinline)) sqlite3PcacheRelease(PgHdr *p)
{

  ((void) (0));
  p->pCache->nRefSum--;
  if( (--p->nRef)==0 )
{

    if( p->flags&0x001 )
{

      pcacheUnpin(p);
    }else if( p->pDirtyPrev!=0 )
{


      pcacheManageDirtyList(p, 3);
    }
  }
}




static void sqlite3PcacheRef(PgHdr *p)
{

  ((void) (0));
  p->nRef++;
  p->pCache->nRefSum++;
}






static void sqlite3PcacheDrop(PgHdr *p)
{

  ((void) (0));
  if( p->flags&0x002 )
{

    pcacheManageDirtyList(p, 1);
  }
  p->pCache->nRefSum--;
  sqlite3Config.pcache2.xUnpin(p->pCache->pCache, p->pPage, 1);
}





static void sqlite3PcacheMakeDirty(PgHdr *p)
{

  ((void) (0));
  if( p->flags & (0x001|0x020) )
{

    p->flags &= ~0x020;
    if( p->flags & 0x001 )
{

      p->flags ^= (0x002|0x001);
      ((void) (0));
      pcacheManageDirtyList(p, 2);
    }
  }
}





static void sqlite3PcacheMakeClean(PgHdr *p)
{

  if( (p->flags & 0x002) )
{

    ((void) (0));
    pcacheManageDirtyList(p, 1);
    p->flags &= ~(0x002|0x008|0x004);
    p->flags |= 0x001;
    if( p->nRef==0 )
{

      pcacheUnpin(p);
    }
  }
}




static void sqlite3PcacheCleanAll(PCache *pCache)
{

  PgHdr *p;
  while( (p = pCache->pDirty)!=0 )
{

    sqlite3PcacheMakeClean(p);
  }
}




static void sqlite3PcacheClearSyncFlags(PCache *pCache)
{

  PgHdr *p;
  for(p=pCache->pDirty; p; p=p->pDirtyNext)
{

    p->flags &= ~0x008;
  }
  pCache->pSynced = pCache->pDirtyTail;
}




static void sqlite3PcacheMove(PgHdr *p, Pgno newPgno)
{

  PCache *pCache = p->pCache;
  ((void) (0));
  ((void) (0));
  sqlite3Config.pcache2.xRekey(pCache->pCache, p->pPage, p->pgno,newPgno);
  p->pgno = newPgno;
  if( (p->flags&0x002) && (p->flags&0x008) )
{

    pcacheManageDirtyList(p, 3);
  }
}
# 41876 "sqlite3.c"
static void sqlite3PcacheTruncate(PCache *pCache, Pgno pgno)
{

  if( pCache->pCache )
{

    PgHdr *p;
    PgHdr *pNext;
    for(p=pCache->pDirty; p; p=pNext)
{

      pNext = p->pDirtyNext;




      ((void) (0));
      if( (p->pgno>pgno) )
{

        ((void) (0));
        sqlite3PcacheMakeClean(p);
      }
    }
    if( pgno==0 && pCache->nRefSum )
{

      sqlite3_pcache_page *pPage1;
      pPage1 = sqlite3Config.pcache2.xFetch(pCache->pCache,1,0);
      if( (pPage1) )
{


        memset(pPage1->pBuf, 0, pCache->szPage);
        pgno = 1;
      }
    }
    sqlite3Config.pcache2.xTruncate(pCache->pCache, pgno+1);
  }
}




static void sqlite3PcacheClose(PCache *pCache)
{

  ((void) (0));
  sqlite3Config.pcache2.xDestroy(pCache->pCache);
}




static void sqlite3PcacheClear(PCache *pCache)
{

  sqlite3PcacheTruncate(pCache, 0);
}





static PgHdr *pcacheMergeDirtyList(PgHdr *pA, PgHdr *pB)
{

  PgHdr result, *pTail;
  pTail = &result;
  while( pA && pB )
{

    if( pA->pgno<pB->pgno )
{

      pTail->pDirty = pA;
      pTail = pA;
      pA = pA->pDirty;
    }else{
      pTail->pDirty = pB;
      pTail = pB;
      pB = pB->pDirty;
    }
  }
  if( pA )
{

    pTail->pDirty = pA;
  }else if( pB )
{

    pTail->pDirty = pB;
  }else{
    pTail->pDirty = 0;
  }
  return result.pDirty;
}
# 41959 "sqlite3.c"
static PgHdr *pcacheSortDirtyList(PgHdr *pIn)
{

  PgHdr *a[32], *p;
  int i;
  memset(a, 0, sizeof(a));
  while( pIn )
{

    p = pIn;
    pIn = p->pDirty;
    p->pDirty = 0;
    for(i=0; (i<32 -1); i++)
{

      if( a[i]==0 )
{

        a[i] = p;
        break;
      }else{
        p = pcacheMergeDirtyList(a[i], p);
        a[i] = 0;
      }
    }
    if( (i==32 -1) )
{




      a[i] = pcacheMergeDirtyList(a[i], p);
    }
  }
  p = a[0];
  for(i=1; i<32; i++)
{

    p = pcacheMergeDirtyList(p, a[i]);
  }
  return p;
}




static PgHdr *sqlite3PcacheDirtyList(PCache *pCache)
{

  PgHdr *p;
  for(p=pCache->pDirty; p; p=p->pDirtyNext)
{

    p->pDirty = p->pDirtyNext;
  }
  return pcacheSortDirtyList(pCache->pDirty);
}







static int sqlite3PcacheRefCount(PCache *pCache)
{

  return pCache->nRefSum;
}




static int sqlite3PcachePageRefcount(PgHdr *p)
{

  return p->nRef;
}




static int sqlite3PcachePagecount(PCache *pCache)
{

  ((void) (0));
  return sqlite3Config.pcache2.xPagecount(pCache->pCache);
}
# 42038 "sqlite3.c"
static void sqlite3PcacheSetCachesize(PCache *pCache, int mxPage)
{

  ((void) (0));
  pCache->szCache = mxPage;
  sqlite3Config.pcache2.xCachesize(pCache->pCache,
                                         numberOfCachePages(pCache));
}






static int sqlite3PcacheSetSpillsize(PCache *p, int mxPage)
{

  int res;
  ((void) (0));
  if( mxPage )
{

    if( mxPage<0 )
{

      mxPage = (int)((-1024*(i64)mxPage)/(p->szPage+p->szExtra));
    }
    p->szSpill = mxPage;
  }
  res = numberOfCachePages(p);
  if( res<p->szSpill ) res = p->szSpill;
  return res;
}




static void sqlite3PcacheShrink(PCache *pCache)
{

  ((void) (0));
  sqlite3Config.pcache2.xShrink(pCache->pCache);
}





static int sqlite3HeaderSizePcache(void)
{
 return (((sizeof(PgHdr))+7)&~7); }
# 42179 "sqlite3.c"
typedef struct PCache1 PCache1;
typedef struct PgHdr1 PgHdr1;
typedef struct PgFreeslot PgFreeslot;
typedef struct PGroup PGroup;







struct PgHdr1 {
  sqlite3_pcache_page page;
  unsigned int iKey;
  u8 isPinned;
  u8 isBulkLocal;
  u8 isAnchor;
  PgHdr1 *pNext;
  PCache1 *pCache;
  PgHdr1 *pLruNext;
  PgHdr1 *pLruPrev;
};
# 42224 "sqlite3.c"
struct PGroup {
  sqlite3_mutex *mutex;
  unsigned int nMaxPage;
  unsigned int nMinPage;
  unsigned int mxPinned;
  unsigned int nCurrentPage;
  PgHdr1 lru;
};
# 42241 "sqlite3.c"
struct PCache1 {





  PGroup *pGroup;
  int szPage;
  int szExtra;
  int szAlloc;
  int bPurgeable;
  unsigned int nMin;
  unsigned int nMax;
  unsigned int n90pct;
  unsigned int iMaxKey;




  unsigned int nRecyclable;
  unsigned int nPage;
  unsigned int nHash;
  PgHdr1 **apHash;
  PgHdr1 *pFree;
  void *pBulk;
};





struct PgFreeslot {
  PgFreeslot *pNext;
};




static struct PCacheGlobal {
  PGroup grp;






  int isInit;
  int separateCache;
  int nInitPage;
  int szSlot;
  int nSlot;
  int nReserve;
  void *pStart, *pEnd;

  sqlite3_mutex *mutex;
  PgFreeslot *pFree;
  int nFreeSlot;




  int bUnderPressure;
} pcache1_g;
# 42338 "sqlite3.c"
static void sqlite3PCacheBufferSetup(void *pBuf, int sz, int n)
{

  if( (pcache1_g).isInit )
{

    PgFreeslot *p;
    if( pBuf==0 ) sz = n = 0;
    sz = ((sz)&~7);
    (pcache1_g).szSlot = sz;
    (pcache1_g).nSlot = (pcache1_g).nFreeSlot = n;
    (pcache1_g).nReserve = n>90 ? 10 : (n/10 + 1);
    (pcache1_g).pStart = pBuf;
    (pcache1_g).pFree = 0;
    (pcache1_g).bUnderPressure = 0;
    while( n-- )
{

      p = (PgFreeslot*)pBuf;
      p->pNext = (pcache1_g).pFree;
      (pcache1_g).pFree = p;
      pBuf = (void*)&((char*)pBuf)[sz];
    }
    (pcache1_g).pEnd = pBuf;
  }
}





static int pcache1InitBulk(PCache1 *pCache)
{

  i64 szBulk;
  char *zBulk;
  if( (pcache1_g).nInitPage==0 ) return 0;

  if( pCache->nMax<3 ) return 0;
  sqlite3BeginBenignMalloc();
  if( (pcache1_g).nInitPage>0 )
{

    szBulk = pCache->szAlloc * (i64)(pcache1_g).nInitPage;
  }else{
    szBulk = -1024 * (i64)(pcache1_g).nInitPage;
  }
  if( szBulk > pCache->szAlloc*(i64)pCache->nMax )
{

    szBulk = pCache->szAlloc*pCache->nMax;
  }
  zBulk = pCache->pBulk = sqlite3Malloc( szBulk );
  sqlite3EndBenignMalloc();
  if( zBulk )
{

    int nBulk = sqlite3MallocSize(zBulk)/pCache->szAlloc;
    int i;
    for(i=0; i<nBulk; i++)
{

      PgHdr1 *pX = (PgHdr1*)&zBulk[pCache->szPage];
      pX->page.pBuf = zBulk;
      pX->page.pExtra = &pX[1];
      pX->isBulkLocal = 1;
      pX->isAnchor = 0;
      pX->pNext = pCache->pFree;
      pCache->pFree = pX;
      zBulk += pCache->szAlloc;
    }
  }
  return pCache->pFree!=0;
}
# 42406 "sqlite3.c"
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
# 42494 "sqlite3.c"
static PgHdr1 *pcache1AllocPage(PCache1 *pCache, int benignMalloc)
{

  PgHdr1 *p = 0;
  void *pPg;

  ((void) (0));
  if( pCache->pFree || (pCache->nPage==0 && pcache1InitBulk(pCache)) )
{

    p = pCache->pFree;
    pCache->pFree = p->pNext;
    p->pNext = 0;
  }else{
# 42512 "sqlite3.c"
    if( benignMalloc )
{
 sqlite3BeginBenignMalloc(); }
# 42522 "sqlite3.c"
    pPg = pcache1Alloc(pCache->szAlloc);
    p = (PgHdr1 *)&((u8 *)pPg)[pCache->szPage];

    if( benignMalloc )
{
 sqlite3EndBenignMalloc(); }



    if( pPg==0 ) return 0;
    p->page.pBuf = pPg;
    p->page.pExtra = &p[1];
    p->isBulkLocal = 0;
    p->isAnchor = 0;
  }
  if( pCache->bPurgeable )
{

    pCache->pGroup->nCurrentPage++;
  }
  return p;
}




static void pcache1FreePage(PgHdr1 *p)
{

  PCache1 *pCache;
  ((void) (0));
  pCache = p->pCache;
  ((void) (0));
  if( p->isBulkLocal )
{

    p->pNext = pCache->pFree;
    pCache->pFree = p;
  }else{
    pcache1Free(p->page.pBuf);



  }
  if( pCache->bPurgeable )
{

    pCache->pGroup->nCurrentPage--;
  }
}






static void *sqlite3PageMalloc(int sz)
{

  return pcache1Alloc(sz);
}




static void sqlite3PageFree(void *p)
{

  pcache1Free(p);
}
# 42596 "sqlite3.c"
static int pcache1UnderMemoryPressure(PCache1 *pCache)
{

  if( (pcache1_g).nSlot && (pCache->szPage+pCache->szExtra)<=(pcache1_g).szSlot )
{

    return (pcache1_g).bUnderPressure;
  }else{
    return sqlite3HeapNearlyFull();
  }
}
# 42613 "sqlite3.c"
static void pcache1ResizeHash(PCache1 *p)
{

  PgHdr1 **apNew;
  unsigned int nNew;
  unsigned int i;

  ((void) (0));

  nNew = p->nHash*2;
  if( nNew<256 )
{

    nNew = 256;
  }

  ((void) (0));
  if( p->nHash )
{
 sqlite3BeginBenignMalloc(); }
  apNew = (PgHdr1 **)sqlite3MallocZero(sizeof(PgHdr1 *)*nNew);
  if( p->nHash )
{
 sqlite3EndBenignMalloc(); }
  ((void) (0));
  if( apNew )
{

    for(i=0; i<p->nHash; i++)
{

      PgHdr1 *pPage;
      PgHdr1 *pNext = p->apHash[i];
      while( (pPage = pNext)!=0 )
{

        unsigned int h = pPage->iKey % nNew;
        pNext = pPage->pNext;
        pPage->pNext = apNew[h];
        apNew[h] = pPage;
      }
    }
    sqlite3_free(p->apHash);
    p->apHash = apNew;
    p->nHash = nNew;
  }
}
# 42654 "sqlite3.c"
static PgHdr1 *pcache1PinPage(PgHdr1 *pPage)
{

  PCache1 *pCache;

  ((void) (0));
  ((void) (0));
  pCache = pPage->pCache;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pPage->pLruPrev->pLruNext = pPage->pLruNext;
  pPage->pLruNext->pLruPrev = pPage->pLruPrev;
  pPage->pLruNext = 0;
  pPage->pLruPrev = 0;
  pPage->isPinned = 1;
  ((void) (0));
  ((void) (0));
  pCache->nRecyclable--;
  return pPage;
}
# 42682 "sqlite3.c"
static void pcache1RemoveFromHash(PgHdr1 *pPage, int freeFlag)
{

  unsigned int h;
  PCache1 *pCache = pPage->pCache;
  PgHdr1 **pp;

  ((void) (0));
  h = pPage->iKey % pCache->nHash;
  for(pp=&pCache->apHash[h]; (*pp)!=pPage; pp=&(*pp)->pNext);
  *pp = (*pp)->pNext;

  pCache->nPage--;
  if( freeFlag ) pcache1FreePage(pPage);
}





static void pcache1EnforceMaxPage(PCache1 *pCache)
{

  PGroup *pGroup = pCache->pGroup;
  PgHdr1 *p;
  ((void) (0));
  while( pGroup->nCurrentPage>pGroup->nMaxPage
      && (p=pGroup->lru.pLruPrev)->isAnchor==0
  )
{

    ((void) (0));
    ((void) (0));
    pcache1PinPage(p);
    pcache1RemoveFromHash(p, 1);
  }
  if( pCache->nPage==0 && pCache->pBulk )
{

    sqlite3_free(pCache->pBulk);
    pCache->pBulk = pCache->pFree = 0;
  }
}
# 42725 "sqlite3.c"
static void pcache1TruncateUnsafe(
  PCache1 *pCache,
  unsigned int iLimit
)
{

 
  unsigned int h;
  ((void) (0));
  for(h=0; h<pCache->nHash; h++)
{

    PgHdr1 **pp = &pCache->apHash[h];
    PgHdr1 *pPage;
    while( (pPage = *pp)!=0 )
{

      if( pPage->iKey>=iLimit )
{

        pCache->nPage--;
        *pp = pPage->pNext;
        if( !pPage->isPinned ) pcache1PinPage(pPage);
        pcache1FreePage(pPage);
      }else{
        pp = &pPage->pNext;
       
      }
    }
  }
  ((void) (0));
}







static int pcache1Init(void *NotUsed)
{

  (void)(NotUsed);
  ((void) (0));
  memset(&(pcache1_g), 0, sizeof((pcache1_g)));
# 42779 "sqlite3.c"
  (pcache1_g).separateCache = sqlite3Config.pPage==0
                          || sqlite3Config.bCoreMutex>0;





  if( sqlite3Config.bCoreMutex )
{

    (pcache1_g).grp.mutex = sqlite3_mutex_alloc(6);
    (pcache1_g).mutex = sqlite3_mutex_alloc(7);
  }

  if( (pcache1_g).separateCache
   && sqlite3Config.nPage!=0
   && sqlite3Config.pPage==0
  )
{

    (pcache1_g).nInitPage = sqlite3Config.nPage;
  }else{
    (pcache1_g).nInitPage = 0;
  }
  (pcache1_g).grp.mxPinned = 10;
  (pcache1_g).isInit = 1;
  return 0;
}






static void pcache1Shutdown(void *NotUsed)
{

  (void)(NotUsed);
  ((void) (0));
  memset(&(pcache1_g), 0, sizeof((pcache1_g)));
}


static void pcache1Destroy(sqlite3_pcache *p);






static sqlite3_pcache *pcache1Create(int szPage, int szExtra, int bPurgeable)
{

  PCache1 *pCache;
  PGroup *pGroup;
  int sz;

  ((void) (0));
  ((void) (0));

  sz = sizeof(PCache1) + sizeof(PGroup)*(pcache1_g).separateCache;
  pCache = (PCache1 *)sqlite3MallocZero(sz);
  if( pCache )
{

    if( (pcache1_g).separateCache )
{

      pGroup = (PGroup*)&pCache[1];
      pGroup->mxPinned = 10;
    }else{
      pGroup = &(pcache1_g).grp;
    }
    if( pGroup->lru.isAnchor==0 )
{

      pGroup->lru.isAnchor = 1;
      pGroup->lru.pLruPrev = pGroup->lru.pLruNext = &pGroup->lru;
    }
    pCache->pGroup = pGroup;
    pCache->szPage = szPage;
    pCache->szExtra = szExtra;
    pCache->szAlloc = szPage + szExtra + (((sizeof(PgHdr1))+7)&~7);
    pCache->bPurgeable = (bPurgeable ? 1 : 0);
    ((void) (0));
    pcache1ResizeHash(pCache);
    if( bPurgeable )
{

      pCache->nMin = 10;
      pGroup->nMinPage += pCache->nMin;
      pGroup->mxPinned = pGroup->nMaxPage + 10 - pGroup->nMinPage;
    }
    ((void) (0));
    if( pCache->nHash==0 )
{

      pcache1Destroy((sqlite3_pcache*)pCache);
      pCache = 0;
    }
  }
  return (sqlite3_pcache *)pCache;
}






static void pcache1Cachesize(sqlite3_pcache *p, int nMax)
{

  PCache1 *pCache = (PCache1 *)p;
  if( pCache->bPurgeable )
{

    PGroup *pGroup = pCache->pGroup;
    ((void) (0));
    pGroup->nMaxPage += (nMax - pCache->nMax);
    pGroup->mxPinned = pGroup->nMaxPage + 10 - pGroup->nMinPage;
    pCache->nMax = nMax;
    pCache->n90pct = pCache->nMax*9/10;
    pcache1EnforceMaxPage(pCache);
    ((void) (0));
  }
}






static void pcache1Shrink(sqlite3_pcache *p)
{

  PCache1 *pCache = (PCache1*)p;
  if( pCache->bPurgeable )
{

    PGroup *pGroup = pCache->pGroup;
    int savedMaxPage;
    ((void) (0));
    savedMaxPage = pGroup->nMaxPage;
    pGroup->nMaxPage = 0;
    pcache1EnforceMaxPage(pCache);
    pGroup->nMaxPage = savedMaxPage;
    ((void) (0));
  }
}




static int pcache1Pagecount(sqlite3_pcache *p)
{

  int n;
  PCache1 *pCache = (PCache1*)p;
  ((void) (0));
  n = pCache->nPage;
  ((void) (0));
  return n;
}
# 42924 "sqlite3.c"
static __attribute__((noinline)) PgHdr1 *pcache1FetchStage2(
  PCache1 *pCache,
  unsigned int iKey,
  int createFlag
)
{

  unsigned int nPinned;
  PGroup *pGroup = pCache->pGroup;
  PgHdr1 *pPage = 0;


  ((void) (0));
  nPinned = pCache->nPage - pCache->nRecyclable;
  ((void) (0));
  ((void) (0));
  if( createFlag==1 && (
        nPinned>=pGroup->mxPinned
     || nPinned>=pCache->n90pct
     || (pcache1UnderMemoryPressure(pCache) && pCache->nRecyclable<nPinned)
  ))
{

    return 0;
  }

  if( pCache->nPage>=pCache->nHash ) pcache1ResizeHash(pCache);
  ((void) (0));


  if( pCache->bPurgeable
   && !pGroup->lru.pLruPrev->isAnchor
   && ((pCache->nPage+1>=pCache->nMax) || pcache1UnderMemoryPressure(pCache))
  )
{

    PCache1 *pOther;
    pPage = pGroup->lru.pLruPrev;
    ((void) (0));
    pcache1RemoveFromHash(pPage, 0);
    pcache1PinPage(pPage);
    pOther = pPage->pCache;
    if( pOther->szAlloc != pCache->szAlloc )
{

      pcache1FreePage(pPage);
      pPage = 0;
    }else{
      pGroup->nCurrentPage -= (pOther->bPurgeable - pCache->bPurgeable);
    }
  }




  if( !pPage )
{

    pPage = pcache1AllocPage(pCache, createFlag==1);
  }

  if( pPage )
{

    unsigned int h = iKey % pCache->nHash;
    pCache->nPage++;
    pPage->iKey = iKey;
    pPage->pNext = pCache->apHash[h];
    pPage->pCache = pCache;
    pPage->pLruPrev = 0;
    pPage->pLruNext = 0;
    pPage->isPinned = 1;
    *(void **)pPage->page.pExtra = 0;
    pCache->apHash[h] = pPage;
    if( iKey>pCache->iMaxKey )
{

      pCache->iMaxKey = iKey;
    }
  }
  return pPage;
}
# 43052 "sqlite3.c"
static PgHdr1 *pcache1FetchNoMutex(
  sqlite3_pcache *p,
  unsigned int iKey,
  int createFlag
)
{

  PCache1 *pCache = (PCache1 *)p;
  PgHdr1 *pPage = 0;


  pPage = pCache->apHash[iKey % pCache->nHash];
  while( pPage && pPage->iKey!=iKey )
{
 pPage = pPage->pNext; }





  if( pPage )
{

    if( !pPage->isPinned )
{

      return pcache1PinPage(pPage);
    }else{
      return pPage;
    }
  }else if( createFlag )
{


    return pcache1FetchStage2(pCache, iKey, createFlag);
  }else{
    return 0;
  }
}
# 43097 "sqlite3.c"
static sqlite3_pcache_page *pcache1Fetch(
  sqlite3_pcache *p,
  unsigned int iKey,
  int createFlag
)
{





  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));





  {
    return (sqlite3_pcache_page*)pcache1FetchNoMutex(p, iKey, createFlag);
  }
}







static void pcache1Unpin(
  sqlite3_pcache *p,
  sqlite3_pcache_page *pPg,
  int reuseUnlikely
)
{

  PCache1 *pCache = (PCache1 *)p;
  PgHdr1 *pPage = (PgHdr1 *)pPg;
  PGroup *pGroup = pCache->pGroup;

  ((void) (0));
  ((void) (0));




  ((void) (0));
  ((void) (0));

  if( reuseUnlikely || pGroup->nCurrentPage>pGroup->nMaxPage )
{

    pcache1RemoveFromHash(pPage, 1);
  }else{

    PgHdr1 **ppFirst = &pGroup->lru.pLruNext;
    pPage->pLruPrev = &pGroup->lru;
    (pPage->pLruNext = *ppFirst)->pLruPrev = pPage;
    *ppFirst = pPage;
    pCache->nRecyclable++;
    pPage->isPinned = 0;
  }

  ((void) (0));
}




static void pcache1Rekey(
  sqlite3_pcache *p,
  sqlite3_pcache_page *pPg,
  unsigned int iOld,
  unsigned int iNew
)
{

  PCache1 *pCache = (PCache1 *)p;
  PgHdr1 *pPage = (PgHdr1 *)pPg;
  PgHdr1 **pp;
  unsigned int h;
  ((void) (0));
  ((void) (0));

  ((void) (0));

  h = iOld%pCache->nHash;
  pp = &pCache->apHash[h];
  while( (*pp)!=pPage )
{

    pp = &(*pp)->pNext;
  }
  *pp = pPage->pNext;

  h = iNew%pCache->nHash;
  pPage->iKey = iNew;
  pPage->pNext = pCache->apHash[h];
  pCache->apHash[h] = pPage;
  if( iNew>pCache->iMaxKey )
{

    pCache->iMaxKey = iNew;
  }

  ((void) (0));
}
# 43204 "sqlite3.c"
static void pcache1Truncate(sqlite3_pcache *p, unsigned int iLimit)
{

  PCache1 *pCache = (PCache1 *)p;
  ((void) (0));
  if( iLimit<=pCache->iMaxKey )
{

    pcache1TruncateUnsafe(pCache, iLimit);
    pCache->iMaxKey = iLimit-1;
  }
  ((void) (0));
}






static void pcache1Destroy(sqlite3_pcache *p)
{

  PCache1 *pCache = (PCache1 *)p;
  PGroup *pGroup = pCache->pGroup;
  ((void) (0));
  ((void) (0));
  pcache1TruncateUnsafe(pCache, 0);
  ((void) (0));
  pGroup->nMaxPage -= pCache->nMax;
  ((void) (0));
  pGroup->nMinPage -= pCache->nMin;
  pGroup->mxPinned = pGroup->nMaxPage + 10 - pGroup->nMinPage;
  pcache1EnforceMaxPage(pCache);
  ((void) (0));
  sqlite3_free(pCache->pBulk);
  sqlite3_free(pCache->apHash);
  sqlite3_free(pCache);
}






static void sqlite3PCacheSetDefault(void)
{

  static const sqlite3_pcache_methods2 defaultMethods = {
    1,
    0,
    pcache1Init,
    pcache1Shutdown,
    pcache1Create,
    pcache1Cachesize,
    pcache1Pagecount,
    pcache1Fetch,
    pcache1Unpin,
    pcache1Rekey,
    pcache1Truncate,
    pcache1Destroy,
    pcache1Shrink
  };
  sqlite3_config(18, &defaultMethods);
}




static int sqlite3HeaderSizePcache1(void)
{
 return (((sizeof(PgHdr1))+7)&~7); }





static sqlite3_mutex *sqlite3Pcache1Mutex(void)
{

  return (pcache1_g).mutex;
}
# 43419 "sqlite3.c"
struct RowSetEntry {
  i64 v;
  struct RowSetEntry *pRight;
  struct RowSetEntry *pLeft;
};







struct RowSetChunk {
  struct RowSetChunk *pNextChunk;
  struct RowSetEntry aEntry[((1024 -8)/sizeof(struct RowSetEntry))];
};






struct RowSet {
  struct RowSetChunk *pChunk;
  sqlite3 *db;
  struct RowSetEntry *pEntry;
  struct RowSetEntry *pLast;
  struct RowSetEntry *pFresh;
  struct RowSetEntry *pForest;
  u16 nFresh;
  u16 rsFlags;
  int iBatch;
};
# 43471 "sqlite3.c"
static RowSet *sqlite3RowSetInit(sqlite3 *db, void *pSpace, unsigned int N)
{

  RowSet *p;
  ((void) (0));
  p = pSpace;
  p->pChunk = 0;
  p->db = db;
  p->pEntry = 0;
  p->pLast = 0;
  p->pForest = 0;
  p->pFresh = (struct RowSetEntry*)((((sizeof(*p))+7)&~7) + (char*)p);
  p->nFresh = (u16)((N - (((sizeof(*p))+7)&~7))/sizeof(struct RowSetEntry));
  p->rsFlags = 0x01;
  p->iBatch = 0;
  return p;
}






static void sqlite3RowSetClear(RowSet *p)
{

  struct RowSetChunk *pChunk, *pNextChunk;
  for(pChunk=p->pChunk; pChunk; pChunk = pNextChunk)
{

    pNextChunk = pChunk->pNextChunk;
    sqlite3DbFree(p->db, pChunk);
  }
  p->pChunk = 0;
  p->nFresh = 0;
  p->pEntry = 0;
  p->pLast = 0;
  p->pForest = 0;
  p->rsFlags = 0x01;
}
# 43514 "sqlite3.c"
static struct RowSetEntry *rowSetEntryAlloc(RowSet *p)
{

  ((void) (0));
  if( p->nFresh==0 )
{

    struct RowSetChunk *pNew;
    pNew = sqlite3DbMallocRawNN(p->db, sizeof(*pNew));
    if( pNew==0 )
{

      return 0;
    }
    pNew->pNextChunk = p->pChunk;
    p->pChunk = pNew;
    p->pFresh = pNew->aEntry;
    p->nFresh = ((1024 -8)/sizeof(struct RowSetEntry));
  }
  p->nFresh--;
  return p->pFresh++;
}







static void sqlite3RowSetInsert(RowSet *p, i64 rowid)
{

  struct RowSetEntry *pEntry;
  struct RowSetEntry *pLast;


  ((void) (0));

  pEntry = rowSetEntryAlloc(p);
  if( pEntry==0 ) return;
  pEntry->v = rowid;
  pEntry->pRight = 0;
  pLast = p->pLast;
  if( pLast )
{

    if( (p->rsFlags & 0x01)!=0 && rowid<=pLast->v )
{

      p->rsFlags &= ~0x01;
    }
    pLast->pRight = pEntry;
  }else{
    p->pEntry = pEntry;
  }
  p->pLast = pEntry;
}







static struct RowSetEntry *rowSetEntryMerge(
  struct RowSetEntry *pA,
  struct RowSetEntry *pB
)
{

  struct RowSetEntry head;
  struct RowSetEntry *pTail;

  pTail = &head;
  while( pA && pB )
{

    ((void) (0));
    ((void) (0));
    if( pA->v<pB->v )
{

      pTail->pRight = pA;
      pA = pA->pRight;
      pTail = pTail->pRight;
    }else if( pB->v<pA->v )
{

      pTail->pRight = pB;
      pB = pB->pRight;
      pTail = pTail->pRight;
    }else{
      pA = pA->pRight;
    }
  }
  if( pA )
{

    ((void) (0));
    pTail->pRight = pA;
  }else{
    ((void) (0));
    pTail->pRight = pB;
  }
  return head.pRight;
}





static struct RowSetEntry *rowSetEntrySort(struct RowSetEntry *pIn)
{

  unsigned int i;
  struct RowSetEntry *pNext, *aBucket[40];

  memset(aBucket, 0, sizeof(aBucket));
  while( pIn )
{

    pNext = pIn->pRight;
    pIn->pRight = 0;
    for(i=0; aBucket[i]; i++)
{

      pIn = rowSetEntryMerge(aBucket[i], pIn);
      aBucket[i] = 0;
    }
    aBucket[i] = pIn;
    pIn = pNext;
  }
  pIn = 0;
  for(i=0; i<sizeof(aBucket)/sizeof(aBucket[0]); i++)
{

    pIn = rowSetEntryMerge(pIn, aBucket[i]);
  }
  return pIn;
}







static void rowSetTreeToList(
  struct RowSetEntry *pIn,
  struct RowSetEntry **ppFirst,
  struct RowSetEntry **ppLast
)
{

  ((void) (0));
  if( pIn->pLeft )
{

    struct RowSetEntry *p;
    rowSetTreeToList(pIn->pLeft, ppFirst, &p);
    p->pRight = pIn;
  }else{
    *ppFirst = pIn;
  }
  if( pIn->pRight )
{

    rowSetTreeToList(pIn->pRight, &pIn->pRight, ppLast);
  }else{
    *ppLast = pIn;
  }
  ((void) (0));
}
# 43666 "sqlite3.c"
static struct RowSetEntry *rowSetNDeepTree(
  struct RowSetEntry **ppList,
  int iDepth
)
{

  struct RowSetEntry *p;
  struct RowSetEntry *pLeft;
  if( *ppList==0 )
{

    return 0;
  }
  if( iDepth==1 )
{

    p = *ppList;
    *ppList = p->pRight;
    p->pLeft = p->pRight = 0;
    return p;
  }
  pLeft = rowSetNDeepTree(ppList, iDepth-1);
  p = *ppList;
  if( p==0 )
{

    return pLeft;
  }
  p->pLeft = pLeft;
  *ppList = p->pRight;
  p->pRight = rowSetNDeepTree(ppList, iDepth-1);
  return p;
}





static struct RowSetEntry *rowSetListToTree(struct RowSetEntry *pList)
{

  int iDepth;
  struct RowSetEntry *p;
  struct RowSetEntry *pLeft;

  ((void) (0));
  p = pList;
  pList = p->pRight;
  p->pLeft = p->pRight = 0;
  for(iDepth=1; pList; iDepth++)
{

    pLeft = p;
    p = pList;
    pList = p->pRight;
    p->pLeft = pLeft;
    p->pRight = rowSetNDeepTree(&pList, iDepth);
  }
  return p;
}







static void rowSetToList(RowSet *p)
{



  ((void) (0));

  if( (p->rsFlags & 0x01)==0 )
{

    p->pEntry = rowSetEntrySort(p->pEntry);
  }





  ((void) (0));
# 43746 "sqlite3.c"
  p->rsFlags |= 0x02;
}
# 43757 "sqlite3.c"
static int sqlite3RowSetNext(RowSet *p, i64 *pRowid)
{

  ((void) (0));


  if( (p->rsFlags & 0x02)==0 ) rowSetToList(p);


  if( p->pEntry )
{

    *pRowid = p->pEntry->v;
    p->pEntry = p->pEntry->pRight;
    if( p->pEntry==0 )
{

      sqlite3RowSetClear(p);
    }
    return 1;
  }else{
    return 0;
  }
}
# 43784 "sqlite3.c"
static int sqlite3RowSetTest(RowSet *pRowSet, int iBatch, sqlite3_int64 iRowid)
{

  struct RowSetEntry *p, *pTree;


  ((void) (0));



  if( iBatch!=pRowSet->iBatch )
{

    p = pRowSet->pEntry;
    if( p )
{

      struct RowSetEntry **ppPrevTree = &pRowSet->pForest;
      if( (pRowSet->rsFlags & 0x01)==0 )
{

        p = rowSetEntrySort(p);
      }
      for(pTree = pRowSet->pForest; pTree; pTree=pTree->pRight)
{

        ppPrevTree = &pTree->pRight;
        if( pTree->pLeft==0 )
{

          pTree->pLeft = rowSetListToTree(p);
          break;
        }else{
          struct RowSetEntry *pAux, *pTail;
          rowSetTreeToList(pTree->pLeft, &pAux, &pTail);
          pTree->pLeft = 0;
          p = rowSetEntryMerge(pAux, p);
        }
      }
      if( pTree==0 )
{

        *ppPrevTree = pTree = rowSetEntryAlloc(pRowSet);
        if( pTree )
{

          pTree->v = 0;
          pTree->pRight = 0;
          pTree->pLeft = rowSetListToTree(p);
        }
      }
      pRowSet->pEntry = 0;
      pRowSet->pLast = 0;
      pRowSet->rsFlags |= 0x01;
    }
    pRowSet->iBatch = iBatch;
  }




  for(pTree = pRowSet->pForest; pTree; pTree=pTree->pRight)
{

    p = pTree->pLeft;
    while( p )
{

      if( p->v<iRowid )
{

        p = p->pRight;
      }else if( p->v>iRowid )
{

        p = p->pLeft;
      }else{
        return 1;
      }
    }
  }
  return 0;
}
# 43924 "sqlite3.c"
typedef struct Wal Wal;


static int sqlite3WalOpen(sqlite3_vfs*, sqlite3_file*, const char *, int, i64, Wal**);
static int sqlite3WalClose(Wal *pWal, int sync_flags, int, u8 *);


static void sqlite3WalLimit(Wal*, i64);
# 43940 "sqlite3.c"
static int sqlite3WalBeginReadTransaction(Wal *pWal, int *);
static void sqlite3WalEndReadTransaction(Wal *pWal);


static int sqlite3WalFindFrame(Wal *, Pgno, u32 *);
static int sqlite3WalReadFrame(Wal *, u32, int, u8 *);


static Pgno sqlite3WalDbsize(Wal *pWal);


static int sqlite3WalBeginWriteTransaction(Wal *pWal);
static int sqlite3WalEndWriteTransaction(Wal *pWal);


static int sqlite3WalUndo(Wal *pWal, int (*xUndo)(void *, Pgno), void *pUndoCtx);



static void sqlite3WalSavepoint(Wal *pWal, u32 *aWalData);



static int sqlite3WalSavepointUndo(Wal *pWal, u32 *aWalData);


static int sqlite3WalFrames(Wal *pWal, int, PgHdr *, Pgno, int, int);


static int sqlite3WalCheckpoint(
  Wal *pWal,
  int eMode,
  int (*xBusy)(void*),
  void *pBusyArg,
  int sync_flags,
  int nBuf,
  u8 *zBuf,
  int *pnLog,
  int *pnCkpt
);






static int sqlite3WalCallback(Wal *pWal);




static int sqlite3WalExclusiveMode(Wal *pWal, int op);





static int sqlite3WalHeapMemory(Wal *pWal);
# 44012 "sqlite3.c"
static sqlite3_file *sqlite3WalFile(Wal *pWal);
# 44440 "sqlite3.c"
typedef struct PagerSavepoint PagerSavepoint;
struct PagerSavepoint {
  i64 iOffset;
  i64 iHdrOffset;
  Bitvec *pInSavepoint;
  Pgno nOrig;
  Pgno iSubRec;

  u32 aWalData[4];

};
# 44615 "sqlite3.c"
struct Pager {
  sqlite3_vfs *pVfs;
  u8 exclusiveMode;
  u8 journalMode;
  u8 useJournal;
  u8 noSync;
  u8 fullSync;
  u8 extraSync;
  u8 ckptSyncFlags;
  u8 walSyncFlags;
  u8 syncFlags;
  u8 tempFile;
  u8 noLock;
  u8 readOnly;
  u8 memDb;
# 44640 "sqlite3.c"
  u8 eState;
  u8 eLock;
  u8 changeCountDone;
  u8 setMaster;
  u8 doNotSpill;
  u8 subjInMemory;
  u8 bUseFetch;
  u8 hasHeldSharedLock;
  Pgno dbSize;
  Pgno dbOrigSize;
  Pgno dbFileSize;
  Pgno dbHintSize;
  int errCode;
  int nRec;
  u32 cksumInit;
  u32 nSubRec;
  Bitvec *pInJournal;
  sqlite3_file *fd;
  sqlite3_file *jfd;
  sqlite3_file *sjfd;
  i64 journalOff;
  i64 journalHdr;
  sqlite3_backup *pBackup;
  PagerSavepoint *aSavepoint;
  int nSavepoint;
  u32 iDataVersion;
  char dbFileVers[16];

  int nMmapOut;
  sqlite3_int64 szMmap;
  PgHdr *pMmapFreelist;




  u16 nExtra;
  i16 nReserve;
  u32 vfsFlags;
  u32 sectorSize;
  int pageSize;
  Pgno mxPgno;
  i64 journalSizeLimit;
  char *zFilename;
  char *zJournal;
  int (*xBusyHandler)(void*);
  void *pBusyHandlerArg;
  int aStat[3];



  void (*xReiniter)(DbPage*);






  char *pTmpSpace;
  PCache *pPCache;

  Wal *pWal;
  char *zWal;

};
# 44753 "sqlite3.c"
static const unsigned char aJournalMagic[] = {
  0xd9, 0xd5, 0x05, 0xf9, 0x20, 0xa1, 0x63, 0xd7,
};
# 44815 "sqlite3.c"
static int pagerUseWal(Pager *pPager)
{

  return (pPager->pWal!=0);
}
# 45024 "sqlite3.c"
static int subjRequiresPage(PgHdr *pPg)
{

  Pager *pPager = pPg->pPager;
  PagerSavepoint *p;
  Pgno pgno = pPg->pgno;
  int i;
  for(i=0; i<pPager->nSavepoint; i++)
{

    p = &pPager->aSavepoint[i];
    if( p->nOrig>=pgno && 0==sqlite3BitvecTestNotNull(p->pInSavepoint, pgno) )
{

      return 1;
    }
  }
  return 0;
}
# 45054 "sqlite3.c"
static int read32bits(sqlite3_file *fd, i64 offset, u32 *pRes)
{

  unsigned char ac[4];
  int rc = sqlite3OsRead(fd, ac, sizeof(ac), offset);
  if( rc==0 )
{

    *pRes = sqlite3Get4byte(ac);
  }
  return rc;
}
# 45073 "sqlite3.c"
static int write32bits(sqlite3_file *fd, i64 offset, u32 val)
{

  char ac[4];
  sqlite3Put4byte((u8*)ac,val);
  return sqlite3OsWrite(fd, ac, 4, offset);
}
# 45088 "sqlite3.c"
static int pagerUnlockDb(Pager *pPager, int eLock)
{

  int rc = 0;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( ((pPager->fd)->pMethods!=0) )
{

    ((void) (0));
    rc = pPager->noLock ? 0 : sqlite3OsUnlock(pPager->fd, eLock);
    if( pPager->eLock!=(4 +1) )
{

      pPager->eLock = (u8)eLock;
    }
   
  }
  return rc;
}
# 45115 "sqlite3.c"
static int pagerLockDb(Pager *pPager, int eLock)
{

  int rc = 0;

  ((void) (0));
  if( pPager->eLock<eLock || pPager->eLock==(4 +1) )
{

    rc = pPager->noLock ? 0 : sqlite3OsLock(pPager->fd, eLock);
    if( rc==0 && (pPager->eLock!=(4 +1)||eLock==4) )
{

      pPager->eLock = (u8)eLock;
     
    }
  }
  return rc;
}
# 45238 "sqlite3.c"
static int readMasterJournal(sqlite3_file *pJrnl, char *zMaster, u32 nMaster)
{

  int rc;
  u32 len;
  i64 szJ;
  u32 cksum;
  u32 u;
  unsigned char aMagic[8];
  zMaster[0] = '\0';

  if( 0!=(rc = sqlite3OsFileSize(pJrnl, &szJ))
   || szJ<16
   || 0!=(rc = read32bits(pJrnl, szJ-16, &len))
   || len>=nMaster
   || len==0
   || 0!=(rc = read32bits(pJrnl, szJ-12, &cksum))
   || 0!=(rc = sqlite3OsRead(pJrnl, aMagic, 8, szJ-8))
   || memcmp(aMagic, aJournalMagic, 8)
   || 0!=(rc = sqlite3OsRead(pJrnl, zMaster, len, szJ-16-len))
  )
{

    return rc;
  }


  for(u=0; u<len; u++)
{

    cksum -= zMaster[u];
  }
  if( cksum )
{






    len = 0;
  }
  zMaster[len] = '\0';

  return 0;
}
# 45292 "sqlite3.c"
static i64 journalHdrOffset(Pager *pPager)
{

  i64 offset = 0;
  i64 c = pPager->journalOff;
  if( c )
{

    offset = ((c-1)/(pPager->sectorSize) + 1) * (pPager->sectorSize);
  }
  ((void) (0));
  ((void) (0));
  ((void) (0));
  return offset;
}
# 45325 "sqlite3.c"
static int zeroJournalHdr(Pager *pPager, int doTruncate)
{

  int rc = 0;
  ((void) (0));
  ((void) (0));
  if( pPager->journalOff )
{

    const i64 iLimit = pPager->journalSizeLimit;

   
    if( doTruncate || iLimit==0 )
{

      rc = sqlite3OsTruncate(pPager->jfd, 0);
    }else{
      static const char zeroHdr[28] = {0};
      rc = sqlite3OsWrite(pPager->jfd, zeroHdr, sizeof(zeroHdr), 0);
    }
    if( rc==0 && !pPager->noSync )
{

      rc = sqlite3OsSync(pPager->jfd, 0x00010|pPager->syncFlags);
    }







    if( rc==0 && iLimit>0 )
{

      i64 sz;
      rc = sqlite3OsFileSize(pPager->jfd, &sz);
      if( rc==0 && sz>iLimit )
{

        rc = sqlite3OsTruncate(pPager->jfd, iLimit);
      }
    }
  }
  return rc;
}
# 45375 "sqlite3.c"
static int writeJournalHdr(Pager *pPager)
{

  int rc = 0;
  char *zHeader = pPager->pTmpSpace;
  u32 nHeader = (u32)pPager->pageSize;
  u32 nWrite;
  int ii;

  ((void) (0));

  if( nHeader>(pPager->sectorSize) )
{

    nHeader = (pPager->sectorSize);
  }





  for(ii=0; ii<pPager->nSavepoint; ii++)
{

    if( pPager->aSavepoint[ii].iHdrOffset==0 )
{

      pPager->aSavepoint[ii].iHdrOffset = pPager->journalOff;
    }
  }

  pPager->journalHdr = pPager->journalOff = journalHdrOffset(pPager);
# 45420 "sqlite3.c"
  ((void) (0));
  if( pPager->noSync || (pPager->journalMode==4)
   || (sqlite3OsDeviceCharacteristics(pPager->fd)&0x00000200)
  )
{

    memcpy(zHeader, aJournalMagic, sizeof(aJournalMagic));
    sqlite3Put4byte((u8*)&zHeader[sizeof(aJournalMagic)],0xffffffff);
  }else{
    memset(zHeader, 0, sizeof(aJournalMagic)+4);
  }


  sqlite3_randomness(sizeof(pPager->cksumInit), &pPager->cksumInit);
  sqlite3Put4byte((u8*)&zHeader[sizeof(aJournalMagic)+4],pPager->cksumInit);

  sqlite3Put4byte((u8*)&zHeader[sizeof(aJournalMagic)+8],pPager->dbOrigSize);

  sqlite3Put4byte((u8*)&zHeader[sizeof(aJournalMagic)+12],pPager->sectorSize);


  sqlite3Put4byte((u8*)&zHeader[sizeof(aJournalMagic)+16],pPager->pageSize);






  memset(&zHeader[sizeof(aJournalMagic)+20], 0,
         nHeader-(sizeof(aJournalMagic)+20));
# 45466 "sqlite3.c"
  for(nWrite=0; rc==0&&nWrite<(pPager->sectorSize); nWrite+=nHeader)
{

   
    rc = sqlite3OsWrite(pPager->jfd, zHeader, nHeader, pPager->journalOff);
    ((void) (0));
    pPager->journalOff += nHeader;
  }

  return rc;
}
# 45493 "sqlite3.c"
static int readJournalHdr(
  Pager *pPager,
  int isHot,
  i64 journalSize,
  u32 *pNRec,
  u32 *pDbSize
)
{

  int rc;
  unsigned char aMagic[8];
  i64 iHdrOff;

  ((void) (0));





  pPager->journalOff = journalHdrOffset(pPager);
  if( pPager->journalOff+(pPager->sectorSize) > journalSize )
{

    return 101;
  }
  iHdrOff = pPager->journalOff;






  if( isHot || iHdrOff!=pPager->journalHdr )
{

    rc = sqlite3OsRead(pPager->jfd, aMagic, sizeof(aMagic), iHdrOff);
    if( rc )
{

      return rc;
    }
    if( memcmp(aMagic, aJournalMagic, sizeof(aMagic))!=0 )
{

      return 101;
    }
  }





  if( 0!=(rc = read32bits(pPager->jfd, iHdrOff+8, pNRec))
   || 0!=(rc = read32bits(pPager->jfd, iHdrOff+12, &pPager->cksumInit))
   || 0!=(rc = read32bits(pPager->jfd, iHdrOff+16, pDbSize))
  )
{

    return rc;
  }

  if( pPager->journalOff==0 )
{

    u32 iPageSize;
    u32 iSectorSize;


    if( 0!=(rc = read32bits(pPager->jfd, iHdrOff+20, &iSectorSize))
     || 0!=(rc = read32bits(pPager->jfd, iHdrOff+24, &iPageSize))
    )
{

      return rc;
    }





    if( iPageSize==0 )
{

      iPageSize = pPager->pageSize;
    }






    if( iPageSize<512 || iSectorSize<32
     || iPageSize>65536 || iSectorSize>0x10000
     || ((iPageSize-1)&iPageSize)!=0 || ((iSectorSize-1)&iSectorSize)!=0
    )
{






      return 101;
    }





    rc = sqlite3PagerSetPagesize(pPager, &iPageSize, -1);
    ;







    pPager->sectorSize = iSectorSize;
  }

  pPager->journalOff += (pPager->sectorSize);
  return rc;
}
# 45618 "sqlite3.c"
static int writeMasterJournal(Pager *pPager, const char *zMaster)
{

  int rc;
  int nMaster;
  i64 iHdrOff;
  i64 jrnlSize;
  u32 cksum = 0;

  ((void) (0));
  ((void) (0));

  if( !zMaster
   || pPager->journalMode==4
   || !((pPager->jfd)->pMethods!=0)
  )
{

    return 0;
  }
  pPager->setMaster = 1;
  ((void) (0));


  for(nMaster=0; zMaster[nMaster]; nMaster++)
{

    cksum += zMaster[nMaster];
  }





  if( pPager->fullSync )
{

    pPager->journalOff = journalHdrOffset(pPager);
  }
  iHdrOff = pPager->journalOff;




  if( (0 != (rc = write32bits(pPager->jfd, iHdrOff, ((Pgno)((sqlite3PendingByte/((pPager)->pageSize))+1)))))
   || (0 != (rc = sqlite3OsWrite(pPager->jfd, zMaster, nMaster, iHdrOff+4)))
   || (0 != (rc = write32bits(pPager->jfd, iHdrOff+4+nMaster, nMaster)))
   || (0 != (rc = write32bits(pPager->jfd, iHdrOff+4+nMaster+4, cksum)))
   || (0 != (rc = sqlite3OsWrite(pPager->jfd, aJournalMagic, 8,
                                 iHdrOff+4+nMaster+8)))
  )
{

    return rc;
  }
  pPager->journalOff += (nMaster+20);
# 45675 "sqlite3.c"
  if( 0==(rc = sqlite3OsFileSize(pPager->jfd, &jrnlSize))
   && jrnlSize>pPager->journalOff
  )
{

    rc = sqlite3OsTruncate(pPager->jfd, pPager->journalOff);
  }
  return rc;
}




static void pager_reset(Pager *pPager)
{

  pPager->iDataVersion++;
  sqlite3BackupRestart(pPager->pBackup);
  sqlite3PcacheClear(pPager->pPCache);
}




static u32 sqlite3PagerDataVersion(Pager *pPager)
{

  ((void) (0));
  return pPager->iDataVersion;
}






static void releaseAllSavepoints(Pager *pPager)
{

  int ii;
  for(ii=0; ii<pPager->nSavepoint; ii++)
{

    sqlite3BitvecDestroy(pPager->aSavepoint[ii].pInSavepoint);
  }
  if( !pPager->exclusiveMode || sqlite3JournalIsInMemory(pPager->sjfd) )
{

    sqlite3OsClose(pPager->sjfd);
  }
  sqlite3_free(pPager->aSavepoint);
  pPager->aSavepoint = 0;
  pPager->nSavepoint = 0;
  pPager->nSubRec = 0;
}






static int addToSavepointBitvecs(Pager *pPager, Pgno pgno)
{

  int ii;
  int rc = 0;

  for(ii=0; ii<pPager->nSavepoint; ii++)
{

    PagerSavepoint *p = &pPager->aSavepoint[ii];
    if( pgno<=p->nOrig )
{

      rc |= sqlite3BitvecSet(p->pInSavepoint, pgno);
      ;
      ((void) (0));
    }
  }
  return rc;
}
# 45756 "sqlite3.c"
static void pager_unlock(Pager *pPager)
{


  ((void) (0))


   ;

  sqlite3BitvecDestroy(pPager->pInJournal);
  pPager->pInJournal = 0;
  releaseAllSavepoints(pPager);

  if( pagerUseWal(pPager) )
{

    ((void) (0));
    sqlite3WalEndReadTransaction(pPager->pWal);
    pPager->eState = 0;
  }else if( !pPager->exclusiveMode )
{

    int rc;
    int iDc = ((pPager->fd)->pMethods!=0)?sqlite3OsDeviceCharacteristics(pPager->fd):0;






    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));
    if( 0==(iDc & 0x00000800)
     || 1!=(pPager->journalMode & 5)
    )
{

      sqlite3OsClose(pPager->jfd);
    }






    rc = pagerUnlockDb(pPager, 0);
    if( rc!=0 && pPager->eState==6 )
{

      pPager->eLock = (4 +1);
    }





    ((void) (0));
    pPager->changeCountDone = 0;
    pPager->eState = 0;
  }






  if( pPager->errCode )
{

    ((void) (0));
    pager_reset(pPager);
    pPager->changeCountDone = pPager->tempFile;
    pPager->eState = 0;
    pPager->errCode = 0;
    if( ((pPager)->bUseFetch) ) sqlite3OsUnfetch(pPager->fd, 0, 0);
  }

  pPager->journalOff = 0;
  pPager->journalHdr = 0;
  pPager->setMaster = 0;
}
# 45849 "sqlite3.c"
static int pager_error(Pager *pPager, int rc)
{

  int rc2 = rc & 0xff;
  ((void) (0));
  ((void) (0))



   ;
  if( rc2==13 || rc2==10 )
{

    pPager->errCode = rc;
    pPager->eState = 6;
  }
  return rc;
}

static int pager_truncate(Pager *pPager, Pgno nPage);
# 45919 "sqlite3.c"
static int pager_end_transaction(Pager *pPager, int hasMaster, int bCommit)
{

  int rc = 0;
  int rc2 = 0;
# 45936 "sqlite3.c"
  ((void) (0));
  ((void) (0));
  if( pPager->eState<2 && pPager->eLock<2 )
{

    return 0;
  }

  releaseAllSavepoints(pPager);
  ((void) (0));
  if( ((pPager->jfd)->pMethods!=0) )
{

    ((void) (0));


    if( sqlite3JournalIsInMemory(pPager->jfd) )
{


      sqlite3OsClose(pPager->jfd);
    }else if( pPager->journalMode==3 )
{

      if( pPager->journalOff==0 )
{

        rc = 0;
      }else{
        rc = sqlite3OsTruncate(pPager->jfd, 0);
        if( rc==0 && pPager->fullSync )
{






          rc = sqlite3OsSync(pPager->jfd, pPager->syncFlags);
        }
      }
      pPager->journalOff = 0;
    }else if( pPager->journalMode==1
      || (pPager->exclusiveMode && pPager->journalMode!=5)
    )
{

      rc = zeroJournalHdr(pPager, hasMaster);
      pPager->journalOff = 0;
    }else{





      int bDelete = !pPager->tempFile;
      ((void) (0));
      ((void) (0))


       ;
      sqlite3OsClose(pPager->jfd);
      if( bDelete )
{

        rc = sqlite3OsDelete(pPager->pVfs, pPager->zJournal, pPager->extraSync);
      }
    }
  }
# 46001 "sqlite3.c"
  sqlite3BitvecDestroy(pPager->pInJournal);
  pPager->pInJournal = 0;
  pPager->nRec = 0;
  sqlite3PcacheCleanAll(pPager->pPCache);
  sqlite3PcacheTruncate(pPager->pPCache, pPager->dbSize);

  if( pagerUseWal(pPager) )
{





    rc2 = sqlite3WalEndWriteTransaction(pPager->pWal);
    ((void) (0));
  }else if( rc==0 && bCommit && pPager->dbFileSize>pPager->dbSize )
{







    ((void) (0));
    rc = pager_truncate(pPager, pPager->dbSize);
  }

  if( rc==0 && bCommit && ((pPager->fd)->pMethods!=0) )
{

    rc = sqlite3OsFileControl(pPager->fd, 22, 0);
    if( rc==12 ) rc = 0;
  }

  if( !pPager->exclusiveMode
   && (!pagerUseWal(pPager) || sqlite3WalExclusiveMode(pPager->pWal, 0))
  )
{

    rc2 = pagerUnlockDb(pPager, 1);
    pPager->changeCountDone = 0;
  }
  pPager->eState = 1;
  pPager->setMaster = 0;

  return (rc==0?rc2:rc);
}
# 46059 "sqlite3.c"
static void pagerUnlockAndRollback(Pager *pPager)
{

  if( pPager->eState!=6 && pPager->eState!=0 )
{

    ((void) (0));
    if( pPager->eState>=2 )
{

      sqlite3BeginBenignMalloc();
      sqlite3PagerRollback(pPager);
      sqlite3EndBenignMalloc();
    }else if( !pPager->exclusiveMode )
{

      ((void) (0));
      pager_end_transaction(pPager, 0, 0);
    }
  }
  pager_unlock(pPager);
}
# 46093 "sqlite3.c"
static u32 pager_cksum(Pager *pPager, const u8 *aData)
{

  u32 cksum = pPager->cksumInit;
  int i = pPager->pageSize-200;
  while( i>0 )
{

    cksum += aData[i];
    i -= 200;
  }
  return cksum;
}
# 46169 "sqlite3.c"
static int pager_playback_one_page(
  Pager *pPager,
  i64 *pOffset,
  Bitvec *pDone,
  int isMainJrnl,
  int isSavepnt
)
{

  int rc;
  PgHdr *pPg;
  Pgno pgno;
  u32 cksum;
  char *aData;
  sqlite3_file *jfd;
  int isSynced;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  aData = pPager->pTmpSpace;
  ((void) (0));
  ((void) (0));







  ((void) (0))

   ;
  ((void) (0));




  jfd = isMainJrnl ? pPager->jfd : pPager->sjfd;
  rc = read32bits(jfd, *pOffset, &pgno);
  if( rc!=0 ) return rc;
  rc = sqlite3OsRead(jfd, (u8*)aData, pPager->pageSize, (*pOffset)+4);
  if( rc!=0 ) return rc;
  *pOffset += pPager->pageSize + 4 + isMainJrnl*4;






  if( pgno==0 || pgno==((Pgno)((sqlite3PendingByte/((pPager)->pageSize))+1)) )
{

    ((void) (0));
    return 101;
  }
  if( pgno>(Pgno)pPager->dbSize || sqlite3BitvecTest(pDone, pgno) )
{

    return 0;
  }
  if( isMainJrnl )
{

    rc = read32bits(jfd, (*pOffset)-4, &cksum);
    if( rc ) return rc;
    if( !isSavepnt && pager_cksum(pPager, (u8*)aData)!=cksum )
{

      return 101;
    }
  }




  if( pDone && (rc = sqlite3BitvecSet(pDone, pgno))!=0 )
{

    return rc;
  }



  if( pgno==1 && pPager->nReserve!=((u8*)aData)[20] )
{

    pPager->nReserve = ((u8*)aData)[20];
    ;
  }
# 46283 "sqlite3.c"
  if( pagerUseWal(pPager) )
{

    pPg = 0;
  }else{
    pPg = sqlite3PagerLookup(pPager, pgno);
  }
  ((void) (0));
  ((void) (0));
 


    ;
  if( isMainJrnl )
{

    isSynced = pPager->noSync || (*pOffset <= pPager->journalHdr);
  }else{
    isSynced = (pPg==0 || 0==(pPg->flags & 0x008));
  }
  if( ((pPager->fd)->pMethods!=0)
   && (pPager->eState>=4 || pPager->eState==0)
   && isSynced
  )
{

    i64 ofst = (pgno-1)*(i64)pPager->pageSize;
    ;
    ((void) (0));
    rc = sqlite3OsWrite(pPager->fd, (u8 *)aData, pPager->pageSize, ofst);
    if( pgno>pPager->dbFileSize )
{

      pPager->dbFileSize = pgno;
    }
    if( pPager->pBackup )
{

      ;
      sqlite3BackupUpdate(pPager->pBackup, pgno, (u8*)aData);
      aData=(char*)aData;
    }
  }else if( !isMainJrnl && pPg==0 )
{

# 46332 "sqlite3.c"
    ((void) (0));
    ((void) (0));
    pPager->doNotSpill |= 0x02;
    rc = sqlite3PagerGet(pPager, pgno, &pPg, 1);
    ((void) (0));
    pPager->doNotSpill &= ~0x02;
    if( rc!=0 ) return rc;
    pPg->flags &= ~0x010;
    sqlite3PcacheMakeDirty(pPg);
  }
  if( pPg )
{







    void *pData;
    pData = pPg->pData;
    memcpy(pData, (u8*)aData, pPager->pageSize);
    pPager->xReiniter(pPg);
    if( isMainJrnl && (!isSavepnt || *pOffset<=pPager->journalHdr) )
{

# 46373 "sqlite3.c"
      ((void) (0));
      sqlite3PcacheMakeClean(pPg);
    }
    ;



    if( pgno==1 )
{

      memcpy(&pPager->dbFileVers, &((u8*)pData)[24],sizeof(pPager->dbFileVers));
    }


    ;
    sqlite3PcacheRelease(pPg);
  }
  return rc;
}
# 46434 "sqlite3.c"
static int pager_delmaster(Pager *pPager, const char *zMaster)
{

  sqlite3_vfs *pVfs = pPager->pVfs;
  int rc;
  sqlite3_file *pMaster;
  sqlite3_file *pJournal;
  char *zMasterJournal = 0;
  i64 nMasterJournal;
  char *zJournal;
  char *zMasterPtr;
  int nMasterPtr;




  pMaster = (sqlite3_file *)sqlite3MallocZero(pVfs->szOsFile * 2);
  pJournal = (sqlite3_file *)(((u8 *)pMaster) + pVfs->szOsFile);
  if( !pMaster )
{

    rc = 7;
  }else{
    const int flags = (0x00000001|0x00004000);
    rc = sqlite3OsOpen(pVfs, zMaster, pMaster, flags, 0);
  }
  if( rc!=0 ) goto delmaster_out;






  rc = sqlite3OsFileSize(pMaster, &nMasterJournal);
  if( rc!=0 ) goto delmaster_out;
  nMasterPtr = pVfs->mxPathname+1;
  zMasterJournal = sqlite3Malloc(nMasterJournal + nMasterPtr + 1);
  if( !zMasterJournal )
{

    rc = 7;
    goto delmaster_out;
  }
  zMasterPtr = &zMasterJournal[nMasterJournal+1];
  rc = sqlite3OsRead(pMaster, zMasterJournal, (int)nMasterJournal, 0);
  if( rc!=0 ) goto delmaster_out;
  zMasterJournal[nMasterJournal] = 0;

  zJournal = zMasterJournal;
  while( (zJournal-zMasterJournal)<nMasterJournal )
{

    int exists;
    rc = sqlite3OsAccess(pVfs, zJournal, 0, &exists);
    if( rc!=0 )
{

      goto delmaster_out;
    }
    if( exists )
{





      int c;
      int flags = (0x00000001|0x00000800);
      rc = sqlite3OsOpen(pVfs, zJournal, pJournal, flags, 0);
      if( rc!=0 )
{

        goto delmaster_out;
      }

      rc = readMasterJournal(pJournal, zMasterPtr, nMasterPtr);
      sqlite3OsClose(pJournal);
      if( rc!=0 )
{

        goto delmaster_out;
      }

      c = zMasterPtr[0]!=0 && strcmp(zMasterPtr, zMaster)==0;
      if( c )
{


        goto delmaster_out;
      }
    }
    zJournal += (sqlite3Strlen30(zJournal)+1);
  }

  sqlite3OsClose(pMaster);
  rc = sqlite3OsDelete(pVfs, zMaster, 0);

delmaster_out:
  sqlite3_free(zMasterJournal);
  if( pMaster )
{

    sqlite3OsClose(pMaster);
    ((void) (0));
    sqlite3_free(pMaster);
  }
  return rc;
}
# 46544 "sqlite3.c"
static int pager_truncate(Pager *pPager, Pgno nPage)
{

  int rc = 0;
  ((void) (0));
  ((void) (0));

  if( ((pPager->fd)->pMethods!=0)
   && (pPager->eState>=4 || pPager->eState==0)
  )
{

    i64 currentSize, newSize;
    int szPage = pPager->pageSize;
    ((void) (0));

    rc = sqlite3OsFileSize(pPager->fd, &currentSize);
    newSize = szPage*(i64)nPage;
    if( rc==0 && currentSize!=newSize )
{

      if( currentSize>newSize )
{

        rc = sqlite3OsTruncate(pPager->fd, newSize);
      }else if( (currentSize+szPage)<=newSize )
{

        char *pTmp = pPager->pTmpSpace;
        memset(pTmp, 0, szPage);
        ;
        ;
        rc = sqlite3OsWrite(pPager->fd, pTmp, szPage, newSize-szPage);
      }
      if( rc==0 )
{

        pPager->dbFileSize = nPage;
      }
    }
  }
  return rc;
}





static int sqlite3SectorSize(sqlite3_file *pFile)
{

  int iRet = sqlite3OsSectorSize(pFile);
  if( iRet<32 )
{

    iRet = 512;
  }else if( iRet>0x10000 )
{

    ((void) (0));
    iRet = 0x10000;
  }
  return iRet;
}
# 46614 "sqlite3.c"
static void setSectorSize(Pager *pPager)
{

  ((void) (0));

  if( pPager->tempFile
   || (sqlite3OsDeviceCharacteristics(pPager->fd) &
              0x00001000)!=0
  )
{




    pPager->sectorSize = 512;
  }else{
    pPager->sectorSize = sqlite3SectorSize(pPager->fd);
  }
}
# 46687 "sqlite3.c"
static int pager_playback(Pager *pPager, int isHot)
{

  sqlite3_vfs *pVfs = pPager->pVfs;
  i64 szJ;
  u32 nRec;
  u32 u;
  Pgno mxPg = 0;
  int rc;
  int res = 1;
  char *zMaster = 0;
  int needPagerReset;
  int nPlayback = 0;




  ((void) (0));
  rc = sqlite3OsFileSize(pPager->jfd, &szJ);
  if( rc!=0 )
{

    goto end_playback;
  }
# 46719 "sqlite3.c"
  zMaster = pPager->pTmpSpace;
  rc = readMasterJournal(pPager->jfd, zMaster, pPager->pVfs->mxPathname+1);
  if( rc==0 && zMaster[0] )
{

    rc = sqlite3OsAccess(pVfs, zMaster, 0, &res);
  }
  zMaster = 0;
  if( rc!=0 || !res )
{

    goto end_playback;
  }
  pPager->journalOff = 0;
  needPagerReset = isHot;





  while( 1 )
{






    rc = readJournalHdr(pPager, isHot, szJ, &nRec, &mxPg);
    if( rc!=0 )
{

      if( rc==101 )
{

        rc = 0;
      }
      goto end_playback;
    }






    if( nRec==0xffffffff )
{

      ((void) (0));
      nRec = (int)((szJ - (pPager->sectorSize))/((pPager->pageSize) + 8));
    }
# 46773 "sqlite3.c"
    if( nRec==0 && !isHot &&
        pPager->journalHdr+(pPager->sectorSize)==pPager->journalOff )
{

      nRec = (int)((szJ - pPager->journalOff) / ((pPager->pageSize) + 8));
    }




    if( pPager->journalOff==(pPager->sectorSize) )
{

      rc = pager_truncate(pPager, mxPg);
      if( rc!=0 )
{

        goto end_playback;
      }
      pPager->dbSize = mxPg;
    }




    for(u=0; u<nRec; u++)
{

      if( needPagerReset )
{

        pager_reset(pPager);
        needPagerReset = 0;
      }
      rc = pager_playback_one_page(pPager,&pPager->journalOff,0,1,0);
      if( rc==0 )
{

        nPlayback++;
      }else{
        if( rc==101 )
{

          pPager->journalOff = szJ;
          break;
        }else if( rc==(10 | (2<<8)) )
{






          rc = 0;
          goto end_playback;
        }else{





          goto end_playback;
        }
      }
    }
  }

  ((void) (0));

end_playback:
# 46847 "sqlite3.c"
  pPager->changeCountDone = pPager->tempFile;

  if( rc==0 )
{

    zMaster = pPager->pTmpSpace;
    rc = readMasterJournal(pPager->jfd, zMaster, pPager->pVfs->mxPathname+1);
    ;
  }
  if( rc==0
   && (pPager->eState>=4 || pPager->eState==0)
  )
{

    rc = sqlite3PagerSync(pPager, 0);
  }
  if( rc==0 )
{

    rc = pager_end_transaction(pPager, zMaster[0]!='\0', 0);
    ;
  }
  if( rc==0 && zMaster[0] && res )
{




    rc = pager_delmaster(pPager, zMaster);
    ;
  }
  if( isHot && nPlayback )
{

    sqlite3_log((27 | (2<<8)), "recovered %d pages from %s",
                nPlayback, pPager->zJournal);
  }





  setSectorSize(pPager);
  return rc;
}
# 46895 "sqlite3.c"
static int readDbPage(PgHdr *pPg, u32 iFrame)
{

  Pager *pPager = pPg->pPager;
  Pgno pgno = pPg->pgno;
  int rc = 0;
  int pgsz = pPager->pageSize;

  ((void) (0));
  ((void) (0));


  if( iFrame )
{


    rc = sqlite3WalReadFrame(pPager->pWal, iFrame, pgsz, pPg->pData);
  }else

  {
    i64 iOffset = (pgno-1)*(i64)pPager->pageSize;
    rc = sqlite3OsRead(pPager->fd, pPg->pData, pgsz, iOffset);
    if( rc==(10 | (2<<8)) )
{

      rc = 0;
    }
  }

  if( pgno==1 )
{

    if( rc )
{

# 46932 "sqlite3.c"
      memset(pPager->dbFileVers, 0xff, sizeof(pPager->dbFileVers));
    }else{
      u8 *dbFileVers = &((u8*)pPg->pData)[24];
      memcpy(&pPager->dbFileVers, dbFileVers, sizeof(pPager->dbFileVers));
    }
  }
  ;

  ;
  ;
  ;
 
                                                           ;

  return rc;
}
# 46957 "sqlite3.c"
static void pager_write_changecounter(PgHdr *pPg)
{

  u32 change_counter;


  change_counter = sqlite3Get4byte((u8*)pPg->pPager->dbFileVers)+1;
  sqlite3Put4byte((u8*)((char*)pPg->pData)+24,change_counter);




  sqlite3Put4byte((u8*)((char*)pPg->pData)+92,change_counter);
  sqlite3Put4byte((u8*)((char*)pPg->pData)+96,3012000);
}
# 46984 "sqlite3.c"
static int pagerUndoCallback(void *pCtx, Pgno iPg)
{

  int rc = 0;
  Pager *pPager = (Pager *)pCtx;
  PgHdr *pPg;

  ((void) (0));
  pPg = sqlite3PagerLookup(pPager, iPg);
  if( pPg )
{

    if( sqlite3PcachePageRefcount(pPg)==1 )
{

      sqlite3PcacheDrop(pPg);
    }else{
      u32 iFrame = 0;
      rc = sqlite3WalFindFrame(pPager->pWal, pPg->pgno, &iFrame);
      if( rc==0 )
{

        rc = readDbPage(pPg, iFrame);
      }
      if( rc==0 )
{

        pPager->xReiniter(pPg);
      }
      sqlite3PagerUnrefNotNull(pPg);
    }
  }
# 47015 "sqlite3.c"
  sqlite3BackupRestart(pPager->pBackup);

  return rc;
}




static int pagerRollbackWal(Pager *pPager)
{

  int rc;
  PgHdr *pList;
# 47034 "sqlite3.c"
  pPager->dbSize = pPager->dbOrigSize;
  rc = sqlite3WalUndo(pPager->pWal, pagerUndoCallback, (void *)pPager);
  pList = sqlite3PcacheDirtyList(pPager->pPCache);
  while( pList && rc==0 )
{

    PgHdr *pNext = pList->pDirty;
    rc = pagerUndoCallback((void *)pPager, pList->pgno);
    pList = pNext;
  }

  return rc;
}
# 47055 "sqlite3.c"
static int pagerWalFrames(
  Pager *pPager,
  PgHdr *pList,
  Pgno nTruncate,
  int isCommit
)
{

  int rc;
  int nList;
  PgHdr *p;

  ((void) (0));
  ((void) (0));







  ((void) (0));
  if( isCommit )
{





    PgHdr **ppNext = &pList;
    nList = 0;
    for(p=pList; (*ppNext = p)!=0; p=p->pDirty)
{

      if( p->pgno<=nTruncate )
{

        ppNext = &p->pDirty;
        nList++;
      }
    }
    ((void) (0));
  }else{
    nList = 1;
  }
  pPager->aStat[2] += nList;

  if( pList->pgno==1 ) pager_write_changecounter(pList);
  rc = sqlite3WalFrames(pPager->pWal,
      pPager->pageSize, pList, nTruncate, isCommit, pPager->walSyncFlags
  );
  if( rc==0 && pPager->pBackup )
{

    for(p=pList; p; p=p->pDirty)
{

      sqlite3BackupUpdate(pPager->pBackup, p->pgno, (u8 *)p->pData);
    }
  }
# 47111 "sqlite3.c"
  return rc;
}
# 47122 "sqlite3.c"
static int pagerBeginReadTransaction(Pager *pPager)
{

  int rc;
  int changed = 0;

  ((void) (0));
  ((void) (0));






  sqlite3WalEndReadTransaction(pPager->pWal);

  rc = sqlite3WalBeginReadTransaction(pPager->pWal, &changed);
  if( rc!=0 || changed )
{

    pager_reset(pPager);
    if( ((pPager)->bUseFetch) ) sqlite3OsUnfetch(pPager->fd, 0, 0);
  }

  return rc;
}
# 47155 "sqlite3.c"
static int pagerPagecount(Pager *pPager, Pgno *pnPage)
{

  Pgno nPage;







  ((void) (0));
  ((void) (0));
  nPage = sqlite3WalDbsize(pPager->pWal);






  if( nPage==0 )
{

    i64 n = 0;
    ((void) (0));
    if( ((pPager->fd)->pMethods!=0) )
{

      int rc = sqlite3OsFileSize(pPager->fd, &n);
      if( rc!=0 )
{

        return rc;
      }
    }
    nPage = (Pgno)((n+pPager->pageSize-1) / pPager->pageSize);
  }





  if( nPage>pPager->mxPgno )
{

    pPager->mxPgno = (Pgno)nPage;
  }

  *pnPage = nPage;
  return 0;
}
# 47216 "sqlite3.c"
static int pagerOpenWalIfPresent(Pager *pPager)
{

  int rc = 0;
  ((void) (0));
  ((void) (0));

  if( !pPager->tempFile )
{

    int isWal;
    Pgno nPage;

    rc = pagerPagecount(pPager, &nPage);
    if( rc ) return rc;
    if( nPage==0 )
{

      rc = sqlite3OsDelete(pPager->pVfs, pPager->zWal, 0);
      if( rc==(10 | (23<<8)) ) rc = 0;
      isWal = 0;
    }else{
      rc = sqlite3OsAccess(
          pPager->pVfs, pPager->zWal, 0, &isWal
      );
    }
    if( rc==0 )
{

      if( isWal )
{

        ;
        rc = sqlite3PagerOpenWal(pPager, 0);
      }else if( pPager->journalMode==5 )
{

        pPager->journalMode = 0;
      }
    }
  }
  return rc;
}
# 47285 "sqlite3.c"
static int pagerPlaybackSavepoint(Pager *pPager, PagerSavepoint *pSavepoint)
{

  i64 szJ;
  i64 iHdrOff;
  int rc = 0;
  Bitvec *pDone = 0;

  ((void) (0));
  ((void) (0));


  if( pSavepoint )
{

    pDone = sqlite3BitvecCreate(pSavepoint->nOrig);
    if( !pDone )
{

      return 7;
    }
  }




  pPager->dbSize = pSavepoint ? pSavepoint->nOrig : pPager->dbOrigSize;
  pPager->changeCountDone = pPager->tempFile;

  if( !pSavepoint && pagerUseWal(pPager) )
{

    return pagerRollbackWal(pPager);
  }






  szJ = pPager->journalOff;
  ((void) (0));
# 47327 "sqlite3.c"
  if( pSavepoint && !pagerUseWal(pPager) )
{

    iHdrOff = pSavepoint->iHdrOffset ? pSavepoint->iHdrOffset : szJ;
    pPager->journalOff = pSavepoint->iOffset;
    while( rc==0 && pPager->journalOff<iHdrOff )
{

      rc = pager_playback_one_page(pPager, &pPager->journalOff, pDone, 1, 1);
    }
    ((void) (0));
  }else{
    pPager->journalOff = 0;
  }






  while( rc==0 && pPager->journalOff<szJ )
{

    u32 ii;
    u32 nJRec = 0;
    u32 dummy;
    rc = readJournalHdr(pPager, 0, szJ, &nJRec, &dummy);
    ((void) (0));






    if( nJRec==0
     && pPager->journalHdr+(pPager->sectorSize)==pPager->journalOff
    )
{

      nJRec = (u32)((szJ - pPager->journalOff)/((pPager->pageSize) + 8));
    }
    for(ii=0; rc==0 && ii<nJRec && pPager->journalOff<szJ; ii++)
{

      rc = pager_playback_one_page(pPager, &pPager->journalOff, pDone, 1, 1);
    }
    ((void) (0));
  }
  ((void) (0));





  if( pSavepoint )
{

    u32 ii;
    i64 offset = (i64)pSavepoint->iSubRec*(4+pPager->pageSize);

    if( pagerUseWal(pPager) )
{

      rc = sqlite3WalSavepointUndo(pPager->pWal, pSavepoint->aWalData);
    }
    for(ii=pSavepoint->iSubRec; rc==0 && ii<pPager->nSubRec; ii++)
{

      ((void) (0));
      rc = pager_playback_one_page(pPager, &offset, pDone, 0, 1);
    }
    ((void) (0));
  }

  sqlite3BitvecDestroy(pDone);
  if( rc==0 )
{

    pPager->journalOff = szJ;
  }

  return rc;
}





static void sqlite3PagerSetCachesize(Pager *pPager, int mxPage)
{

  sqlite3PcacheSetCachesize(pPager->pPCache, mxPage);
}





static int sqlite3PagerSetSpillsize(Pager *pPager, int mxPage)
{

  return sqlite3PcacheSetSpillsize(pPager->pPCache, mxPage);
}




static void pagerFixMaplimit(Pager *pPager)
{


  sqlite3_file *fd = pPager->fd;
  if( ((fd)->pMethods!=0) && fd->pMethods->iVersion>=3 )
{

    sqlite3_int64 sz;
    sz = pPager->szMmap;
    pPager->bUseFetch = (sz>0);
    sqlite3OsFileControlHint(pPager->fd, 18, &sz);
  }

}




static void sqlite3PagerSetMmapLimit(Pager *pPager, sqlite3_int64 szMmap)
{

  pPager->szMmap = szMmap;
  pagerFixMaplimit(pPager);
}




static void sqlite3PagerShrink(Pager *pPager)
{

  sqlite3PcacheShrink(pPager->pPCache);
}
# 47491 "sqlite3.c"
static void sqlite3PagerSetFlags(
  Pager *pPager,
  unsigned pgFlags
)
{

  unsigned level = pgFlags & 0x07;
  if( pPager->tempFile )
{

    pPager->noSync = 1;
    pPager->fullSync = 0;
    pPager->extraSync = 0;
  }else{
    pPager->noSync = level==0x01 ?1:0;
    pPager->fullSync = level>=0x03 ?1:0;
    pPager->extraSync = level==0x04 ?1:0;
  }
  if( pPager->noSync )
{

    pPager->syncFlags = 0;
    pPager->ckptSyncFlags = 0;
  }else if( pgFlags & 0x08 )
{

    pPager->syncFlags = 0x00003;
    pPager->ckptSyncFlags = 0x00003;
  }else if( pgFlags & 0x10 )
{

    pPager->syncFlags = 0x00002;
    pPager->ckptSyncFlags = 0x00003;
  }else{
    pPager->syncFlags = 0x00002;
    pPager->ckptSyncFlags = 0x00002;
  }
  pPager->walSyncFlags = pPager->syncFlags;
  if( pPager->fullSync )
{

    pPager->walSyncFlags |= 0x20;
  }
  if( pgFlags & 0x20 )
{

    pPager->doNotSpill &= ~0x01;
  }else{
    pPager->doNotSpill |= 0x01;
  }
}
# 47554 "sqlite3.c"
static int pagerOpentemp(
  Pager *pPager,
  sqlite3_file *pFile,
  int vfsFlags
)
{

  int rc;





  vfsFlags |= 0x00000002 | 0x00000004 |
            0x00000010 | 0x00000008;
  rc = sqlite3OsOpen(pPager->pVfs, 0, pFile, vfsFlags, 0);
  ((void) (0));
  return rc;
}
# 47593 "sqlite3.c"
static void sqlite3PagerSetBusyhandler(
  Pager *pPager,
  int (*xBusyHandler)(void *),
  void *pBusyHandlerArg
)
{

  pPager->xBusyHandler = xBusyHandler;
  pPager->pBusyHandlerArg = pBusyHandlerArg;

  if( ((pPager->fd)->pMethods!=0) )
{

    void **ap = (void **)&pPager->xBusyHandler;
    ((void) (0));
    ((void) (0));
    sqlite3OsFileControlHint(pPager->fd, 15, (void *)ap);
  }
}
# 47639 "sqlite3.c"
static int sqlite3PagerSetPagesize(Pager *pPager, u32 *pPageSize, int nReserve)
{

  int rc = 0;
# 47652 "sqlite3.c"
  u32 pageSize = *pPageSize;
  ((void) (0));
  if( (pPager->memDb==0 || pPager->dbSize==0)
   && sqlite3PcacheRefCount(pPager->pPCache)==0
   && pageSize && pageSize!=(u32)pPager->pageSize
  )
{

    char *pNew = ((void *)0);
    i64 nByte = 0;

    if( pPager->eState>0 && ((pPager->fd)->pMethods!=0) )
{

      rc = sqlite3OsFileSize(pPager->fd, &nByte);
    }
    if( rc==0 )
{

      pNew = (char *)sqlite3PageMalloc(pageSize);
      if( !pNew ) rc = 7;
    }

    if( rc==0 )
{

      pager_reset(pPager);
      rc = sqlite3PcacheSetPageSize(pPager->pPCache, pageSize);
    }
    if( rc==0 )
{

      sqlite3PageFree(pPager->pTmpSpace);
      pPager->pTmpSpace = pNew;
      pPager->dbSize = (Pgno)((nByte+pageSize-1)/pageSize);
      pPager->pageSize = pageSize;
    }else{
      sqlite3PageFree(pNew);
    }
  }

  *pPageSize = pPager->pageSize;
  if( rc==0 )
{

    if( nReserve<0 ) nReserve = pPager->nReserve;
    ((void) (0));
    pPager->nReserve = (i16)nReserve;
    ;
    pagerFixMaplimit(pPager);
  }
  return rc;
}
# 47702 "sqlite3.c"
static void *sqlite3PagerTempSpace(Pager *pPager)
{

  return pPager->pTmpSpace;
}
# 47713 "sqlite3.c"
static int sqlite3PagerMaxPageCount(Pager *pPager, int mxPage)
{

  if( mxPage>0 )
{

    pPager->mxPgno = mxPage;
  }
  ((void) (0));
  ((void) (0));
  return pPager->mxPgno;
}
# 47760 "sqlite3.c"
static int sqlite3PagerReadFileheader(Pager *pPager, int N, unsigned char *pDest)
{

  int rc = 0;
  memset(pDest, 0, N);
  ((void) (0));





  ((void) (0));

  if( ((pPager->fd)->pMethods!=0) )
{

   
    rc = sqlite3OsRead(pPager->fd, pDest, N, 0);
    if( rc==(10 | (2<<8)) )
{

      rc = 0;
    }
  }
  return rc;
}
# 47788 "sqlite3.c"
static void sqlite3PagerPagecount(Pager *pPager, int *pnPage)
{

  ((void) (0));
  ((void) (0));
  *pnPage = (int)pPager->dbSize;
}
# 47809 "sqlite3.c"
static int pager_wait_on_lock(Pager *pPager, int locktype)
{

  int rc;






  ((void) (0))


   ;

  do {
    rc = pagerLockDb(pPager, locktype);
  }while( rc==5 && pPager->xBusyHandler(pPager->pBusyHandlerArg) );
  return rc;
}
# 47873 "sqlite3.c"
static void sqlite3PagerTruncateImage(Pager *pPager, Pgno nPage)
{

  ((void) (0));
  ((void) (0));
  pPager->dbSize = nPage;
# 47887 "sqlite3.c"
}
# 47904 "sqlite3.c"
static int pagerSyncHotJournal(Pager *pPager)
{

  int rc = 0;
  if( !pPager->noSync )
{

    rc = sqlite3OsSync(pPager->jfd, 0x00002);
  }
  if( rc==0 )
{

    rc = sqlite3OsFileSize(pPager->jfd, &pPager->journalHdr);
  }
  return rc;
}
# 47925 "sqlite3.c"
static int pagerAcquireMapPage(
  Pager *pPager,
  Pgno pgno,
  void *pData,
  PgHdr **ppPage
)
{

  PgHdr *p;

  if( pPager->pMmapFreelist )
{

    *ppPage = p = pPager->pMmapFreelist;
    pPager->pMmapFreelist = p->pDirty;
    p->pDirty = 0;
    memset(p->pExtra, 0, pPager->nExtra);
  }else{
    *ppPage = p = (PgHdr *)sqlite3MallocZero(sizeof(PgHdr) + pPager->nExtra);
    if( p==0 )
{

      sqlite3OsUnfetch(pPager->fd, (i64)(pgno-1) * pPager->pageSize, pData);
      return 7;
    }
    p->pExtra = (void *)&p[1];
    p->flags = 0x040;
    p->nRef = 1;
    p->pPager = pPager;
  }

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  p->pgno = pgno;
  p->pData = pData;
  pPager->nMmapOut++;

  return 0;
}





static void pagerReleaseMapPage(PgHdr *pPg)
{

  Pager *pPager = pPg->pPager;
  pPager->nMmapOut--;
  pPg->pDirty = pPager->pMmapFreelist;
  pPager->pMmapFreelist = pPg;

  ((void) (0));
  sqlite3OsUnfetch(pPager->fd, (i64)(pPg->pgno-1)*pPager->pageSize, pPg->pData);
}




static void pagerFreeMapHdrs(Pager *pPager)
{

  PgHdr *p;
  PgHdr *pNext;
  for(p=pPager->pMmapFreelist; p; p=pNext)
{

    pNext = p->pDirty;
    sqlite3_free(p);
  }
}
# 48004 "sqlite3.c"
static int sqlite3PagerClose(Pager *pPager)
{

  u8 *pTmp = (u8 *)pPager->pTmpSpace;

  ((void) (0));
  ;
  sqlite3BeginBenignMalloc();
  pagerFreeMapHdrs(pPager);

  pPager->exclusiveMode = 0;

  sqlite3WalClose(pPager->pWal, pPager->ckptSyncFlags, pPager->pageSize, pTmp);
  pPager->pWal = 0;

  pager_reset(pPager);
  if( pPager->memDb )
{

    pager_unlock(pPager);
  }else{
# 48032 "sqlite3.c"
    if( ((pPager->jfd)->pMethods!=0) )
{

      pager_error(pPager, pagerSyncHotJournal(pPager));
    }
    pagerUnlockAndRollback(pPager);
  }
  sqlite3EndBenignMalloc();
  ;
  ;
 
  sqlite3OsClose(pPager->jfd);
  sqlite3OsClose(pPager->fd);
  sqlite3PageFree(pTmp);
  sqlite3PcacheClose(pPager->pPCache);





  ((void) (0));
  ((void) (0));

  sqlite3_free(pPager);
  return 0;
}
# 48069 "sqlite3.c"
static void sqlite3PagerRef(DbPage *pPg)
{

  sqlite3PcacheRef(pPg);
}
# 48108 "sqlite3.c"
static int syncJournal(Pager *pPager, int newHdr)
{

  int rc;

  ((void) (0))

   ;
  ((void) (0));
  ((void) (0));

  rc = sqlite3PagerExclusiveLock(pPager);
  if( rc!=0 ) return rc;

  if( !pPager->noSync )
{

    ((void) (0));
    if( ((pPager->jfd)->pMethods!=0) && pPager->journalMode!=4 )
{

      const int iDc = sqlite3OsDeviceCharacteristics(pPager->fd);
      ((void) (0));

      if( 0==(iDc&0x00000200) )
{

# 48149 "sqlite3.c"
        i64 iNextHdrOffset;
        u8 aMagic[8];
        u8 zHeader[sizeof(aJournalMagic)+4];

        memcpy(zHeader, aJournalMagic, sizeof(aJournalMagic));
        sqlite3Put4byte((u8*)&zHeader[sizeof(aJournalMagic)],pPager->nRec);

        iNextHdrOffset = journalHdrOffset(pPager);
        rc = sqlite3OsRead(pPager->jfd, aMagic, 8, iNextHdrOffset);
        if( rc==0 && 0==memcmp(aMagic, aJournalMagic, 8) )
{

          static const u8 zerobyte = 0;
          rc = sqlite3OsWrite(pPager->jfd, &zerobyte, 1, iNextHdrOffset);
        }
        if( rc!=0 && rc!=(10 | (2<<8)) )
{

          return rc;
        }
# 48177 "sqlite3.c"
        if( pPager->fullSync && 0==(iDc&0x00000400) )
{

          ;
         
          rc = sqlite3OsSync(pPager->jfd, pPager->syncFlags);
          if( rc!=0 ) return rc;
        }
        ;
        rc = sqlite3OsWrite(
            pPager->jfd, zHeader, sizeof(zHeader), pPager->journalHdr
        );
        if( rc!=0 ) return rc;
      }
      if( 0==(iDc&0x00000400) )
{

        ;
       
        rc = sqlite3OsSync(pPager->jfd, pPager->syncFlags|
          (pPager->syncFlags==0x00003?0x00010:0)
        );
        if( rc!=0 ) return rc;
      }

      pPager->journalHdr = pPager->journalOff;
      if( newHdr && 0==(iDc&0x00000200) )
{

        pPager->nRec = 0;
        rc = writeJournalHdr(pPager);
        if( rc!=0 ) return rc;
      }
    }else{
      pPager->journalHdr = pPager->journalOff;
    }
  }





  sqlite3PcacheClearSyncFlags(pPager->pPCache);
  pPager->eState = 4;
  ((void) (0));
  return 0;
}
# 48251 "sqlite3.c"
static int pager_write_pagelist(Pager *pPager, PgHdr *pList)
{

  int rc = 0;


  ((void) (0));
  ((void) (0));
  ((void) (0));





  if( !((pPager->fd)->pMethods!=0) )
{

    ((void) (0));
    rc = pagerOpentemp(pPager, pPager->fd, pPager->vfsFlags);
  }




  ((void) (0));
  if( rc==0
   && pPager->dbHintSize<pPager->dbSize
   && (pList->pDirty || pList->pgno>pPager->dbHintSize)
  )
{

    sqlite3_int64 szFile = pPager->pageSize * (sqlite3_int64)pPager->dbSize;
    sqlite3OsFileControlHint(pPager->fd, 5, &szFile);
    pPager->dbHintSize = pPager->dbSize;
  }

  while( rc==0 && pList )
{

    Pgno pgno = pList->pgno;
# 48292 "sqlite3.c"
    if( pgno<=pPager->dbSize && 0==(pList->flags&0x020) )
{

      i64 offset = (pgno-1)*(i64)pPager->pageSize;
      char *pData;

      ((void) (0));
      if( pList->pgno==1 ) pager_write_changecounter(pList);


      pData=(char*)pList->pData;


      rc = sqlite3OsWrite(pPager->fd, pData, pPager->pageSize, offset);





      if( pgno==1 )
{

        memcpy(&pPager->dbFileVers, &pData[24], sizeof(pPager->dbFileVers));
      }
      if( pgno>pPager->dbFileSize )
{

        pPager->dbFileSize = pgno;
      }
      pPager->aStat[2]++;


      sqlite3BackupUpdate(pPager->pBackup, pgno, (u8*)pList->pData);

     
                                                                 ;
      ;
      ;
    }else{
      ;
    }
    ;
    pList = pList->pDirty;
  }

  return rc;
}
# 48342 "sqlite3.c"
static int openSubJournal(Pager *pPager)
{

  int rc = 0;
  if( !((pPager->sjfd)->pMethods!=0) )
{

    const int flags = 0x00002000 | 0x00000002
      | 0x00000004 | 0x00000010
      | 0x00000008;
    int nStmtSpill = sqlite3Config.nStmtSpill;
    if( pPager->journalMode==4 || pPager->subjInMemory )
{

      nStmtSpill = -1;
    }
    rc = sqlite3JournalOpen(pPager->pVfs, 0, pPager->sjfd, flags, nStmtSpill);
  }
  return rc;
}
# 48368 "sqlite3.c"
static int subjournalPage(PgHdr *pPg)
{

  int rc = 0;
  Pager *pPager = pPg->pPager;
  if( pPager->journalMode!=2 )
{



    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0))


     ;
    rc = openSubJournal(pPager);



    if( rc==0 )
{

      void *pData = pPg->pData;
      i64 offset = (i64)pPager->nSubRec*(4+pPager->pageSize);
      char *pData2;

      pData2=(char*)pData;
      ;
      rc = write32bits(pPager->sjfd, offset, pPg->pgno);
      if( rc==0 )
{

        rc = sqlite3OsWrite(pPager->sjfd, pData2, pPager->pageSize, offset+4);
      }
    }
  }
  if( rc==0 )
{

    pPager->nSubRec++;
    ((void) (0));
    rc = addToSavepointBitvecs(pPager, pPg->pgno);
  }
  return rc;
}
static int subjournalPageIfRequired(PgHdr *pPg)
{

  if( subjRequiresPage(pPg) )
{

    return subjournalPage(pPg);
  }else{
    return 0;
  }
}
# 48432 "sqlite3.c"
static int pagerStress(void *p, PgHdr *pPg)
{

  Pager *pPager = (Pager *)p;
  int rc = 0;

  ((void) (0));
  ((void) (0));
# 48455 "sqlite3.c"
  if( (pPager->errCode) ) return 0;
  ;
  ;
  ;
  if( pPager->doNotSpill
   && ((pPager->doNotSpill & (0x02|0x01))!=0
      || (pPg->flags & 0x008)!=0)
  )
{

    return 0;
  }

  pPg->pDirty = 0;
  if( pagerUseWal(pPager) )
{


    rc = subjournalPageIfRequired(pPg);
    if( rc==0 )
{

      rc = pagerWalFrames(pPager, pPg, 0, 0);
    }
  }else{


    if( pPg->flags&0x008
     || pPager->eState==3
    )
{

      rc = syncJournal(pPager, 1);
    }


    if( rc==0 )
{

      ((void) (0));
      rc = pager_write_pagelist(pPager, pPg);
    }
  }


  if( rc==0 )
{

    ;
    sqlite3PcacheMakeClean(pPg);
  }

  return pager_error(pPager, rc);
}




static int sqlite3PagerFlush(Pager *pPager)
{

  int rc = pPager->errCode;
  if( !pPager->memDb )
{

    PgHdr *pList = sqlite3PcacheDirtyList(pPager->pPCache);
    ((void) (0));
    while( rc==0 && pList )
{

      PgHdr *pNext = pList->pDirty;
      if( pList->nRef==0 )
{

        rc = pagerStress((void*)pPager, pList);
      }
      pList = pNext;
    }
  }

  return rc;
}
# 48548 "sqlite3.c"
static int sqlite3PagerOpen(
  sqlite3_vfs *pVfs,
  Pager **ppPager,
  const char *zFilename,
  int nExtra,
  int flags,
  int vfsFlags,
  void (*xReinit)(DbPage*)
)
{

  u8 *pPtr;
  Pager *pPager = 0;
  int rc = 0;
  int tempFile = 0;
  int memDb = 0;
  int readOnly = 0;
  int journalFileSize;
  char *zPathname = 0;
  int nPathname = 0;
  int useJournal = (flags & 0x0001)==0;
  int pcacheSize = sqlite3PcacheSize();
  u32 szPageDflt = 4096;
  const char *zUri = 0;
  int nUri = 0;



  journalFileSize = (((sqlite3JournalSize(pVfs))+7)&~7);


  *ppPager = 0;


  if( flags & 0x0002 )
{

    memDb = 1;
    if( zFilename && zFilename[0] )
{

      zPathname = sqlite3DbStrDup(0, zFilename);
      if( zPathname==0 ) return 7;
      nPathname = sqlite3Strlen30(zPathname);
      zFilename = 0;
    }
  }






  if( zFilename && zFilename[0] )
{

    const char *z;
    nPathname = pVfs->mxPathname+1;
    zPathname = sqlite3DbMallocRaw(0, nPathname*2);
    if( zPathname==0 )
{

      return 7;
    }
    zPathname[0] = 0;
    rc = sqlite3OsFullPathname(pVfs, zFilename, nPathname, zPathname);
    nPathname = sqlite3Strlen30(zPathname);
    z = zUri = &zFilename[sqlite3Strlen30(zFilename)+1];
    while( *z )
{

      z += sqlite3Strlen30(z)+1;
      z += sqlite3Strlen30(z)+1;
    }
    nUri = (int)(&z[1] - zUri);
    ((void) (0));
    if( rc==0 && nPathname+8>pVfs->mxPathname )
{







      rc = sqlite3CantopenError(48619);
    }
    if( rc!=0 )
{

      sqlite3DbFree(0, zPathname);
      return rc;
    }
  }
# 48639 "sqlite3.c"
  pPtr = (u8 *)sqlite3MallocZero(
    (((sizeof(*pPager))+7)&~7) +
    (((pcacheSize)+7)&~7) +
    (((pVfs->szOsFile)+7)&~7) +
    journalFileSize * 2 +
    nPathname + 1 + nUri +
    nPathname + 8 + 2

    + nPathname + 4 + 2

  );
  ((void) (0));
  if( !pPtr )
{

    sqlite3DbFree(0, zPathname);
    return 7;
  }
  pPager = (Pager*)(pPtr);
  pPager->pPCache = (PCache*)(pPtr += (((sizeof(*pPager))+7)&~7));
  pPager->fd = (sqlite3_file*)(pPtr += (((pcacheSize)+7)&~7));
  pPager->sjfd = (sqlite3_file*)(pPtr += (((pVfs->szOsFile)+7)&~7));
  pPager->jfd = (sqlite3_file*)(pPtr += journalFileSize);
  pPager->zFilename = (char*)(pPtr += journalFileSize);
  ((void) (0));


  if( zPathname )
{

    ((void) (0));
    pPager->zJournal = (char*)(pPtr += nPathname + 1 + nUri);
    memcpy(pPager->zFilename, zPathname, nPathname);
    if( nUri ) memcpy(&pPager->zFilename[nPathname+1], zUri, nUri);
    memcpy(pPager->zJournal, zPathname, nPathname);
    memcpy(&pPager->zJournal[nPathname], "-journal\000", 8+2);
    ;

    pPager->zWal = &pPager->zJournal[nPathname+8+1];
    memcpy(pPager->zWal, zPathname, nPathname);
    memcpy(&pPager->zWal[nPathname], "-wal\000", 4+1);
    ;

    sqlite3DbFree(0, zPathname);
  }
  pPager->pVfs = pVfs;
  pPager->vfsFlags = vfsFlags;



  if( zFilename && zFilename[0] )
{

    int fout = 0;
    rc = sqlite3OsOpen(pVfs, pPager->zFilename, pPager->fd, vfsFlags, &fout);
    ((void) (0));
    readOnly = (fout&0x00000001);
# 48699 "sqlite3.c"
    if( rc==0 )
{

      int iDc = sqlite3OsDeviceCharacteristics(pPager->fd);
      if( !readOnly )
{

        setSectorSize(pPager);
        ((void) (0));
        if( szPageDflt<pPager->sectorSize )
{

          if( pPager->sectorSize>8192 )
{

            szPageDflt = 8192;
          }else{
            szPageDflt = (u32)pPager->sectorSize;
          }
        }
# 48724 "sqlite3.c"
      }
      pPager->noLock = sqlite3_uri_boolean(zFilename, "nolock", 0);
      if( (iDc & 0x00002000)!=0
       || sqlite3_uri_boolean(zFilename, "immutable", 0) )
{

          vfsFlags |= 0x00000001;
          goto act_like_temp_file;
      }
    }
  }else{
# 48743 "sqlite3.c"
act_like_temp_file:
    tempFile = 1;
    pPager->eState = 1;
    pPager->eLock = 4;
    pPager->noLock = 1;
    readOnly = (vfsFlags&0x00000001);
  }




  if( rc==0 )
{

    ((void) (0));
    rc = sqlite3PagerSetPagesize(pPager, &szPageDflt, -1);
    ;
  }


  if( rc==0 )
{

    ((void) (0));
    nExtra = (((nExtra)+7)&~7);
    rc = sqlite3PcacheOpen(szPageDflt, nExtra, !memDb,
                       !memDb?pagerStress:0, (void *)pPager, pPager->pPCache);
  }



  if( rc!=0 )
{

    sqlite3OsClose(pPager->fd);
    sqlite3PageFree(pPager->pTmpSpace);
    sqlite3_free(pPager);
    return rc;
  }

  ;
 

  pPager->useJournal = (u8)useJournal;






  pPager->mxPgno = 1073741823;


  pPager->tempFile = (u8)tempFile;
  ((void) (0))
                                                    ;
  ((void) (0));
  pPager->exclusiveMode = (u8)tempFile;
  pPager->changeCountDone = pPager->tempFile;
  pPager->memDb = (u8)memDb;
  pPager->readOnly = (u8)readOnly;
  ((void) (0));
  pPager->noSync = pPager->tempFile;
  if( pPager->noSync )
{

    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));
  }else{
    pPager->fullSync = 1;
    pPager->extraSync = 0;
    pPager->syncFlags = 0x00002;
    pPager->walSyncFlags = 0x00002 | 0x20;
    pPager->ckptSyncFlags = 0x00002;
  }



  pPager->nExtra = (u16)nExtra;
  pPager->journalSizeLimit = -1;
  ((void) (0));
  setSectorSize(pPager);
  if( !useJournal )
{

    pPager->journalMode = 2;
  }else if( memDb )
{

    pPager->journalMode = 4;
  }


  pPager->xReiniter = xReinit;



  *ppPager = pPager;
  return 0;
}







static int databaseIsUnmoved(Pager *pPager)
{

  int bHasMoved = 0;
  int rc;

  if( pPager->tempFile ) return 0;
  if( pPager->dbSize==0 ) return 0;
  ((void) (0));
  rc = sqlite3OsFileControl(pPager->fd, 20, &bHasMoved);
  if( rc==12 )
{




    rc = 0;
  }else if( rc==0 && bHasMoved )
{

    rc = (8 | (4<<8));
  }
  return rc;
}
# 48892 "sqlite3.c"
static int hasHotJournal(Pager *pPager, int *pExists)
{

  sqlite3_vfs * const pVfs = pPager->pVfs;
  int rc = 0;
  int exists = 1;
  int jrnlOpen = !!((pPager->jfd)->pMethods!=0);

  ((void) (0));
  ((void) (0));
  ((void) (0));

  ((void) (0))

    ;

  *pExists = 0;
  if( !jrnlOpen )
{

    rc = sqlite3OsAccess(pVfs, pPager->zJournal, 0, &exists);
  }
  if( rc==0 && exists )
{

    int locked = 0;
# 48921 "sqlite3.c"
    rc = sqlite3OsCheckReservedLock(pPager->fd, &locked);
    if( rc==0 && !locked )
{

      Pgno nPage;

      rc = pagerPagecount(pPager, &nPage);
      if( rc==0 )
{

# 48935 "sqlite3.c"
        if( nPage==0 && !jrnlOpen )
{

          sqlite3BeginBenignMalloc();
          if( pagerLockDb(pPager, 2)==0 )
{

            sqlite3OsDelete(pVfs, pPager->zJournal, 0);
            if( !pPager->exclusiveMode ) pagerUnlockDb(pPager, 1);
          }
          sqlite3EndBenignMalloc();
        }else{






          if( !jrnlOpen )
{

            int f = 0x00000001|0x00000800;
            rc = sqlite3OsOpen(pVfs, pPager->zJournal, pPager->jfd, f, &f);
          }
          if( rc==0 )
{

            u8 first = 0;
            rc = sqlite3OsRead(pPager->jfd, (void *)&first, 1, 0);
            if( rc==(10 | (2<<8)) )
{

              rc = 0;
            }
            if( !jrnlOpen )
{

              sqlite3OsClose(pPager->jfd);
            }
            *pExists = (first!=0);
          }else if( rc==14 )
{

# 48973 "sqlite3.c"
            *pExists = 1;
            rc = 0;
          }
        }
      }
    }
  }

  return rc;
}
# 49011 "sqlite3.c"
static int sqlite3PagerSharedLock(Pager *pPager)
{

  int rc = 0;






  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( (pPager->memDb && pPager->errCode) )
{
 return pPager->errCode; }

  if( !pagerUseWal(pPager) && pPager->eState==0 )
{

    int bHotJournal = 1;

    ((void) (0));

    rc = pager_wait_on_lock(pPager, 1);
    if( rc!=0 )
{

      ((void) (0));
      goto failed;
    }




    if( pPager->eLock<=1 )
{

      rc = hasHotJournal(pPager, &bHotJournal);
    }
    if( rc!=0 )
{

      goto failed;
    }
    if( bHotJournal )
{

      if( pPager->readOnly )
{

        rc = (8 | (3<<8));
        goto failed;
      }
# 49065 "sqlite3.c"
      rc = pagerLockDb(pPager, 4);
      if( rc!=0 )
{

        goto failed;
      }
# 49083 "sqlite3.c"
      if( !((pPager->jfd)->pMethods!=0) )
{

        sqlite3_vfs * const pVfs = pPager->pVfs;
        int bExists;
        rc = sqlite3OsAccess(
            pVfs, pPager->zJournal, 0, &bExists);
        if( rc==0 && bExists )
{

          int fout = 0;
          int f = 0x00000002|0x00000800;
          ((void) (0));
          rc = sqlite3OsOpen(pVfs, pPager->zJournal, pPager->jfd, f, &fout);
          ((void) (0));
          if( rc==0 && fout&0x00000001 )
{

            rc = sqlite3CantopenError(49095);
            sqlite3OsClose(pPager->jfd);
          }
        }
      }
# 49109 "sqlite3.c"
      if( ((pPager->jfd)->pMethods!=0) )
{

        ((void) (0));
        rc = pagerSyncHotJournal(pPager);
        if( rc==0 )
{

          rc = pager_playback(pPager, 1);
          pPager->eState = 0;
        }
      }else if( !pPager->exclusiveMode )
{

        pagerUnlockDb(pPager, 1);
      }

      if( rc!=0 )
{

# 49137 "sqlite3.c"
        pager_error(pPager, rc);
        goto failed;
      }

      ((void) (0));
      ((void) (0))

       ;
    }

    if( !pPager->tempFile && pPager->hasHeldSharedLock )
{

# 49164 "sqlite3.c"
      Pgno nPage = 0;
      char dbFileVers[sizeof(pPager->dbFileVers)];

      rc = pagerPagecount(pPager, &nPage);
      if( rc ) goto failed;

      if( nPage>0 )
{

        ;
        rc = sqlite3OsRead(pPager->fd, &dbFileVers, sizeof(dbFileVers), 24);
        if( rc!=0 && rc!=(10 | (2<<8)) )
{

          goto failed;
        }
      }else{
        memset(dbFileVers, 0, sizeof(dbFileVers));
      }

      if( memcmp(pPager->dbFileVers, dbFileVers, sizeof(dbFileVers))!=0 )
{

        pager_reset(pPager);







        if( ((pPager)->bUseFetch) )
{

          sqlite3OsUnfetch(pPager->fd, 0, 0);
        }
      }
    }




    rc = pagerOpenWalIfPresent(pPager);

    ((void) (0));

  }

  if( pagerUseWal(pPager) )
{

    ((void) (0));
    rc = pagerBeginReadTransaction(pPager);
  }

  if( pPager->eState==0 && rc==0 )
{

    rc = pagerPagecount(pPager, &pPager->dbSize);
  }

 failed:
  if( rc!=0 )
{

    ((void) (0));
    pager_unlock(pPager);
    ((void) (0));
  }else{
    pPager->eState = 1;
    pPager->hasHeldSharedLock = 1;
  }
  return rc;
}
# 49233 "sqlite3.c"
static void pagerUnlockIfUnused(Pager *pPager)
{

  if( pPager->nMmapOut==0 && (sqlite3PcacheRefCount(pPager->pPCache)==0) )
{

    pagerUnlockAndRollback(pPager);
  }
}
# 49289 "sqlite3.c"
static int sqlite3PagerGet(
  Pager *pPager,
  Pgno pgno,
  DbPage **ppPage,
  int flags
)
{

  int rc = 0;
  PgHdr *pPg = 0;
  u32 iFrame = 0;
  const int noContent = (flags & 0x01);





  const int bMmapOk = (pgno>1 && ((pPager)->bUseFetch)
   && (pPager->eState==1 || (flags & 0x02))



  );





  if( pgno<=1 && pgno==0 )
{

    return sqlite3CorruptError(49316);
  }
  ((void) (0));
  ((void) (0));
  ((void) (0));

  ((void) (0));



  if( pPager->errCode!=0 )
{

    rc = pPager->errCode;
  }else{
    if( bMmapOk && pagerUseWal(pPager) )
{

      rc = sqlite3WalFindFrame(pPager->pWal, pgno, &iFrame);
      if( rc!=0 ) goto pager_acquire_err;
    }

    if( bMmapOk && iFrame==0 )
{

      void *pData = 0;

      rc = sqlite3OsFetch(pPager->fd,
          (i64)(pgno-1) * pPager->pageSize, pPager->pageSize, &pData
      );

      if( rc==0 && pData )
{

        if( pPager->eState>1 )
{

          pPg = sqlite3PagerLookup(pPager, pgno);
        }
        if( pPg==0 )
{

          rc = pagerAcquireMapPage(pPager, pgno, pData, &pPg);
        }else{
          sqlite3OsUnfetch(pPager->fd, (i64)(pgno-1)*pPager->pageSize, pData);
        }
        if( pPg )
{

          ((void) (0));
          *ppPage = pPg;
          return 0;
        }
      }
      if( rc!=0 )
{

        goto pager_acquire_err;
      }
    }

    {
      sqlite3_pcache_page *pBase;
      pBase = sqlite3PcacheFetch(pPager->pPCache, pgno, 3);
      if( pBase==0 )
{

        rc = sqlite3PcacheFetchStress(pPager->pPCache, pgno, &pBase);
        if( rc!=0 ) goto pager_acquire_err;
        if( pBase==0 )
{

          pPg = *ppPage = 0;
          rc = 7;
          goto pager_acquire_err;
        }
      }
      pPg = *ppPage = sqlite3PcacheFetchFinish(pPager->pPCache, pgno, pBase);
      ((void) (0));
    }
  }

  if( rc!=0 )
{




    pPg = 0;
    goto pager_acquire_err;
  }
  ((void) (0));
  ((void) (0));
  ((void) (0));

  if( pPg->pPager && !noContent )
{



    ((void) (0));
    pPager->aStat[0]++;
    return 0;

  }else{



    pPg->pPager = pPager;



    if( pgno>2147483647 || pgno==((Pgno)((sqlite3PendingByte/((pPager)->pageSize))+1)) )
{

      rc = sqlite3CorruptError(49405);
      goto pager_acquire_err;
    }

    if( pPager->memDb || pPager->dbSize<pgno || noContent || !((pPager->fd)->pMethods!=0) )
{

      if( pgno>pPager->mxPgno )
{

        rc = 13;
        goto pager_acquire_err;
      }
      if( noContent )
{







        sqlite3BeginBenignMalloc();
        if( pgno<=pPager->dbOrigSize )
{

          sqlite3BitvecSet(pPager->pInJournal, pgno);
          ;
        }
        addToSavepointBitvecs(pPager, pgno);
        ;
        sqlite3EndBenignMalloc();
      }
      memset(pPg->pData, 0, pPager->pageSize);
      ;
    }else{
      if( pagerUseWal(pPager) && bMmapOk==0 )
{

        rc = sqlite3WalFindFrame(pPager->pWal, pgno, &iFrame);
        if( rc!=0 ) goto pager_acquire_err;
      }
      ((void) (0));
      pPager->aStat[1]++;
      rc = readDbPage(pPg, iFrame);
      if( rc!=0 )
{

        goto pager_acquire_err;
      }
    }
    ;
  }

  return 0;

pager_acquire_err:
  ((void) (0));
  if( pPg )
{

    sqlite3PcacheDrop(pPg);
  }
  pagerUnlockIfUnused(pPager);

  *ppPage = 0;
  return rc;
}
# 49471 "sqlite3.c"
static DbPage *sqlite3PagerLookup(Pager *pPager, Pgno pgno)
{

  sqlite3_pcache_page *pPage;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pPage = sqlite3PcacheFetch(pPager->pPCache, pgno, 0);
  ((void) (0));
  if( pPage==0 ) return 0;
  return sqlite3PcacheFetchFinish(pPager->pPCache, pgno, pPage);
}
# 49490 "sqlite3.c"
static void sqlite3PagerUnrefNotNull(DbPage *pPg)
{

  Pager *pPager;
  ((void) (0));
  pPager = pPg->pPager;
  if( pPg->flags & 0x040 )
{

    pagerReleaseMapPage(pPg);
  }else{
    sqlite3PcacheRelease(pPg);
  }
  pagerUnlockIfUnused(pPager);
}
static void sqlite3PagerUnref(DbPage *pPg)
{

  if( pPg ) sqlite3PagerUnrefNotNull(pPg);
}
# 49527 "sqlite3.c"
static int pager_open_journal(Pager *pPager)
{

  int rc = 0;
  sqlite3_vfs * const pVfs = pPager->pVfs;

  ((void) (0));
  ((void) (0));
  ((void) (0));




  if( (pPager->errCode) ) return pPager->errCode;

  if( !pagerUseWal(pPager) && pPager->journalMode!=2 )
{

    pPager->pInJournal = sqlite3BitvecCreate(pPager->dbSize);
    if( pPager->pInJournal==0 )
{

      return 7;
    }


    if( !((pPager->jfd)->pMethods!=0) )
{

      if( pPager->journalMode==4 )
{

        sqlite3MemJournalOpen(pPager->jfd);
      }else{
        const int flags =
          0x00000002|0x00000004|
          (pPager->tempFile ?
            (0x00000008|0x00001000):
            (0x00000800)
          );



        rc = databaseIsUnmoved(pPager);
        if( rc==0 )
{






          rc = sqlite3OsOpen(pVfs, pPager->zJournal, pPager->jfd, flags, 0);

        }
      }
      ((void) (0));
    }





    if( rc==0 )
{


      pPager->nRec = 0;
      pPager->journalOff = 0;
      pPager->setMaster = 0;
      pPager->journalHdr = 0;
      rc = writeJournalHdr(pPager);
    }
  }

  if( rc!=0 )
{

    sqlite3BitvecDestroy(pPager->pInJournal);
    pPager->pInJournal = 0;
  }else{
    ((void) (0));
    pPager->eState = 3;
  }

  return rc;
}
# 49616 "sqlite3.c"
static int sqlite3PagerBegin(Pager *pPager, int exFlag, int subjInMemory)
{

  int rc = 0;

  if( pPager->errCode ) return pPager->errCode;
  ((void) (0));
  pPager->subjInMemory = (u8)subjInMemory;

  if( (pPager->eState==1) )
{

    ((void) (0));

    if( pagerUseWal(pPager) )
{




      if( pPager->exclusiveMode && sqlite3WalExclusiveMode(pPager->pWal, -1) )
{

        rc = pagerLockDb(pPager, 4);
        if( rc!=0 )
{

          return rc;
        }
        (void)sqlite3WalExclusiveMode(pPager->pWal, 1);
      }






      rc = sqlite3WalBeginWriteTransaction(pPager->pWal);
    }else{





      rc = pagerLockDb(pPager, 2);
      if( rc==0 && exFlag )
{

        rc = pager_wait_on_lock(pPager, 4);
      }
    }

    if( rc==0 )
{

# 49666 "sqlite3.c"
      pPager->eState = 2;
      pPager->dbHintSize = pPager->dbSize;
      pPager->dbFileSize = pPager->dbSize;
      pPager->dbOrigSize = pPager->dbSize;
      pPager->journalOff = 0;
    }

    ((void) (0));
    ((void) (0));
    ((void) (0));
  }

  ;
  return rc;
}




static __attribute__((noinline)) int pagerAddPageToRollbackJournal(PgHdr *pPg)
{

  Pager *pPager = pPg->pPager;
  int rc;
  u32 cksum;
  char *pData2;
  i64 iOff = pPager->journalOff;




  ((void) (0));

  ((void) (0));
  pData2=(char*)pPg->pData;
  cksum = pager_cksum(pPager, (u8*)pData2);
# 49708 "sqlite3.c"
  pPg->flags |= 0x008;

  rc = write32bits(pPager->jfd, iOff, pPg->pgno);
  if( rc!=0 ) return rc;
  rc = sqlite3OsWrite(pPager->jfd, pData2, pPager->pageSize, iOff+4);
  if( rc!=0 ) return rc;
  rc = write32bits(pPager->jfd, iOff+pPager->pageSize+4, cksum);
  if( rc!=0 ) return rc;

 
                                                 ;
  ;
 

                                                                ;

  pPager->journalOff += 8 + pPager->pageSize;
  pPager->nRec++;
  ((void) (0));
  rc = sqlite3BitvecSet(pPager->pInJournal, pPg->pgno);
  ;
  ((void) (0));
  rc |= addToSavepointBitvecs(pPager, pPg->pgno);
  ((void) (0));
  return rc;
}
# 49742 "sqlite3.c"
static int pager_write(PgHdr *pPg)
{

  Pager *pPager = pPg->pPager;
  int rc = 0;





  ((void) (0))


   ;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ;
# 49768 "sqlite3.c"
  if( pPager->eState==2 )
{

    rc = pager_open_journal(pPager);
    if( rc!=0 ) return rc;
  }
  ((void) (0));
  ((void) (0));


  sqlite3PcacheMakeDirty(pPg);





  ((void) (0));
  if( pPager->pInJournal!=0
   && sqlite3BitvecTestNotNull(pPager->pInJournal, pPg->pgno)==0
  )
{

    ((void) (0));
    if( pPg->pgno<=pPager->dbOrigSize )
{

      rc = pagerAddPageToRollbackJournal(pPg);
      if( rc!=0 )
{

        return rc;
      }
    }else{
      if( pPager->eState!=4 )
{

        pPg->flags |= 0x008;
      }
     

                                                 ;
    }
  }






  pPg->flags |= 0x004;




  if( pPager->nSavepoint>0 )
{

    rc = subjournalPageIfRequired(pPg);
  }


  if( pPager->dbSize<pPg->pgno )
{

    pPager->dbSize = pPg->pgno;
  }
  return rc;
}
# 49834 "sqlite3.c"
static __attribute__((noinline)) int pagerWriteLargeSector(PgHdr *pPg)
{

  int rc = 0;
  Pgno nPageCount;
  Pgno pg1;
  int nPage = 0;
  int ii;
  int needSync = 0;
  Pager *pPager = pPg->pPager;
  Pgno nPagePerSector = (pPager->sectorSize/pPager->pageSize);





  ((void) (0));
  ((void) (0));
  pPager->doNotSpill |= 0x04;





  pg1 = ((pPg->pgno-1) & ~(nPagePerSector-1)) + 1;

  nPageCount = pPager->dbSize;
  if( pPg->pgno>nPageCount )
{

    nPage = (pPg->pgno - pg1)+1;
  }else if( (pg1+nPagePerSector-1)>nPageCount )
{

    nPage = nPageCount+1-pg1;
  }else{
    nPage = nPagePerSector;
  }
  ((void) (0));
  ((void) (0));
  ((void) (0));

  for(ii=0; ii<nPage && rc==0; ii++)
{

    Pgno pg = pg1+ii;
    PgHdr *pPage;
    if( pg==pPg->pgno || !sqlite3BitvecTest(pPager->pInJournal, pg) )
{

      if( pg!=((Pgno)((sqlite3PendingByte/((pPager)->pageSize))+1)) )
{

        rc = sqlite3PagerGet(pPager, pg, &pPage, 0);
        if( rc==0 )
{

          rc = pager_write(pPage);
          if( pPage->flags&0x008 )
{

            needSync = 1;
          }
          sqlite3PagerUnrefNotNull(pPage);
        }
      }
    }else if( (pPage = sqlite3PagerLookup(pPager, pg))!=0 )
{

      if( pPage->flags&0x008 )
{

        needSync = 1;
      }
      sqlite3PagerUnrefNotNull(pPage);
    }
  }







  if( rc==0 && needSync )
{

    ((void) (0));
    for(ii=0; ii<nPage; ii++)
{

      PgHdr *pPage = sqlite3PagerLookup(pPager, pg1+ii);
      if( pPage )
{

        pPage->flags |= 0x008;
        sqlite3PagerUnrefNotNull(pPage);
      }
    }
  }

  ((void) (0));
  pPager->doNotSpill &= ~0x04;
  return rc;
}
# 49928 "sqlite3.c"
static int sqlite3PagerWrite(PgHdr *pPg)
{

  Pager *pPager = pPg->pPager;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( pPager->errCode )
{

    return pPager->errCode;
  }else if( (pPg->flags & 0x004)!=0 && pPager->dbSize>=pPg->pgno )
{

    if( pPager->nSavepoint ) return subjournalPageIfRequired(pPg);
    return 0;
  }else if( pPager->sectorSize > (u32)pPager->pageSize )
{

    return pagerWriteLargeSector(pPg);
  }else{
    return pager_write(pPg);
  }
}
# 49970 "sqlite3.c"
static void sqlite3PagerDontWrite(PgHdr *pPg)
{

  Pager *pPager = pPg->pPager;
  if( (pPg->flags&0x002) && pPager->nSavepoint==0 )
{

    ;
   
    pPg->flags |= 0x020;
    pPg->flags &= ~0x004;
    ;
  }
}
# 50003 "sqlite3.c"
static int pager_incr_changecounter(Pager *pPager, int isDirectMode)
{

  int rc = 0;

  ((void) (0))

   ;
  ((void) (0));
# 50023 "sqlite3.c"
  ((void) (0));
  (void)(isDirectMode);




  if( !pPager->changeCountDone && (pPager->dbSize>0) )
{

    PgHdr *pPgHdr;

    ((void) (0));


    rc = sqlite3PagerGet(pPager, 1, &pPgHdr, 0);
    ((void) (0));






    if( !0 && (rc==0) )
{

      rc = sqlite3PagerWrite(pPgHdr);
    }

    if( rc==0 )
{


      pager_write_changecounter(pPgHdr);


      if( 0 )
{

        const void *zBuf;
        ((void) (0));
        zBuf=(char*)pPgHdr->pData;
        if( rc==0 )
{

          rc = sqlite3OsWrite(pPager->fd, zBuf, pPager->pageSize, 0);
          pPager->aStat[2]++;
        }
        if( rc==0 )
{




          const void *pCopy = (const void *)&((const char *)zBuf)[24];
          memcpy(&pPager->dbFileVers, pCopy, sizeof(pPager->dbFileVers));
          pPager->changeCountDone = 1;
        }
      }else{
        pPager->changeCountDone = 1;
      }
    }


    sqlite3PagerUnref(pPgHdr);
  }
  return rc;
}
# 50086 "sqlite3.c"
static int sqlite3PagerSync(Pager *pPager, const char *zMaster)
{

  int rc = 0;

  if( ((pPager->fd)->pMethods!=0) )
{

    void *pArg = (void*)zMaster;
    rc = sqlite3OsFileControl(pPager->fd, 21, pArg);
    if( rc==12 ) rc = 0;
  }
  if( rc==0 && !pPager->noSync )
{

    ((void) (0));
    rc = sqlite3OsSync(pPager->fd, pPager->syncFlags);
  }
  return rc;
}
# 50112 "sqlite3.c"
static int sqlite3PagerExclusiveLock(Pager *pPager)
{

  int rc = pPager->errCode;
  ((void) (0));
  if( rc==0 )
{

    ((void) (0))


     ;
    ((void) (0));
    if( 0==pagerUseWal(pPager) )
{

      rc = pager_wait_on_lock(pPager, 4);
    }
  }
  return rc;
}
# 50154 "sqlite3.c"
static int sqlite3PagerCommitPhaseOne(
  Pager *pPager,
  const char *zMaster,
  int noSync
)
{

  int rc = 0;

  ((void) (0))



   ;
  ((void) (0));


  if( (pPager->errCode) ) return pPager->errCode;

 
                                                  ;


  if( pPager->eState<3 ) return 0;

  if( pPager->memDb )
{





    sqlite3BackupRestart(pPager->pBackup);
  }else{
    if( pagerUseWal(pPager) )
{

      PgHdr *pList = sqlite3PcacheDirtyList(pPager->pPCache);
      PgHdr *pPageOne = 0;
      if( pList==0 )
{



        rc = sqlite3PagerGet(pPager, 1, &pPageOne, 0);
        pList = pPageOne;
        pList->pDirty = 0;
      }
      ((void) (0));
      if( (pList) )
{

        rc = pagerWalFrames(pPager, pList, pPager->dbSize, 1);
      }
      sqlite3PagerUnref(pPageOne);
      if( rc==0 )
{

        sqlite3PcacheCleanAll(pPager->pPCache);
      }
    }else{
# 50251 "sqlite3.c"
      rc = pager_incr_changecounter(pPager, 0);

      if( rc!=0 ) goto commit_phase_one_exit;





      rc = writeMasterJournal(pPager, zMaster);
      if( rc!=0 ) goto commit_phase_one_exit;
# 50273 "sqlite3.c"
      rc = syncJournal(pPager, 0);
      if( rc!=0 ) goto commit_phase_one_exit;

      rc = pager_write_pagelist(pPager,sqlite3PcacheDirtyList(pPager->pPCache));
      if( rc!=0 )
{

        ((void) (0));
        goto commit_phase_one_exit;
      }
      sqlite3PcacheCleanAll(pPager->pPCache);







      if( pPager->dbSize>pPager->dbFileSize )
{

        Pgno nNew = pPager->dbSize - (pPager->dbSize==((Pgno)((sqlite3PendingByte/((pPager)->pageSize))+1)));
        ((void) (0));
        rc = pager_truncate(pPager, nNew);
        if( rc!=0 ) goto commit_phase_one_exit;
      }


      if( !noSync )
{

        rc = sqlite3PagerSync(pPager, zMaster);
      }
     
    }
  }

commit_phase_one_exit:
  if( rc==0 && !pagerUseWal(pPager) )
{

    pPager->eState = 5;
  }
  return rc;
}
# 50327 "sqlite3.c"
static int sqlite3PagerCommitPhaseTwo(Pager *pPager)
{

  int rc = 0;




  if( (pPager->errCode) ) return pPager->errCode;

  ((void) (0))


   ;
  ((void) (0));
# 50352 "sqlite3.c"
  if( pPager->eState==2
   && pPager->exclusiveMode
   && pPager->journalMode==1
  )
{

    ((void) (0));
    pPager->eState = 1;
    return 0;
  }

  ;
  pPager->iDataVersion++;
  rc = pager_end_transaction(pPager, pPager->setMaster, 1);
  return pager_error(pPager, rc);
}
# 50393 "sqlite3.c"
static int sqlite3PagerRollback(Pager *pPager)
{

  int rc = 0;
  ;





  ((void) (0));
  if( pPager->eState==6 ) return pPager->errCode;
  if( pPager->eState<=1 ) return 0;

  if( pagerUseWal(pPager) )
{

    int rc2;
    rc = sqlite3PagerSavepoint(pPager, 2, -1);
    rc2 = pager_end_transaction(pPager, pPager->setMaster, 0);
    if( rc==0 ) rc = rc2;
  }else if( !((pPager->jfd)->pMethods!=0) || pPager->eState==2 )
{

    int eState = pPager->eState;
    rc = pager_end_transaction(pPager, 0, 0);
    if( !pPager->memDb && eState>2 )
{





      pPager->errCode = 4;
      pPager->eState = 6;
      return rc;
    }
  }else{
    rc = pager_playback(pPager, 0);
  }

  ((void) (0));
  ((void) (0))


   ;




  return pager_error(pPager, rc);
}





static u8 sqlite3PagerIsreadonly(Pager *pPager)
{

  return pPager->readOnly;
}
# 50459 "sqlite3.c"
static int sqlite3PagerMemUsed(Pager *pPager)
{

  int perPageSize = pPager->pageSize + pPager->nExtra + sizeof(PgHdr)
                                     + 5*sizeof(void*);
  return perPageSize*sqlite3PcachePagecount(pPager->pPCache)
           + sqlite3MallocSize(pPager)
           + pPager->pageSize;
}




static int sqlite3PagerPageRefcount(DbPage *pPage)
{

  return sqlite3PcachePageRefcount(pPage);
}
# 50502 "sqlite3.c"
static void sqlite3PagerCacheStat(Pager *pPager, int eStat, int reset, int *pnVal)
{


  ((void) (0))


   ;

  ((void) (0));
  ((void) (0));
  ((void) (0));

  *pnVal += pPager->aStat[eStat - 7];
  if( reset )
{

    pPager->aStat[eStat - 7] = 0;
  }
}




static int sqlite3PagerIsMemdb(Pager *pPager)
{

  return pPager->memDb;
}
# 50536 "sqlite3.c"
static __attribute__((noinline)) int pagerOpenSavepoint(Pager *pPager, int nSavepoint)
{

  int rc = 0;
  int nCurrent = pPager->nSavepoint;
  int ii;
  PagerSavepoint *aNew;

  ((void) (0));
  ((void) (0));
  ((void) (0));





  aNew = (PagerSavepoint *)sqlite3Realloc(
      pPager->aSavepoint, sizeof(PagerSavepoint)*nSavepoint
  );
  if( !aNew )
{

    return 7;
  }
  memset(&aNew[nCurrent], 0, (nSavepoint-nCurrent) * sizeof(PagerSavepoint));
  pPager->aSavepoint = aNew;


  for(ii=nCurrent; ii<nSavepoint; ii++)
{

    aNew[ii].nOrig = pPager->dbSize;
    if( ((pPager->jfd)->pMethods!=0) && pPager->journalOff>0 )
{

      aNew[ii].iOffset = pPager->journalOff;
    }else{
      aNew[ii].iOffset = (pPager->sectorSize);
    }
    aNew[ii].iSubRec = pPager->nSubRec;
    aNew[ii].pInSavepoint = sqlite3BitvecCreate(pPager->dbSize);
    if( !aNew[ii].pInSavepoint )
{

      return 7;
    }
    if( pagerUseWal(pPager) )
{

      sqlite3WalSavepoint(pPager->pWal, aNew[ii].aWalData);
    }
    pPager->nSavepoint = ii+1;
  }
  ((void) (0));
  ;
  return rc;
}
static int sqlite3PagerOpenSavepoint(Pager *pPager, int nSavepoint)
{

  ((void) (0));
  ((void) (0));

  if( nSavepoint>pPager->nSavepoint && pPager->useJournal )
{

    return pagerOpenSavepoint(pPager, nSavepoint);
  }else{
    return 0;
  }
}
# 50623 "sqlite3.c"
static int sqlite3PagerSavepoint(Pager *pPager, int op, int iSavepoint)
{

  int rc = pPager->errCode;

  ((void) (0));
  ((void) (0));

  if( rc==0 && iSavepoint<pPager->nSavepoint )
{

    int ii;
    int nNew;





    nNew = iSavepoint + (( op==1 ) ? 0 : 1);
    for(ii=nNew; ii<pPager->nSavepoint; ii++)
{

      sqlite3BitvecDestroy(pPager->aSavepoint[ii].pInSavepoint);
    }
    pPager->nSavepoint = nNew;



    if( op==1 )
{

      if( nNew==0 && ((pPager->sjfd)->pMethods!=0) )
{


        if( sqlite3JournalIsInMemory(pPager->sjfd) )
{

          rc = sqlite3OsTruncate(pPager->sjfd, 0);
          ((void) (0));
        }
        pPager->nSubRec = 0;
      }
    }





    else if( pagerUseWal(pPager) || ((pPager->jfd)->pMethods!=0) )
{

      PagerSavepoint *pSavepoint = (nNew==0)?0:&pPager->aSavepoint[nNew-1];
      rc = pagerPlaybackSavepoint(pPager, pSavepoint);
      ((void) (0));
    }
  }

  return rc;
}
# 50680 "sqlite3.c"
static const char *sqlite3PagerFilename(Pager *pPager, int nullIfMemDb)
{

  return (nullIfMemDb && pPager->memDb) ? "" : pPager->zFilename;
}




static sqlite3_vfs *sqlite3PagerVfs(Pager *pPager)
{

  return pPager->pVfs;
}






static sqlite3_file *sqlite3PagerFile(Pager *pPager)
{

  return pPager->fd;
}





static sqlite3_file *sqlite3PagerJrnlFile(Pager *pPager)
{




  return pPager->pWal ? sqlite3WalFile(pPager->pWal) : pPager->jfd;

}




static const char *sqlite3PagerJournalname(Pager *pPager)
{

  return pPager->zJournal;
}
# 50788 "sqlite3.c"
static int sqlite3PagerMovepage(Pager *pPager, DbPage *pPg, Pgno pgno, int isCommit)
{

  PgHdr *pPgOld;
  Pgno needSyncPgno = 0;
  int rc;
  Pgno origPgno;

  ((void) (0));
  ((void) (0))

   ;
  ((void) (0));




  if( pPager->memDb )
{

    rc = sqlite3PagerWrite(pPg);
    if( rc ) return rc;
  }
# 50826 "sqlite3.c"
  if( (pPg->flags & 0x002)!=0
   && 0!=(rc = subjournalPageIfRequired(pPg))
  )
{

    return rc;
  }

 
                                                                          ;
 
# 50843 "sqlite3.c"
  if( (pPg->flags&0x008) && !isCommit )
{

    needSyncPgno = pPg->pgno;
    ((void) (0))
                                                                        ;
    ((void) (0));
  }






  pPg->flags &= ~0x008;
  pPgOld = sqlite3PagerLookup(pPager, pgno);
  ((void) (0));
  if( pPgOld )
{

    pPg->flags |= (pPgOld->flags&0x008);
    if( pPager->memDb )
{



      sqlite3PcacheMove(pPgOld, pPager->dbSize+1);
    }else{
      sqlite3PcacheDrop(pPgOld);
    }
  }

  origPgno = pPg->pgno;
  sqlite3PcacheMove(pPg, pgno);
  sqlite3PcacheMakeDirty(pPg);





  if( pPager->memDb )
{

    ((void) (0));
    sqlite3PcacheMove(pPgOld, origPgno);
    sqlite3PagerUnrefNotNull(pPgOld);
  }

  if( needSyncPgno )
{

# 50898 "sqlite3.c"
    PgHdr *pPgHdr;
    rc = sqlite3PagerGet(pPager, needSyncPgno, &pPgHdr, 0);
    if( rc!=0 )
{

      if( needSyncPgno<=pPager->dbOrigSize )
{

        ((void) (0));
        sqlite3BitvecClear(pPager->pInJournal, needSyncPgno, pPager->pTmpSpace);
      }
      return rc;
    }
    pPgHdr->flags |= 0x008;
    sqlite3PcacheMakeDirty(pPgHdr);
    sqlite3PagerUnrefNotNull(pPgHdr);
  }

  return 0;
}
# 50922 "sqlite3.c"
static void sqlite3PagerRekey(DbPage *pPg, Pgno iNew, u16 flags)
{

  ((void) (0));
  pPg->flags = flags;
  sqlite3PcacheMove(pPg, iNew);
}




static void *sqlite3PagerGetData(DbPage *pPg)
{

  ((void) (0));
  return pPg->pData;
}





static void *sqlite3PagerGetExtra(DbPage *pPg)
{

  return pPg->pExtra;
}
# 50954 "sqlite3.c"
static int sqlite3PagerLockingMode(Pager *pPager, int eMode)
{

  ((void) (0))

                                                   ;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( eMode>=0 && !pPager->tempFile && !sqlite3WalHeapMemory(pPager->pWal) )
{

    pPager->exclusiveMode = (u8)eMode;
  }
  return (int)pPager->exclusiveMode;
}
# 50987 "sqlite3.c"
static int sqlite3PagerSetJournalMode(Pager *pPager, int eMode)
{

  u8 eOld = pPager->journalMode;
# 50998 "sqlite3.c"
  ((void) (0))




                                                ;





  ((void) (0));




  if( pPager->memDb )
{

    ((void) (0));
    if( eMode!=4 && eMode!=2 )
{

      eMode = eOld;
    }
  }

  if( eMode!=eOld )
{



    ((void) (0));
    pPager->journalMode = (u8)eMode;





    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));

    ((void) (0));
    if( !pPager->exclusiveMode && (eOld & 5)==1 && (eMode & 1)==0 )
{

# 51049 "sqlite3.c"
      sqlite3OsClose(pPager->jfd);
      if( pPager->eLock>=2 )
{

        sqlite3OsDelete(pPager->pVfs, pPager->zJournal, 0);
      }else{
        int rc = 0;
        int state = pPager->eState;
        ((void) (0));
        if( state==0 )
{

          rc = sqlite3PagerSharedLock(pPager);
        }
        if( pPager->eState==1 )
{

          ((void) (0));
          rc = pagerLockDb(pPager, 2);
        }
        if( rc==0 )
{

          sqlite3OsDelete(pPager->pVfs, pPager->zJournal, 0);
        }
        if( rc==0 && state==1 )
{

          pagerUnlockDb(pPager, 1);
        }else if( state==0 )
{

          pager_unlock(pPager);
        }
        ((void) (0));
      }
    }else if( eMode==2 )
{

      sqlite3OsClose(pPager->jfd);
    }
  }


  return (int)pPager->journalMode;
}




static int sqlite3PagerGetJournalMode(Pager *pPager)
{

  return (int)pPager->journalMode;
}






static int sqlite3PagerOkToChangeJournalMode(Pager *pPager)
{

  ((void) (0));
  if( pPager->eState>=3 ) return 0;
  if( (((pPager->jfd)->pMethods!=0) && pPager->journalOff>0) ) return 0;
  return 1;
}







static i64 sqlite3PagerJournalSizeLimit(Pager *pPager, i64 iLimit)
{

  if( iLimit>=-1 )
{

    pPager->journalSizeLimit = iLimit;
    sqlite3WalLimit(pPager->pWal, iLimit);
  }
  return pPager->journalSizeLimit;
}







static sqlite3_backup **sqlite3PagerBackupPtr(Pager *pPager)
{

  return &pPager->pBackup;
}





static void sqlite3PagerClearCache(Pager *pPager)
{

  if( !pPager->memDb && pPager->tempFile==0 ) pager_reset(pPager);
}
# 51142 "sqlite3.c"
static int sqlite3PagerCheckpoint(Pager *pPager, int eMode, int *pnLog, int *pnCkpt)
{

  int rc = 0;
  if( pPager->pWal )
{

    rc = sqlite3WalCheckpoint(pPager->pWal, eMode,
        (eMode==0 ? 0 : pPager->xBusyHandler),
        pPager->pBusyHandlerArg,
        pPager->ckptSyncFlags, pPager->pageSize, (u8 *)pPager->pTmpSpace,
        pnLog, pnCkpt
    );
  }
  return rc;
}

static int sqlite3PagerWalCallback(Pager *pPager)
{

  return sqlite3WalCallback(pPager->pWal);
}





static int sqlite3PagerWalSupported(Pager *pPager)
{

  const sqlite3_io_methods *pMethods = pPager->fd->pMethods;
  if( pPager->noLock ) return 0;
  return pPager->exclusiveMode || (pMethods->iVersion>=2 && pMethods->xShmMap);
}





static int pagerExclusiveLock(Pager *pPager)
{

  int rc;

  ((void) (0));
  rc = pagerLockDb(pPager, 4);
  if( rc!=0 )
{



    pagerUnlockDb(pPager, 1);
  }

  return rc;
}







static int pagerOpenWal(Pager *pPager)
{

  int rc = 0;

  ((void) (0));
  ((void) (0));






  if( pPager->exclusiveMode )
{

    rc = pagerExclusiveLock(pPager);
  }




  if( rc==0 )
{

    rc = sqlite3WalOpen(pPager->pVfs,
        pPager->fd, pPager->zWal, pPager->exclusiveMode,
        pPager->journalSizeLimit, &pPager->pWal
    );
  }
  pagerFixMaplimit(pPager);

  return rc;
}
# 51238 "sqlite3.c"
static int sqlite3PagerOpenWal(
  Pager *pPager,
  int *pbOpen
)
{

  int rc = 0;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  if( !pPager->tempFile && !pPager->pWal )
{

    if( !sqlite3PagerWalSupported(pPager) ) return 14;


    sqlite3OsClose(pPager->jfd);

    rc = pagerOpenWal(pPager);
    if( rc==0 )
{

      pPager->journalMode = 5;
      pPager->eState = 0;
    }
  }else{
    *pbOpen = 1;
  }

  return rc;
}
# 51277 "sqlite3.c"
static int sqlite3PagerCloseWal(Pager *pPager)
{

  int rc = 0;

  ((void) (0));





  if( !pPager->pWal )
{

    int logexists = 0;
    rc = pagerLockDb(pPager, 1);
    if( rc==0 )
{

      rc = sqlite3OsAccess(
          pPager->pVfs, pPager->zWal, 0, &logexists
      );
    }
    if( rc==0 && logexists )
{

      rc = pagerOpenWal(pPager);
    }
  }




  if( rc==0 && pPager->pWal )
{

    rc = pagerExclusiveLock(pPager);
    if( rc==0 )
{

      rc = sqlite3WalClose(pPager->pWal, pPager->ckptSyncFlags,
                           pPager->pageSize, (u8*)pPager->pTmpSpace);
      pPager->pWal = 0;
      pagerFixMaplimit(pPager);
    }
  }
  return rc;
}
# 51649 "sqlite3.c"
typedef struct WalIndexHdr WalIndexHdr;
typedef struct WalIterator WalIterator;
typedef struct WalCkptInfo WalCkptInfo;
# 51667 "sqlite3.c"
struct WalIndexHdr {
  u32 iVersion;
  u32 unused;
  u32 iChange;
  u8 isInit;
  u8 bigEndCksum;
  u16 szPage;
  u32 mxFrame;
  u32 nPage;
  u32 aFrameCksum[2];
  u32 aSalt[2];
  u32 aCksum[2];
};
# 51740 "sqlite3.c"
struct WalCkptInfo {
  u32 nBackfill;
  u32 aReadMark[(8 -3)];
  u8 aLock[8];
  u32 nBackfillAttempted;
  u32 notUsed0;
};
# 51789 "sqlite3.c"
struct Wal {
  sqlite3_vfs *pVfs;
  sqlite3_file *pDbFd;
  sqlite3_file *pWalFd;
  u32 iCallback;
  i64 mxWalSize;
  int nWiData;
  int szFirstBlock;
  volatile u32 **apWiData;
  u32 szPage;
  i16 readLock;
  u8 syncFlags;
  u8 exclusiveMode;
  u8 writeLock;
  u8 ckptLock;
  u8 readOnly;
  u8 truncateOnCommit;
  u8 syncHeader;
  u8 padToSectorBoundary;
  WalIndexHdr hdr;
  u32 minFrame;
  u32 iReCksum;
  const char *zWalName;
  u32 nCkpt;






};
# 51839 "sqlite3.c"
typedef u16 ht_slot;
# 51856 "sqlite3.c"
struct WalIterator {
  int iPrior;
  int nSegment;
  struct WalSegment {
    int iNext;
    ht_slot *aIndex;
    u32 *aPgno;
    int nEntry;
    int iZero;
  } aSegment[1];
};
# 51901 "sqlite3.c"
static int walIndexPage(Wal *pWal, int iPage, volatile u32 **ppPage)
{

  int rc = 0;


  if( pWal->nWiData<=iPage )
{

    int nByte = sizeof(u32*)*(iPage+1);
    volatile u32 **apNew;
    apNew = (volatile u32 **)sqlite3_realloc64((void *)pWal->apWiData, nByte);
    if( !apNew )
{

      *ppPage = 0;
      return 7;
    }
    memset((void*)&apNew[pWal->nWiData], 0,
           sizeof(u32*)*(iPage+1-pWal->nWiData));
    pWal->apWiData = apNew;
    pWal->nWiData = iPage+1;
  }


  if( pWal->apWiData[iPage]==0 )
{

    if( pWal->exclusiveMode==2 )
{

      pWal->apWiData[iPage] = (u32 volatile *)sqlite3MallocZero(( sizeof(ht_slot)*(4096*2) + 4096*sizeof(u32) ));
      if( !pWal->apWiData[iPage] ) rc = 7;
    }else{
      rc = sqlite3OsShmMap(pWal->pDbFd, iPage, ( sizeof(ht_slot)*(4096*2) + 4096*sizeof(u32) ),
          pWal->writeLock, (void volatile **)&pWal->apWiData[iPage]
      );
      if( rc==8 )
{

        pWal->readOnly |= 2;
        rc = 0;
      }
    }
  }

  *ppPage = pWal->apWiData[iPage];
  ((void) (0));
  return rc;
}




static volatile WalCkptInfo *walCkptInfo(Wal *pWal)
{

  ((void) (0));
  return (volatile WalCkptInfo*)&(pWal->apWiData[0][sizeof(WalIndexHdr)/2]);
}




static volatile WalIndexHdr *walIndexHdr(Wal *pWal)
{

  ((void) (0));
  return (volatile WalIndexHdr*)pWal->apWiData[0];
}
# 51977 "sqlite3.c"
static void walChecksumBytes(
  int nativeCksum,
  u8 *a,
  int nByte,
  const u32 *aIn,
  u32 *aOut
)
{

  u32 s1, s2;
  u32 *aData = (u32 *)a;
  u32 *aEnd = (u32 *)&a[nByte];

  if( aIn )
{

    s1 = aIn[0];
    s2 = aIn[1];
  }else{
    s1 = s2 = 0;
  }

  ((void) (0));
  ((void) (0));

  if( nativeCksum )
{

    do {
      s1 += *aData++ + s2;
      s2 += *aData++ + s1;
    }while( aData<aEnd );
  }else{
    do {
      s1 += ( (((aData[0])&0x000000FF)<<24) + (((aData[0])&0x0000FF00)<<8) + (((aData[0])&0x00FF0000)>>8) + (((aData[0])&0xFF000000)>>24) ) + s2;
      s2 += ( (((aData[1])&0x000000FF)<<24) + (((aData[1])&0x0000FF00)<<8) + (((aData[1])&0x00FF0000)>>8) + (((aData[1])&0xFF000000)>>24) ) + s1;
      aData += 2;
    }while( aData<aEnd );
  }

  aOut[0] = s1;
  aOut[1] = s2;
}

static void walShmBarrier(Wal *pWal)
{

  if( pWal->exclusiveMode!=2 )
{

    sqlite3OsShmBarrier(pWal->pDbFd);
  }
}






static void walIndexWriteHdr(Wal *pWal)
{

  volatile WalIndexHdr *aHdr = walIndexHdr(pWal);
  const int nCksum = __builtin_offsetof (WalIndexHdr, aCksum);

  ((void) (0));
  pWal->hdr.isInit = 1;
  pWal->hdr.iVersion = 3007000;
  walChecksumBytes(1, (u8*)&pWal->hdr, nCksum, 0, pWal->hdr.aCksum);
  memcpy((void*)&aHdr[1], (const void*)&pWal->hdr, sizeof(WalIndexHdr));
  walShmBarrier(pWal);
  memcpy((void*)&aHdr[0], (const void*)&pWal->hdr, sizeof(WalIndexHdr));
}
# 52052 "sqlite3.c"
static void walEncodeFrame(
  Wal *pWal,
  u32 iPage,
  u32 nTruncate,
  u8 *aData,
  u8 *aFrame
)
{

  int nativeCksum;
  u32 *aCksum = pWal->hdr.aFrameCksum;
  ((void) (0));
  sqlite3Put4byte(&aFrame[0], iPage);
  sqlite3Put4byte(&aFrame[4], nTruncate);
  if( pWal->iReCksum==0 )
{

    memcpy(&aFrame[8], pWal->hdr.aSalt, 8);

    nativeCksum = (pWal->hdr.bigEndCksum==0);
    walChecksumBytes(nativeCksum, aFrame, 8, aCksum, aCksum);
    walChecksumBytes(nativeCksum, aData, pWal->szPage, aCksum, aCksum);

    sqlite3Put4byte(&aFrame[16], aCksum[0]);
    sqlite3Put4byte(&aFrame[20], aCksum[1]);
  }else{
    memset(&aFrame[8], 0, 16);
  }
}






static int walDecodeFrame(
  Wal *pWal,
  u32 *piPage,
  u32 *pnTruncate,
  u8 *aData,
  u8 *aFrame
)
{

  int nativeCksum;
  u32 *aCksum = pWal->hdr.aFrameCksum;
  u32 pgno;
  ((void) (0));




  if( memcmp(&pWal->hdr.aSalt, &aFrame[8], 8)!=0 )
{

    return 0;
  }



  pgno = sqlite3Get4byte(&aFrame[0]);
  if( pgno==0 )
{

    return 0;
  }






  nativeCksum = (pWal->hdr.bigEndCksum==0);
  walChecksumBytes(nativeCksum, aFrame, 8, aCksum, aCksum);
  walChecksumBytes(nativeCksum, aData, pWal->szPage, aCksum, aCksum);
  if( aCksum[0]!=sqlite3Get4byte(&aFrame[16])
   || aCksum[1]!=sqlite3Get4byte(&aFrame[20])
  )
{


    return 0;
  }




  *piPage = pgno;
  *pnTruncate = sqlite3Get4byte(&aFrame[4]);
  return 1;
}
# 52162 "sqlite3.c"
static int walLockShared(Wal *pWal, int lockIdx)
{

  int rc;
  if( pWal->exclusiveMode ) return 0;
  rc = sqlite3OsShmLock(pWal->pDbFd, lockIdx, 1,
                        2 | 4);
 
                                                        ;
 
  return rc;
}
static void walUnlockShared(Wal *pWal, int lockIdx)
{

  if( pWal->exclusiveMode ) return;
  (void)sqlite3OsShmLock(pWal->pDbFd, lockIdx, 1,
                         1 | 4);
  ;
}
static int walLockExclusive(Wal *pWal, int lockIdx, int n)
{

  int rc;
  if( pWal->exclusiveMode ) return 0;
  rc = sqlite3OsShmLock(pWal->pDbFd, lockIdx, n,
                        2 | 8);
 
                                                           ;
 
  return rc;
}
static void walUnlockExclusive(Wal *pWal, int lockIdx, int n)
{

  if( pWal->exclusiveMode ) return;
  (void)sqlite3OsShmLock(pWal->pDbFd, lockIdx, n,
                         1 | 8);
 
                                      ;
}






static int walHash(u32 iPage)
{

  ((void) (0));
  ((void) (0));
  return (iPage*383) & ((4096*2)-1);
}
static int walNextHash(int iPriorHash)
{

  return (iPriorHash+1)&((4096*2)-1);
}
# 52224 "sqlite3.c"
static int walHashGet(
  Wal *pWal,
  int iHash,
  volatile ht_slot **paHash,
  volatile u32 **paPgno,
  u32 *piZero
)
{

  int rc;
  volatile u32 *aPgno;

  rc = walIndexPage(pWal, iHash, &aPgno);
  ((void) (0));

  if( rc==0 )
{

    u32 iZero;
    volatile ht_slot *aHash;

    aHash = (volatile ht_slot *)&aPgno[4096];
    if( iHash==0 )
{

      aPgno = &aPgno[(sizeof(WalIndexHdr)*2+sizeof(WalCkptInfo))/sizeof(u32)];
      iZero = 0;
    }else{
      iZero = (4096 - ((sizeof(WalIndexHdr)*2+sizeof(WalCkptInfo))/sizeof(u32))) + (iHash-1)*4096;
    }

    *paPgno = &aPgno[-1];
    *paHash = aHash;
    *piZero = iZero;
  }
  return rc;
}







static int walFramePage(u32 iFrame)
{

  int iHash = (iFrame+4096 -(4096 - ((sizeof(WalIndexHdr)*2+sizeof(WalCkptInfo))/sizeof(u32)))-1) / 4096;
  ((void) (0))




   ;
  return iHash;
}




static u32 walFramePgno(Wal *pWal, u32 iFrame)
{

  int iHash = walFramePage(iFrame);
  if( iHash==0 )
{

    return pWal->apWiData[0][(sizeof(WalIndexHdr)*2+sizeof(WalCkptInfo))/sizeof(u32) + iFrame - 1];
  }
  return pWal->apWiData[iHash][(iFrame-1-(4096 - ((sizeof(WalIndexHdr)*2+sizeof(WalCkptInfo))/sizeof(u32))))%4096];
}
# 52296 "sqlite3.c"
static void walCleanupHash(Wal *pWal)
{

  volatile ht_slot *aHash = 0;
  volatile u32 *aPgno = 0;
  u32 iZero = 0;
  int iLimit = 0;
  int nByte;
  int i;

  ((void) (0));
  ;
  ;
  ;

  if( pWal->hdr.mxFrame==0 ) return;





  ((void) (0));
  ((void) (0));
  walHashGet(pWal, walFramePage(pWal->hdr.mxFrame), &aHash, &aPgno, &iZero);




  iLimit = pWal->hdr.mxFrame - iZero;
  ((void) (0));
  for(i=0; i<(4096*2); i++)
{

    if( aHash[i]>iLimit )
{

      aHash[i] = 0;
    }
  }




  nByte = (int)((char *)aHash - (char *)&aPgno[iLimit+1]);
  memset((void *)&aPgno[iLimit+1], 0, nByte);
# 52351 "sqlite3.c"
}






static int walIndexAppend(Wal *pWal, u32 iFrame, u32 iPage)
{

  int rc;
  u32 iZero = 0;
  volatile u32 *aPgno = 0;
  volatile ht_slot *aHash = 0;

  rc = walHashGet(pWal, walFramePage(iFrame), &aHash, &aPgno, &iZero);




  if( rc==0 )
{

    int iKey;
    int idx;
    int nCollide;

    idx = iFrame - iZero;
    ((void) (0));




    if( idx==1 )
{

      int nByte = (int)((u8 *)&aHash[(4096*2)] - (u8 *)&aPgno[1]);
      memset((void*)&aPgno[1], 0, nByte);
    }







    if( aPgno[idx] )
{

      walCleanupHash(pWal);
      ((void) (0));
    }


    nCollide = idx;
    for(iKey=walHash(iPage); aHash[iKey]; iKey=walNextHash(iKey))
{

      if( (nCollide--)==0 ) return sqlite3CorruptError(52399);
    }
    aPgno[idx] = iPage;
    aHash[iKey] = (ht_slot)idx;
# 52430 "sqlite3.c"
  }


  return rc;
}
# 52447 "sqlite3.c"
static int walIndexRecover(Wal *pWal)
{

  int rc;
  i64 nSize;
  u32 aFrameCksum[2] = {0, 0};
  int iLock;
  int nLock;







  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  iLock = 1 + pWal->ckptLock;
  nLock = 8 - iLock;
  rc = walLockExclusive(pWal, iLock, nLock);
  if( rc )
{

    return rc;
  }
  ;

  memset(&pWal->hdr, 0, sizeof(WalIndexHdr));

  rc = sqlite3OsFileSize(pWal->pWalFd, &nSize);
  if( rc!=0 )
{

    goto recovery_error;
  }

  if( nSize>32 )
{

    u8 aBuf[32];
    u8 *aFrame = 0;
    int szFrame;
    u8 *aData;
    int iFrame;
    i64 iOffset;
    int szPage;
    u32 magic;
    u32 version;
    int isValid;


    rc = sqlite3OsRead(pWal->pWalFd, aBuf, 32, 0);
    if( rc!=0 )
{

      goto recovery_error;
    }






    magic = sqlite3Get4byte(&aBuf[0]);
    szPage = sqlite3Get4byte(&aBuf[8]);
    if( (magic&0xFFFFFFFE)!=0x377f0682
     || szPage&(szPage-1)
     || szPage>65536
     || szPage<512
    )
{

      goto finished;
    }
    pWal->hdr.bigEndCksum = (u8)(magic&0x00000001);
    pWal->szPage = szPage;
    pWal->nCkpt = sqlite3Get4byte(&aBuf[12]);
    memcpy(&pWal->hdr.aSalt, &aBuf[16], 8);


    walChecksumBytes(pWal->hdr.bigEndCksum==0,
        aBuf, 32 -2*4, 0, pWal->hdr.aFrameCksum
    );
    if( pWal->hdr.aFrameCksum[0]!=sqlite3Get4byte(&aBuf[24])
     || pWal->hdr.aFrameCksum[1]!=sqlite3Get4byte(&aBuf[28])
    )
{

      goto finished;
    }



    version = sqlite3Get4byte(&aBuf[4]);
    if( version!=3007000 )
{

      rc = sqlite3CantopenError(52530);
      goto finished;
    }


    szFrame = szPage + 24;
    aFrame = (u8 *)sqlite3_malloc64(szFrame);
    if( !aFrame )
{

      rc = 7;
      goto recovery_error;
    }
    aData = &aFrame[24];


    iFrame = 0;
    for(iOffset=32; (iOffset+szFrame)<=nSize; iOffset+=szFrame)
{

      u32 pgno;
      u32 nTruncate;


      iFrame++;
      rc = sqlite3OsRead(pWal->pWalFd, aFrame, szFrame, iOffset);
      if( rc!=0 ) break;
      isValid = walDecodeFrame(pWal, &pgno, &nTruncate, aData, aFrame);
      if( !isValid ) break;
      rc = walIndexAppend(pWal, iFrame, pgno);
      if( rc!=0 ) break;


      if( nTruncate )
{

        pWal->hdr.mxFrame = iFrame;
        pWal->hdr.nPage = nTruncate;
        pWal->hdr.szPage = (u16)((szPage&0xff00) | (szPage>>16));
        ;
        ;
        aFrameCksum[0] = pWal->hdr.aFrameCksum[0];
        aFrameCksum[1] = pWal->hdr.aFrameCksum[1];
      }
    }

    sqlite3_free(aFrame);
  }

finished:
  if( rc==0 )
{

    volatile WalCkptInfo *pInfo;
    int i;
    pWal->hdr.aFrameCksum[0] = aFrameCksum[0];
    pWal->hdr.aFrameCksum[1] = aFrameCksum[1];
    walIndexWriteHdr(pWal);





    pInfo = walCkptInfo(pWal);
    pInfo->nBackfill = 0;
    pInfo->nBackfillAttempted = pWal->hdr.mxFrame;
    pInfo->aReadMark[0] = 0;
    for(i=1; i<(8 -3); i++) pInfo->aReadMark[i] = 0xffffffff;
    if( pWal->hdr.mxFrame ) pInfo->aReadMark[1] = pWal->hdr.mxFrame;






    if( pWal->hdr.nPage )
{

      sqlite3_log((27 | (1<<8)),
          "recovered %d frames from WAL file %s",
          pWal->hdr.mxFrame, pWal->zWalName
      );
    }
  }

recovery_error:
  ;
  walUnlockExclusive(pWal, iLock, nLock);
  return rc;
}




static void walIndexClose(Wal *pWal, int isDelete)
{

  if( pWal->exclusiveMode==2 )
{

    int i;
    for(i=0; i<pWal->nWiData; i++)
{

      sqlite3_free((void *)pWal->apWiData[i]);
      pWal->apWiData[i] = 0;
    }
  }else{
    sqlite3OsShmUnmap(pWal->pDbFd, isDelete);
  }
}
# 52641 "sqlite3.c"
static int sqlite3WalOpen(
  sqlite3_vfs *pVfs,
  sqlite3_file *pDbFd,
  const char *zWalName,
  int bNoShm,
  i64 mxWalSize,
  Wal **ppWal
)
{

  int rc;
  Wal *pRet;
  int flags;

  ((void) (0));
  ((void) (0));







  ((void) (0));
  ((void) (0));




  ((void) (0));




  *ppWal = 0;
  pRet = (Wal*)sqlite3MallocZero(sizeof(Wal) + pVfs->szOsFile);
  if( !pRet )
{

    return 7;
  }

  pRet->pVfs = pVfs;
  pRet->pWalFd = (sqlite3_file *)&pRet[1];
  pRet->pDbFd = pDbFd;
  pRet->readLock = -1;
  pRet->mxWalSize = mxWalSize;
  pRet->zWalName = zWalName;
  pRet->syncHeader = 1;
  pRet->padToSectorBoundary = 1;
  pRet->exclusiveMode = (bNoShm ? 2: 0);


  flags = (0x00000002|0x00000004|0x00080000);
  rc = sqlite3OsOpen(pVfs, zWalName, pRet->pWalFd, flags, &flags);
  if( rc==0 && flags&0x00000001 )
{

    pRet->readOnly = 1;
  }

  if( rc!=0 )
{

    walIndexClose(pRet, 0);
    sqlite3OsClose(pRet->pWalFd);
    sqlite3_free(pRet);
  }else{
    int iDC = sqlite3OsDeviceCharacteristics(pDbFd);
    if( iDC & 0x00000400 )
{
 pRet->syncHeader = 0; }
    if( iDC & 0x00001000 )
{

      pRet->padToSectorBoundary = 0;
    }
    *ppWal = pRet;
    ;
  }
  return rc;
}




static void sqlite3WalLimit(Wal *pWal, i64 iLimit)
{

  if( pWal ) pWal->mxWalSize = iLimit;
}
# 52729 "sqlite3.c"
static int walIteratorNext(
  WalIterator *p,
  u32 *piPage,
  u32 *piFrame
)
{

  u32 iMin;
  u32 iRet = 0xFFFFFFFF;
  int i;

  iMin = p->iPrior;
  ((void) (0));
  for(i=p->nSegment-1; i>=0; i--)
{

    struct WalSegment *pSegment = &p->aSegment[i];
    while( pSegment->iNext<pSegment->nEntry )
{

      u32 iPg = pSegment->aPgno[pSegment->aIndex[pSegment->iNext]];
      if( iPg>iMin )
{

        if( iPg<iRet )
{

          iRet = iPg;
          *piFrame = pSegment->iZero + pSegment->aIndex[pSegment->iNext];
        }
        break;
      }
      pSegment->iNext++;
    }
  }

  *piPage = p->iPrior = iRet;
  return (iRet==0xFFFFFFFF);
}
# 52782 "sqlite3.c"
static void walMerge(
  const u32 *aContent,
  ht_slot *aLeft,
  int nLeft,
  ht_slot **paRight,
  int *pnRight,
  ht_slot *aTmp
)
{

  int iLeft = 0;
  int iRight = 0;
  int iOut = 0;
  int nRight = *pnRight;
  ht_slot *aRight = *paRight;

  ((void) (0));
  while( iRight<nRight || iLeft<nLeft )
{

    ht_slot logpage;
    Pgno dbpage;

    if( (iLeft<nLeft)
     && (iRight>=nRight || aContent[aLeft[iLeft]]<aContent[aRight[iRight]])
    )
{

      logpage = aLeft[iLeft++];
    }else{
      logpage = aRight[iRight++];
    }
    dbpage = aContent[logpage];

    aTmp[iOut++] = logpage;
    if( iLeft<nLeft && aContent[aLeft[iLeft]]==dbpage ) iLeft++;

    ((void) (0));
    ((void) (0));
  }

  *paRight = aLeft;
  *pnRight = iOut;
  memcpy(aLeft, aTmp, sizeof(aTmp[0])*iOut);
}
# 52839 "sqlite3.c"
static void walMergesort(
  const u32 *aContent,
  ht_slot *aBuffer,
  ht_slot *aList,
  int *pnList
)
{

  struct Sublist {
    int nList;
    ht_slot *aList;
  };

  const int nList = *pnList;
  int nMerge = 0;
  ht_slot *aMerge = 0;
  int iList;
  u32 iSub = 0;
  struct Sublist aSub[13];

  memset(aSub, 0, sizeof(aSub));
  ((void) (0));
  ((void) (0));

  for(iList=0; iList<nList; iList++)
{

    nMerge = 1;
    aMerge = &aList[iList];
    for(iSub=0; iList & (1<<iSub); iSub++)
{

      struct Sublist *p;
      ((void) (0));
      p = &aSub[iSub];
      ((void) (0));
      ((void) (0));
      walMerge(aContent, p->aList, p->nList, &aMerge, &nMerge, aBuffer);
    }
    aSub[iSub].aList = aMerge;
    aSub[iSub].nList = nMerge;
  }

  for(iSub++; iSub<((int)(sizeof(aSub)/sizeof(aSub[0]))); iSub++)
{

    if( nList & (1<<iSub) )
{

      struct Sublist *p;
      ((void) (0));
      p = &aSub[iSub];
      ((void) (0));
      ((void) (0));
      walMerge(aContent, p->aList, p->nList, &aMerge, &nMerge, aBuffer);
    }
  }
  ((void) (0));
  *pnList = nMerge;
# 52897 "sqlite3.c"
}




static void walIteratorFree(WalIterator *p)
{

  sqlite3_free(p);
}
# 52918 "sqlite3.c"
static int walIteratorInit(Wal *pWal, WalIterator **pp)
{

  WalIterator *p;
  int nSegment;
  u32 iLast;
  int nByte;
  int i;
  ht_slot *aTmp;
  int rc = 0;




  ((void) (0));
  iLast = pWal->hdr.mxFrame;


  nSegment = walFramePage(iLast) + 1;
  nByte = sizeof(WalIterator)
        + (nSegment-1)*sizeof(struct WalSegment)
        + iLast*sizeof(ht_slot);
  p = (WalIterator *)sqlite3_malloc64(nByte);
  if( !p )
{

    return 7;
  }
  memset(p, 0, nByte);
  p->nSegment = nSegment;




  aTmp = (ht_slot *)sqlite3_malloc64(
      sizeof(ht_slot) * (iLast>4096?4096:iLast)
  );
  if( !aTmp )
{

    rc = 7;
  }

  for(i=0; rc==0 && i<nSegment; i++)
{

    volatile ht_slot *aHash;
    u32 iZero;
    volatile u32 *aPgno;

    rc = walHashGet(pWal, i, &aHash, &aPgno, &iZero);
    if( rc==0 )
{

      int j;
      int nEntry;
      ht_slot *aIndex;

      aPgno++;
      if( (i+1)==nSegment )
{

        nEntry = (int)(iLast - iZero);
      }else{
        nEntry = (int)((u32*)aHash - (u32*)aPgno);
      }
      aIndex = &((ht_slot *)&p->aSegment[p->nSegment])[iZero];
      iZero++;

      for(j=0; j<nEntry; j++)
{

        aIndex[j] = (ht_slot)j;
      }
      walMergesort((u32 *)aPgno, aTmp, aIndex, &nEntry);
      p->aSegment[i].iZero = iZero;
      p->aSegment[i].nEntry = nEntry;
      p->aSegment[i].aIndex = aIndex;
      p->aSegment[i].aPgno = (u32 *)aPgno;
    }
  }
  sqlite3_free(aTmp);

  if( rc!=0 )
{

    walIteratorFree(p);
  }
  *pp = p;
  return rc;
}







static int walBusyLock(
  Wal *pWal,
  int (*xBusy)(void*),
  void *pBusyArg,
  int lockIdx,
  int n
)
{

  int rc;
  do {
    rc = walLockExclusive(pWal, lockIdx, n);
  }while( xBusy && rc==5 && xBusy(pBusyArg) );
  return rc;
}





static int walPagesize(Wal *pWal)
{

  return (pWal->hdr.szPage&0xfe00) + ((pWal->hdr.szPage&0x0001)<<16);
}
# 53039 "sqlite3.c"
static void walRestartHdr(Wal *pWal, u32 salt1)
{

  volatile WalCkptInfo *pInfo = walCkptInfo(pWal);
  int i;
  u32 *aSalt = pWal->hdr.aSalt;
  pWal->nCkpt++;
  pWal->hdr.mxFrame = 0;
  sqlite3Put4byte((u8*)&aSalt[0], 1 + sqlite3Get4byte((u8*)&aSalt[0]));
  memcpy(&pWal->hdr.aSalt[1], &salt1, 4);
  walIndexWriteHdr(pWal);
  pInfo->nBackfill = 0;
  pInfo->nBackfillAttempted = 0;
  pInfo->aReadMark[1] = 0;
  for(i=2; i<(8 -3); i++) pInfo->aReadMark[i] = 0xffffffff;
  ((void) (0));
}
# 53086 "sqlite3.c"
static int walCheckpoint(
  Wal *pWal,
  int eMode,
  int (*xBusy)(void*),
  void *pBusyArg,
  int sync_flags,
  u8 *zBuf
)
{

  int rc = 0;
  int szPage;
  WalIterator *pIter = 0;
  u32 iDbpage = 0;
  u32 iFrame = 0;
  u32 mxSafeFrame;
  u32 mxPage;
  int i;
  volatile WalCkptInfo *pInfo;

  szPage = walPagesize(pWal);
  ;
  ;
  pInfo = walCkptInfo(pWal);
  if( pInfo->nBackfill<pWal->hdr.mxFrame )
{



    rc = walIteratorInit(pWal, &pIter);
    if( rc!=0 )
{

      return rc;
    }
    ((void) (0));



    ((void) (0));






    mxSafeFrame = pWal->hdr.mxFrame;
    mxPage = pWal->hdr.nPage;
    for(i=1; i<(8 -3); i++)
{

# 53137 "sqlite3.c"
      u32 y = pInfo->aReadMark[i];
      if( mxSafeFrame>y )
{

        ((void) (0));
        rc = walBusyLock(pWal, xBusy, pBusyArg, (3+(i)), 1);
        if( rc==0 )
{

          pInfo->aReadMark[i] = (i==1 ? mxSafeFrame : 0xffffffff);
          walUnlockExclusive(pWal, (3+(i)), 1);
        }else if( rc==5 )
{

          mxSafeFrame = y;
          xBusy = 0;
        }else{
          goto walcheckpoint_out;
        }
      }
    }

    if( pInfo->nBackfill<mxSafeFrame
     && (rc = walBusyLock(pWal, xBusy, pBusyArg, (3+(0)),1))==0
    )
{

      i64 nSize;
      u32 nBackfill = pInfo->nBackfill;

      pInfo->nBackfillAttempted = mxSafeFrame;


      if( sync_flags )
{

        rc = sqlite3OsSync(pWal->pWalFd, sync_flags);
      }




      if( rc==0 )
{

        i64 nReq = ((i64)mxPage * szPage);
        rc = sqlite3OsFileSize(pWal->pDbFd, &nSize);
        if( rc==0 && nSize<nReq )
{

          sqlite3OsFileControlHint(pWal->pDbFd, 5, &nReq);
        }
      }



      while( rc==0 && 0==walIteratorNext(pIter, &iDbpage, &iFrame) )
{

        i64 iOffset;
        ((void) (0));
        if( iFrame<=nBackfill || iFrame>mxSafeFrame || iDbpage>mxPage )
{

          continue;
        }
        iOffset = ( 32 + ((iFrame)-1)*(i64)((szPage)+24) ) + 24;

        rc = sqlite3OsRead(pWal->pWalFd, zBuf, szPage, iOffset);
        if( rc!=0 ) break;
        iOffset = (iDbpage-1)*(i64)szPage;
        ;
        rc = sqlite3OsWrite(pWal->pDbFd, zBuf, szPage, iOffset);
        if( rc!=0 ) break;
      }


      if( rc==0 )
{

        if( mxSafeFrame==walIndexHdr(pWal)->mxFrame )
{

          i64 szDb = pWal->hdr.nPage*(i64)szPage;
          ;
          rc = sqlite3OsTruncate(pWal->pDbFd, szDb);
          if( rc==0 && sync_flags )
{

            rc = sqlite3OsSync(pWal->pDbFd, sync_flags);
          }
        }
        if( rc==0 )
{

          pInfo->nBackfill = mxSafeFrame;
        }
      }


      walUnlockExclusive(pWal, (3+(0)), 1);
    }

    if( rc==5 )
{



      rc = 0;
    }
  }






  if( rc==0 && eMode!=0 )
{

    ((void) (0));
    if( pInfo->nBackfill<pWal->hdr.mxFrame )
{

      rc = 5;
    }else if( eMode>=2 )
{

      u32 salt1;
      sqlite3_randomness(4, &salt1);
      ((void) (0));
      rc = walBusyLock(pWal, xBusy, pBusyArg, (3+(1)), (8 -3)-1);
      if( rc==0 )
{

        if( eMode==3 )
{

# 53250 "sqlite3.c"
          walRestartHdr(pWal, salt1);
          rc = sqlite3OsTruncate(pWal->pWalFd, 0);
        }
        walUnlockExclusive(pWal, (3+(1)), (8 -3)-1);
      }
    }
  }

 walcheckpoint_out:
  walIteratorFree(pIter);
  return rc;
}





static void walLimitSize(Wal *pWal, i64 nMax)
{

  i64 sz;
  int rx;
  sqlite3BeginBenignMalloc();
  rx = sqlite3OsFileSize(pWal->pWalFd, &sz);
  if( rx==0 && (sz > nMax ) )
{

    rx = sqlite3OsTruncate(pWal->pWalFd, nMax);
  }
  sqlite3EndBenignMalloc();
  if( rx )
{

    sqlite3_log(rx, "cannot limit WAL size: %s", pWal->zWalName);
  }
}




static int sqlite3WalClose(
  Wal *pWal,
  int sync_flags,
  int nBuf,
  u8 *zBuf
)
{

  int rc = 0;
  if( pWal )
{

    int isDelete = 0;
# 53302 "sqlite3.c"
    rc = sqlite3OsLock(pWal->pDbFd, 4);
    if( rc==0 )
{

      if( pWal->exclusiveMode==0 )
{

        pWal->exclusiveMode = 1;
      }
      rc = sqlite3WalCheckpoint(
          pWal, 0, 0, 0, sync_flags, nBuf, zBuf, 0, 0
      );
      if( rc==0 )
{

        int bPersist = -1;
        sqlite3OsFileControlHint(
            pWal->pDbFd, 10, &bPersist
        );
        if( bPersist!=1 )
{




          isDelete = 1;
        }else if( pWal->mxWalSize>=0 )
{







          walLimitSize(pWal, 0);
        }
      }
    }

    walIndexClose(pWal, isDelete);
    sqlite3OsClose(pWal->pWalFd);
    if( isDelete )
{

      sqlite3BeginBenignMalloc();
      sqlite3OsDelete(pWal->pVfs, pWal->zWalName, 0);
      sqlite3EndBenignMalloc();
    }
    ;
    sqlite3_free((void *)pWal->apWiData);
    sqlite3_free(pWal);
  }
  return rc;
}
# 53363 "sqlite3.c"
static int walIndexTryHdr(Wal *pWal, int *pChanged)
{

  u32 aCksum[2];
  WalIndexHdr h1, h2;
  WalIndexHdr volatile *aHdr;


  ((void) (0));
# 53381 "sqlite3.c"
  aHdr = walIndexHdr(pWal);
  memcpy(&h1, (void *)&aHdr[0], sizeof(h1));
  walShmBarrier(pWal);
  memcpy(&h2, (void *)&aHdr[1], sizeof(h2));

  if( memcmp(&h1, &h2, sizeof(h1))!=0 )
{

    return 1;
  }
  if( h1.isInit==0 )
{

    return 1;
  }
  walChecksumBytes(1, (u8*)&h1, sizeof(h1)-sizeof(h1.aCksum), 0, aCksum);
  if( aCksum[0]!=h1.aCksum[0] || aCksum[1]!=h1.aCksum[1] )
{

    return 1;
  }

  if( memcmp(&pWal->hdr, &h1, sizeof(WalIndexHdr)) )
{

    *pChanged = 1;
    memcpy(&pWal->hdr, &h1, sizeof(WalIndexHdr));
    pWal->szPage = (pWal->hdr.szPage&0xfe00) + ((pWal->hdr.szPage&0x0001)<<16);
    ;
    ;
  }


  return 0;
}
# 53421 "sqlite3.c"
static int walIndexReadHdr(Wal *pWal, int *pChanged)
{

  int rc;
  int badHdr;
  volatile u32 *page0;




  ((void) (0));
  rc = walIndexPage(pWal, 0, &page0);
  if( rc!=0 )
{

    return rc;
  };
  ((void) (0));






  badHdr = (page0 ? walIndexTryHdr(pWal, pChanged) : 1);




  ((void) (0));
  if( badHdr )
{

    if( pWal->readOnly & 2 )
{

      if( 0==(rc = walLockShared(pWal, 0)) )
{

        walUnlockShared(pWal, 0);
        rc = (8 | (1<<8));
      }
    }else if( 0==(rc = walLockExclusive(pWal, 0, 1)) )
{

      pWal->writeLock = 1;
      if( 0==(rc = walIndexPage(pWal, 0, &page0)) )
{

        badHdr = walIndexTryHdr(pWal, pChanged);
        if( badHdr )
{





          rc = walIndexRecover(pWal);
          *pChanged = 1;
        }
      }
      pWal->writeLock = 0;
      walUnlockExclusive(pWal, 0, 1);
    }
  }





  if( badHdr==0 && pWal->hdr.iVersion!=3007000 )
{

    rc = sqlite3CantopenError(53476);
  }

  return rc;
}
# 53538 "sqlite3.c"
static int walTryBeginRead(Wal *pWal, int *pChanged, int useWal, int cnt)
{

  volatile WalCkptInfo *pInfo;
  u32 mxReadMark;
  int mxI;
  int i;
  int rc = 0;
  u32 mxFrame;

  ((void) (0));
# 53565 "sqlite3.c"
  if( cnt>5 )
{

    int nDelay = 1;
    if( cnt>100 )
{

     
      return 15;
    }
    if( cnt>=10 ) nDelay = (cnt-9)*(cnt-9)*39;
    sqlite3OsSleep(pWal->pVfs, nDelay);
  }

  if( !useWal )
{

    rc = walIndexReadHdr(pWal, pChanged);
    if( rc==5 )
{

# 53586 "sqlite3.c"
      if( pWal->apWiData[0]==0 )
{








        rc = (-1);
      }else if( 0==(rc = walLockShared(pWal, 2)) )
{

        walUnlockShared(pWal, 2);
        rc = (-1);
      }else if( rc==5 )
{

        rc = (5 | (1<<8));
      }
    }
    if( rc!=0 )
{

      return rc;
    }
  }

  pInfo = walCkptInfo(pWal);
  if( !useWal && pInfo->nBackfill==pWal->hdr.mxFrame




  )
{




    rc = walLockShared(pWal, (3+(0)));
    walShmBarrier(pWal);
    if( rc==0 )
{

      if( memcmp((void *)walIndexHdr(pWal), &pWal->hdr, sizeof(WalIndexHdr)) )
{

# 53634 "sqlite3.c"
        walUnlockShared(pWal, (3+(0)));
        return (-1);
      }
      pWal->readLock = 0;
      return 0;
    }else if( rc!=5 )
{

      return rc;
    }
  }






  mxReadMark = 0;
  mxI = 0;
  mxFrame = pWal->hdr.mxFrame;





  for(i=1; i<(8 -3); i++)
{

    u32 thisMark = pInfo->aReadMark[i];
    if( mxReadMark<=thisMark && thisMark<=mxFrame )
{

      ((void) (0));
      mxReadMark = thisMark;
      mxI = i;
    }
  }
  if( (pWal->readOnly & 2)==0
   && (mxReadMark<mxFrame || mxI==0)
  )
{

    for(i=1; i<(8 -3); i++)
{

      rc = walLockExclusive(pWal, (3+(i)), 1);
      if( rc==0 )
{

        mxReadMark = pInfo->aReadMark[i] = mxFrame;
        mxI = i;
        walUnlockExclusive(pWal, (3+(i)), 1);
        break;
      }else if( rc!=5 )
{

        return rc;
      }
    }
  }
  if( mxI==0 )
{

    ((void) (0));
    return rc==5 ? (-1) : (8 | (2<<8));
  }

  rc = walLockShared(pWal, (3+(mxI)));
  if( rc )
{

    return rc==5 ? (-1) : rc;
  }
# 53723 "sqlite3.c"
  pWal->minFrame = pInfo->nBackfill+1;
  walShmBarrier(pWal);
  if( pInfo->aReadMark[mxI]!=mxReadMark
   || memcmp((void *)walIndexHdr(pWal), &pWal->hdr, sizeof(WalIndexHdr))
  )
{

    walUnlockShared(pWal, (3+(mxI)));
    return (-1);
  }else{
    ((void) (0));
    pWal->readLock = (i16)mxI;
  }
  return rc;
}
# 53751 "sqlite3.c"
static int sqlite3WalBeginReadTransaction(Wal *pWal, int *pChanged)
{

  int rc;
  int cnt = 0;
# 53763 "sqlite3.c"
  do{
    rc = walTryBeginRead(pWal, pChanged, 0, ++cnt);
  }while( rc==(-1) );
  ;
  ;
  ;
  ;
# 53830 "sqlite3.c"
  return rc;
}





static void sqlite3WalEndReadTransaction(Wal *pWal)
{

  sqlite3WalEndWriteTransaction(pWal);
  if( pWal->readLock>=0 )
{

    walUnlockShared(pWal, (3+(pWal->readLock)));
    pWal->readLock = -1;
  }
}
# 53853 "sqlite3.c"
static int sqlite3WalFindFrame(
  Wal *pWal,
  Pgno pgno,
  u32 *piRead
)
{

  u32 iRead = 0;
  u32 iLast = pWal->hdr.mxFrame;
  int iHash;
  int iMinHash;


  ((void) (0));







  if( iLast==0 || pWal->readLock==0 )
{

    *piRead = 0;
    return 0;
  }
# 53902 "sqlite3.c"
  iMinHash = walFramePage(pWal->minFrame);
  for(iHash=walFramePage(iLast); iHash>=iMinHash && iRead==0; iHash--)
{

    volatile ht_slot *aHash;
    volatile u32 *aPgno;
    u32 iZero;
    int iKey;
    int nCollide;
    int rc;

    rc = walHashGet(pWal, iHash, &aHash, &aPgno, &iZero);
    if( rc!=0 )
{

      return rc;
    }
    nCollide = (4096*2);
    for(iKey=walHash(pgno); aHash[iKey]; iKey=walNextHash(iKey))
{

      u32 iFrame = aHash[iKey] + iZero;
      if( iFrame<=iLast && iFrame>=pWal->minFrame && aPgno[aHash[iKey]]==pgno )
{

        ((void) (0));
        iRead = iFrame;
      }
      if( (nCollide--)==0 )
{

        return sqlite3CorruptError(53923);
      }
    }
  }
# 53946 "sqlite3.c"
  *piRead = iRead;
  return 0;
}






static int sqlite3WalReadFrame(
  Wal *pWal,
  u32 iRead,
  int nOut,
  u8 *pOut
)
{

  int sz;
  i64 iOffset;
  sz = pWal->hdr.szPage;
  sz = (sz&0xfe00) + ((sz&0x0001)<<16);
  ;
  ;
  iOffset = ( 32 + ((iRead)-1)*(i64)((sz)+24) ) + 24;

  return sqlite3OsRead(pWal->pWalFd, pOut, (nOut>sz ? sz : nOut), iOffset);
}




static Pgno sqlite3WalDbsize(Wal *pWal)
{

  if( pWal && (pWal->readLock>=0) )
{

    return pWal->hdr.nPage;
  }
  return 0;
}
# 53996 "sqlite3.c"
static int sqlite3WalBeginWriteTransaction(Wal *pWal)
{

  int rc;



  ((void) (0));
  ((void) (0));

  if( pWal->readOnly )
{

    return 8;
  }




  rc = walLockExclusive(pWal, 0, 1);
  if( rc )
{

    return rc;
  }
  pWal->writeLock = 1;





  if( memcmp(&pWal->hdr, (void *)walIndexHdr(pWal), sizeof(WalIndexHdr))!=0 )
{

    walUnlockExclusive(pWal, 0, 1);
    pWal->writeLock = 0;
    rc = (5 | (2<<8));
  }

  return rc;
}





static int sqlite3WalEndWriteTransaction(Wal *pWal)
{

  if( pWal->writeLock )
{

    walUnlockExclusive(pWal, 0, 1);
    pWal->writeLock = 0;
    pWal->iReCksum = 0;
    pWal->truncateOnCommit = 0;
  }
  return 0;
}
# 54056 "sqlite3.c"
static int sqlite3WalUndo(Wal *pWal, int (*xUndo)(void *, Pgno), void *pUndoCtx)
{

  int rc = 0;
  if( (pWal->writeLock) )
{

    Pgno iMax = pWal->hdr.mxFrame;
    Pgno iFrame;




    memcpy(&pWal->hdr, (void *)walIndexHdr(pWal), sizeof(WalIndexHdr));

    for(iFrame=pWal->hdr.mxFrame+1;
        (rc==0) && iFrame<=iMax;
        iFrame++
    )
{

# 54082 "sqlite3.c"
      ((void) (0));
      rc = xUndo(pUndoCtx, walFramePgno(pWal, iFrame));
    }
    if( iMax!=pWal->hdr.mxFrame ) walCleanupHash(pWal);
  }
  return rc;
}







static void sqlite3WalSavepoint(Wal *pWal, u32 *aWalData)
{

  ((void) (0));
  aWalData[0] = pWal->hdr.mxFrame;
  aWalData[1] = pWal->hdr.aFrameCksum[0];
  aWalData[2] = pWal->hdr.aFrameCksum[1];
  aWalData[3] = pWal->nCkpt;
}







static int sqlite3WalSavepointUndo(Wal *pWal, u32 *aWalData)
{

  int rc = 0;

  ((void) (0));
  ((void) (0));

  if( aWalData[3]!=pWal->nCkpt )
{





    aWalData[0] = 0;
    aWalData[3] = pWal->nCkpt;
  }

  if( aWalData[0]<pWal->hdr.mxFrame )
{

    pWal->hdr.mxFrame = aWalData[0];
    pWal->hdr.aFrameCksum[0] = aWalData[1];
    pWal->hdr.aFrameCksum[1] = aWalData[2];
    walCleanupHash(pWal);
  }

  return rc;
}
# 54147 "sqlite3.c"
static int walRestartLog(Wal *pWal)
{

  int rc = 0;
  int cnt;

  if( pWal->readLock==0 )
{

    volatile WalCkptInfo *pInfo = walCkptInfo(pWal);
    ((void) (0));
    if( pInfo->nBackfill>0 )
{

      u32 salt1;
      sqlite3_randomness(4, &salt1);
      rc = walLockExclusive(pWal, (3+(1)), (8 -3)-1);
      if( rc==0 )
{

# 54168 "sqlite3.c"
        walRestartHdr(pWal, salt1);
        walUnlockExclusive(pWal, (3+(1)), (8 -3)-1);
      }else if( rc!=5 )
{

        return rc;
      }
    }
    walUnlockShared(pWal, (3+(0)));
    pWal->readLock = -1;
    cnt = 0;
    do{
      int notUsed;
      rc = walTryBeginRead(pWal, &notUsed, 1, ++cnt);
    }while( rc==(-1) );
    ((void) (0));
    ;
    ;
    ;
  }
  return rc;
}






typedef struct WalWriter {
  Wal *pWal;
  sqlite3_file *pFd;
  sqlite3_int64 iSyncPoint;
  int syncFlags;
  int szPage;
} WalWriter;
# 54210 "sqlite3.c"
static int walWriteToLog(
  WalWriter *p,
  void *pContent,
  int iAmt,
  sqlite3_int64 iOffset
)
{

  int rc;
  if( iOffset<p->iSyncPoint && iOffset+iAmt>=p->iSyncPoint )
{

    int iFirstAmt = (int)(p->iSyncPoint - iOffset);
    rc = sqlite3OsWrite(p->pFd, pContent, iFirstAmt, iOffset);
    if( rc ) return rc;
    iOffset += iFirstAmt;
    iAmt -= iFirstAmt;
    pContent = (void*)(iFirstAmt + (char*)pContent);
    ((void) (0));
    rc = sqlite3OsSync(p->pFd, p->syncFlags & 0x13);
    if( iAmt==0 || rc ) return rc;
  }
  rc = sqlite3OsWrite(p->pFd, pContent, iAmt, iOffset);
  return rc;
}




static int walWriteOneFrame(
  WalWriter *p,
  PgHdr *pPage,
  int nTruncate,
  sqlite3_int64 iOffset
)
{

  int rc;
  void *pData;
  u8 aFrame[24];



  pData = pPage->pData;

  walEncodeFrame(p->pWal, pPage->pgno, nTruncate, pData, aFrame);
  rc = walWriteToLog(p, aFrame, sizeof(aFrame), iOffset);
  if( rc ) return rc;

  rc = walWriteToLog(p, pData, p->szPage, iOffset+sizeof(aFrame));
  return rc;
}
# 54265 "sqlite3.c"
static int walRewriteChecksums(Wal *pWal, u32 iLast)
{

  const int szPage = pWal->szPage;
  int rc = 0;
  u8 *aBuf;
  u8 aFrame[24];
  u32 iRead;
  i64 iCksumOff;

  aBuf = sqlite3_malloc(szPage + 24);
  if( aBuf==0 ) return 7;






  ((void) (0));
  if( pWal->iReCksum==1 )
{

    iCksumOff = 24;
  }else{
    iCksumOff = ( 32 + ((pWal->iReCksum-1)-1)*(i64)((szPage)+24) ) + 16;
  }
  rc = sqlite3OsRead(pWal->pWalFd, aBuf, sizeof(u32)*2, iCksumOff);
  pWal->hdr.aFrameCksum[0] = sqlite3Get4byte(aBuf);
  pWal->hdr.aFrameCksum[1] = sqlite3Get4byte(&aBuf[sizeof(u32)]);

  iRead = pWal->iReCksum;
  pWal->iReCksum = 0;
  for(; rc==0 && iRead<=iLast; iRead++)
{

    i64 iOff = ( 32 + ((iRead)-1)*(i64)((szPage)+24) );
    rc = sqlite3OsRead(pWal->pWalFd, aBuf, szPage+24, iOff);
    if( rc==0 )
{

      u32 iPgno, nDbSize;
      iPgno = sqlite3Get4byte(aBuf);
      nDbSize = sqlite3Get4byte(&aBuf[4]);

      walEncodeFrame(pWal, iPgno, nDbSize, &aBuf[24], aFrame);
      rc = sqlite3OsWrite(pWal->pWalFd, aFrame, sizeof(aFrame), iOff);
    }
  }

  sqlite3_free(aBuf);
  return rc;
}





static int sqlite3WalFrames(
  Wal *pWal,
  int szPage,
  PgHdr *pList,
  Pgno nTruncate,
  int isCommit,
  int sync_flags
)
{

  int rc;
  u32 iFrame;
  PgHdr *p;
  PgHdr *pLast = 0;
  int nExtra = 0;
  int szFrame;
  i64 iOffset;
  WalWriter w;
  u32 iFirst = 0;
  WalIndexHdr *pLive;

  ((void) (0));
  ((void) (0));



  ((void) (0));
# 54347 "sqlite3.c"
  pLive = (WalIndexHdr*)walIndexHdr(pWal);
  if( memcmp(&pWal->hdr, (void *)pLive, sizeof(WalIndexHdr))!=0 )
{

    iFirst = pLive->mxFrame+1;
  }




  if( 0!=(rc = walRestartLog(pWal)) )
{

    return rc;
  }





  iFrame = pWal->hdr.mxFrame;
  if( iFrame==0 )
{

    u8 aWalHdr[32];
    u32 aCksum[2];

    sqlite3Put4byte(&aWalHdr[0], (0x377f0682 | 0));
    sqlite3Put4byte(&aWalHdr[4], 3007000);
    sqlite3Put4byte(&aWalHdr[8], szPage);
    sqlite3Put4byte(&aWalHdr[12], pWal->nCkpt);
    if( pWal->nCkpt==0 ) sqlite3_randomness(8, pWal->hdr.aSalt);
    memcpy(&aWalHdr[16], pWal->hdr.aSalt, 8);
    walChecksumBytes(1, aWalHdr, 32 -2*4, 0, aCksum);
    sqlite3Put4byte(&aWalHdr[24], aCksum[0]);
    sqlite3Put4byte(&aWalHdr[28], aCksum[1]);

    pWal->szPage = szPage;
    pWal->hdr.bigEndCksum = 0;
    pWal->hdr.aFrameCksum[0] = aCksum[0];
    pWal->hdr.aFrameCksum[1] = aCksum[1];
    pWal->truncateOnCommit = 1;

    rc = sqlite3OsWrite(pWal->pWalFd, aWalHdr, sizeof(aWalHdr), 0);
    ;
    if( rc!=0 )
{

      return rc;
    }
# 54397 "sqlite3.c"
    if( pWal->syncHeader && sync_flags )
{

      rc = sqlite3OsSync(pWal->pWalFd, sync_flags & 0x13);
      if( rc ) return rc;
    }
  }
  ((void) (0));


  w.pWal = pWal;
  w.pFd = pWal->pWalFd;
  w.iSyncPoint = 0;
  w.syncFlags = sync_flags;
  w.szPage = szPage;
  iOffset = ( 32 + ((iFrame+1)-1)*(i64)((szPage)+24) );
  szFrame = szPage + 24;


  for(p=pList; p; p=p->pDirty)
{

    int nDbSize;





    if( iFirst && (p->pDirty || isCommit==0) )
{

      u32 iWrite = 0;
      sqlite3WalFindFrame(pWal, p->pgno, &iWrite);
      ((void) (0));
      if( iWrite>=iFirst )
{

        i64 iOff = ( 32 + ((iWrite)-1)*(i64)((szPage)+24) ) + 24;
        void *pData;
        if( pWal->iReCksum==0 || iWrite<pWal->iReCksum )
{

          pWal->iReCksum = iWrite;
        }



        pData = p->pData;

        rc = sqlite3OsWrite(pWal->pWalFd, pData, szPage, iOff);
        if( rc ) return rc;
        p->flags &= ~0x080;
        continue;
      }
    }

    iFrame++;
    ((void) (0));
    nDbSize = (isCommit && p->pDirty==0) ? nTruncate : 0;
    rc = walWriteOneFrame(&w, p, nDbSize, iOffset);
    if( rc ) return rc;
    pLast = p;
    iOffset += szFrame;
    p->flags |= 0x080;
  }


  if( isCommit && pWal->iReCksum )
{

    rc = walRewriteChecksums(pWal, iFrame);
    if( rc ) return rc;
  }
# 54473 "sqlite3.c"
  if( isCommit && (sync_flags & 0x20)!=0 )
{

    if( pWal->padToSectorBoundary )
{

      int sectorSize = sqlite3SectorSize(pWal->pWalFd);
      w.iSyncPoint = ((iOffset+sectorSize-1)/sectorSize)*sectorSize;
      while( iOffset<w.iSyncPoint )
{

        rc = walWriteOneFrame(&w, pLast, nTruncate, iOffset);
        if( rc ) return rc;
        iOffset += szFrame;
        nExtra++;
      }
    }else{
      rc = sqlite3OsSync(w.pFd, sync_flags & 0x13);
    }
  }





  if( isCommit && pWal->truncateOnCommit && pWal->mxWalSize>=0 )
{

    i64 sz = pWal->mxWalSize;
    if( ( 32 + ((iFrame+nExtra+1)-1)*(i64)((szPage)+24) )>pWal->mxWalSize )
{

      sz = ( 32 + ((iFrame+nExtra+1)-1)*(i64)((szPage)+24) );
    }
    walLimitSize(pWal, sz);
    pWal->truncateOnCommit = 0;
  }






  iFrame = pWal->hdr.mxFrame;
  for(p=pList; p && rc==0; p=p->pDirty)
{

    if( (p->flags & 0x080)==0 ) continue;
    iFrame++;
    rc = walIndexAppend(pWal, iFrame, p->pgno);
  }
  while( rc==0 && nExtra>0 )
{

    iFrame++;
    nExtra--;
    rc = walIndexAppend(pWal, iFrame, pLast->pgno);
  }

  if( rc==0 )
{


    pWal->hdr.szPage = (u16)((szPage&0xff00) | (szPage>>16));
    ;
    ;
    pWal->hdr.mxFrame = iFrame;
    if( isCommit )
{

      pWal->hdr.iChange++;
      pWal->hdr.nPage = nTruncate;
    }

    if( isCommit )
{

      walIndexWriteHdr(pWal);
      pWal->iCallback = iFrame;
    }
  }

  ;
  return rc;
}
# 54549 "sqlite3.c"
static int sqlite3WalCheckpoint(
  Wal *pWal,
  int eMode,
  int (*xBusy)(void*),
  void *pBusyArg,
  int sync_flags,
  int nBuf,
  u8 *zBuf,
  int *pnLog,
  int *pnCkpt
)
{

  int rc;
  int isChanged = 0;
  int eMode2 = eMode;
  int (*xBusy2)(void*) = xBusy;

  ((void) (0));
  ((void) (0));



  ((void) (0));

  if( pWal->readOnly ) return 8;
  ;



  rc = walLockExclusive(pWal, 1, 1);
  if( rc )
{







    ;
    ;
    return rc;
  }
  pWal->ckptLock = 1;
# 54600 "sqlite3.c"
  if( eMode!=0 )
{

    rc = walBusyLock(pWal, xBusy, pBusyArg, 0, 1);
    if( rc==0 )
{

      pWal->writeLock = 1;
    }else if( rc==5 )
{

      eMode2 = 0;
      xBusy2 = 0;
      rc = 0;
    }
  }


  if( rc==0 )
{

    rc = walIndexReadHdr(pWal, &isChanged);
    if( isChanged && pWal->pDbFd->pMethods->iVersion>=3 )
{

      sqlite3OsUnfetch(pWal->pDbFd, 0, 0);
    }
  }


  if( rc==0 )
{


    if( pWal->hdr.mxFrame && walPagesize(pWal)!=nBuf )
{

      rc = sqlite3CorruptError(54623);
    }else{
      rc = walCheckpoint(pWal, eMode2, xBusy2, pBusyArg, sync_flags, zBuf);
    }


    if( rc==0 || rc==5 )
{

      if( pnLog ) *pnLog = (int)pWal->hdr.mxFrame;
      if( pnCkpt ) *pnCkpt = (int)(walCkptInfo(pWal)->nBackfill);
    }
  }

  if( isChanged )
{







    memset(&pWal->hdr, 0, sizeof(WalIndexHdr));
  }


  sqlite3WalEndWriteTransaction(pWal);
  walUnlockExclusive(pWal, 1, 1);
  pWal->ckptLock = 0;
  ;
  return (rc==0 && eMode!=eMode2 ? 5 : rc);
}






static int sqlite3WalCallback(Wal *pWal)
{

  u32 ret = 0;
  if( pWal )
{

    ret = pWal->iCallback;
    pWal->iCallback = 0;
  }
  return (int)ret;
}
# 54691 "sqlite3.c"
static int sqlite3WalExclusiveMode(Wal *pWal, int op)
{

  int rc;
  ((void) (0));
  ((void) (0));







  ((void) (0));
  ((void) (0));

  if( op==0 )
{

    if( pWal->exclusiveMode )
{

      pWal->exclusiveMode = 0;
      if( walLockShared(pWal, (3+(pWal->readLock)))!=0 )
{

        pWal->exclusiveMode = 1;
      }
      rc = pWal->exclusiveMode==0;
    }else{

      rc = 0;
    }
  }else if( op>0 )
{

    ((void) (0));
    ((void) (0));
    walUnlockShared(pWal, (3+(pWal->readLock)));
    pWal->exclusiveMode = 1;
    rc = 1;
  }else{
    rc = pWal->exclusiveMode==0;
  }
  return rc;
}






static int sqlite3WalHeapMemory(Wal *pWal)
{

  return (pWal && pWal->exclusiveMode==2 );
}
# 54780 "sqlite3.c"
static sqlite3_file *sqlite3WalFile(Wal *pWal)
{

  return pWal->pWalFd;
}
# 55038 "sqlite3.c"
typedef struct MemPage MemPage;
typedef struct BtLock BtLock;
typedef struct CellInfo CellInfo;
# 55080 "sqlite3.c"
struct MemPage {
  u8 isInit;
  u8 nOverflow;
  u8 intKey;
  u8 intKeyLeaf;
  u8 leaf;
  u8 hdrOffset;
  u8 childPtrSize;
  u8 max1bytePayload;
  u8 bBusy;
  u16 maxLocal;
  u16 minLocal;
  u16 cellOffset;
  u16 nFree;
  u16 nCell;
  u16 maskPage;
  u16 aiOvfl[5];

  u8 *apOvfl[5];
  BtShared *pBt;
  u8 *aData;
  u8 *aDataEnd;
  u8 *aCellIdx;
  u8 *aDataOfst;
  DbPage *pDbPage;
  u16 (*xCellSize)(MemPage*,u8*);
  void (*xParseCell)(MemPage*,u8*,CellInfo*);
  Pgno pgno;
};
# 55124 "sqlite3.c"
struct BtLock {
  Btree *pBtree;
  Pgno iTable;
  u8 eLock;
  BtLock *pNext;
};
# 55156 "sqlite3.c"
struct Btree {
  sqlite3 *db;
  BtShared *pBt;
  u8 inTrans;
  u8 sharable;
  u8 locked;
  u8 hasIncrblobCur;
  int wantToLock;
  int nBackup;
  u32 iDataVersion;
  Btree *pNext;
  Btree *pPrev;

  BtLock lock;

};
# 55219 "sqlite3.c"
struct BtShared {
  Pager *pPager;
  sqlite3 *db;
  BtCursor *pCursor;
  MemPage *pPage1;
  u8 openFlags;

  u8 autoVacuum;
  u8 incrVacuum;
  u8 bDoTruncate;

  u8 inTransaction;
  u8 max1bytePayload;



  u16 btsFlags;
  u16 maxLocal;
  u16 minLocal;
  u16 maxLeaf;
  u16 minLeaf;
  u32 pageSize;
  u32 usableSize;
  int nTransaction;
  u32 nPage;
  void *pSchema;
  void (*xFreeSchema)(void*);
  sqlite3_mutex *mutex;
  Bitvec *pHasContent;

  int nRef;
  BtShared *pNext;
  BtLock *pLock;
  Btree *pWriter;

  u8 *pTmpSpace;
};
# 55273 "sqlite3.c"
struct CellInfo {
  i64 nKey;
  u8 *pPayload;
  u32 nPayload;
  u16 nLocal;
  u16 nSize;
};
# 55311 "sqlite3.c"
struct BtCursor {
  Btree *pBtree;
  BtShared *pBt;
  BtCursor *pNext;
  Pgno *aOverflow;
  CellInfo info;
  i64 nKey;
  void *pKey;
  Pgno pgnoRoot;
  int nOvflAlloc;
  int skipNext;

  u8 curFlags;
  u8 curPagerFlags;
  u8 eState;
  u8 hints;



  i8 iPage;
  u8 curIntKey;
  struct KeyInfo *pKeyInfo;
  void *padding1;
  u16 aiIdx[20];
  MemPage *apPage[20];
};
# 55477 "sqlite3.c"
typedef struct IntegrityCk IntegrityCk;
struct IntegrityCk {
  BtShared *pBt;
  Pager *pPager;
  u8 *aPgRef;
  Pgno nPage;
  int mxErr;
  int nErr;
  int mallocFailed;
  const char *zPfx;
  int v1, v2;
  StrAccum errMsg;
  u32 *heap;
};
# 55527 "sqlite3.c"
static void lockBtreeMutex(Btree *p)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));

  sqlite3_mutex_enter(p->pBt->mutex);
  p->pBt->db = p->db;
  p->locked = 1;
}





static void __attribute__((noinline)) unlockBtreeMutex(Btree *p)
{

  BtShared *pBt = p->pBt;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  sqlite3_mutex_leave(pBt->mutex);
  p->locked = 0;
}


static void __attribute__((noinline)) btreeLockCarefully(Btree *p);
# 55571 "sqlite3.c"
static void sqlite3BtreeEnter(Btree *p)
{





  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));


  ((void) (0));
  ((void) (0));


  ((void) (0));



  ((void) (0));

  if( !p->sharable ) return;
  p->wantToLock++;
  if( p->locked ) return;
  btreeLockCarefully(p);
}







static void __attribute__((noinline)) btreeLockCarefully(Btree *p)
{

  Btree *pLater;





  if( sqlite3_mutex_try(p->pBt->mutex)==0 )
{

    p->pBt->db = p->db;
    p->locked = 1;
    return;
  }






  for(pLater=p->pNext; pLater; pLater=pLater->pNext)
{

    ((void) (0));
    ((void) (0));
    ((void) (0));
    if( pLater->locked )
{

      unlockBtreeMutex(pLater);
    }
  }
  lockBtreeMutex(p);
  for(pLater=p->pNext; pLater; pLater=pLater->pNext)
{

    if( pLater->wantToLock )
{

      lockBtreeMutex(pLater);
    }
  }
}





static void sqlite3BtreeLeave(Btree *p)
{

  ((void) (0));
  if( p->sharable )
{

    ((void) (0));
    p->wantToLock--;
    if( p->wantToLock==0 )
{

      unlockBtreeMutex(p);
    }
  }
}
# 55686 "sqlite3.c"
static void sqlite3BtreeEnterAll(sqlite3 *db)
{

  int i;
  Btree *p;
  ((void) (0));
  for(i=0; i<db->nDb; i++)
{

    p = db->aDb[i].pBt;
    if( p ) sqlite3BtreeEnter(p);
  }
}
static void sqlite3BtreeLeaveAll(sqlite3 *db)
{

  int i;
  Btree *p;
  ((void) (0));
  for(i=0; i<db->nDb; i++)
{

    p = db->aDb[i].pBt;
    if( p ) sqlite3BtreeLeave(p);
  }
}
# 55787 "sqlite3.c"
static void sqlite3BtreeEnterCursor(BtCursor *pCur)
{

  sqlite3BtreeEnter(pCur->pBtree);
}

static void sqlite3BtreeLeaveCursor(BtCursor *pCur)
{

  sqlite3BtreeLeave(pCur->pBtree);
}
# 55822 "sqlite3.c"
static const char zMagicHeader[] = "SQLite format 3";
# 55877 "sqlite3.c"
static BtShared * sqlite3SharedCacheList = 0;
# 55889 "sqlite3.c"
 int sqlite3_enable_shared_cache(int enable)
{

  sqlite3Config.sharedCacheEnabled = enable;
  return 0;
}
# 56047 "sqlite3.c"
static int querySharedCacheTableLock(Btree *p, Pgno iTab, u8 eLock)
{

  BtShared *pBt = p->pBt;
  BtLock *pIter;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));





  ((void) (0));
  ((void) (0));


  if( !p->sharable )
{

    return 0;
  }




  if( pBt->pWriter!=p && (pBt->btsFlags & 0x0020)!=0 )
{

    ;
    return (6 | (1<<8));
  }

  for(pIter=pBt->pLock; pIter; pIter=pIter->pNext)
{

# 56086 "sqlite3.c"
    ((void) (0));
    ((void) (0));
    if( pIter->pBtree!=p && pIter->iTable==iTab && pIter->eLock!=eLock )
{

      ;
      if( eLock==2 )
{

        ((void) (0));
        pBt->btsFlags |= 0x0040;
      }
      return (6 | (1<<8));
    }
  }
  return 0;
}
# 56119 "sqlite3.c"
static int setSharedCacheTableLock(Btree *p, Pgno iTable, u8 eLock)
{

  BtShared *pBt = p->pBt;
  BtLock *pLock = 0;
  BtLock *pIter;

  ((void) (0));
  ((void) (0));
  ((void) (0));





  ((void) (0));



  ((void) (0));
  ((void) (0));


  for(pIter=pBt->pLock; pIter; pIter=pIter->pNext)
{

    if( pIter->iTable==iTable && pIter->pBtree==p )
{

      pLock = pIter;
      break;
    }
  }




  if( !pLock )
{

    pLock = (BtLock *)sqlite3MallocZero(sizeof(BtLock));
    if( !pLock )
{

      return 7;
    }
    pLock->iTable = iTable;
    pLock->pBtree = p;
    pLock->pNext = pBt->pLock;
    pBt->pLock = pLock;
  }





  ((void) (0));
  if( eLock>pLock->eLock )
{

    pLock->eLock = eLock;
  }

  return 0;
}
# 56183 "sqlite3.c"
static void clearAllSharedCacheTableLocks(Btree *p)
{

  BtShared *pBt = p->pBt;
  BtLock **ppIter = &pBt->pLock;

  ((void) (0));
  ((void) (0));
  ((void) (0));

  while( *ppIter )
{

    BtLock *pLock = *ppIter;
    ((void) (0));
    ((void) (0));
    if( pLock->pBtree==p )
{

      *ppIter = pLock->pNext;
      ((void) (0));
      if( pLock->iTable!=1 )
{

        sqlite3_free(pLock);
      }
    }else{
      ppIter = &pLock->pNext;
    }
  }

  ((void) (0));
  if( pBt->pWriter==p )
{

    pBt->pWriter = 0;
    pBt->btsFlags &= ~(0x0020|0x0040);
  }else if( pBt->nTransaction==2 )
{

# 56220 "sqlite3.c"
    pBt->btsFlags &= ~0x0040;
  }
}




static void downgradeAllSharedCacheTableLocks(Btree *p)
{

  BtShared *pBt = p->pBt;
  if( pBt->pWriter==p )
{

    BtLock *pLock;
    pBt->pWriter = 0;
    pBt->btsFlags &= ~(0x0020|0x0040);
    for(pLock=pBt->pLock; pLock; pLock=pLock->pNext)
{

      ((void) (0));
      pLock->eLock = 1;
    }
  }
}



static void releasePage(MemPage *pPage);
# 56269 "sqlite3.c"
static void invalidateAllOverflowCache(BtShared *pBt)
{

  BtCursor *p;
  ((void) (0));
  for(p=pBt->pCursor; p; p=p->pNext)
{

    (p->curFlags &= ~0x04);
  }
}
# 56291 "sqlite3.c"
static void invalidateIncrblobCursors(
  Btree *pBtree,
  i64 iRow,
  int isClearTable
)
{

  BtCursor *p;
  if( pBtree->hasIncrblobCur==0 ) return;
  ((void) (0));
  pBtree->hasIncrblobCur = 0;
  for(p=pBtree->pBt->pCursor; p; p=p->pNext)
{

    if( (p->curFlags & 0x10)!=0 )
{

      pBtree->hasIncrblobCur = 1;
      if( isClearTable || p->info.nKey==iRow )
{

        p->eState = 0;
      }
    }
  }
}
# 56350 "sqlite3.c"
static int btreeSetHasContent(BtShared *pBt, Pgno pgno)
{

  int rc = 0;
  if( !pBt->pHasContent )
{

    ((void) (0));
    pBt->pHasContent = sqlite3BitvecCreate(pBt->nPage);
    if( !pBt->pHasContent )
{

      rc = 7;
    }
  }
  if( rc==0 && pgno<=sqlite3BitvecSize(pBt->pHasContent) )
{

    rc = sqlite3BitvecSet(pBt->pHasContent, pgno);
  }
  return rc;
}
# 56372 "sqlite3.c"
static int btreeGetHasContent(BtShared *pBt, Pgno pgno)
{

  Bitvec *p = pBt->pHasContent;
  return (p && (pgno>sqlite3BitvecSize(p) || sqlite3BitvecTest(p, pgno)));
}





static void btreeClearHasContent(BtShared *pBt)
{

  sqlite3BitvecDestroy(pBt->pHasContent);
  pBt->pHasContent = 0;
}




static void btreeReleaseAllCursorPages(BtCursor *pCur)
{

  int i;
  for(i=0; i<=pCur->iPage; i++)
{

    releasePage(pCur->apPage[i]);
    pCur->apPage[i] = 0;
  }
  pCur->iPage = -1;
}
# 56411 "sqlite3.c"
static int saveCursorKey(BtCursor *pCur)
{

  int rc;
  ((void) (0));
  ((void) (0));
  ((void) (0));

  rc = sqlite3BtreeKeySize(pCur, &pCur->nKey);
  ((void) (0));






  if( 0==pCur->curIntKey )
{

    void *pKey = sqlite3Malloc( pCur->nKey );
    if( pKey )
{

      rc = sqlite3BtreeKey(pCur, 0, (int)pCur->nKey, pKey);
      if( rc==0 )
{

        pCur->pKey = pKey;
      }else{
        sqlite3_free(pKey);
      }
    }else{
      rc = 7;
    }
  }
  ((void) (0));
  return rc;
}
# 56449 "sqlite3.c"
static int saveCursorPosition(BtCursor *pCur)
{

  int rc;

  ((void) (0));
  ((void) (0));
  ((void) (0));

  if( pCur->eState==2 )
{

    pCur->eState = 1;
  }else{
    pCur->skipNext = 0;
  }

  rc = saveCursorKey(pCur);
  if( rc==0 )
{

    btreeReleaseAllCursorPages(pCur);
    pCur->eState = 3;
  }

  pCur->curFlags &= ~(0x02|0x04|0x08);
  return rc;
}


static int __attribute__((noinline)) saveCursorsOnList(BtCursor*,Pgno,BtCursor*);
# 56496 "sqlite3.c"
static int saveAllCursors(BtShared *pBt, Pgno iRoot, BtCursor *pExcept)
{

  BtCursor *p;
  ((void) (0));
  ((void) (0));
  for(p=pBt->pCursor; p; p=p->pNext)
{

    if( p!=pExcept && (0==iRoot || p->pgnoRoot==iRoot) ) break;
  }
  if( p ) return saveCursorsOnList(p, iRoot, pExcept);
  if( pExcept ) pExcept->curFlags &= ~0x20;
  return 0;
}






static int __attribute__((noinline)) saveCursorsOnList(
  BtCursor *p,
  Pgno iRoot,
  BtCursor *pExcept
)
{

  do{
    if( p!=pExcept && (0==iRoot || p->pgnoRoot==iRoot) )
{

      if( p->eState==1 || p->eState==2 )
{

        int rc = saveCursorPosition(p);
        if( 0!=rc )
{

          return rc;
        }
      }else{
        ;
        btreeReleaseAllCursorPages(p);
      }
    }
    p = p->pNext;
  }while( p );
  return 0;
}




static void sqlite3BtreeClearCursor(BtCursor *pCur)
{

  ((void) (0));
  sqlite3_free(pCur->pKey);
  pCur->pKey = 0;
  pCur->eState = 0;
}






static int btreeMoveto(
  BtCursor *pCur,
  const void *pKey,
  i64 nKey,
  int bias,
  int *pRes
)
{

  int rc;
  UnpackedRecord *pIdxKey;
  char aSpace[200];
  char *pFree = 0;

  if( pKey )
{

    ((void) (0));
    pIdxKey = sqlite3VdbeAllocUnpackedRecord(
        pCur->pKeyInfo, aSpace, sizeof(aSpace), &pFree
    );
    if( pIdxKey==0 ) return 7;
    sqlite3VdbeRecordUnpack(pCur->pKeyInfo, (int)nKey, pKey, pIdxKey);
    if( pIdxKey->nField==0 )
{

      sqlite3DbFree(pCur->pKeyInfo->db, pFree);
      return sqlite3CorruptError(56571);
    }
  }else{
    pIdxKey = 0;
  }
  rc = sqlite3BtreeMovetoUnpacked(pCur, pIdxKey, nKey, bias, pRes);
  if( pFree )
{

    sqlite3DbFree(pCur->pKeyInfo->db, pFree);
  }
  return rc;
}
# 56590 "sqlite3.c"
static int btreeRestoreCursorPosition(BtCursor *pCur)
{

  int rc;
  int skipNext;
  ((void) (0));
  ((void) (0));
  if( pCur->eState==4 )
{

    return pCur->skipNext;
  }
  pCur->eState = 0;
  rc = btreeMoveto(pCur, pCur->pKey, pCur->nKey, 0, &skipNext);
  if( rc==0 )
{

    sqlite3_free(pCur->pKey);
    pCur->pKey = 0;
    ((void) (0));
    pCur->skipNext |= skipNext;
    if( pCur->skipNext && pCur->eState==1 )
{

      pCur->eState = 2;
    }
  }
  return rc;
}
# 56629 "sqlite3.c"
static int sqlite3BtreeCursorHasMoved(BtCursor *pCur)
{

  return pCur->eState!=1;
}
# 56646 "sqlite3.c"
static int sqlite3BtreeCursorRestore(BtCursor *pCur, int *pDifferentRow)
{

  int rc;

  ((void) (0));
  ((void) (0));
  rc = (pCur->eState>=3 ? btreeRestoreCursorPosition(pCur) : 0);
  if( rc )
{

    *pDifferentRow = 1;
    return rc;
  }
  if( pCur->eState!=1 )
{

    *pDifferentRow = 1;
  }else{
    ((void) (0));
    *pDifferentRow = 0;
  }
  return 0;
}
# 56679 "sqlite3.c"
static void sqlite3BtreeCursorHintFlags(BtCursor *pCur, unsigned x)
{

  ((void) (0));
  pCur->hints = x;
}
# 56695 "sqlite3.c"
static Pgno ptrmapPageno(BtShared *pBt, Pgno pgno)
{

  int nPagesPerMapPage;
  Pgno iPtrMap, ret;
  ((void) (0));
  if( pgno<2 ) return 0;
  nPagesPerMapPage = (pBt->usableSize/5)+1;
  iPtrMap = (pgno-2)/nPagesPerMapPage;
  ret = (iPtrMap*nPagesPerMapPage) + 2;
  if( ret==((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) )
{

    ret++;
  }
  return ret;
}
# 56719 "sqlite3.c"
static void ptrmapPut(BtShared *pBt, Pgno key, u8 eType, Pgno parent, int *pRC)
{

  DbPage *pDbPage;
  u8 *pPtrmap;
  Pgno iPtrmap;
  int offset;
  int rc;

  if( *pRC ) return;

  ((void) (0));

  ((void) (0));

  ((void) (0));
  if( key==0 )
{

    *pRC = sqlite3CorruptError(56734);
    return;
  }
  iPtrmap = ptrmapPageno(pBt, key);
  rc = sqlite3PagerGet(pBt->pPager, iPtrmap, &pDbPage, 0);
  if( rc!=0 )
{

    *pRC = rc;
    return;
  }
  offset = (5*(key-iPtrmap-1));
  if( offset<0 )
{

    *pRC = sqlite3CorruptError(56745);
    goto ptrmap_exit;
  }
  ((void) (0));
  pPtrmap = (u8 *)sqlite3PagerGetData(pDbPage);

  if( eType!=pPtrmap[offset] || sqlite3Get4byte(&pPtrmap[offset+1])!=parent )
{

    ;
    *pRC= rc = sqlite3PagerWrite(pDbPage);
    if( rc==0 )
{

      pPtrmap[offset] = eType;
      sqlite3Put4byte(&pPtrmap[offset+1], parent);
    }
  }

ptrmap_exit:
  sqlite3PagerUnref(pDbPage);
}
# 56771 "sqlite3.c"
static int ptrmapGet(BtShared *pBt, Pgno key, u8 *pEType, Pgno *pPgno)
{

  DbPage *pDbPage;
  int iPtrmap;
  u8 *pPtrmap;
  int offset;
  int rc;

  ((void) (0));

  iPtrmap = ptrmapPageno(pBt, key);
  rc = sqlite3PagerGet(pBt->pPager, iPtrmap, &pDbPage, 0);
  if( rc!=0 )
{

    return rc;
  }
  pPtrmap = (u8 *)sqlite3PagerGetData(pDbPage);

  offset = (5*(key-iPtrmap-1));
  if( offset<0 )
{

    sqlite3PagerUnref(pDbPage);
    return sqlite3CorruptError(56790);
  }
  ((void) (0));
  ((void) (0));
  *pEType = pPtrmap[offset];
  if( pPgno ) *pPgno = sqlite3Get4byte(&pPtrmap[offset+1]);

  sqlite3PagerUnref(pDbPage);
  if( *pEType<1 || *pEType>5 ) return sqlite3CorruptError(56798);
  return 0;
}
# 56830 "sqlite3.c"
static __attribute__((noinline)) void btreeParseCellAdjustSizeForOverflow(
  MemPage *pPage,
  u8 *pCell,
  CellInfo *pInfo
)
{

# 56844 "sqlite3.c"
  int minLocal;
  int maxLocal;
  int surplus;

  minLocal = pPage->minLocal;
  maxLocal = pPage->maxLocal;
  surplus = minLocal + (pInfo->nPayload - minLocal)%(pPage->pBt->usableSize-4);
  ;
  ;
  if( surplus <= maxLocal )
{

    pInfo->nLocal = (u16)surplus;
  }else{
    pInfo->nLocal = (u16)minLocal;
  }
  pInfo->nSize = (u16)(&pInfo->pPayload[pInfo->nLocal] - pCell) + 4;
}
# 56875 "sqlite3.c"
static void btreeParseCellPtrNoPayload(
  MemPage *pPage,
  u8 *pCell,
  CellInfo *pInfo
)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));

  (void)(pPage);

  pInfo->nSize = 4 + sqlite3GetVarint(&pCell[4], (u64*)&pInfo->nKey);
  pInfo->nPayload = 0;
  pInfo->nLocal = 0;
  pInfo->pPayload = 0;
  return;
}
static void btreeParseCellPtr(
  MemPage *pPage,
  u8 *pCell,
  CellInfo *pInfo
)
{

  u8 *pIter;
  u32 nPayload;
  u64 iKey;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pIter = pCell;







  nPayload = *pIter;
  if( nPayload>=0x80 )
{

    u8 *pEnd = &pIter[8];
    nPayload &= 0x7f;
    do{
      nPayload = (nPayload<<7) | (*++pIter & 0x7f);
    }while( (*pIter)>=0x80 && pIter<pEnd );
  }
  pIter++;







  iKey = *pIter;
  if( iKey>=0x80 )
{

    u8 *pEnd = &pIter[7];
    iKey &= 0x7f;
    while(1)
{

      iKey = (iKey<<7) | (*++pIter & 0x7f);
      if( (*pIter)<0x80 ) break;
      if( pIter>=pEnd )
{

        iKey = (iKey<<8) | *++pIter;
        break;
      }
    }
  }
  pIter++;

  pInfo->nKey = *(i64*)&iKey;
  pInfo->nPayload = nPayload;
  pInfo->pPayload = pIter;
  ;
  ;
  if( nPayload<=pPage->maxLocal )
{




    pInfo->nSize = nPayload + (u16)(pIter - pCell);
    if( pInfo->nSize<4 ) pInfo->nSize = 4;
    pInfo->nLocal = (u16)nPayload;
  }else{
    btreeParseCellAdjustSizeForOverflow(pPage, pCell, pInfo);
  }
}
static void btreeParseCellPtrIndex(
  MemPage *pPage,
  u8 *pCell,
  CellInfo *pInfo
)
{

  u8 *pIter;
  u32 nPayload;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  pIter = pCell + pPage->childPtrSize;
  nPayload = *pIter;
  if( nPayload>=0x80 )
{

    u8 *pEnd = &pIter[8];
    nPayload &= 0x7f;
    do{
      nPayload = (nPayload<<7) | (*++pIter & 0x7f);
    }while( *(pIter)>=0x80 && pIter<pEnd );
  }
  pIter++;
  pInfo->nKey = nPayload;
  pInfo->nPayload = nPayload;
  pInfo->pPayload = pIter;
  ;
  ;
  if( nPayload<=pPage->maxLocal )
{




    pInfo->nSize = nPayload + (u16)(pIter - pCell);
    if( pInfo->nSize<4 ) pInfo->nSize = 4;
    pInfo->nLocal = (u16)nPayload;
  }else{
    btreeParseCellAdjustSizeForOverflow(pPage, pCell, pInfo);
  }
}
static void btreeParseCell(
  MemPage *pPage,
  int iCell,
  CellInfo *pInfo
)
{

  pPage->xParseCell(pPage, ((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(iCell)])))), pInfo);
}
# 57017 "sqlite3.c"
static u16 cellSizePtr(MemPage *pPage, u8 *pCell)
{

  u8 *pIter = pCell + pPage->childPtrSize;
  u8 *pEnd;
  u32 nSize;
# 57031 "sqlite3.c"
  nSize = *pIter;
  if( nSize>=0x80 )
{

    pEnd = &pIter[8];
    nSize &= 0x7f;
    do{
      nSize = (nSize<<7) | (*++pIter & 0x7f);
    }while( *(pIter)>=0x80 && pIter<pEnd );
  }
  pIter++;
  if( pPage->intKey )
{




    pEnd = &pIter[9];
    while( (*pIter++)&0x80 && pIter<pEnd );
  }
  ;
  ;
  if( nSize<=pPage->maxLocal )
{

    nSize += (u32)(pIter - pCell);
    if( nSize<4 ) nSize = 4;
  }else{
    int minLocal = pPage->minLocal;
    nSize = minLocal + (nSize - minLocal) % (pPage->pBt->usableSize - 4);
    ;
    ;
    if( nSize>pPage->maxLocal )
{

      nSize = minLocal;
    }
    nSize += 4 + (u16)(pIter - pCell);
  }
  ((void) (0));
  return (u16)nSize;
}
static u16 cellSizePtrNoPayload(MemPage *pPage, u8 *pCell)
{

  u8 *pIter = pCell + 4;
  u8 *pEnd;
# 57077 "sqlite3.c"
  (void)(pPage);


  ((void) (0));
  pEnd = pIter + 9;
  while( (*pIter++)&0x80 && pIter<pEnd );
  ((void) (0));
  return (u16)(pIter - pCell);
}
# 57102 "sqlite3.c"
static void ptrmapPutOvflPtr(MemPage *pPage, u8 *pCell, int *pRC)
{

  CellInfo info;
  if( *pRC ) return;
  ((void) (0));
  pPage->xParseCell(pPage, pCell, &info);
  if( info.nLocal<info.nPayload )
{

    Pgno ovfl = sqlite3Get4byte(&pCell[info.nSize-4]);
    ptrmapPut(pPage->pBt, ovfl, 3, pPage->pgno, pRC);
  }
}
# 57126 "sqlite3.c"
static int defragmentPage(MemPage *pPage)
{

  int i;
  int pc;
  int hdr;
  int size;
  int usableSize;
  int cellOffset;
  int cbrk;
  int nCell;
  unsigned char *data;
  unsigned char *temp;
  unsigned char *src;
  int iCellFirst;
  int iCellLast;


  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  temp = 0;
  src = data = pPage->aData;
  hdr = pPage->hdrOffset;
  cellOffset = pPage->cellOffset;
  nCell = pPage->nCell;
  ((void) (0));
  usableSize = pPage->pBt->usableSize;
  cbrk = usableSize;
  iCellFirst = cellOffset + 2*nCell;
  iCellLast = usableSize - 4;
  for(i=0; i<nCell; i++)
{

    u8 *pAddr;
    pAddr = &data[cellOffset + i*2];
    pc = ((pAddr)[0]<<8 | (pAddr)[1]);
    ;
    ;



    if( pc<iCellFirst || pc>iCellLast )
{

      return sqlite3CorruptError(57167);
    }
    ((void) (0));
    size = pPage->xCellSize(pPage, &src[pc]);
    cbrk -= size;
    if( cbrk<iCellFirst || pc+size>usableSize )
{

      return sqlite3CorruptError(57173);
    }
    ((void) (0));
    ;
    ;
    ((pAddr)[0] = (u8)((cbrk)>>8), (pAddr)[1] = (u8)(cbrk));
    if( temp==0 )
{

      int x;
      if( cbrk==pc ) continue;
      temp = sqlite3PagerTempSpace(pPage->pBt->pPager);
      x = ((&data[hdr+5])[0]<<8 | (&data[hdr+5])[1]);
      memcpy(&temp[x], &data[x], (cbrk+size) - x);
      src = temp;
    }
    memcpy(&data[cbrk], &src[pc], size);
  }
  ((void) (0));
  ((&data[hdr+5])[0] = (u8)((cbrk)>>8), (&data[hdr+5])[1] = (u8)(cbrk));
  data[hdr+1] = 0;
  data[hdr+2] = 0;
  data[hdr+7] = 0;
  memset(&data[iCellFirst], 0, cbrk-iCellFirst);
  ((void) (0));
  if( cbrk-iCellFirst!=pPage->nFree )
{

    return sqlite3CorruptError(57197);
  }
  return 0;
}
# 57216 "sqlite3.c"
static u8 *pageFindSlot(MemPage *pPg, int nByte, int *pRc)
{

  const int hdr = pPg->hdrOffset;
  u8 * const aData = pPg->aData;
  int iAddr = hdr + 1;
  int pc = ((&aData[iAddr])[0]<<8 | (&aData[iAddr])[1]);
  int x;
  int usableSize = pPg->pBt->usableSize;

  ((void) (0));
  do{
    int size;


    if( pc>usableSize-4 || pc<iAddr+4 )
{

      *pRc = sqlite3CorruptError(57230);
      return 0;
    }



    size = ((&aData[pc+2])[0]<<8 | (&aData[pc+2])[1]);
    if( (x = size - nByte)>=0 )
{

      ;
      ;
      if( pc < pPg->cellOffset+2*pPg->nCell || size+pc > usableSize )
{

        *pRc = sqlite3CorruptError(57241);
        return 0;
      }else if( x<4 )
{



        if( aData[hdr+7]>57 ) return 0;



        memcpy(&aData[iAddr], &aData[pc], 2);
        aData[hdr+7] += (u8)x;
      }else{


        ((&aData[pc+2])[0] = (u8)((x)>>8), (&aData[pc+2])[1] = (u8)(x));
      }
      return &aData[pc + x];
    }
    iAddr = pc;
    pc = ((&aData[pc])[0]<<8 | (&aData[pc])[1]);
  }while( pc );

  return 0;
}
# 57279 "sqlite3.c"
static int allocateSpace(MemPage *pPage, int nByte, int *pIdx)
{

  const int hdr = pPage->hdrOffset;
  u8 * const data = pPage->aData;
  int top;
  int rc = 0;
  int gap;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  ((void) (0));
  gap = pPage->cellOffset + 2*pPage->nCell;
  ((void) (0));





  top = ((&data[hdr+5])[0]<<8 | (&data[hdr+5])[1]);
  ((void) (0));
  if( gap>top )
{

    if( top==0 && pPage->pBt->usableSize==65536 )
{

      top = 65536;
    }else{
      return sqlite3CorruptError(57308);
    }
  }





  ;
  ;
  ;
  if( (data[hdr+2] || data[hdr+1]) && gap+2<=top )
{

    u8 *pSpace = pageFindSlot(pPage, nByte, &rc);
    if( pSpace )
{

      ((void) (0));
      *pIdx = (int)(pSpace - data);
      return 0;
    }else if( rc )
{

      return rc;
    }
  }




  ;
  if( gap+2+nByte>top )
{

    ((void) (0));
    rc = defragmentPage(pPage);
    if( rc ) return rc;
    top = (((((int)((&data[hdr+5])[0]<<8 | (&data[hdr+5])[1]))-1)&0xffff)+1);
    ((void) (0));
  }
# 57349 "sqlite3.c"
  top -= nByte;
  ((&data[hdr+5])[0] = (u8)((top)>>8), (&data[hdr+5])[1] = (u8)(top));
  ((void) (0));
  *pIdx = top;
  return 0;
}
# 57369 "sqlite3.c"
static int freeSpace(MemPage *pPage, u16 iStart, u16 iSize)
{

  u16 iPtr;
  u16 iFreeBlk;
  u8 hdr;
  u8 nFrag = 0;
  u16 iOrigSize = iSize;
  u32 iLast = pPage->pBt->usableSize-4;
  u32 iEnd = iStart + iSize;
  unsigned char *data = pPage->aData;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));



  if( pPage->pBt->btsFlags & 0x0004 )
{

    memset(&data[iStart], 0, iSize);
  }




  hdr = pPage->hdrOffset;
  iPtr = hdr + 1;
  if( data[iPtr+1]==0 && data[iPtr]==0 )
{

    iFreeBlk = 0;
  }else{
    while( (iFreeBlk = ((&data[iPtr])[0]<<8 | (&data[iPtr])[1]))>0 && iFreeBlk<iStart )
{

      if( iFreeBlk<iPtr+4 ) return sqlite3CorruptError(57402);
      iPtr = iFreeBlk;
    }
    if( iFreeBlk>iLast ) return sqlite3CorruptError(57405);
    ((void) (0));







    if( iFreeBlk && iEnd+3>=iFreeBlk )
{

      nFrag = iFreeBlk - iEnd;
      if( iEnd>iFreeBlk ) return sqlite3CorruptError(57416);
      iEnd = iFreeBlk + ((&data[iFreeBlk+2])[0]<<8 | (&data[iFreeBlk+2])[1]);
      if( iEnd > pPage->pBt->usableSize ) return sqlite3CorruptError(57418);
      iSize = iEnd - iStart;
      iFreeBlk = ((&data[iFreeBlk])[0]<<8 | (&data[iFreeBlk])[1]);
    }





    if( iPtr>hdr+1 )
{

      int iPtrEnd = iPtr + ((&data[iPtr+2])[0]<<8 | (&data[iPtr+2])[1]);
      if( iPtrEnd+3>=iStart )
{

        if( iPtrEnd>iStart ) return sqlite3CorruptError(57430);
        nFrag += iStart - iPtrEnd;
        iSize = iEnd - iPtr;
        iStart = iPtr;
      }
    }
    if( nFrag>data[hdr+7] ) return sqlite3CorruptError(57436);
    data[hdr+7] -= nFrag;
  }
  if( iStart==((&data[hdr+5])[0]<<8 | (&data[hdr+5])[1]) )
{




    if( iPtr!=hdr+1 ) return sqlite3CorruptError(57443);
    ((&data[hdr+1])[0] = (u8)((iFreeBlk)>>8), (&data[hdr+1])[1] = (u8)(iFreeBlk));
    ((&data[hdr+5])[0] = (u8)((iEnd)>>8), (&data[hdr+5])[1] = (u8)(iEnd));
  }else{

    ((&data[iPtr])[0] = (u8)((iStart)>>8), (&data[iPtr])[1] = (u8)(iStart));
    ((&data[iStart])[0] = (u8)((iFreeBlk)>>8), (&data[iStart])[1] = (u8)(iFreeBlk));
    ((&data[iStart+2])[0] = (u8)((iSize)>>8), (&data[iStart+2])[1] = (u8)(iSize));
  }
  pPage->nFree += iOrigSize;
  return 0;
}
# 57468 "sqlite3.c"
static int decodeFlags(MemPage *pPage, int flagByte)
{

  BtShared *pBt;

  ((void) (0));
  ((void) (0));
  pPage->leaf = (u8)(flagByte>>3); ((void) (0));
  flagByte &= ~0x08;
  pPage->childPtrSize = 4-4*pPage->leaf;
  pPage->xCellSize = cellSizePtr;
  pBt = pPage->pBt;
  if( flagByte==(0x04 | 0x01) )
{



    ((void) (0));


    ((void) (0));
    pPage->intKey = 1;
    if( pPage->leaf )
{

      pPage->intKeyLeaf = 1;
      pPage->xParseCell = btreeParseCellPtr;
    }else{
      pPage->intKeyLeaf = 0;
      pPage->xCellSize = cellSizePtrNoPayload;
      pPage->xParseCell = btreeParseCellPtrNoPayload;
    }
    pPage->maxLocal = pBt->maxLeaf;
    pPage->minLocal = pBt->minLeaf;
  }else if( flagByte==0x02 )
{



    ((void) (0));


    ((void) (0));
    pPage->intKey = 0;
    pPage->intKeyLeaf = 0;
    pPage->xParseCell = btreeParseCellPtrIndex;
    pPage->maxLocal = pBt->maxLocal;
    pPage->minLocal = pBt->minLocal;
  }else{


    return sqlite3CorruptError(57511);
  }
  pPage->max1bytePayload = pBt->max1bytePayload;
  return 0;
}
# 57526 "sqlite3.c"
static int btreeInitPage(MemPage *pPage)
{


  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  if( !pPage->isInit )
{

    u16 pc;
    u8 hdr;
    u8 *data;
    BtShared *pBt;
    int usableSize;
    u16 cellOffset;
    int nFree;
    int top;
    int iCellFirst;
    int iCellLast;

    pBt = pPage->pBt;

    hdr = pPage->hdrOffset;
    data = pPage->aData;


    if( decodeFlags(pPage, data[hdr]) ) return sqlite3CorruptError(57553);
    ((void) (0));
    pPage->maskPage = (u16)(pBt->pageSize - 1);
    pPage->nOverflow = 0;
    usableSize = pBt->usableSize;
    pPage->cellOffset = cellOffset = hdr + 8 + pPage->childPtrSize;
    pPage->aDataEnd = &data[usableSize];
    pPage->aCellIdx = &data[cellOffset];
    pPage->aDataOfst = &data[pPage->childPtrSize];



    top = (((((int)((&data[hdr+5])[0]<<8 | (&data[hdr+5])[1]))-1)&0xffff)+1);


    pPage->nCell = ((&data[hdr+3])[0]<<8 | (&data[hdr+3])[1]);
    if( pPage->nCell>((pBt->pageSize-8)/6) )
{


      return sqlite3CorruptError(57571);
    }
    ;




    ((void) (0));
# 57587 "sqlite3.c"
    iCellFirst = cellOffset + 2*pPage->nCell;
    iCellLast = usableSize - 4;
    if( pBt->db->flags & 0x10000000 )
{

      int i;
      int sz;

      if( !pPage->leaf ) iCellLast--;
      for(i=0; i<pPage->nCell; i++)
{

        pc = __builtin_bswap16(*(u16*)(&data[cellOffset+i*2]));
        ;
        ;
        if( pc<iCellFirst || pc>iCellLast )
{

          return sqlite3CorruptError(57599);
        }
        sz = pPage->xCellSize(pPage, &data[pc]);
        ;
        if( pc+sz>usableSize )
{

          return sqlite3CorruptError(57604);
        }
      }
      if( !pPage->leaf ) iCellLast++;
    }





    pc = ((&data[hdr+1])[0]<<8 | (&data[hdr+1])[1]);
    nFree = data[hdr+7] + top;
    while( pc>0 )
{

      u16 next, size;
      if( pc<iCellFirst || pc>iCellLast )
{






        return sqlite3CorruptError(57624);
      }
      next = ((&data[pc])[0]<<8 | (&data[pc])[1]);
      size = ((&data[pc+2])[0]<<8 | (&data[pc+2])[1]);
      if( (next>0 && next<=pc+size+3) || pc+size>usableSize )
{



        return sqlite3CorruptError(57631);
      }
      nFree = nFree + size;
      pc = next;
    }
# 57644 "sqlite3.c"
    if( nFree>usableSize )
{

      return sqlite3CorruptError(57645);
    }
    pPage->nFree = (u16)(nFree - iCellFirst);
    pPage->isInit = 1;
  }
  return 0;
}





static void zeroPage(MemPage *pPage, int flags)
{

  unsigned char *data = pPage->aData;
  BtShared *pBt = pPage->pBt;
  u8 hdr = pPage->hdrOffset;
  u16 first;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( pBt->btsFlags & 0x0004 )
{

    memset(&data[hdr], 0, pBt->usableSize - hdr);
  }
  data[hdr] = (char)flags;
  first = hdr + ((flags&0x08)==0 ? 12 : 8);
  memset(&data[hdr+1], 0, 4);
  data[hdr+7] = 0;
  ((&data[hdr+5])[0] = (u8)((pBt->usableSize)>>8), (&data[hdr+5])[1] = (u8)(pBt->usableSize));
  pPage->nFree = (u16)(pBt->usableSize - first);
  decodeFlags(pPage, flags);
  pPage->cellOffset = first;
  pPage->aDataEnd = &data[pBt->usableSize];
  pPage->aCellIdx = &data[first];
  pPage->aDataOfst = &data[pPage->childPtrSize];
  pPage->nOverflow = 0;
  ((void) (0));
  pPage->maskPage = (u16)(pBt->pageSize - 1);
  pPage->nCell = 0;
  pPage->isInit = 1;
}






static MemPage *btreePageFromDbPage(DbPage *pDbPage, Pgno pgno, BtShared *pBt)
{

  MemPage *pPage = (MemPage*)sqlite3PagerGetExtra(pDbPage);
  if( pgno!=pPage->pgno )
{

    pPage->aData = sqlite3PagerGetData(pDbPage);
    pPage->pDbPage = pDbPage;
    pPage->pBt = pBt;
    pPage->pgno = pgno;
    pPage->hdrOffset = pgno==1 ? 100 : 0;
  }
  ((void) (0));
  return pPage;
}
# 57718 "sqlite3.c"
static int btreeGetPage(
  BtShared *pBt,
  Pgno pgno,
  MemPage **ppPage,
  int flags
)
{

  int rc;
  DbPage *pDbPage;

  ((void) (0));
  ((void) (0));
  rc = sqlite3PagerGet(pBt->pPager, pgno, (DbPage**)&pDbPage, flags);
  if( rc ) return rc;
  *ppPage = btreePageFromDbPage(pDbPage, pgno, pBt);
  return 0;
}






static MemPage *btreePageLookup(BtShared *pBt, Pgno pgno)
{

  DbPage *pDbPage;
  ((void) (0));
  pDbPage = sqlite3PagerLookup(pBt->pPager, pgno);
  if( pDbPage )
{

    return btreePageFromDbPage(pDbPage, pgno, pBt);
  }
  return 0;
}





static Pgno btreePagecount(BtShared *pBt)
{

  return pBt->nPage;
}
static u32 sqlite3BtreeLastPage(Btree *p)
{

  ((void) (0));
  ((void) (0));
  return btreePagecount(p->pBt);
}
# 57776 "sqlite3.c"
static int getAndInitPage(
  BtShared *pBt,
  Pgno pgno,
  MemPage **ppPage,
  BtCursor *pCur,
  int bReadOnly
)
{

  int rc;
  DbPage *pDbPage;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  if( pgno>btreePagecount(pBt) )
{

    rc = sqlite3CorruptError(57791);
    goto getAndInitPage_error;
  }
  rc = sqlite3PagerGet(pBt->pPager, pgno, (DbPage**)&pDbPage, bReadOnly);
  if( rc )
{

    goto getAndInitPage_error;
  }
  *ppPage = (MemPage*)sqlite3PagerGetExtra(pDbPage);
  if( (*ppPage)->isInit==0 )
{

    btreePageFromDbPage(pDbPage, pgno, pBt);
    rc = btreeInitPage(*ppPage);
    if( rc!=0 )
{

      releasePage(*ppPage);
      goto getAndInitPage_error;
    }
  }
  ((void) (0));
  ((void) (0));



  if( pCur && ((*ppPage)->nCell<1 || (*ppPage)->intKey!=pCur->curIntKey) )
{

    rc = sqlite3CorruptError(57813);
    releasePage(*ppPage);
    goto getAndInitPage_error;
  }
  return 0;

getAndInitPage_error:
  if( pCur ) pCur->iPage--;
  ;
  ((void) (0));
  return rc;
}





static void releasePageNotNull(MemPage *pPage)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  sqlite3PagerUnrefNotNull(pPage->pDbPage);
}
static void releasePage(MemPage *pPage)
{

  if( pPage ) releasePageNotNull(pPage);
}
# 57852 "sqlite3.c"
static int btreeGetUnusedPage(
  BtShared *pBt,
  Pgno pgno,
  MemPage **ppPage,
  int flags
)
{

  int rc = btreeGetPage(pBt, pgno, ppPage, flags);
  if( rc==0 )
{

    if( sqlite3PagerPageRefcount((*ppPage)->pDbPage)>1 )
{

      releasePage(*ppPage);
      *ppPage = 0;
      return sqlite3CorruptError(57863);
    }
    (*ppPage)->isInit = 0;
  }else{
    *ppPage = 0;
  }
  return rc;
}
# 57881 "sqlite3.c"
static void pageReinit(DbPage *pData)
{

  MemPage *pPage;
  pPage = (MemPage *)sqlite3PagerGetExtra(pData);
  ((void) (0));
  if( pPage->isInit )
{

    ((void) (0));
    pPage->isInit = 0;
    if( sqlite3PagerPageRefcount(pData)>1 )
{







      btreeInitPage(pPage);
    }
  }
}




static int btreeInvokeBusyHandler(void *pArg)
{

  BtShared *pBt = (BtShared*)pArg;
  ((void) (0));
  ((void) (0));
  return sqlite3InvokeBusyHandler(&pBt->db->busyHandler);
}
# 57931 "sqlite3.c"
static int sqlite3BtreeOpen(
  sqlite3_vfs *pVfs,
  const char *zFilename,
  sqlite3 *db,
  Btree **ppBtree,
  int flags,
  int vfsFlags
)
{

  BtShared *pBt = 0;
  Btree *p;
  sqlite3_mutex *mutexOpen = 0;
  int rc = 0;
  u8 nReserve;
  unsigned char zDbHeader[100];


  const int isTempDb = zFilename==0 || zFilename[0]==0;







  const int isMemdb = (zFilename && strcmp(zFilename, ":memory:")==0)
                       || (isTempDb && sqlite3TempInMemory(db))
                       || (vfsFlags & 0x00000080)!=0;


  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));


  ((void) (0));


  ((void) (0));

  if( isMemdb )
{

    flags |= 2;
  }
  if( (vfsFlags & 0x00000100)!=0 && (isMemdb || isTempDb) )
{

    vfsFlags = (vfsFlags & ~0x00000100) | 0x00000200;
  }
  p = sqlite3MallocZero(sizeof(Btree));
  if( !p )
{

    return 7;
  }
  p->inTrans = 0;
  p->db = db;

  p->lock.pBtree = p;
  p->lock.iTable = 1;







  if( isTempDb==0 && (isMemdb==0 || (vfsFlags&0x00000040)!=0) )
{

    if( vfsFlags & 0x00020000 )
{

      int nFilename = sqlite3Strlen30(zFilename)+1;
      int nFullPathname = pVfs->mxPathname+1;
      char *zFullPathname = sqlite3Malloc(((nFullPathname)>(nFilename)?(nFullPathname):(nFilename)));
      sqlite3_mutex *mutexShared;

      p->sharable = 1;
      if( !zFullPathname )
{

        sqlite3_free(p);
        return 7;
      }
      if( isMemdb )
{

        memcpy(zFullPathname, zFilename, nFilename);
      }else{
        rc = sqlite3OsFullPathname(pVfs, zFilename,
                                   nFullPathname, zFullPathname);
        if( rc )
{

          sqlite3_free(zFullPathname);
          sqlite3_free(p);
          return rc;
        }
      }

      mutexOpen = sqlite3MutexAlloc(4);
      sqlite3_mutex_enter(mutexOpen);
      mutexShared = sqlite3MutexAlloc(2);
      sqlite3_mutex_enter(mutexShared);

      for(pBt=sqlite3SharedCacheList; pBt; pBt=pBt->pNext)
{

        ((void) (0));
        if( 0==strcmp(zFullPathname, sqlite3PagerFilename(pBt->pPager, 0))
                 && sqlite3PagerVfs(pBt->pPager)==pVfs )
{

          int iDb;
          for(iDb=db->nDb-1; iDb>=0; iDb--)
{

            Btree *pExisting = db->aDb[iDb].pBt;
            if( pExisting && pExisting->pBt==pBt )
{

              sqlite3_mutex_leave(mutexShared);
              sqlite3_mutex_leave(mutexOpen);
              sqlite3_free(zFullPathname);
              sqlite3_free(p);
              return 19;
            }
          }
          p->pBt = pBt;
          pBt->nRef++;
          break;
        }
      }
      sqlite3_mutex_leave(mutexShared);
      sqlite3_free(zFullPathname);
    }
# 58055 "sqlite3.c"
  }

  if( pBt==0 )
{






    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));

    pBt = sqlite3MallocZero( sizeof(*pBt) );
    if( pBt==0 )
{

      rc = 7;
      goto btree_open_out;
    }
    rc = sqlite3PagerOpen(pVfs, &pBt->pPager, zFilename,
                          sizeof(MemPage), flags, vfsFlags, pageReinit);
    if( rc==0 )
{

      sqlite3PagerSetMmapLimit(pBt->pPager, db->szMmap);
      rc = sqlite3PagerReadFileheader(pBt->pPager,sizeof(zDbHeader),zDbHeader);
    }
    if( rc!=0 )
{

      goto btree_open_out;
    }
    pBt->openFlags = (u8)flags;
    pBt->db = db;
    sqlite3PagerSetBusyhandler(pBt->pPager, btreeInvokeBusyHandler, pBt);
    p->pBt = pBt;

    pBt->pCursor = 0;
    pBt->pPage1 = 0;
    if( sqlite3PagerIsreadonly(pBt->pPager) ) pBt->btsFlags |= 0x0001;






    pBt->pageSize = (zDbHeader[16]<<8) | (zDbHeader[17]<<16);
    if( pBt->pageSize<512 || pBt->pageSize>65536
         || ((pBt->pageSize-1)&pBt->pageSize)!=0 )
{

      pBt->pageSize = 0;







      if( zFilename && !isMemdb )
{

        pBt->autoVacuum = (0 ? 1 : 0);
        pBt->incrVacuum = (0==2 ? 1 : 0);
      }

      nReserve = 0;
    }else{



      nReserve = zDbHeader[20];
      pBt->btsFlags |= 0x0002;

      pBt->autoVacuum = (sqlite3Get4byte(&zDbHeader[36 + 4*4])?1:0);
      pBt->incrVacuum = (sqlite3Get4byte(&zDbHeader[36 + 7*4])?1:0);

    }
    rc = sqlite3PagerSetPagesize(pBt->pPager, &pBt->pageSize, nReserve);
    if( rc ) goto btree_open_out;
    pBt->usableSize = pBt->pageSize - nReserve;
    ((void) (0));




    if( p->sharable )
{

      sqlite3_mutex *mutexShared;
      pBt->nRef = 1;
      mutexShared = sqlite3MutexAlloc(2);
      if( 1 && sqlite3Config.bCoreMutex )
{

        pBt->mutex = sqlite3MutexAlloc(0);
        if( pBt->mutex==0 )
{

          rc = 7;
          goto btree_open_out;
        }
      }
      sqlite3_mutex_enter(mutexShared);
      pBt->pNext = sqlite3SharedCacheList;
      sqlite3SharedCacheList = pBt;
      sqlite3_mutex_leave(mutexShared);
    }

  }






  if( p->sharable )
{

    int i;
    Btree *pSib;
    for(i=0; i<db->nDb; i++)
{

      if( (pSib = db->aDb[i].pBt)!=0 && pSib->sharable )
{

        while( pSib->pPrev )
{
 pSib = pSib->pPrev; }
        if( (uptr)p->pBt<(uptr)pSib->pBt )
{

          p->pNext = pSib;
          p->pPrev = 0;
          pSib->pPrev = p;
        }else{
          while( pSib->pNext && (uptr)pSib->pNext->pBt<(uptr)p->pBt )
{

            pSib = pSib->pNext;
          }
          p->pNext = pSib->pNext;
          p->pPrev = pSib;
          if( p->pNext )
{

            p->pNext->pPrev = p;
          }
          pSib->pNext = p;
        }
        break;
      }
    }
  }

  *ppBtree = p;

btree_open_out:
  if( rc!=0 )
{

    if( pBt && pBt->pPager )
{

      sqlite3PagerClose(pBt->pPager);
    }
    sqlite3_free(pBt);
    sqlite3_free(p);
    *ppBtree = 0;
  }else{




    if( sqlite3BtreeSchema(p, 0, 0)==0 )
{

      sqlite3PagerSetCachesize(p->pBt->pPager, -2000);
    }
  }
  if( mutexOpen )
{

    ((void) (0));
    sqlite3_mutex_leave(mutexOpen);
  }
  return rc;
}







static int removeFromSharingList(BtShared *pBt)
{


  sqlite3_mutex *pMaster;
  BtShared *pList;
  int removed = 0;

  ((void) (0));
  pMaster = sqlite3MutexAlloc(2);
  sqlite3_mutex_enter(pMaster);
  pBt->nRef--;
  if( pBt->nRef<=0 )
{

    if( sqlite3SharedCacheList==pBt )
{

      sqlite3SharedCacheList = pBt->pNext;
    }else{
      pList = sqlite3SharedCacheList;
      while( (pList) && pList->pNext!=pBt )
{

        pList=pList->pNext;
      }
      if( (pList) )
{

        pList->pNext = pBt->pNext;
      }
    }
    if( 1 )
{

      sqlite3_mutex_free(pBt->mutex);
    }
    removed = 1;
  }
  sqlite3_mutex_leave(pMaster);
  return removed;



}






static void allocateTempSpace(BtShared *pBt)
{

  if( !pBt->pTmpSpace )
{

    pBt->pTmpSpace = sqlite3PageMalloc( pBt->pageSize );
# 58273 "sqlite3.c"
    if( pBt->pTmpSpace )
{

      memset(pBt->pTmpSpace, 0, 8);
      pBt->pTmpSpace += 4;
    }
  }
}




static void freeTempSpace(BtShared *pBt)
{

  if( pBt->pTmpSpace )
{

    pBt->pTmpSpace -= 4;
    sqlite3PageFree(pBt->pTmpSpace);
    pBt->pTmpSpace = 0;
  }
}




static int sqlite3BtreeClose(Btree *p)
{

  BtShared *pBt = p->pBt;
  BtCursor *pCur;


  ((void) (0));
  sqlite3BtreeEnter(p);
  pCur = pBt->pCursor;
  while( pCur )
{

    BtCursor *pTmp = pCur;
    pCur = pCur->pNext;
    if( pTmp->pBtree==p )
{

      sqlite3BtreeCloseCursor(pTmp);
    }
  }





  sqlite3BtreeRollback(p, 0, 0);
  sqlite3BtreeLeave(p);





  ((void) (0));
  if( !p->sharable || removeFromSharingList(pBt) )
{






    ((void) (0));
    sqlite3PagerClose(pBt->pPager);
    if( pBt->xFreeSchema && pBt->pSchema )
{

      pBt->xFreeSchema(pBt->pSchema);
    }
    sqlite3DbFree(0, pBt->pSchema);
    freeTempSpace(pBt);
    sqlite3_free(pBt);
  }


  ((void) (0));
  ((void) (0));
  if( p->pPrev ) p->pPrev->pNext = p->pNext;
  if( p->pNext ) p->pNext->pPrev = p->pPrev;


  sqlite3_free(p);
  return 0;
}
# 58356 "sqlite3.c"
static int sqlite3BtreeSetCacheSize(Btree *p, int mxPage)
{

  BtShared *pBt = p->pBt;
  ((void) (0));
  sqlite3BtreeEnter(p);
  sqlite3PagerSetCachesize(pBt->pPager, mxPage);
  sqlite3BtreeLeave(p);
  return 0;
}
# 58375 "sqlite3.c"
static int sqlite3BtreeSetSpillSize(Btree *p, int mxPage)
{

  BtShared *pBt = p->pBt;
  int res;
  ((void) (0));
  sqlite3BtreeEnter(p);
  res = sqlite3PagerSetSpillsize(pBt->pPager, mxPage);
  sqlite3BtreeLeave(p);
  return res;
}






static int sqlite3BtreeSetMmapLimit(Btree *p, sqlite3_int64 szMmap)
{

  BtShared *pBt = p->pBt;
  ((void) (0));
  sqlite3BtreeEnter(p);
  sqlite3PagerSetMmapLimit(pBt->pPager, szMmap);
  sqlite3BtreeLeave(p);
  return 0;
}
# 58409 "sqlite3.c"
static int sqlite3BtreeSetPagerFlags(
  Btree *p,
  unsigned pgFlags
)
{

  BtShared *pBt = p->pBt;
  ((void) (0));
  sqlite3BtreeEnter(p);
  sqlite3PagerSetFlags(pBt->pPager, pgFlags);
  sqlite3BtreeLeave(p);
  return 0;
}
# 58442 "sqlite3.c"
static int sqlite3BtreeSetPageSize(Btree *p, int pageSize, int nReserve, int iFix)
{

  int rc = 0;
  BtShared *pBt = p->pBt;
  ((void) (0));
  sqlite3BtreeEnter(p);



  if( pBt->btsFlags & 0x0002 )
{

    sqlite3BtreeLeave(p);
    return 8;
  }
  if( nReserve<0 )
{

    nReserve = pBt->pageSize - pBt->usableSize;
  }
  ((void) (0));
  if( pageSize>=512 && pageSize<=65536 &&
        ((pageSize-1)&pageSize)==0 )
{

    ((void) (0));
    ((void) (0));
    pBt->pageSize = (u32)pageSize;
    freeTempSpace(pBt);
  }
  rc = sqlite3PagerSetPagesize(pBt->pPager, &pBt->pageSize, nReserve);
  pBt->usableSize = pBt->pageSize - (u16)nReserve;
  if( iFix ) pBt->btsFlags |= 0x0002;
  sqlite3BtreeLeave(p);
  return rc;
}




static int sqlite3BtreeGetPageSize(Btree *p)
{

  return p->pBt->pageSize;
}
# 58490 "sqlite3.c"
static int sqlite3BtreeGetReserveNoMutex(Btree *p)
{

  int n;
  ((void) (0));
  n = p->pBt->pageSize - p->pBt->usableSize;
  return n;
}
# 58506 "sqlite3.c"
static int sqlite3BtreeGetOptimalReserve(Btree *p)
{

  int n;
  sqlite3BtreeEnter(p);
  n = sqlite3BtreeGetReserveNoMutex(p);



  sqlite3BtreeLeave(p);
  return n;
}







static int sqlite3BtreeMaxPageCount(Btree *p, int mxPage)
{

  int n;
  sqlite3BtreeEnter(p);
  n = sqlite3PagerMaxPageCount(p->pBt->pPager, mxPage);
  sqlite3BtreeLeave(p);
  return n;
}






static int sqlite3BtreeSecureDelete(Btree *p, int newFlag)
{

  int b;
  if( p==0 ) return 0;
  sqlite3BtreeEnter(p);
  if( newFlag>=0 )
{

    p->pBt->btsFlags &= ~0x0004;
    if( newFlag ) p->pBt->btsFlags |= 0x0004;
  }
  b = (p->pBt->btsFlags & 0x0004)!=0;
  sqlite3BtreeLeave(p);
  return b;
}







static int sqlite3BtreeSetAutoVacuum(Btree *p, int autoVacuum)
{




  BtShared *pBt = p->pBt;
  int rc = 0;
  u8 av = (u8)autoVacuum;

  sqlite3BtreeEnter(p);
  if( (pBt->btsFlags & 0x0002)!=0 && (av ?1:0)!=pBt->autoVacuum )
{

    rc = 8;
  }else{
    pBt->autoVacuum = av ?1:0;
    pBt->incrVacuum = av==2 ?1:0;
  }
  sqlite3BtreeLeave(p);
  return rc;

}





static int sqlite3BtreeGetAutoVacuum(Btree *p)
{




  int rc;
  sqlite3BtreeEnter(p);
  rc = (
    (!p->pBt->autoVacuum)?0:
    (!p->pBt->incrVacuum)?1:
    2
  );
  sqlite3BtreeLeave(p);
  return rc;

}
# 58605 "sqlite3.c"
static int lockBtree(BtShared *pBt)
{

  int rc;
  MemPage *pPage1;
  int nPage;
  int nPageFile = 0;
  int nPageHeader;

  ((void) (0));
  ((void) (0));
  rc = sqlite3PagerSharedLock(pBt->pPager);
  if( rc!=0 ) return rc;
  rc = btreeGetPage(pBt, 1, &pPage1, 0);
  if( rc!=0 ) return rc;




  nPage = nPageHeader = sqlite3Get4byte(28+(u8*)pPage1->aData);
  sqlite3PagerPagecount(pBt->pPager, &nPageFile);
  if( nPage==0 || memcmp(24+(u8*)pPage1->aData, 92+(u8*)pPage1->aData,4)!=0 )
{

    nPage = nPageFile;
  }
  if( nPage>0 )
{

    u32 pageSize;
    u32 usableSize;
    u8 *page1 = pPage1->aData;
    rc = 26;



    if( memcmp(page1, zMagicHeader, 16)!=0 )
{

      goto page1_init_failed;
    }
# 58647 "sqlite3.c"
    if( page1[18]>2 )
{

      pBt->btsFlags |= 0x0001;
    }
    if( page1[19]>2 )
{

      goto page1_init_failed;
    }
# 58662 "sqlite3.c"
    if( page1[19]==2 && (pBt->btsFlags & 0x0010)==0 )
{

      int isOpen = 0;
      rc = sqlite3PagerOpenWal(pBt->pPager, &isOpen);
      if( rc!=0 )
{

        goto page1_init_failed;
      }else{
# 58682 "sqlite3.c"
        if( isOpen==0 )
{

          releasePage(pPage1);
          return 0;
        }
      }
      rc = 26;
    }
# 58697 "sqlite3.c"
    if( memcmp(&page1[21], "\100\040\040",3)!=0 )
{

      goto page1_init_failed;
    }



    pageSize = (page1[16]<<8) | (page1[17]<<16);


    if( ((pageSize-1)&pageSize)!=0
     || pageSize>65536
     || pageSize<=256
    )
{

      goto page1_init_failed;
    }
    ((void) (0));







    usableSize = pageSize - page1[20];
    if( (u32)pageSize!=pBt->pageSize )
{







      releasePage(pPage1);
      pBt->usableSize = usableSize;
      pBt->pageSize = pageSize;
      freeTempSpace(pBt);
      rc = sqlite3PagerSetPagesize(pBt->pPager, &pBt->pageSize,
                                   pageSize-usableSize);
      return rc;
    }
    if( (pBt->db->flags & 0x00010000)==0 && nPage>nPageFile )
{

      rc = sqlite3CorruptError(58737);
      goto page1_init_failed;
    }



    if( usableSize<480 )
{

      goto page1_init_failed;
    }
    pBt->pageSize = pageSize;
    pBt->usableSize = usableSize;

    pBt->autoVacuum = (sqlite3Get4byte(&page1[36 + 4*4])?1:0);
    pBt->incrVacuum = (sqlite3Get4byte(&page1[36 + 7*4])?1:0);

  }
# 58767 "sqlite3.c"
  pBt->maxLocal = (u16)((pBt->usableSize-12)*64/255 - 23);
  pBt->minLocal = (u16)((pBt->usableSize-12)*32/255 - 23);
  pBt->maxLeaf = (u16)(pBt->usableSize - 35);
  pBt->minLeaf = (u16)((pBt->usableSize-12)*32/255 - 23);
  if( pBt->maxLocal>127 )
{

    pBt->max1bytePayload = 127;
  }else{
    pBt->max1bytePayload = (u8)pBt->maxLocal;
  }
  ((void) (0));
  pBt->pPage1 = pPage1;
  pBt->nPage = nPage;
  return 0;

page1_init_failed:
  releasePage(pPage1);
  pBt->pPage1 = 0;
  return rc;
}
# 58819 "sqlite3.c"
static void unlockBtreeIfUnused(BtShared *pBt)
{

  ((void) (0));
  ((void) (0));
  if( pBt->inTransaction==0 && pBt->pPage1!=0 )
{

    MemPage *pPage1 = pBt->pPage1;
    ((void) (0));
    ((void) (0));
    pBt->pPage1 = 0;
    releasePageNotNull(pPage1);
  }
}






static int newDatabase(BtShared *pBt)
{

  MemPage *pP1;
  unsigned char *data;
  int rc;

  ((void) (0));
  if( pBt->nPage>0 )
{

    return 0;
  }
  pP1 = pBt->pPage1;
  ((void) (0));
  data = pP1->aData;
  rc = sqlite3PagerWrite(pP1->pDbPage);
  if( rc ) return rc;
  memcpy(data, zMagicHeader, sizeof(zMagicHeader));
  ((void) (0));
  data[16] = (u8)((pBt->pageSize>>8)&0xff);
  data[17] = (u8)((pBt->pageSize>>16)&0xff);
  data[18] = 1;
  data[19] = 1;
  ((void) (0));
  data[20] = (u8)(pBt->pageSize - pBt->usableSize);
  data[21] = 64;
  data[22] = 32;
  data[23] = 32;
  memset(&data[24], 0, 100-24);
  zeroPage(pP1, 0x01|0x08|0x04 );
  pBt->btsFlags |= 0x0002;

  ((void) (0));
  ((void) (0));
  sqlite3Put4byte(&data[36 + 4*4], pBt->autoVacuum);
  sqlite3Put4byte(&data[36 + 7*4], pBt->incrVacuum);

  pBt->nPage = 1;
  data[31] = 1;
  return 0;
}






static int sqlite3BtreeNewDb(Btree *p)
{

  int rc;
  sqlite3BtreeEnter(p);
  p->pBt->nPage = 0;
  rc = newDatabase(p->pBt);
  sqlite3BtreeLeave(p);
  return rc;
}
# 58924 "sqlite3.c"
static int sqlite3BtreeBeginTrans(Btree *p, int wrflag)
{

  BtShared *pBt = p->pBt;
  int rc = 0;

  sqlite3BtreeEnter(p);
  ((void) (0)); ((void) (0));;





  if( p->inTrans==2 || (p->inTrans==1 && !wrflag) )
{

    goto trans_begun;
  }
  ((void) (0));


  if( (pBt->btsFlags & 0x0001)!=0 && wrflag )
{

    rc = 8;
    goto trans_begun;
  }


  {
    sqlite3 *pBlock = 0;




    if( (wrflag && pBt->inTransaction==2)
     || (pBt->btsFlags & 0x0040)!=0
    )
{

      pBlock = pBt->pWriter->db;
    }else if( wrflag>1 )
{

      BtLock *pIter;
      for(pIter=pBt->pLock; pIter; pIter=pIter->pNext)
{

        if( pIter->pBtree!=p )
{

          pBlock = pIter->pBtree->db;
          break;
        }
      }
    }
    if( pBlock )
{

      ;
      rc = (6 | (1<<8));
      goto trans_begun;
    }
  }





  rc = querySharedCacheTableLock(p, 1, 1);
  if( 0!=rc ) goto trans_begun;

  pBt->btsFlags &= ~0x0008;
  if( pBt->nPage==0 ) pBt->btsFlags |= 0x0008;
  do {







    while( pBt->pPage1==0 && 0==(rc = lockBtree(pBt)) );

    if( rc==0 && wrflag )
{

      if( (pBt->btsFlags & 0x0001)!=0 )
{

        rc = 8;
      }else{
        rc = sqlite3PagerBegin(pBt->pPager,wrflag>1,sqlite3TempInMemory(p->db));
        if( rc==0 )
{

          rc = newDatabase(pBt);
        }
      }
    }

    if( rc!=0 )
{

      unlockBtreeIfUnused(pBt);
    }
  }while( (rc&0xFF)==5 && pBt->inTransaction==0 &&
          btreeInvokeBusyHandler(pBt) );

  if( rc==0 )
{

    if( p->inTrans==0 )
{

      pBt->nTransaction++;

      if( p->sharable )
{

        ((void) (0));
        p->lock.eLock = 1;
        p->lock.pNext = pBt->pLock;
        pBt->pLock = &p->lock;
      }

    }
    p->inTrans = (wrflag?2:1);
    if( p->inTrans>pBt->inTransaction )
{

      pBt->inTransaction = p->inTrans;
    }
    if( wrflag )
{

      MemPage *pPage1 = pBt->pPage1;

      ((void) (0));
      pBt->pWriter = p;
      pBt->btsFlags &= ~0x0020;
      if( wrflag>1 ) pBt->btsFlags |= 0x0020;
# 59040 "sqlite3.c"
      if( pBt->nPage!=sqlite3Get4byte(&pPage1->aData[28]) )
{

        rc = sqlite3PagerWrite(pPage1->pDbPage);
        if( rc==0 )
{

          sqlite3Put4byte(&pPage1->aData[28], pBt->nPage);
        }
      }
    }
  }


trans_begun:
  if( rc==0 && wrflag )
{





    rc = sqlite3PagerOpenSavepoint(pBt->pPager, p->db->nSavepoint);
  }

  ((void) (0)); ((void) (0));;
  sqlite3BtreeLeave(p);
  return rc;
}
# 59071 "sqlite3.c"
static int setChildPtrmaps(MemPage *pPage)
{

  int i;
  int nCell;
  int rc;
  BtShared *pBt = pPage->pBt;
  u8 isInitOrig = pPage->isInit;
  Pgno pgno = pPage->pgno;

  ((void) (0));
  rc = btreeInitPage(pPage);
  if( rc!=0 )
{

    goto set_child_ptrmaps_out;
  }
  nCell = pPage->nCell;

  for(i=0; i<nCell; i++)
{

    u8 *pCell = ((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(i)]))));

    ptrmapPutOvflPtr(pPage, pCell, &rc);

    if( !pPage->leaf )
{

      Pgno childPgno = sqlite3Get4byte(pCell);
      ptrmapPut(pBt, childPgno, 5, pgno, &rc);
    }
  }

  if( !pPage->leaf )
{

    Pgno childPgno = sqlite3Get4byte(&pPage->aData[pPage->hdrOffset+8]);
    ptrmapPut(pBt, childPgno, 5, pgno, &rc);
  }

set_child_ptrmaps_out:
  pPage->isInit = isInitOrig;
  return rc;
}
# 59121 "sqlite3.c"
static int modifyPagePointer(MemPage *pPage, Pgno iFrom, Pgno iTo, u8 eType)
{

  ((void) (0));
  ((void) (0));
  if( eType==4 )
{


    if( sqlite3Get4byte(pPage->aData)!=iFrom )
{

      return sqlite3CorruptError(59127);
    }
    sqlite3Put4byte(pPage->aData, iTo);
  }else{
    u8 isInitOrig = pPage->isInit;
    int i;
    int nCell;
    int rc;

    rc = btreeInitPage(pPage);
    if( rc ) return rc;
    nCell = pPage->nCell;

    for(i=0; i<nCell; i++)
{

      u8 *pCell = ((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(i)]))));
      if( eType==3 )
{

        CellInfo info;
        pPage->xParseCell(pPage, pCell, &info);
        if( info.nLocal<info.nPayload
         && pCell+info.nSize-1<=pPage->aData+pPage->maskPage
         && iFrom==sqlite3Get4byte(pCell+info.nSize-4)
        )
{

          sqlite3Put4byte(pCell+info.nSize-4, iTo);
          break;
        }
      }else{
        if( sqlite3Get4byte(pCell)==iFrom )
{

          sqlite3Put4byte(pCell, iTo);
          break;
        }
      }
    }

    if( i==nCell )
{

      if( eType!=5 ||
          sqlite3Get4byte(&pPage->aData[pPage->hdrOffset+8])!=iFrom )
{

        return sqlite3CorruptError(59163);
      }
      sqlite3Put4byte(&pPage->aData[pPage->hdrOffset+8], iTo);
    }

    pPage->isInit = isInitOrig;
  }
  return 0;
}
# 59183 "sqlite3.c"
static int relocatePage(
  BtShared *pBt,
  MemPage *pDbPage,
  u8 eType,
  Pgno iPtrPage,
  Pgno iFreePage,
  int isCommit
)
{

  MemPage *pPtrPage;
  Pgno iDbPage = pDbPage->pgno;
  Pager *pPager = pBt->pPager;
  int rc;

  ((void) (0))
                                                     ;
  ((void) (0));
  ((void) (0));


 
                                           ;
  rc = sqlite3PagerMovepage(pPager, pDbPage->pDbPage, iFreePage, isCommit);
  if( rc!=0 )
{

    return rc;
  }
  pDbPage->pgno = iFreePage;
# 59218 "sqlite3.c"
  if( eType==5 || eType==1 )
{

    rc = setChildPtrmaps(pDbPage);
    if( rc!=0 )
{

      return rc;
    }
  }else{
    Pgno nextOvfl = sqlite3Get4byte(pDbPage->aData);
    if( nextOvfl!=0 )
{

      ptrmapPut(pBt, nextOvfl, 4, iFreePage, &rc);
      if( rc!=0 )
{

        return rc;
      }
    }
  }





  if( eType!=1 )
{

    rc = btreeGetPage(pBt, iPtrPage, &pPtrPage, 0);
    if( rc!=0 )
{

      return rc;
    }
    rc = sqlite3PagerWrite(pPtrPage->pDbPage);
    if( rc!=0 )
{

      releasePage(pPtrPage);
      return rc;
    }
    rc = modifyPagePointer(pPtrPage, iDbPage, iFreePage, eType);
    releasePage(pPtrPage);
    if( rc==0 )
{

      ptrmapPut(pBt, iFreePage, eType, iPtrPage, &rc);
    }
  }
  return rc;
}


static int allocateBtreePage(BtShared *, MemPage **, Pgno *, Pgno, u8);
# 59276 "sqlite3.c"
static int incrVacuumStep(BtShared *pBt, Pgno nFin, Pgno iLastPg, int bCommit)
{

  Pgno nFreeList;
  int rc;

  ((void) (0));
  ((void) (0));

  if( !(ptrmapPageno((pBt), (iLastPg))==(iLastPg)) && iLastPg!=((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) )
{

    u8 eType;
    Pgno iPtrPage;

    nFreeList = sqlite3Get4byte(&pBt->pPage1->aData[36]);
    if( nFreeList==0 )
{

      return 101;
    }

    rc = ptrmapGet(pBt, iLastPg, &eType, &iPtrPage);
    if( rc!=0 )
{

      return rc;
    }
    if( eType==1 )
{

      return sqlite3CorruptError(59297);
    }

    if( eType==2 )
{

      if( bCommit==0 )
{






        Pgno iFreePg;
        MemPage *pFreePg;
        rc = allocateBtreePage(pBt, &pFreePg, &iFreePg, iLastPg, 1);
        if( rc!=0 )
{

          return rc;
        }
        ((void) (0));
        releasePage(pFreePg);
      }
    } else {
      Pgno iFreePg;
      MemPage *pLastPg;
      u8 eMode = 0;
      Pgno iNear = 0;

      rc = btreeGetPage(pBt, iLastPg, &pLastPg, 0);
      if( rc!=0 )
{

        return rc;
      }
# 59334 "sqlite3.c"
      if( bCommit==0 )
{

        eMode = 2;
        iNear = nFin;
      }
      do {
        MemPage *pFreePg;
        rc = allocateBtreePage(pBt, &pFreePg, &iFreePg, iNear, eMode);
        if( rc!=0 )
{

          releasePage(pLastPg);
          return rc;
        }
        releasePage(pFreePg);
      }while( bCommit && iFreePg>nFin );
      ((void) (0));

      rc = relocatePage(pBt, pLastPg, eType, iPtrPage, iFreePg, bCommit);
      releasePage(pLastPg);
      if( rc!=0 )
{

        return rc;
      }
    }
  }

  if( bCommit==0 )
{

    do {
      iLastPg--;
    }while( iLastPg==((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) || (ptrmapPageno((pBt), (iLastPg))==(iLastPg)) );
    pBt->bDoTruncate = 1;
    pBt->nPage = iLastPg;
  }
  return 0;
}






static Pgno finalDbSize(BtShared *pBt, Pgno nOrig, Pgno nFree)
{

  int nEntry;
  Pgno nPtrmap;
  Pgno nFin;

  nEntry = pBt->usableSize/5;
  nPtrmap = (nFree-nOrig+ptrmapPageno(pBt, nOrig)+nEntry)/nEntry;
  nFin = nOrig - nFree - nPtrmap;
  if( nOrig>((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) && nFin<((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) )
{

    nFin--;
  }
  while( (ptrmapPageno((pBt), (nFin))==(nFin)) || nFin==((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) )
{

    nFin--;
  }

  return nFin;
}
# 59398 "sqlite3.c"
static int sqlite3BtreeIncrVacuum(Btree *p)
{

  int rc;
  BtShared *pBt = p->pBt;

  sqlite3BtreeEnter(p);
  ((void) (0));
  if( !pBt->autoVacuum )
{

    rc = 101;
  }else{
    Pgno nOrig = btreePagecount(pBt);
    Pgno nFree = sqlite3Get4byte(&pBt->pPage1->aData[36]);
    Pgno nFin = finalDbSize(pBt, nOrig, nFree);

    if( nOrig<nFin )
{

      rc = sqlite3CorruptError(59412);
    }else if( nFree>0 )
{

      rc = saveAllCursors(pBt, 0, 0);
      if( rc==0 )
{

        invalidateAllOverflowCache(pBt);
        rc = incrVacuumStep(pBt, nFin, nOrig, 0);
      }
      if( rc==0 )
{

        rc = sqlite3PagerWrite(pBt->pPage1->pDbPage);
        sqlite3Put4byte(&pBt->pPage1->aData[28], pBt->nPage);
      }
    }else{
      rc = 101;
    }
  }
  sqlite3BtreeLeave(p);
  return rc;
}
# 59440 "sqlite3.c"
static int autoVacuumCommit(BtShared *pBt)
{

  int rc = 0;
  Pager *pPager = pBt->pPager;
 

  ((void) (0));
  invalidateAllOverflowCache(pBt);
  ((void) (0));
  if( !pBt->incrVacuum )
{

    Pgno nFin;
    Pgno nFree;
    Pgno iFree;
    Pgno nOrig;

    nOrig = btreePagecount(pBt);
    if( (ptrmapPageno((pBt), (nOrig))==(nOrig)) || nOrig==((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) )
{





      return sqlite3CorruptError(59460);
    }

    nFree = sqlite3Get4byte(&pBt->pPage1->aData[36]);
    nFin = finalDbSize(pBt, nOrig, nFree);
    if( nFin>nOrig ) return sqlite3CorruptError(59465);
    if( nFin<nOrig )
{

      rc = saveAllCursors(pBt, 0, 0);
    }
    for(iFree=nOrig; iFree>nFin && rc==0; iFree--)
{

      rc = incrVacuumStep(pBt, nFin, iFree, 1);
    }
    if( (rc==101 || rc==0) && nFree>0 )
{

      rc = sqlite3PagerWrite(pBt->pPage1->pDbPage);
      sqlite3Put4byte(&pBt->pPage1->aData[32], 0);
      sqlite3Put4byte(&pBt->pPage1->aData[36], 0);
      sqlite3Put4byte(&pBt->pPage1->aData[28], nFin);
      pBt->bDoTruncate = 1;
      pBt->nPage = nFin;
    }
    if( rc!=0 )
{

      sqlite3PagerRollback(pPager);
    }
  }

  ((void) (0));
  return rc;
}
# 59519 "sqlite3.c"
static int sqlite3BtreeCommitPhaseOne(Btree *p, const char *zMaster)
{

  int rc = 0;
  if( p->inTrans==2 )
{

    BtShared *pBt = p->pBt;
    sqlite3BtreeEnter(p);

    if( pBt->autoVacuum )
{

      rc = autoVacuumCommit(pBt);
      if( rc!=0 )
{

        sqlite3BtreeLeave(p);
        return rc;
      }
    }
    if( pBt->bDoTruncate )
{

      sqlite3PagerTruncateImage(pBt->pPager, pBt->nPage);
    }

    rc = sqlite3PagerCommitPhaseOne(pBt->pPager, zMaster, 0);
    sqlite3BtreeLeave(p);
  }
  return rc;
}





static void btreeEndTransaction(Btree *p)
{

  BtShared *pBt = p->pBt;
  sqlite3 *db = p->db;
  ((void) (0));


  pBt->bDoTruncate = 0;

  if( p->inTrans>0 && db->nVdbeRead>1 )
{




    downgradeAllSharedCacheTableLocks(p);
    p->inTrans = 1;
  }else{




    if( p->inTrans!=0 )
{

      clearAllSharedCacheTableLocks(p);
      pBt->nTransaction--;
      if( 0==pBt->nTransaction )
{

        pBt->inTransaction = 0;
      }
    }



    p->inTrans = 0;
    unlockBtreeIfUnused(pBt);
  }

  ((void) (0)); ((void) (0));;
}
# 59608 "sqlite3.c"
static int sqlite3BtreeCommitPhaseTwo(Btree *p, int bCleanup)
{


  if( p->inTrans==0 ) return 0;
  sqlite3BtreeEnter(p);
  ((void) (0)); ((void) (0));;




  if( p->inTrans==2 )
{

    int rc;
    BtShared *pBt = p->pBt;
    ((void) (0));
    ((void) (0));
    rc = sqlite3PagerCommitPhaseTwo(pBt->pPager);
    if( rc!=0 && bCleanup==0 )
{

      sqlite3BtreeLeave(p);
      return rc;
    }
    p->iDataVersion--;
    pBt->inTransaction = 1;
    btreeClearHasContent(pBt);
  }

  btreeEndTransaction(p);
  sqlite3BtreeLeave(p);
  return 0;
}




static int sqlite3BtreeCommit(Btree *p)
{

  int rc;
  sqlite3BtreeEnter(p);
  rc = sqlite3BtreeCommitPhaseOne(p, 0);
  if( rc==0 )
{

    rc = sqlite3BtreeCommitPhaseTwo(p, 0);
  }
  sqlite3BtreeLeave(p);
  return rc;
}
# 59677 "sqlite3.c"
static int sqlite3BtreeTripAllCursors(Btree *pBtree, int errCode, int writeOnly)
{

  BtCursor *p;
  int rc = 0;

  ((void) (0));
  if( pBtree )
{

    sqlite3BtreeEnter(pBtree);
    for(p=pBtree->pBt->pCursor; p; p=p->pNext)
{

      int i;
      if( writeOnly && (p->curFlags & 0x01)==0 )
{

        if( p->eState==1 || p->eState==2 )
{

          rc = saveCursorPosition(p);
          if( rc!=0 )
{

            (void)sqlite3BtreeTripAllCursors(pBtree, rc, 0);
            break;
          }
        }
      }else{
        sqlite3BtreeClearCursor(p);
        p->eState = 4;
        p->skipNext = errCode;
      }
      for(i=0; i<=p->iPage; i++)
{

        releasePage(p->apPage[i]);
        p->apPage[i] = 0;
      }
    }
    sqlite3BtreeLeave(pBtree);
  }
  return rc;
}
# 59720 "sqlite3.c"
static int sqlite3BtreeRollback(Btree *p, int tripCode, int writeOnly)
{

  int rc;
  BtShared *pBt = p->pBt;
  MemPage *pPage1;

  ((void) (0));
  ((void) (0));
  sqlite3BtreeEnter(p);
  if( tripCode==0 )
{

    rc = tripCode = saveAllCursors(pBt, 0, 0);
    if( rc ) writeOnly = 0;
  }else{
    rc = 0;
  }
  if( tripCode )
{

    int rc2 = sqlite3BtreeTripAllCursors(p, tripCode, writeOnly);
    ((void) (0));
    if( rc2!=0 ) rc = rc2;
  }
  ((void) (0)); ((void) (0));;

  if( p->inTrans==2 )
{

    int rc2;

    ((void) (0));
    rc2 = sqlite3PagerRollback(pBt->pPager);
    if( rc2!=0 )
{

      rc = rc2;
    }




    if( btreeGetPage(pBt, 1, &pPage1, 0)==0 )
{

      int nPage = sqlite3Get4byte(28+(u8*)pPage1->aData);
      ;
      if( nPage==0 ) sqlite3PagerPagecount(pBt->pPager, &nPage);
      ;
      pBt->nPage = nPage;
      releasePage(pPage1);
    }
    ((void) (0));
    pBt->inTransaction = 1;
    btreeClearHasContent(pBt);
  }

  btreeEndTransaction(p);
  sqlite3BtreeLeave(p);
  return rc;
}
# 59789 "sqlite3.c"
static int sqlite3BtreeBeginStmt(Btree *p, int iStatement)
{

  int rc;
  BtShared *pBt = p->pBt;
  sqlite3BtreeEnter(p);
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));





  rc = sqlite3PagerOpenSavepoint(pBt->pPager, iStatement);
  sqlite3BtreeLeave(p);
  return rc;
}
# 59820 "sqlite3.c"
static int sqlite3BtreeSavepoint(Btree *p, int op, int iSavepoint)
{

  int rc = 0;
  if( p && p->inTrans==2 )
{

    BtShared *pBt = p->pBt;
    ((void) (0));
    ((void) (0));
    sqlite3BtreeEnter(p);
    rc = sqlite3PagerSavepoint(pBt->pPager, op, iSavepoint);
    if( rc==0 )
{

      if( iSavepoint<0 && (pBt->btsFlags & 0x0008)!=0 )
{

        pBt->nPage = 0;
      }
      rc = newDatabase(pBt);
      pBt->nPage = sqlite3Get4byte(28 + pBt->pPage1->aData);




      ((void) (0));
    }
    sqlite3BtreeLeave(p);
  }
  return rc;
}
# 59887 "sqlite3.c"
static int btreeCursor(
  Btree *p,
  int iTable,
  int wrFlag,
  struct KeyInfo *pKeyInfo,
  BtCursor *pCur
)
{

  BtShared *pBt = p->pBt;
  BtCursor *pX;

  ((void) (0));
  ((void) (0))


   ;





  ((void) (0));
  ((void) (0));


  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  if( wrFlag )
{

    allocateTempSpace(pBt);
    if( pBt->pTmpSpace==0 ) return 7;
  }
  if( iTable==1 && btreePagecount(pBt)==0 )
{

    ((void) (0));
    iTable = 0;
  }



  pCur->pgnoRoot = (Pgno)iTable;
  pCur->iPage = -1;
  pCur->pKeyInfo = pKeyInfo;
  pCur->pBtree = p;
  pCur->pBt = pBt;
  pCur->curFlags = wrFlag ? 0x01 : 0;
  pCur->curPagerFlags = wrFlag ? 0 : 0x02;


  for(pX=pBt->pCursor; pX; pX=pX->pNext)
{

    if( pX->pgnoRoot==(Pgno)iTable )
{

      pX->curFlags |= 0x20;
      pCur->curFlags |= 0x20;
    }
  }
  pCur->pNext = pBt->pCursor;
  pBt->pCursor = pCur;
  pCur->eState = 0;
  return 0;
}
static int sqlite3BtreeCursor(
  Btree *p,
  int iTable,
  int wrFlag,
  struct KeyInfo *pKeyInfo,
  BtCursor *pCur
)
{

  int rc;
  if( iTable<1 )
{

    rc = sqlite3CorruptError(59956);
  }else{
    sqlite3BtreeEnter(p);
    rc = btreeCursor(p, iTable, wrFlag, pKeyInfo, pCur);
    sqlite3BtreeLeave(p);
  }
  return rc;
}
# 59973 "sqlite3.c"
static int sqlite3BtreeCursorSize(void)
{

  return (((sizeof(BtCursor))+7)&~7);
}
# 59985 "sqlite3.c"
static void sqlite3BtreeCursorZero(BtCursor *p)
{

  memset(p, 0, __builtin_offsetof (BtCursor, iPage));
}





static int sqlite3BtreeCloseCursor(BtCursor *pCur)
{

  Btree *pBtree = pCur->pBtree;
  if( pBtree )
{

    int i;
    BtShared *pBt = pCur->pBt;
    sqlite3BtreeEnter(pBtree);
    sqlite3BtreeClearCursor(pCur);
    ((void) (0));
    if( pBt->pCursor==pCur )
{

      pBt->pCursor = pCur->pNext;
    }else{
      BtCursor *pPrev = pBt->pCursor;
      do{
        if( pPrev->pNext==pCur )
{

          pPrev->pNext = pCur->pNext;
          break;
        }
        pPrev = pPrev->pNext;
      }while( (pPrev) );
    }
    for(i=0; i<=pCur->iPage; i++)
{

      releasePage(pCur->apPage[i]);
    }
    unlockBtreeIfUnused(pBt);
    sqlite3_free(pCur->aOverflow);

    sqlite3BtreeLeave(pBtree);
  }
  return 0;
}
# 60043 "sqlite3.c"
static __attribute__((noinline)) void getCellInfo(BtCursor *pCur)
{

  if( pCur->info.nSize==0 )
{

    int iPage = pCur->iPage;
    pCur->curFlags |= 0x02;
    btreeParseCell(pCur->apPage[iPage],pCur->aiIdx[iPage],&pCur->info);
  }else{
    ;
  }
}
# 60076 "sqlite3.c"
static int sqlite3BtreeKeySize(BtCursor *pCur, i64 *pSize)
{

  ((void) (0));
  ((void) (0));
  getCellInfo(pCur);
  *pSize = pCur->info.nKey;
  return 0;
}
# 60096 "sqlite3.c"
static int sqlite3BtreeDataSize(BtCursor *pCur, u32 *pSize)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  getCellInfo(pCur);
  *pSize = pCur->info.nPayload;
  return 0;
}
# 60126 "sqlite3.c"
static int getOverflowPage(
  BtShared *pBt,
  Pgno ovfl,
  MemPage **ppPage,
  Pgno *pPgnoNext
)
{

  Pgno next = 0;
  MemPage *pPage = 0;
  int rc = 0;

  ((void) (0));
  ((void) (0));
# 60146 "sqlite3.c"
  if( pBt->autoVacuum )
{

    Pgno pgno;
    Pgno iGuess = ovfl+1;
    u8 eType;

    while( (ptrmapPageno((pBt), (iGuess))==(iGuess)) || iGuess==((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) )
{

      iGuess++;
    }

    if( iGuess<=btreePagecount(pBt) )
{

      rc = ptrmapGet(pBt, iGuess, &eType, &pgno);
      if( rc==0 && eType==4 && pgno==ovfl )
{

        next = iGuess;
        rc = 101;
      }
    }
  }


  ((void) (0));
  if( rc==0 )
{

    rc = btreeGetPage(pBt, ovfl, &pPage, (ppPage==0) ? 0x02 : 0);
    ((void) (0));
    if( rc==0 )
{

      next = sqlite3Get4byte(pPage->aData);
    }
  }

  *pPgnoNext = next;
  if( ppPage )
{

    *ppPage = pPage;
  }else{
    releasePage(pPage);
  }
  return (rc==101 ? 0 : rc);
}
# 60194 "sqlite3.c"
static int copyPayload(
  void *pPayload,
  void *pBuf,
  int nByte,
  int eOp,
  DbPage *pDbPage
)
{

  if( eOp )
{


    int rc = sqlite3PagerWrite(pDbPage);
    if( rc!=0 )
{

      return rc;
    }
    memcpy(pPayload, pBuf, nByte);
  }else{

    memcpy(pBuf, pPayload, nByte);
  }
  return 0;
}
# 60245 "sqlite3.c"
static int accessPayload(
  BtCursor *pCur,
  u32 offset,
  u32 amt,
  unsigned char *pBuf,
  int eOp
)
{

  unsigned char *aPayload;
  int rc = 0;
  int iIdx = 0;
  MemPage *pPage = pCur->apPage[pCur->iPage];
  BtShared *pBt = pCur->pBt;





  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  getCellInfo(pCur);
  aPayload = pCur->info.pPayload;



  ((void) (0));

  ((void) (0));
  if( (uptr)(aPayload - pPage->aData) > (pBt->usableSize - pCur->info.nLocal) )
{






    return sqlite3CorruptError(60282);
  }


  if( offset<pCur->info.nLocal )
{

    int a = amt;
    if( a+offset>pCur->info.nLocal )
{

      a = pCur->info.nLocal - offset;
    }
    rc = copyPayload(&aPayload[offset], pBuf, a, (eOp & 0x01), pPage->pDbPage);
    offset = 0;
    pBuf += a;
    amt -= a;
  }else{
    offset -= pCur->info.nLocal;
  }


  if( rc==0 && amt>0 )
{

    const u32 ovflSize = pBt->usableSize - 4;
    Pgno nextPage;

    nextPage = sqlite3Get4byte(&aPayload[pCur->info.nLocal]);
# 60314 "sqlite3.c"
    if( eOp!=2 && (pCur->curFlags & 0x04)==0 )
{

      int nOvfl = (pCur->info.nPayload-pCur->info.nLocal+ovflSize-1)/ovflSize;
      if( nOvfl>pCur->nOvflAlloc )
{

        Pgno *aNew = (Pgno*)sqlite3Realloc(
            pCur->aOverflow, nOvfl*2*sizeof(Pgno)
        );
        if( aNew==0 )
{

          rc = 7;
        }else{
          pCur->nOvflAlloc = nOvfl*2;
          pCur->aOverflow = aNew;
        }
      }
      if( rc==0 )
{

        memset(pCur->aOverflow, 0, nOvfl*sizeof(Pgno));
        pCur->curFlags |= 0x04;
      }
    }





    if( (pCur->curFlags & 0x04)!=0
     && pCur->aOverflow[offset/ovflSize]
    )
{

      iIdx = (offset/ovflSize);
      nextPage = pCur->aOverflow[iIdx];
      offset = (offset%ovflSize);
    }

    for( ; rc==0 && amt>0 && nextPage; iIdx++)
{



      if( (pCur->curFlags & 0x04)!=0 )
{

        ((void) (0))

                               ;
        pCur->aOverflow[iIdx] = nextPage;
      }

      if( offset>=ovflSize )
{

# 60365 "sqlite3.c"
        ((void) (0));
        ((void) (0));
        ((void) (0));
        if( pCur->aOverflow[iIdx+1] )
{

          nextPage = pCur->aOverflow[iIdx+1];
        }else{
          rc = getOverflowPage(pBt, nextPage, 0, &nextPage);
        }
        offset -= ovflSize;
      }else{






        int a = amt;
        if( a + offset > ovflSize )
{

          a = ovflSize - offset;
        }
# 60419 "sqlite3.c"
        {
          DbPage *pDbPage;
          rc = sqlite3PagerGet(pBt->pPager, nextPage, &pDbPage,
              ((eOp&0x01)==0 ? 0x02 : 0)
          );
          if( rc==0 )
{

            aPayload = sqlite3PagerGetData(pDbPage);
            nextPage = sqlite3Get4byte(aPayload);
            rc = copyPayload(&aPayload[offset+4], pBuf, a, (eOp&0x01), pDbPage);
            sqlite3PagerUnref(pDbPage);
            offset = 0;
          }
        }
        amt -= a;
        pBuf += a;
      }
    }
  }

  if( rc==0 && amt>0 )
{

    return sqlite3CorruptError(60439);
  }
  return rc;
}
# 60456 "sqlite3.c"
static int sqlite3BtreeKey(BtCursor *pCur, u32 offset, u32 amt, void *pBuf)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  return accessPayload(pCur, offset, amt, (unsigned char*)pBuf, 0);
}
# 60473 "sqlite3.c"
static int sqlite3BtreeData(BtCursor *pCur, u32 offset, u32 amt, void *pBuf)
{

  int rc;


  if ( pCur->eState==0 )
{

    return 4;
  }


  ((void) (0));
  rc = (pCur->eState>=3 ? btreeRestoreCursorPosition(pCur) : 0);
  if( rc==0 )
{

    ((void) (0));
    ((void) (0));
    ((void) (0));
    rc = accessPayload(pCur, offset, amt, pBuf, 0);
  }
  return rc;
}
# 60512 "sqlite3.c"
static const void *fetchPayload(
  BtCursor *pCur,
  u32 *pAmt
)
{

  u32 amt;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  amt = (int)(pCur->apPage[pCur->iPage]->aDataEnd - pCur->info.pPayload);
  if( pCur->info.nLocal<amt ) amt = pCur->info.nLocal;
  *pAmt = amt;
  return (void*)pCur->info.pPayload;
}
# 60546 "sqlite3.c"
static const void *sqlite3BtreeKeyFetch(BtCursor *pCur, u32 *pAmt)
{

  return fetchPayload(pCur, pAmt);
}
static const void *sqlite3BtreeDataFetch(BtCursor *pCur, u32 *pAmt)
{

  return fetchPayload(pCur, pAmt);
}
# 60563 "sqlite3.c"
static int moveToChild(BtCursor *pCur, u32 newPgno)
{

  BtShared *pBt = pCur->pBt;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( pCur->iPage>=(20 -1) )
{

    return sqlite3CorruptError(60571);
  }
  pCur->info.nSize = 0;
  pCur->curFlags &= ~(0x02|0x04);
  pCur->iPage++;
  pCur->aiIdx[pCur->iPage] = 0;
  return getAndInitPage(pBt, newPgno, &pCur->apPage[pCur->iPage],
                        pCur, pCur->curPagerFlags);
}
# 60611 "sqlite3.c"
static void moveToParent(BtCursor *pCur)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
 



   ;
  ;
  pCur->info.nSize = 0;
  pCur->curFlags &= ~(0x02|0x04);
  releasePageNotNull(pCur->apPage[pCur->iPage--]);
}
# 60648 "sqlite3.c"
static int moveToRoot(BtCursor *pCur)
{

  MemPage *pRoot;
  int rc = 0;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( pCur->eState>=3 )
{

    if( pCur->eState==4 )
{

      ((void) (0));
      return pCur->skipNext;
    }
    sqlite3BtreeClearCursor(pCur);
  }

  if( pCur->iPage>=0 )
{

    while( pCur->iPage )
{

      ((void) (0));
      releasePageNotNull(pCur->apPage[pCur->iPage--]);
    }
  }else if( pCur->pgnoRoot==0 )
{

    pCur->eState = 0;
    return 0;
  }else{
    ((void) (0));
    rc = getAndInitPage(pCur->pBtree->pBt, pCur->pgnoRoot, &pCur->apPage[0],
                        0, pCur->curPagerFlags);
    if( rc!=0 )
{

      pCur->eState = 0;
      return rc;
    }
    pCur->iPage = 0;
    pCur->curIntKey = pCur->apPage[0]->intKey;
  }
  pRoot = pCur->apPage[0];
  ((void) (0));
# 60696 "sqlite3.c"
  ((void) (0));
  if( pRoot->isInit==0 || (pCur->pKeyInfo==0)!=pRoot->intKey )
{

    return sqlite3CorruptError(60698);
  }

  pCur->aiIdx[0] = 0;
  pCur->info.nSize = 0;
  pCur->curFlags &= ~(0x08|0x02|0x04);

  if( pRoot->nCell>0 )
{

    pCur->eState = 1;
  }else if( !pRoot->leaf )
{

    Pgno subpage;
    if( pRoot->pgno!=1 ) return sqlite3CorruptError(60709);
    subpage = sqlite3Get4byte(&pRoot->aData[pRoot->hdrOffset+8]);
    pCur->eState = 1;
    rc = moveToChild(pCur, subpage);
  }else{
    pCur->eState = 0;
  }
  return rc;
}
# 60726 "sqlite3.c"
static int moveToLeftmost(BtCursor *pCur)
{

  Pgno pgno;
  int rc = 0;
  MemPage *pPage;

  ((void) (0));
  ((void) (0));
  while( rc==0 && !(pPage = pCur->apPage[pCur->iPage])->leaf )
{

    ((void) (0));
    pgno = sqlite3Get4byte(((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(pCur->aiIdx[pCur->iPage])])))));
    rc = moveToChild(pCur, pgno);
  }
  return rc;
}
# 60751 "sqlite3.c"
static int moveToRightmost(BtCursor *pCur)
{

  Pgno pgno;
  int rc = 0;
  MemPage *pPage = 0;

  ((void) (0));
  ((void) (0));
  while( !(pPage = pCur->apPage[pCur->iPage])->leaf )
{

    pgno = sqlite3Get4byte(&pPage->aData[pPage->hdrOffset+8]);
    pCur->aiIdx[pCur->iPage] = pPage->nCell;
    rc = moveToChild(pCur, pgno);
    if( rc ) return rc;
  }
  pCur->aiIdx[pCur->iPage] = pPage->nCell-1;
  ((void) (0));
  ((void) (0));
  return 0;
}





static int sqlite3BtreeFirst(BtCursor *pCur, int *pRes)
{

  int rc;

  ((void) (0));
  ((void) (0));
  rc = moveToRoot(pCur);
  if( rc==0 )
{

    if( pCur->eState==0 )
{

      ((void) (0));
      *pRes = 1;
    }else{
      ((void) (0));
      *pRes = 0;
      rc = moveToLeftmost(pCur);
    }
  }
  return rc;
}





static int sqlite3BtreeLast(BtCursor *pCur, int *pRes)
{

  int rc;

  ((void) (0));
  ((void) (0));


  if( 1==pCur->eState && (pCur->curFlags & 0x08)!=0 )
{

# 60815 "sqlite3.c"
    return 0;
  }

  rc = moveToRoot(pCur);
  if( rc==0 )
{

    if( 0==pCur->eState )
{

      ((void) (0));
      *pRes = 1;
    }else{
      ((void) (0));
      *pRes = 0;
      rc = moveToRightmost(pCur);
      if( rc==0 )
{

        pCur->curFlags |= 0x08;
      }else{
        pCur->curFlags &= ~0x08;
      }

    }
  }
  return rc;
}
# 60868 "sqlite3.c"
static int sqlite3BtreeMovetoUnpacked(
  BtCursor *pCur,
  UnpackedRecord *pIdxKey,
  i64 intKey,
  int biasRight,
  int *pRes
)
{

  int rc;
  RecordCompare xRecordCompare;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));



  if( pCur->eState==1 && (pCur->curFlags & 0x02)!=0
   && pCur->curIntKey
  )
{

    if( pCur->info.nKey==intKey )
{

      *pRes = 0;
      return 0;
    }
    if( (pCur->curFlags & 0x08)!=0 && pCur->info.nKey<intKey )
{

      *pRes = -1;
      return 0;
    }
  }

  if( pIdxKey )
{

    xRecordCompare = sqlite3VdbeFindCompare(pIdxKey);
    pIdxKey->errCode = 0;
    ((void) (0))


     ;
  }else{
    xRecordCompare = 0;
  }

  rc = moveToRoot(pCur);
  if( rc )
{

    return rc;
  }
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( pCur->eState==0 )
{

    *pRes = -1;
    ((void) (0));
    return 0;
  }
  ((void) (0));
  ((void) (0));
  for(;;)
{

    int lwr, upr, idx, c;
    Pgno chldPg;
    MemPage *pPage = pCur->apPage[pCur->iPage];
    u8 *pCell;







    ((void) (0));
    ((void) (0));
    lwr = 0;
    upr = pPage->nCell-1;
    ((void) (0));
    idx = upr>>(1-biasRight);
    pCur->aiIdx[pCur->iPage] = (u16)idx;
    if( xRecordCompare==0 )
{

      for(;;)
{

        i64 nCellKey;
        pCell = ((pPage)->aDataOfst + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(idx)]))));
        if( pPage->intKeyLeaf )
{

          while( 0x80 <= *(pCell++) )
{

            if( pCell>=pPage->aDataEnd ) return sqlite3CorruptError(60948);
          }
        }
        sqlite3GetVarint(pCell, (u64*)&nCellKey);
        if( nCellKey<intKey )
{

          lwr = idx+1;
          if( lwr>upr )
{
 c = -1; break; }
        }else if( nCellKey>intKey )
{

          upr = idx-1;
          if( lwr>upr )
{
 c = +1; break; }
        }else{
          ((void) (0));
          pCur->curFlags |= 0x02;
          pCur->info.nKey = nCellKey;
          pCur->aiIdx[pCur->iPage] = (u16)idx;
          if( !pPage->leaf )
{

            lwr = idx;
            goto moveto_next_layer;
          }else{
            *pRes = 0;
            rc = 0;
            goto moveto_finish;
          }
        }
        ((void) (0));
        idx = (lwr+upr)>>1;
      }
    }else{
      for(;;)
{

        int nCell;
        pCell = ((pPage)->aDataOfst + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(idx)]))));
# 60988 "sqlite3.c"
        nCell = pCell[0];
        if( nCell<=pPage->max1bytePayload )
{




          ;
          c = xRecordCompare(nCell, (void*)&pCell[1], pIdxKey);
        }else if( !(pCell[1] & 0x80)
          && (nCell = ((nCell&0x7f)<<7) + pCell[1])<=pPage->maxLocal
        )
{



          ;
          c = xRecordCompare(nCell, (void*)&pCell[2], pIdxKey);
        }else{
# 61012 "sqlite3.c"
          void *pCellKey;
          u8 * const pCellBody = pCell - pPage->childPtrSize;
          pPage->xParseCell(pPage, pCellBody, &pCur->info);
          nCell = (int)pCur->info.nKey;
          ;
          ;
          ;
          ;
          if( nCell<2 )
{

            rc = sqlite3CorruptError(61021);
            goto moveto_finish;
          }
          pCellKey = sqlite3Malloc( nCell+18 );
          if( pCellKey==0 )
{

            rc = 7;
            goto moveto_finish;
          }
          pCur->aiIdx[pCur->iPage] = (u16)idx;
          rc = accessPayload(pCur, 0, nCell, (unsigned char*)pCellKey, 2);
          if( rc )
{

            sqlite3_free(pCellKey);
            goto moveto_finish;
          }
          c = xRecordCompare(nCell, pCellKey, pIdxKey);
          sqlite3_free(pCellKey);
        }
        ((void) (0))


         ;
        if( c<0 )
{

          lwr = idx+1;
        }else if( c>0 )
{

          upr = idx-1;
        }else{
          ((void) (0));
          *pRes = 0;
          rc = 0;
          pCur->aiIdx[pCur->iPage] = (u16)idx;
          if( pIdxKey->errCode ) rc = 11;
          goto moveto_finish;
        }
        if( lwr>upr ) break;
        ((void) (0));
        idx = (lwr+upr)>>1;
      }
    }
    ((void) (0));
    ((void) (0));
    if( pPage->leaf )
{

      ((void) (0));
      pCur->aiIdx[pCur->iPage] = (u16)idx;
      *pRes = c;
      rc = 0;
      goto moveto_finish;
    }
moveto_next_layer:
    if( lwr>=pPage->nCell )
{

      chldPg = sqlite3Get4byte(&pPage->aData[pPage->hdrOffset+8]);
    }else{
      chldPg = sqlite3Get4byte(((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(lwr)])))));
    }
    pCur->aiIdx[pCur->iPage] = (u16)lwr;
    rc = moveToChild(pCur, chldPg);
    if( rc ) break;
  }
moveto_finish:
  pCur->info.nSize = 0;
  pCur->curFlags &= ~(0x02|0x04);
  return rc;
}
# 61092 "sqlite3.c"
static int sqlite3BtreeEof(BtCursor *pCur)
{





  return (1!=pCur->eState);
}
# 61121 "sqlite3.c"
static __attribute__((noinline)) int btreeNext(BtCursor *pCur, int *pRes)
{

  int rc;
  int idx;
  MemPage *pPage;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( pCur->eState!=1 )
{

    ((void) (0));
    rc = (pCur->eState>=3 ? btreeRestoreCursorPosition(pCur) : 0);
    if( rc!=0 )
{

      return rc;
    }
    if( 0==pCur->eState )
{

      *pRes = 1;
      return 0;
    }
    if( pCur->skipNext )
{

      ((void) (0));
      pCur->eState = 1;
      if( pCur->skipNext>0 )
{

        pCur->skipNext = 0;
        return 0;
      }
      pCur->skipNext = 0;
    }
  }

  pPage = pCur->apPage[pCur->iPage];
  idx = ++pCur->aiIdx[pCur->iPage];
  ((void) (0));






  ;

  if( idx>=pPage->nCell )
{

    if( !pPage->leaf )
{

      rc = moveToChild(pCur, sqlite3Get4byte(&pPage->aData[pPage->hdrOffset+8]));
      if( rc ) return rc;
      return moveToLeftmost(pCur);
    }
    do{
      if( pCur->iPage==0 )
{

        *pRes = 1;
        pCur->eState = 0;
        return 0;
      }
      moveToParent(pCur);
      pPage = pCur->apPage[pCur->iPage];
    }while( pCur->aiIdx[pCur->iPage]>=pPage->nCell );
    if( pPage->intKey )
{

      return sqlite3BtreeNext(pCur, pRes);
    }else{
      return 0;
    }
  }
  if( pPage->leaf )
{

    return 0;
  }else{
    return moveToLeftmost(pCur);
  }
}
static int sqlite3BtreeNext(BtCursor *pCur, int *pRes)
{

  MemPage *pPage;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pCur->info.nSize = 0;
  pCur->curFlags &= ~(0x02|0x04);
  *pRes = 0;
  if( pCur->eState!=1 ) return btreeNext(pCur, pRes);
  pPage = pCur->apPage[pCur->iPage];
  if( (++pCur->aiIdx[pCur->iPage])>=pPage->nCell )
{

    pCur->aiIdx[pCur->iPage]--;
    return btreeNext(pCur, pRes);
  }
  if( pPage->leaf )
{

    return 0;
  }else{
    return moveToLeftmost(pCur);
  }
}
# 61231 "sqlite3.c"
static __attribute__((noinline)) int btreePrevious(BtCursor *pCur, int *pRes)
{

  int rc;
  MemPage *pPage;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( pCur->eState!=1 )
{

    rc = (pCur->eState>=3 ? btreeRestoreCursorPosition(pCur) : 0);
    if( rc!=0 )
{

      return rc;
    }
    if( 0==pCur->eState )
{

      *pRes = 1;
      return 0;
    }
    if( pCur->skipNext )
{

      ((void) (0));
      pCur->eState = 1;
      if( pCur->skipNext<0 )
{

        pCur->skipNext = 0;
        return 0;
      }
      pCur->skipNext = 0;
    }
  }

  pPage = pCur->apPage[pCur->iPage];
  ((void) (0));
  if( !pPage->leaf )
{

    int idx = pCur->aiIdx[pCur->iPage];
    rc = moveToChild(pCur, sqlite3Get4byte(((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(idx)]))))));
    if( rc ) return rc;
    rc = moveToRightmost(pCur);
  }else{
    while( pCur->aiIdx[pCur->iPage]==0 )
{

      if( pCur->iPage==0 )
{

        pCur->eState = 0;
        *pRes = 1;
        return 0;
      }
      moveToParent(pCur);
    }
    ((void) (0));
    ((void) (0));

    pCur->aiIdx[pCur->iPage]--;
    pPage = pCur->apPage[pCur->iPage];
    if( pPage->intKey && !pPage->leaf )
{

      rc = sqlite3BtreePrevious(pCur, pRes);
    }else{
      rc = 0;
    }
  }
  return rc;
}
static int sqlite3BtreePrevious(BtCursor *pCur, int *pRes)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  *pRes = 0;
  pCur->curFlags &= ~(0x08|0x04|0x02);
  pCur->info.nSize = 0;
  if( pCur->eState!=1
   || pCur->aiIdx[pCur->iPage]==0
   || pCur->apPage[pCur->iPage]->leaf==0
  )
{

    return btreePrevious(pCur, pRes);
  }
  pCur->aiIdx[pCur->iPage]--;
  return 0;
}
# 61330 "sqlite3.c"
static int allocateBtreePage(
  BtShared *pBt,
  MemPage **ppPage,
  Pgno *pPgno,
  Pgno nearby,
  u8 eMode
)
{

  MemPage *pPage1;
  int rc;
  u32 n;
  u32 k;
  MemPage *pTrunk = 0;
  MemPage *pPrevTrunk = 0;
  Pgno mxPage;

  ((void) (0));
  ((void) (0));
  pPage1 = pBt->pPage1;
  mxPage = btreePagecount(pBt);


  n = sqlite3Get4byte(&pPage1->aData[36]);
  ;
  if( n>=mxPage )
{

    return sqlite3CorruptError(61354);
  }
  if( n>0 )
{


    Pgno iTrunk;
    u8 searchList = 0;
    u32 nSearch = 0;






    if( eMode==1 )
{

      if( nearby<=mxPage )
{

        u8 eType;
        ((void) (0));
        ((void) (0));
        rc = ptrmapGet(pBt, nearby, &eType, 0);
        if( rc ) return rc;
        if( eType==2 )
{

          searchList = 1;
        }
      }
    }else if( eMode==2 )
{

      searchList = 1;
    }





    rc = sqlite3PagerWrite(pPage1->pDbPage);
    if( rc ) return rc;
    sqlite3Put4byte(&pPage1->aData[36], n-1);






    do {
      pPrevTrunk = pTrunk;
      if( pPrevTrunk )
{




        iTrunk = sqlite3Get4byte(&pPrevTrunk->aData[0]);
      }else{



        iTrunk = sqlite3Get4byte(&pPage1->aData[32]);
      }
      ;
      if( iTrunk>mxPage || nSearch++ > n )
{

        rc = sqlite3CorruptError(61410);
      }else{
        rc = btreeGetUnusedPage(pBt, iTrunk, &pTrunk, 0);
      }
      if( rc )
{

        pTrunk = 0;
        goto end_allocate_page;
      }
      ((void) (0));
      ((void) (0));


      k = sqlite3Get4byte(&pTrunk->aData[4]);
      if( k==0 && !searchList )
{




        ((void) (0));
        rc = sqlite3PagerWrite(pTrunk->pDbPage);
        if( rc )
{

          goto end_allocate_page;
        }
        *pPgno = iTrunk;
        memcpy(&pPage1->aData[32], &pTrunk->aData[0], 4);
        *ppPage = pTrunk;
        pTrunk = 0;
        ;
      }else if( k>(u32)(pBt->usableSize/4 - 2) )
{


        rc = sqlite3CorruptError(61439);
        goto end_allocate_page;

      }else if( searchList
            && (nearby==iTrunk || (iTrunk<nearby && eMode==2))
      )
{




        *pPgno = iTrunk;
        *ppPage = pTrunk;
        searchList = 0;
        rc = sqlite3PagerWrite(pTrunk->pDbPage);
        if( rc )
{

          goto end_allocate_page;
        }
        if( k==0 )
{

          if( !pPrevTrunk )
{

            memcpy(&pPage1->aData[32], &pTrunk->aData[0], 4);
          }else{
            rc = sqlite3PagerWrite(pPrevTrunk->pDbPage);
            if( rc!=0 )
{

              goto end_allocate_page;
            }
            memcpy(&pPrevTrunk->aData[0], &pTrunk->aData[0], 4);
          }
        }else{




          MemPage *pNewTrunk;
          Pgno iNewTrunk = sqlite3Get4byte(&pTrunk->aData[8]);
          if( iNewTrunk>mxPage )
{

            rc = sqlite3CorruptError(61473);
            goto end_allocate_page;
          }
          ;
          rc = btreeGetUnusedPage(pBt, iNewTrunk, &pNewTrunk, 0);
          if( rc!=0 )
{

            goto end_allocate_page;
          }
          rc = sqlite3PagerWrite(pNewTrunk->pDbPage);
          if( rc!=0 )
{

            releasePage(pNewTrunk);
            goto end_allocate_page;
          }
          memcpy(&pNewTrunk->aData[0], &pTrunk->aData[0], 4);
          sqlite3Put4byte(&pNewTrunk->aData[4], k-1);
          memcpy(&pNewTrunk->aData[8], &pTrunk->aData[12], (k-1)*4);
          releasePage(pNewTrunk);
          if( !pPrevTrunk )
{

            ((void) (0));
            sqlite3Put4byte(&pPage1->aData[32], iNewTrunk);
          }else{
            rc = sqlite3PagerWrite(pPrevTrunk->pDbPage);
            if( rc )
{

              goto end_allocate_page;
            }
            sqlite3Put4byte(&pPrevTrunk->aData[0], iNewTrunk);
          }
        }
        pTrunk = 0;
        ;

      }else if( k>0 )
{


        u32 closest;
        Pgno iPage;
        unsigned char *aData = pTrunk->aData;
        if( nearby>0 )
{

          u32 i;
          closest = 0;
          if( eMode==2 )
{

            for(i=0; i<k; i++)
{

              iPage = sqlite3Get4byte(&aData[8+i*4]);
              if( iPage<=nearby )
{

                closest = i;
                break;
              }
            }
          }else{
            int dist;
            dist = sqlite3AbsInt32(sqlite3Get4byte(&aData[8]) - nearby);
            for(i=1; i<k; i++)
{

              int d2 = sqlite3AbsInt32(sqlite3Get4byte(&aData[8+i*4]) - nearby);
              if( d2<dist )
{

                closest = i;
                dist = d2;
              }
            }
          }
        }else{
          closest = 0;
        }

        iPage = sqlite3Get4byte(&aData[8+closest*4]);
        ;
        if( iPage>mxPage )
{

          rc = sqlite3CorruptError(61538);
          goto end_allocate_page;
        }
        ;
        if( !searchList
         || (iPage==nearby || (iPage<nearby && eMode==2))
        )
{

          int noContent;
          *pPgno = iPage;
         

                                                          ;
          rc = sqlite3PagerWrite(pTrunk->pDbPage);
          if( rc ) goto end_allocate_page;
          if( closest<k-1 )
{

            memcpy(&aData[8+closest*4], &aData[4+k*4], 4);
          }
          sqlite3Put4byte(&aData[4], k-1);
          noContent = !btreeGetHasContent(pBt, *pPgno)? 0x01 : 0;
          rc = btreeGetUnusedPage(pBt, *pPgno, ppPage, noContent);
          if( rc==0 )
{

            rc = sqlite3PagerWrite((*ppPage)->pDbPage);
            if( rc!=0 )
{

              releasePage(*ppPage);
              *ppPage = 0;
            }
          }
          searchList = 0;
        }
      }
      releasePage(pPrevTrunk);
      pPrevTrunk = 0;
    }while( searchList );
  }else{
# 61590 "sqlite3.c"
    int bNoContent = (0==(pBt->bDoTruncate))? 0x01:0;

    rc = sqlite3PagerWrite(pBt->pPage1->pDbPage);
    if( rc ) return rc;
    pBt->nPage++;
    if( pBt->nPage==((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) ) pBt->nPage++;


    if( pBt->autoVacuum && (ptrmapPageno((pBt), (pBt->nPage))==(pBt->nPage)) )
{





      MemPage *pPg = 0;
      ;
      ((void) (0));
      rc = btreeGetUnusedPage(pBt, pBt->nPage, &pPg, bNoContent);
      if( rc==0 )
{

        rc = sqlite3PagerWrite(pPg->pDbPage);
        releasePage(pPg);
      }
      if( rc ) return rc;
      pBt->nPage++;
      if( pBt->nPage==((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) )
{
 pBt->nPage++; }
    }

    sqlite3Put4byte(28 + (u8*)pBt->pPage1->aData, pBt->nPage);
    *pPgno = pBt->nPage;

    ((void) (0));
    rc = btreeGetUnusedPage(pBt, *pPgno, ppPage, bNoContent);
    if( rc ) return rc;
    rc = sqlite3PagerWrite((*ppPage)->pDbPage);
    if( rc!=0 )
{

      releasePage(*ppPage);
      *ppPage = 0;
    }
    ;
  }

  ((void) (0));

end_allocate_page:
  releasePage(pTrunk);
  releasePage(pPrevTrunk);
  ((void) (0));
  ((void) (0));
  return rc;
}
# 61652 "sqlite3.c"
static int freePage2(BtShared *pBt, MemPage *pMemPage, Pgno iPage)
{

  MemPage *pTrunk = 0;
  Pgno iTrunk = 0;
  MemPage *pPage1 = pBt->pPage1;
  MemPage *pPage;
  int rc;
  int nFree;

  ((void) (0));
  ((void) (0));
  ((void) (0));

  if( iPage<2 ) return sqlite3CorruptError(61664);
  if( pMemPage )
{

    pPage = pMemPage;
    sqlite3PagerRef(pPage->pDbPage);
  }else{
    pPage = btreePageLookup(pBt, iPage);
  }


  rc = sqlite3PagerWrite(pPage1->pDbPage);
  if( rc ) goto freepage_out;
  nFree = sqlite3Get4byte(&pPage1->aData[36]);
  sqlite3Put4byte(&pPage1->aData[36], nFree+1);

  if( pBt->btsFlags & 0x0004 )
{




    if( (!pPage && ((rc = btreeGetPage(pBt, iPage, &pPage, 0))!=0) )
     || ((rc = sqlite3PagerWrite(pPage->pDbPage))!=0)
    )
{

      goto freepage_out;
    }
    memset(pPage->aData, 0, pPage->pBt->pageSize);
  }




  if( (pBt->autoVacuum) )
{

    ptrmapPut(pBt, iPage, 2, 0, &rc);
    if( rc ) goto freepage_out;
  }
# 61705 "sqlite3.c"
  if( nFree!=0 )
{

    u32 nLeaf;

    iTrunk = sqlite3Get4byte(&pPage1->aData[32]);
    rc = btreeGetPage(pBt, iTrunk, &pTrunk, 0);
    if( rc!=0 )
{

      goto freepage_out;
    }

    nLeaf = sqlite3Get4byte(&pTrunk->aData[4]);
    ((void) (0));
    if( nLeaf > (u32)pBt->usableSize/4 - 2 )
{

      rc = sqlite3CorruptError(61717);
      goto freepage_out;
    }
    if( nLeaf < (u32)pBt->usableSize/4 - 8 )
{

# 61740 "sqlite3.c"
      rc = sqlite3PagerWrite(pTrunk->pDbPage);
      if( rc==0 )
{

        sqlite3Put4byte(&pTrunk->aData[4], nLeaf+1);
        sqlite3Put4byte(&pTrunk->aData[8+nLeaf*4], iPage);
        if( pPage && (pBt->btsFlags & 0x0004)==0 )
{

          sqlite3PagerDontWrite(pPage->pDbPage);
        }
        rc = btreeSetHasContent(pBt, iPage);
      }
      ;
      goto freepage_out;
    }
  }







  if( pPage==0 && 0!=(rc = btreeGetPage(pBt, iPage, &pPage, 0)) )
{

    goto freepage_out;
  }
  rc = sqlite3PagerWrite(pPage->pDbPage);
  if( rc!=0 )
{

    goto freepage_out;
  }
  sqlite3Put4byte(pPage->aData, iTrunk);
  sqlite3Put4byte(&pPage->aData[4], 0);
  sqlite3Put4byte(&pPage1->aData[32], iPage);
  ;

freepage_out:
  if( pPage )
{

    pPage->isInit = 0;
  }
  releasePage(pPage);
  releasePage(pTrunk);
  return rc;
}
static void freePage(MemPage *pPage, int *pRC)
{

  if( (*pRC)==0 )
{

    *pRC = freePage2(pPage->pBt, pPage, pPage->pgno);
  }
}






static int clearCell(
  MemPage *pPage,
  unsigned char *pCell,
  u16 *pnSize
)
{

  BtShared *pBt = pPage->pBt;
  CellInfo info;
  Pgno ovflPgno;
  int rc;
  int nOvfl;
  u32 ovflPageSize;

  ((void) (0));
  pPage->xParseCell(pPage, pCell, &info);
  *pnSize = info.nSize;
  if( info.nLocal==info.nPayload )
{

    return 0;
  }
  if( pCell+info.nSize-1 > pPage->aData+pPage->maskPage )
{

    return sqlite3CorruptError(61810);
  }
  ovflPgno = sqlite3Get4byte(pCell + info.nSize - 4);
  ((void) (0));
  ovflPageSize = pBt->usableSize - 4;
  nOvfl = (info.nPayload - info.nLocal + ovflPageSize - 1)/ovflPageSize;
  ((void) (0))

   ;
  while( nOvfl-- )
{

    Pgno iNext = 0;
    MemPage *pOvfl = 0;
    if( ovflPgno<2 || ovflPgno>btreePagecount(pBt) )
{




      return sqlite3CorruptError(61826);
    }
    if( nOvfl )
{

      rc = getOverflowPage(pBt, ovflPgno, &pOvfl, &iNext);
      if( rc ) return rc;
    }

    if( ( pOvfl || ((pOvfl = btreePageLookup(pBt, ovflPgno))!=0) )
     && sqlite3PagerPageRefcount(pOvfl->pDbPage)!=1
    )
{

# 61846 "sqlite3.c"
      rc = sqlite3CorruptError(61846);
    }else{
      rc = freePage2(pBt, pOvfl, ovflPgno);
    }

    if( pOvfl )
{

      sqlite3PagerUnref(pOvfl->pDbPage);
    }
    if( rc ) return rc;
    ovflPgno = iNext;
  }
  return 0;
}
# 61872 "sqlite3.c"
static int fillInCell(
  MemPage *pPage,
  unsigned char *pCell,
  const void *pKey, i64 nKey,
  const void *pData,int nData,
  int nZero,
  int *pnSize
)
{

  int nPayload;
  const u8 *pSrc;
  int nSrc, n, rc;
  int spaceLeft;
  MemPage *pOvfl = 0;
  MemPage *pToRelease = 0;
  unsigned char *pPrior;
  unsigned char *pPayload;
  BtShared *pBt = pPage->pBt;
  Pgno pgnoOvfl = 0;
  int nHeader;

  ((void) (0));



  ((void) (0))
                                                        ;


  nHeader = pPage->childPtrSize;
  nPayload = nData + nZero;
  if( pPage->intKeyLeaf )
{

    nHeader += (u8)(((u32)(nPayload)<(u32)0x80)?(*(&pCell[nHeader])=(unsigned char)(nPayload)),1: sqlite3PutVarint((&pCell[nHeader]),(nPayload)));
  }else{
    ((void) (0));
    ((void) (0));
  }
  nHeader += sqlite3PutVarint(&pCell[nHeader], *(u64*)&nKey);


  if( pPage->intKey )
{

    pSrc = pData;
    nSrc = nData;
    nData = 0;
  }else{
    ((void) (0));
    nPayload = (int)nKey;
    pSrc = pKey;
    nSrc = (int)nKey;
  }
  if( nPayload<=pPage->maxLocal )
{

    n = nHeader + nPayload;
    ;
    ;
    if( n<4 ) n = 4;
    *pnSize = n;
    spaceLeft = nPayload;
    pPrior = pCell;
  }else{
    int mn = pPage->minLocal;
    n = mn + (nPayload - mn) % (pPage->pBt->usableSize - 4);
    ;
    ;
    if( n > pPage->maxLocal ) n = mn;
    spaceLeft = n;
    *pnSize = n + nHeader + 4;
    pPrior = &pCell[nHeader+n];
  }
  pPayload = &pCell[nHeader];
# 61965 "sqlite3.c"
  while( nPayload>0 )
{

    if( spaceLeft==0 )
{


      Pgno pgnoPtrmap = pgnoOvfl;
      if( pBt->autoVacuum )
{

        do{
          pgnoOvfl++;
        } while(
          (ptrmapPageno((pBt), (pgnoOvfl))==(pgnoOvfl)) || pgnoOvfl==((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1))
        );
      }

      rc = allocateBtreePage(pBt, &pOvfl, &pgnoOvfl, pgnoOvfl, 0);
# 61989 "sqlite3.c"
      if( pBt->autoVacuum && rc==0 )
{

        u8 eType = (pgnoPtrmap?4:3);
        ptrmapPut(pBt, pgnoOvfl, eType, pgnoPtrmap, &rc);
        if( rc )
{

          releasePage(pOvfl);
        }
      }

      if( rc )
{

        releasePage(pToRelease);
        return rc;
      }



      ((void) (0));



      ((void) (0))
                                                        ;

      sqlite3Put4byte(pPrior, pgnoOvfl);
      releasePage(pToRelease);
      pToRelease = pOvfl;
      pPrior = pOvfl->aData;
      sqlite3Put4byte(pPrior, 0);
      pPayload = &pOvfl->aData[4];
      spaceLeft = pBt->usableSize - 4;
    }
    n = nPayload;
    if( n>spaceLeft ) n = spaceLeft;



    ((void) (0));



    ((void) (0))
                                                        ;

    if( nSrc>0 )
{

      if( n>nSrc ) n = nSrc;
      ((void) (0));
      memcpy(pPayload, pSrc, n);
    }else{
      memset(pPayload, 0, n);
    }
    nPayload -= n;
    pPayload += n;
    pSrc += n;
    nSrc -= n;
    spaceLeft -= n;
    if( nSrc==0 )
{

      nSrc = nData;
      pSrc = pData;
    }
  }
  releasePage(pToRelease);
  return 0;
}
# 62060 "sqlite3.c"
static void dropCell(MemPage *pPage, int idx, int sz, int *pRC)
{

  u32 pc;
  u8 *data;
  u8 *ptr;
  int rc;
  int hdr;

  if( *pRC ) return;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  data = pPage->aData;
  ptr = &pPage->aCellIdx[2*idx];
  pc = ((ptr)[0]<<8 | (ptr)[1]);
  hdr = pPage->hdrOffset;
  ;
  ;
  if( pc < (u32)((&data[hdr+5])[0]<<8 | (&data[hdr+5])[1]) || pc+sz > pPage->pBt->usableSize )
{

    *pRC = sqlite3CorruptError(62080);
    return;
  }
  rc = freeSpace(pPage, pc, sz);
  if( rc )
{

    *pRC = rc;
    return;
  }
  pPage->nCell--;
  if( pPage->nCell==0 )
{

    memset(&data[hdr+1], 0, 4);
    data[hdr+7] = 0;
    ((&data[hdr+5])[0] = (u8)((pPage->pBt->usableSize)>>8), (&data[hdr+5])[1] = (u8)(pPage->pBt->usableSize));
    pPage->nFree = pPage->pBt->usableSize - pPage->hdrOffset
                       - pPage->childPtrSize - 8;
  }else{
    memmove(ptr, ptr+2, 2*(pPage->nCell - idx));
    ((&data[hdr+3])[0] = (u8)((pPage->nCell)>>8), (&data[hdr+3])[1] = (u8)(pPage->nCell));
    pPage->nFree += 2;
  }
}
# 62114 "sqlite3.c"
static void insertCell(
  MemPage *pPage,
  int i,
  u8 *pCell,
  int sz,
  u8 *pTemp,
  Pgno iChild,
  int *pRC
)
{

  int idx = 0;
  int j;
  u8 *data;
  u8 *pIns;

  if( *pRC ) return;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));





  ((void) (0));
  if( pPage->nOverflow || sz+2>pPage->nFree )
{

    if( pTemp )
{

      memcpy(pTemp, pCell, sz);
      pCell = pTemp;
    }
    if( iChild )
{

      sqlite3Put4byte(pCell, iChild);
    }
    j = pPage->nOverflow++;
    ((void) (0));
    pPage->apOvfl[j] = pCell;
    pPage->aiOvfl[j] = (u16)i;






    ((void) (0));
    ((void) (0));
  }else{
    int rc = sqlite3PagerWrite(pPage->pDbPage);
    if( rc!=0 )
{

      *pRC = rc;
      return;
    }
    ((void) (0));
    data = pPage->aData;
    ((void) (0));
    rc = allocateSpace(pPage, sz, &idx);
    if( rc )
{
 *pRC = rc; return; }


    ((void) (0));
    ((void) (0));
    ((void) (0));
    pPage->nFree -= (u16)(2 + sz);
    memcpy(&data[idx], pCell, sz);
    if( iChild )
{

      sqlite3Put4byte(&data[idx], iChild);
    }
    pIns = pPage->aCellIdx + i*2;
    memmove(pIns+2, pIns, 2*(pPage->nCell - i));
    ((pIns)[0] = (u8)((idx)>>8), (pIns)[1] = (u8)(idx));
    pPage->nCell++;

    if( (++data[pPage->hdrOffset+4])==0 ) data[pPage->hdrOffset+3]++;
    ((void) (0));

    if( pPage->pBt->autoVacuum )
{




      ptrmapPutOvflPtr(pPage, pCell, pRC);
    }

  }
}





typedef struct CellArray CellArray;
struct CellArray {
  int nCell;
  MemPage *pRef;
  u8 **apCell;
  u16 *szCell;
};





static void populateCellCache(CellArray *p, int idx, int N)
{

  ((void) (0));
  while( N>0 )
{

    ((void) (0));
    if( p->szCell[idx]==0 )
{

      p->szCell[idx] = p->pRef->xCellSize(p->pRef, p->apCell[idx]);
    }else{
      ((void) (0))
                                                                           ;
    }
    idx++;
    N--;
  }
}




static __attribute__((noinline)) u16 computeCellSize(CellArray *p, int N)
{

  ((void) (0));
  ((void) (0));
  p->szCell[N] = p->pRef->xCellSize(p->pRef, p->apCell[N]);
  return p->szCell[N];
}
static u16 cachedCellSize(CellArray *p, int N)
{

  ((void) (0));
  if( p->szCell[N] ) return p->szCell[N];
  return computeCellSize(p, N);
}
# 62260 "sqlite3.c"
static int rebuildPage(
  MemPage *pPg,
  int nCell,
  u8 **apCell,
  u16 *szCell
)
{

  const int hdr = pPg->hdrOffset;
  u8 * const aData = pPg->aData;
  const int usableSize = pPg->pBt->usableSize;
  u8 * const pEnd = &aData[usableSize];
  int i;
  u8 *pCellptr = pPg->aCellIdx;
  u8 *pTmp = sqlite3PagerTempSpace(pPg->pBt->pPager);
  u8 *pData;

  i = ((&aData[hdr+5])[0]<<8 | (&aData[hdr+5])[1]);
  memcpy(&pTmp[i], &aData[i], usableSize - i);

  pData = pEnd;
  for(i=0; i<nCell; i++)
{

    u8 *pCell = apCell[i];
    if( (((uptr)(pCell)>=(uptr)(aData))&&((uptr)(pCell)<(uptr)(pEnd))) )
{

      pCell = &pTmp[pCell - aData];
    }
    pData -= szCell[i];
    ((pCellptr)[0] = (u8)(((pData - aData))>>8), (pCellptr)[1] = (u8)((pData - aData)));
    pCellptr += 2;
    if( pData < pCellptr ) return sqlite3CorruptError(62287);
    memcpy(pData, pCell, szCell[i]);
    ((void) (0));
    ;
  }


  pPg->nCell = nCell;
  pPg->nOverflow = 0;

  ((&aData[hdr+1])[0] = (u8)((0)>>8), (&aData[hdr+1])[1] = (u8)(0));
  ((&aData[hdr+3])[0] = (u8)((pPg->nCell)>>8), (&aData[hdr+3])[1] = (u8)(pPg->nCell));
  ((&aData[hdr+5])[0] = (u8)((pData - aData)>>8), (&aData[hdr+5])[1] = (u8)(pData - aData));
  aData[hdr+7] = 0x00;
  return 0;
}
# 62329 "sqlite3.c"
static int pageInsertArray(
  MemPage *pPg,
  u8 *pBegin,
  u8 **ppData,
  u8 *pCellptr,
  int iFirst,
  int nCell,
  CellArray *pCArray
)
{

  int i;
  u8 *aData = pPg->aData;
  u8 *pData = *ppData;
  int iEnd = iFirst + nCell;
  ((void) (0));
  for(i=iFirst; i<iEnd; i++)
{

    int sz, rc;
    u8 *pSlot;
    sz = cachedCellSize(pCArray, i);
    if( (aData[1]==0 && aData[2]==0) || (pSlot = pageFindSlot(pPg,sz,&rc))==0 )
{

      pData -= sz;
      if( pData<pBegin ) return 1;
      pSlot = pData;
    }



    ((void) (0))

                        ;
    memmove(pSlot, pCArray->apCell[i], sz);
    ((pCellptr)[0] = (u8)(((pSlot - aData))>>8), (pCellptr)[1] = (u8)((pSlot - aData)));
    pCellptr += 2;
  }
  *ppData = pData;
  return 0;
}
# 62375 "sqlite3.c"
static int pageFreeArray(
  MemPage *pPg,
  int iFirst,
  int nCell,
  CellArray *pCArray
)
{

  u8 * const aData = pPg->aData;
  u8 * const pEnd = &aData[pPg->pBt->usableSize];
  u8 * const pStart = &aData[pPg->hdrOffset + 8 + pPg->childPtrSize];
  int nRet = 0;
  int i;
  int iEnd = iFirst + nCell;
  u8 *pFree = 0;
  int szFree = 0;

  for(i=iFirst; i<iEnd; i++)
{

    u8 *pCell = pCArray->apCell[i];
    if( (((uptr)(pCell)>=(uptr)(pStart))&&((uptr)(pCell)<(uptr)(pEnd))) )
{

      int sz;



      sz = pCArray->szCell[i]; ((void) (0));
      if( pFree!=(pCell + sz) )
{

        if( pFree )
{

          ((void) (0));
          freeSpace(pPg, (u16)(pFree - aData), szFree);
        }
        pFree = pCell;
        szFree = sz;
        if( pFree+sz>pEnd ) return 0;
      }else{
        pFree = pCell;
        szFree += sz;
      }
      nRet++;
    }
  }
  if( pFree )
{

    ((void) (0));
    freeSpace(pPg, (u16)(pFree - aData), szFree);
  }
  return nRet;
}
# 62432 "sqlite3.c"
static int editPage(
  MemPage *pPg,
  int iOld,
  int iNew,
  int nNew,
  CellArray *pCArray
)
{

  u8 * const aData = pPg->aData;
  const int hdr = pPg->hdrOffset;
  u8 *pBegin = &pPg->aCellIdx[nNew * 2];
  int nCell = pPg->nCell;
  u8 *pData;
  u8 *pCellptr;
  int i;
  int iOldEnd = iOld + pPg->nCell + pPg->nOverflow;
  int iNewEnd = iNew + nNew;







  if( iOld<iNew )
{

    int nShift = pageFreeArray(pPg, iOld, iNew-iOld, pCArray);
    memmove(pPg->aCellIdx, &pPg->aCellIdx[nShift*2], nCell*2);
    nCell -= nShift;
  }
  if( iNewEnd < iOldEnd )
{

    nCell -= pageFreeArray(pPg, iNewEnd, iOldEnd - iNewEnd, pCArray);
  }

  pData = &aData[(((((int)((&aData[hdr+5])[0]<<8 | (&aData[hdr+5])[1]))-1)&0xffff)+1)];
  if( pData<pBegin ) goto editpage_fail;


  if( iNew<iOld )
{

    int nAdd = ((nNew)<(iOld-iNew)?(nNew):(iOld-iNew));
    ((void) (0));
    pCellptr = pPg->aCellIdx;
    memmove(&pCellptr[nAdd*2], pCellptr, nCell*2);
    if( pageInsertArray(
          pPg, pBegin, &pData, pCellptr,
          iNew, nAdd, pCArray
    ) ) goto editpage_fail;
    nCell += nAdd;
  }


  for(i=0; i<pPg->nOverflow; i++)
{

    int iCell = (iOld + pPg->aiOvfl[i]) - iNew;
    if( iCell>=0 && iCell<nNew )
{

      pCellptr = &pPg->aCellIdx[iCell * 2];
      memmove(&pCellptr[2], pCellptr, (nCell - iCell) * 2);
      nCell++;
      if( pageInsertArray(
            pPg, pBegin, &pData, pCellptr,
            iCell+iNew, 1, pCArray
      ) ) goto editpage_fail;
    }
  }


  pCellptr = &pPg->aCellIdx[nCell*2];
  if( pageInsertArray(
        pPg, pBegin, &pData, pCellptr,
        iNew+nCell, nNew-nCell, pCArray
  ) ) goto editpage_fail;

  pPg->nCell = nNew;
  pPg->nOverflow = 0;

  ((&aData[hdr+3])[0] = (u8)((pPg->nCell)>>8), (&aData[hdr+3])[1] = (u8)(pPg->nCell));
  ((&aData[hdr+5])[0] = (u8)((pData - aData)>>8), (&aData[hdr+5])[1] = (u8)(pData - aData));
# 62519 "sqlite3.c"
  return 0;
 editpage_fail:

  populateCellCache(pCArray, iNew, nNew);
  return rebuildPage(pPg, nNew, &pCArray->apCell[iNew], &pCArray->szCell[iNew]);
}
# 62566 "sqlite3.c"
static int balance_quick(MemPage *pParent, MemPage *pPage, u8 *pSpace)
{

  BtShared *const pBt = pPage->pBt;
  MemPage *pNew;
  int rc;
  Pgno pgnoNew;

  ((void) (0));
  ((void) (0));
  ((void) (0));


  if( (pPage->nCell==0) ) return sqlite3CorruptError(62577);





  rc = allocateBtreePage(pBt, &pNew, &pgnoNew, 0, 0);

  if( rc==0 )
{


    u8 *pOut = &pSpace[4];
    u8 *pCell = pPage->apOvfl[0];
    u16 szCell = pPage->xCellSize(pPage, pCell);
    u8 *pStop;

    ((void) (0));
    ((void) (0));
    zeroPage(pNew, 0x01|0x04|0x08);
    rc = rebuildPage(pNew, 1, &pCell, &szCell);
    if( (rc) ) return rc;
    pNew->nFree = pBt->usableSize - pNew->cellOffset - 2 - szCell;
# 62608 "sqlite3.c"
    if( (pBt->autoVacuum) )
{

      ptrmapPut(pBt, pgnoNew, 5, pParent->pgno, &rc);
      if( szCell>pNew->minLocal )
{

        ptrmapPutOvflPtr(pNew, pCell, &rc);
      }
    }
# 62628 "sqlite3.c"
    pCell = ((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(pPage->nCell-1)]))));
    pStop = &pCell[9];
    while( (*(pCell++)&0x80) && pCell<pStop );
    pStop = &pCell[9];
    while( ((*(pOut++) = *(pCell++))&0x80) && pCell<pStop );


    insertCell(pParent, pParent->nCell, pSpace, (int)(pOut-pSpace),
               0, pPage->pgno, &rc);


    sqlite3Put4byte(&pParent->aData[pParent->hdrOffset+8], pgnoNew);


    releasePage(pNew);
  }

  return rc;
}
# 62708 "sqlite3.c"
static void copyNodeContent(MemPage *pFrom, MemPage *pTo, int *pRC)
{

  if( (*pRC)==0 )
{

    BtShared * const pBt = pFrom->pBt;
    u8 * const aFrom = pFrom->aData;
    u8 * const aTo = pTo->aData;
    int const iFromHdr = pFrom->hdrOffset;
    int const iToHdr = ((pTo->pgno==1) ? 100 : 0);
    int rc;
    int iData;


    ((void) (0));
    ((void) (0));
    ((void) (0));


    iData = ((&aFrom[iFromHdr+5])[0]<<8 | (&aFrom[iFromHdr+5])[1]);
    memcpy(&aTo[iData], &aFrom[iData], pBt->usableSize-iData);
    memcpy(&aTo[iToHdr], &aFrom[iFromHdr], pFrom->cellOffset + 2*pFrom->nCell);






    pTo->isInit = 0;
    rc = btreeInitPage(pTo);
    if( rc!=0 )
{

      *pRC = rc;
      return;
    }




    if( (pBt->autoVacuum) )
{

      *pRC = setChildPtrmaps(pTo);
    }
  }
}
# 62789 "sqlite3.c"
static int balance_nonroot(
  MemPage *pParent,
  int iParentIdx,
  u8 *aOvflSpace,
  int isRoot,
  int bBulk
)
{

  BtShared *pBt;
  int nMaxCells = 0;
  int nNew = 0;
  int nOld;
  int i, j, k;
  int nxDiv;
  int rc = 0;
  u16 leafCorrection;
  int leafData;
  int usableSpace;
  int pageFlags;
  int iSpace1 = 0;
  int iOvflSpace = 0;
  int szScratch;
  MemPage *apOld[(1*2+1)];
  MemPage *apNew[(1*2+1)+2];
  u8 *pRight;
  u8 *apDiv[(1*2+1)-1];
  int cntNew[(1*2+1)+2];
  int cntOld[(1*2+1)+2];
  int szNew[(1*2+1)+2];
  u8 *aSpace1;
  Pgno pgno;
  u8 abDone[(1*2+1)+2];
  Pgno aPgno[(1*2+1)+2];
  Pgno aPgOrder[(1*2+1)+2];
  u16 aPgFlags[(1*2+1)+2];
  CellArray b;

  memset(abDone, 0, sizeof(abDone));
  b.nCell = 0;
  b.apCell = 0;
  pBt = pParent->pBt;
  ((void) (0));
  ((void) (0));
# 62841 "sqlite3.c"
  ((void) (0));
  ((void) (0));

  if( !aOvflSpace )
{

    return 7;
  }
# 62859 "sqlite3.c"
  i = pParent->nOverflow + pParent->nCell;
  if( i<2 )
{

    nxDiv = 0;
  }else{
    ((void) (0));
    if( iParentIdx==0 )
{

      nxDiv = 0;
    }else if( iParentIdx==i )
{

      nxDiv = i-2+bBulk;
    }else{
      nxDiv = iParentIdx-1;
    }
    i = 2-bBulk;
  }
  nOld = i+1;
  if( (i+nxDiv-pParent->nOverflow)==pParent->nCell )
{

    pRight = &pParent->aData[pParent->hdrOffset+8];
  }else{
    pRight = ((pParent)->aData + ((pParent)->maskPage & __builtin_bswap16(*(u16*)(&(pParent)->aCellIdx[2*(i+nxDiv-pParent->nOverflow)]))));
  }
  pgno = sqlite3Get4byte(pRight);
  while( 1 )
{

    rc = getAndInitPage(pBt, pgno, &apOld[i], 0, 0);
    if( rc )
{

      memset(apOld, 0, (i+1)*sizeof(MemPage*));
      goto balance_cleanup;
    }
    nMaxCells += 1+apOld[i]->nCell+apOld[i]->nOverflow;
    if( (i--)==0 ) break;

    if( i+nxDiv==pParent->aiOvfl[0] && pParent->nOverflow )
{

      apDiv[i] = pParent->apOvfl[0];
      pgno = sqlite3Get4byte(apDiv[i]);
      szNew[i] = pParent->xCellSize(pParent, apDiv[i]);
      pParent->nOverflow = 0;
    }else{
      apDiv[i] = ((pParent)->aData + ((pParent)->maskPage & __builtin_bswap16(*(u16*)(&(pParent)->aCellIdx[2*(i+nxDiv-pParent->nOverflow)]))));
      pgno = sqlite3Get4byte(apDiv[i]);
      szNew[i] = pParent->xCellSize(pParent, apDiv[i]);
# 62911 "sqlite3.c"
      if( pBt->btsFlags & 0x0004 )
{

        int iOff;

        iOff = ((int)(long int)(apDiv[i])) - ((int)(long int)(pParent->aData));
        if( (iOff+szNew[i])>(int)pBt->usableSize )
{

          rc = sqlite3CorruptError(62916);
          memset(apOld, 0, (i+1)*sizeof(MemPage*));
          goto balance_cleanup;
        }else{
          memcpy(&aOvflSpace[iOff], apDiv[i], szNew[i]);
          apDiv[i] = &aOvflSpace[apDiv[i]-pParent->aData];
        }
      }
      dropCell(pParent, i+nxDiv-pParent->nOverflow, szNew[i], &rc);
    }
  }



  nMaxCells = (nMaxCells + 3)&~3;




  szScratch =
       nMaxCells*sizeof(u8*)
     + nMaxCells*sizeof(u16)
     + pBt->pageSize;



  ((void) (0));
  b.apCell = sqlite3ScratchMalloc( szScratch );
  if( b.apCell==0 )
{

    rc = 7;
    goto balance_cleanup;
  }
  b.szCell = (u16*)&b.apCell[nMaxCells];
  aSpace1 = (u8*)&b.szCell[nMaxCells];
  ((void) (0));
# 62968 "sqlite3.c"
  b.pRef = apOld[0];
  leafCorrection = b.pRef->leaf*4;
  leafData = b.pRef->intKeyLeaf;
  for(i=0; i<nOld; i++)
{

    MemPage *pOld = apOld[i];
    int limit = pOld->nCell;
    u8 *aData = pOld->aData;
    u16 maskPage = pOld->maskPage;
    u8 *piCell = aData + pOld->cellOffset;
    u8 *piEnd;




    if( pOld->aData[0]!=apOld[0]->aData[0] )
{

      rc = sqlite3CorruptError(62983);
      goto balance_cleanup;
    }
# 63004 "sqlite3.c"
    memset(&b.szCell[b.nCell], 0, sizeof(b.szCell[0])*(limit+pOld->nOverflow));
    if( pOld->nOverflow>0 )
{

      limit = pOld->aiOvfl[0];
      for(j=0; j<limit; j++)
{

        b.apCell[b.nCell] = aData + (maskPage & __builtin_bswap16(*(u16*)(piCell)));
        piCell += 2;
        b.nCell++;
      }
      for(k=0; k<pOld->nOverflow; k++)
{

        ((void) (0));
        b.apCell[b.nCell] = pOld->apOvfl[k];
        b.nCell++;
      }
    }
    piEnd = aData + pOld->cellOffset + 2*pOld->nCell;
    while( piCell<piEnd )
{

      ((void) (0));
      b.apCell[b.nCell] = aData + (maskPage & __builtin_bswap16(*(u16*)(piCell)));
      piCell += 2;
      b.nCell++;
    }

    cntOld[i] = b.nCell;
    if( i<nOld-1 && !leafData)
{

      u16 sz = (u16)szNew[i];
      u8 *pTemp;
      ((void) (0));
      b.szCell[b.nCell] = sz;
      pTemp = &aSpace1[iSpace1];
      iSpace1 += sz;
      ((void) (0));
      ((void) (0));
      memcpy(pTemp, apDiv[i], sz);
      b.apCell[b.nCell] = pTemp+leafCorrection;
      ((void) (0));
      b.szCell[b.nCell] = b.szCell[b.nCell] - leafCorrection;
      if( !pOld->leaf )
{

        ((void) (0));
        ((void) (0));


        memcpy(b.apCell[b.nCell], &pOld->aData[8], 4);
      }else{
        ((void) (0));
        while( b.szCell[b.nCell]<4 )
{



          ((void) (0));
          ((void) (0));
          aSpace1[iSpace1++] = 0x00;
          b.szCell[b.nCell]++;
        }
      }
      b.nCell++;
    }
  }
# 63077 "sqlite3.c"
  usableSpace = pBt->usableSize - 12 + leafCorrection;
  for(i=0; i<nOld; i++)
{

    MemPage *p = apOld[i];
    szNew[i] = usableSpace - p->nFree;
    if( szNew[i]<0 )
{
 rc = sqlite3CorruptError(63081); goto balance_cleanup; }
    for(j=0; j<p->nOverflow; j++)
{

      szNew[i] += 2 + p->xCellSize(p, p->apOvfl[j]);
    }
    cntNew[i] = cntOld[i];
  }
  k = nOld;
  for(i=0; i<k; i++)
{

    int sz;
    while( szNew[i]>usableSpace )
{

      if( i+1>=k )
{

        k = i+2;
        if( k>(1*2+1)+2 )
{
 rc = sqlite3CorruptError(63093); goto balance_cleanup; }
        szNew[k-1] = 0;
        cntNew[k-1] = b.nCell;
      }
      sz = 2 + cachedCellSize(&b, cntNew[i]-1);
      szNew[i] -= sz;
      if( !leafData )
{

        if( cntNew[i]<b.nCell )
{

          sz = 2 + cachedCellSize(&b, cntNew[i]);
        }else{
          sz = 0;
        }
      }
      szNew[i+1] += sz;
      cntNew[i]--;
    }
    while( cntNew[i]<b.nCell )
{

      sz = 2 + cachedCellSize(&b, cntNew[i]);
      if( szNew[i]+sz>usableSpace ) break;
      szNew[i] += sz;
      cntNew[i]++;
      if( !leafData )
{

        if( cntNew[i]<b.nCell )
{

          sz = 2 + cachedCellSize(&b, cntNew[i]);
        }else{
          sz = 0;
        }
      }
      szNew[i+1] -= sz;
    }
    if( cntNew[i]>=b.nCell )
{

      k = i+1;
    }else if( cntNew[i] <= (i>0 ? cntNew[i-1] : 0) )
{

      rc = sqlite3CorruptError(63126);
      goto balance_cleanup;
    }
  }
# 63142 "sqlite3.c"
  for(i=k-1; i>0; i--)
{

    int szRight = szNew[i];
    int szLeft = szNew[i-1];
    int r;
    int d;

    r = cntNew[i-1] - 1;
    d = r + 1 - leafData;
    (void)cachedCellSize(&b, d);
    do{
      ((void) (0));
      ((void) (0));
      (void)cachedCellSize(&b, r);
      if( szRight!=0
       && (bBulk || szRight+b.szCell[d]+2 > szLeft-(b.szCell[r]+2)) )
{

        break;
      }
      szRight += b.szCell[d] + 2;
      szLeft -= b.szCell[r] + 2;
      cntNew[i-1] = r;
      r--;
      d--;
    }while( r>=0 );
    szNew[i] = szRight;
    szNew[i-1] = szLeft;
    if( cntNew[i-1] <= (i>1 ? cntNew[i-2] : 0) )
{

      rc = sqlite3CorruptError(63168);
      goto balance_cleanup;
    }
  }
# 63180 "sqlite3.c"
  ((void) (0));
 



    ;




  pageFlags = apOld[0]->aData[0];
  for(i=0; i<k; i++)
{

    MemPage *pNew;
    if( i<nOld )
{

      pNew = apNew[i] = apOld[i];
      apOld[i] = 0;
      rc = sqlite3PagerWrite(pNew->pDbPage);
      nNew++;
      if( rc ) goto balance_cleanup;
    }else{
      ((void) (0));
      rc = allocateBtreePage(pBt, &pNew, &pgno, (bBulk ? 1 : pgno), 0);
      if( rc ) goto balance_cleanup;
      zeroPage(pNew, pageFlags);
      apNew[i] = pNew;
      nNew++;
      cntOld[i] = b.nCell;


      if( (pBt->autoVacuum) )
{

        ptrmapPut(pBt, pNew->pgno, 5, pParent->pgno, &rc);
        if( rc!=0 )
{

          goto balance_cleanup;
        }
      }
    }
  }
# 63230 "sqlite3.c"
  for(i=0; i<nNew; i++)
{

    aPgOrder[i] = aPgno[i] = apNew[i]->pgno;
    aPgFlags[i] = apNew[i]->pDbPage->flags;
    for(j=0; j<i; j++)
{

      if( aPgno[j]==aPgno[i] )
{







        ((void) (0));
        rc = sqlite3CorruptError(63242);
        goto balance_cleanup;
      }
    }
  }
  for(i=0; i<nNew; i++)
{

    int iBest = 0;
    for(j=1; j<nNew; j++)
{

      if( aPgOrder[j]<aPgOrder[iBest] ) iBest = j;
    }
    pgno = aPgOrder[iBest];
    aPgOrder[iBest] = 0xffffffff;
    if( iBest!=i )
{

      if( iBest>i )
{

        sqlite3PagerRekey(apNew[iBest]->pDbPage, pBt->nPage+iBest+1, 0);
      }
      sqlite3PagerRekey(apNew[i]->pDbPage, pgno, aPgFlags[iBest]);
      apNew[i]->pgno = pgno;
    }
  }

 
# 63274 "sqlite3.c"
    ;

  ((void) (0));
  sqlite3Put4byte(pRight, apNew[nNew-1]->pgno);




  if( (pageFlags & 0x08)==0 && nOld!=nNew )
{

    MemPage *pOld = (nNew>nOld ? apNew : apOld)[nOld-1];
    memcpy(&apNew[nNew-1]->aData[8], &pOld->aData[8], 4);
  }
# 63303 "sqlite3.c"
  if( (pBt->autoVacuum) )
{

    MemPage *pNew = apNew[0];
    u8 *aOld = pNew->aData;
    int cntOldNext = pNew->nCell + pNew->nOverflow;
    int usableSize = pBt->usableSize;
    int iNew = 0;
    int iOld = 0;

    for(i=0; i<b.nCell; i++)
{

      u8 *pCell = b.apCell[i];
      if( i==cntOldNext )
{

        MemPage *pOld = (++iOld)<nNew ? apNew[iOld] : apOld[iOld];
        cntOldNext += pOld->nCell + pOld->nOverflow + !leafData;
        aOld = pOld->aData;
      }
      if( i==cntNew[iNew] )
{

        pNew = apNew[++iNew];
        if( !leafData ) continue;
      }







      if( iOld>=nNew
       || pNew->pgno!=aPgno[iOld]
       || !(((uptr)(pCell)>=(uptr)(aOld))&&((uptr)(pCell)<(uptr)(&aOld[usableSize])))
      )
{

        if( !leafCorrection )
{

          ptrmapPut(pBt, sqlite3Get4byte(pCell), 5, pNew->pgno, &rc);
        }
        if( cachedCellSize(&b,i)>pNew->minLocal )
{

          ptrmapPutOvflPtr(pNew, pCell, &rc);
        }
        if( rc ) goto balance_cleanup;
      }
    }
  }


  for(i=0; i<nNew-1; i++)
{

    u8 *pCell;
    u8 *pTemp;
    int sz;
    MemPage *pNew = apNew[i];
    j = cntNew[i];

    ((void) (0));
    ((void) (0));
    pCell = b.apCell[j];
    sz = b.szCell[j] + leafCorrection;
    pTemp = &aOvflSpace[iOvflSpace];
    if( !pNew->leaf )
{

      memcpy(&pNew->aData[8], pCell, 4);
    }else if( leafData )
{






      CellInfo info;
      j--;
      pNew->xParseCell(pNew, b.apCell[j], &info);
      pCell = pTemp;
      sz = 4 + sqlite3PutVarint(&pCell[4], info.nKey);
      pTemp = 0;
    }else{
      pCell -= 4;
# 63384 "sqlite3.c"
      if( b.szCell[j]==4 )
{

        ((void) (0));
        sz = pParent->xCellSize(pParent, pCell);
      }
    }
    iOvflSpace += sz;
    ((void) (0));
    ((void) (0));
    insertCell(pParent, nxDiv+i, pCell, sz, pTemp, pNew->pgno, &rc);
    if( rc!=0 ) goto balance_cleanup;
    ((void) (0));
  }
# 63419 "sqlite3.c"
  for(i=1-nNew; i<nNew; i++)
{

    int iPg = i<0 ? -i : i;
    ((void) (0));
    if( abDone[iPg] ) continue;
    if( i>=0
     || cntOld[iPg-1]>=cntNew[iPg-1]
    )
{

      int iNew;
      int iOld;
      int nNewCell;



      ((void) (0));



      ((void) (0));

      if( iPg==0 )
{

        iNew = iOld = 0;
        nNewCell = cntNew[0];
      }else{
        iOld = iPg<nOld ? (cntOld[iPg-1] + !leafData) : b.nCell;
        iNew = cntNew[iPg-1] + !leafData;
        nNewCell = cntNew[iPg] - iNew;
      }

      rc = editPage(apNew[iPg], iOld, iNew, nNewCell, &b);
      if( rc ) goto balance_cleanup;
      abDone[iPg]++;
      apNew[iPg]->nFree = usableSpace-szNew[iPg];
      ((void) (0));
      ((void) (0));
    }
  }


  ((void) (0));

  ((void) (0));
  ((void) (0));

  if( isRoot && pParent->nCell==0 && pParent->hdrOffset<=apNew[0]->nFree )
{

# 63478 "sqlite3.c"
    ((void) (0));
    rc = defragmentPage(apNew[0]);
    ;
    ((void) (0))


     ;
    copyNodeContent(apNew[0], pParent, &rc);
    freePage(apNew[0], &rc);
  }else if( (pBt->autoVacuum) && !leafCorrection )
{




    for(i=0; i<nNew; i++)
{

      u32 key = sqlite3Get4byte(&apNew[i]->aData[8]);
      ptrmapPut(pBt, key, 5, apNew[i]->pgno, &rc);
    }
  }

  ((void) (0));
 
                               ;



  for(i=nNew; i<nOld; i++)
{

    freePage(apOld[i], &rc);
  }
# 63521 "sqlite3.c"
balance_cleanup:
  sqlite3ScratchFree(b.apCell);
  for(i=0; i<nOld; i++)
{

    releasePage(apOld[i]);
  }
  for(i=0; i<nNew; i++)
{

    releasePage(apNew[i]);
  }

  return rc;
}
# 63553 "sqlite3.c"
static int balance_deeper(MemPage *pRoot, MemPage **ppChild)
{

  int rc;
  MemPage *pChild = 0;
  Pgno pgnoChild = 0;
  BtShared *pBt = pRoot->pBt;

  ((void) (0));
  ((void) (0));





  rc = sqlite3PagerWrite(pRoot->pDbPage);
  if( rc==0 )
{

    rc = allocateBtreePage(pBt,&pChild,&pgnoChild,pRoot->pgno,0);
    copyNodeContent(pRoot, pChild, &rc);
    if( (pBt->autoVacuum) )
{

      ptrmapPut(pBt, pgnoChild, 5, pRoot->pgno, &rc);
    }
  }
  if( rc )
{

    *ppChild = 0;
    releasePage(pChild);
    return rc;
  }
  ((void) (0));
  ((void) (0));
  ((void) (0));

  ;


  memcpy(pChild->aiOvfl, pRoot->aiOvfl,
         pRoot->nOverflow*sizeof(pRoot->aiOvfl[0]));
  memcpy(pChild->apOvfl, pRoot->apOvfl,
         pRoot->nOverflow*sizeof(pRoot->apOvfl[0]));
  pChild->nOverflow = pRoot->nOverflow;


  zeroPage(pRoot, pChild->aData[0] & ~0x08);
  sqlite3Put4byte(&pRoot->aData[pRoot->hdrOffset+8], pgnoChild);

  *ppChild = pChild;
  return 0;
}
# 63610 "sqlite3.c"
static int balance(BtCursor *pCur)
{

  int rc = 0;
  const int nMin = pCur->pBt->usableSize * 2 / 3;
  u8 aBalanceQuickSpace[13];
  u8 *pFree = 0;

  ;
  ;

  do {
    int iPage = pCur->iPage;
    MemPage *pPage = pCur->apPage[iPage];

    if( iPage==0 )
{

      if( pPage->nOverflow )
{






        ((void) (0));
        ;
        rc = balance_deeper(pPage, &pCur->apPage[1]);
        if( rc==0 )
{

          pCur->iPage = 1;
          pCur->aiIdx[0] = 0;
          pCur->aiIdx[1] = 0;
          ((void) (0));
        }
      }else{
        break;
      }
    }else if( pPage->nOverflow==0 && pPage->nFree<=nMin )
{

      break;
    }else{
      MemPage * const pParent = pCur->apPage[iPage-1];
      int const iIdx = pCur->aiIdx[iPage-1];

      rc = sqlite3PagerWrite(pParent->pDbPage);
      if( rc==0 )
{


        if( pPage->intKeyLeaf
         && pPage->nOverflow==1
         && pPage->aiOvfl[0]==pPage->nCell
         && pParent->pgno!=1
         && pParent->nCell==iIdx
        )
{

# 63670 "sqlite3.c"
          ((void) (0));
          ;
          rc = balance_quick(pParent, pPage, aBalanceQuickSpace);
        }else

        {
# 63693 "sqlite3.c"
          u8 *pSpace = sqlite3PageMalloc(pCur->pBt->pageSize);
          rc = balance_nonroot(pParent, iIdx, pSpace, iPage==1,
                               pCur->hints&0x00000001);
          if( pFree )
{





            sqlite3PageFree(pFree);
          }




          pFree = pSpace;
        }
      }

      pPage->nOverflow = 0;


      releasePage(pPage);
      pCur->iPage--;
      ((void) (0));
    }
  }while( rc==0 );

  if( pFree )
{

    sqlite3PageFree(pFree);
  }
  return rc;
}
# 63749 "sqlite3.c"
static int sqlite3BtreeInsert(
  BtCursor *pCur,
  const void *pKey, i64 nKey,
  const void *pData, int nData,
  int nZero,
  int appendBias,
  int seekResult
)
{

  int rc;
  int loc = seekResult;
  int szNew = 0;
  int idx;
  MemPage *pPage;
  Btree *p = pCur->pBtree;
  BtShared *pBt = p->pBt;
  unsigned char *oldCell;
  unsigned char *newCell = 0;

  if( pCur->eState==4 )
{

    ((void) (0));
    return pCur->skipNext;
  }

  ((void) (0));
  ((void) (0))

                                                     ;
  ((void) (0));






  ((void) (0));
# 63796 "sqlite3.c"
  if( pCur->curFlags & 0x20 )
{

    rc = saveAllCursors(pBt, pCur->pgnoRoot, pCur);
    if( rc ) return rc;
  }

  if( pCur->pKeyInfo==0 )
{

    ((void) (0));


    invalidateIncrblobCursors(p, nKey, 0);




    if( (pCur->curFlags&0x02)!=0 && nKey>0
      && pCur->info.nKey==nKey-1 )
{

       loc = -1;
    }else if( loc==0 )
{

      rc = sqlite3BtreeMovetoUnpacked(pCur, 0, nKey, appendBias, &loc);
      if( rc ) return rc;
    }
  }else if( loc==0 )
{

    rc = btreeMoveto(pCur, pKey, nKey, appendBias, &loc);
    if( rc ) return rc;
  }
  ((void) (0));

  pPage = pCur->apPage[pCur->iPage];
  ((void) (0));
  ((void) (0));

 

                                              ;
  ((void) (0));
  newCell = pBt->pTmpSpace;
  ((void) (0));
  rc = fillInCell(pPage, newCell, pKey, nKey, pData, nData, nZero, &szNew);
  if( rc ) goto end_insert;
  ((void) (0));
  ((void) (0));
  idx = pCur->aiIdx[pCur->iPage];
  if( loc==0 )
{

    u16 szOld;
    ((void) (0));
    rc = sqlite3PagerWrite(pPage->pDbPage);
    if( rc )
{

      goto end_insert;
    }
    oldCell = ((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(idx)]))));
    if( !pPage->leaf )
{

      memcpy(newCell, oldCell, 4);
    }
    rc = clearCell(pPage, oldCell, &szOld);
    dropCell(pPage, idx, szOld, &rc);
    if( rc ) goto end_insert;
  }else if( loc<0 && pPage->nCell>0 )
{

    ((void) (0));
    idx = ++pCur->aiIdx[pCur->iPage];
  }else{
    ((void) (0));
  }
  insertCell(pPage, idx, newCell, szNew, 0, 0, &rc);
  ((void) (0));
# 63881 "sqlite3.c"
  pCur->info.nSize = 0;
  if( rc==0 && pPage->nOverflow )
{

    pCur->curFlags &= ~(0x02);
    rc = balance(pCur);





    pCur->apPage[pCur->iPage]->nOverflow = 0;
    pCur->eState = 0;
  }
  ((void) (0));

end_insert:
  return rc;
}
# 63916 "sqlite3.c"
static int sqlite3BtreeDelete(BtCursor *pCur, u8 flags)
{

  Btree *p = pCur->pBtree;
  BtShared *pBt = p->pBt;
  int rc;
  MemPage *pPage;
  unsigned char *pCell;
  int iCellIdx;
  int iCellDepth;
  u16 szCell;
  int bSkipnext = 0;
  u8 bPreserve = flags & 0x02;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  iCellDepth = pCur->iPage;
  iCellIdx = pCur->aiIdx[iCellDepth];
  pPage = pCur->apPage[iCellDepth];
  pCell = ((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(iCellIdx)]))));
# 63950 "sqlite3.c"
  if( !pPage->leaf )
{

    int notUsed = 0;
    rc = sqlite3BtreePrevious(pCur, &notUsed);
    if( rc ) return rc;
  }



  if( pCur->curFlags & 0x20 )
{

    rc = saveAllCursors(pBt, pCur->pgnoRoot, pCur);
    if( rc ) return rc;
  }



  if( pCur->pKeyInfo==0 )
{

    invalidateIncrblobCursors(p, pCur->info.nKey, 0);
  }
# 63978 "sqlite3.c"
  if( bPreserve )
{

    if( !pPage->leaf
     || (pPage->nFree+cellSizePtr(pPage,pCell)+2)>(int)(pBt->usableSize*2/3)
    )
{



      rc = saveCursorKey(pCur);
      if( rc ) return rc;
    }else{
      bSkipnext = 1;
    }
  }




  rc = sqlite3PagerWrite(pPage->pDbPage);
  if( rc ) return rc;
  rc = clearCell(pPage, pCell, &szCell);
  dropCell(pPage, iCellIdx, szCell, &rc);
  if( rc ) return rc;






  if( !pPage->leaf )
{

    MemPage *pLeaf = pCur->apPage[pCur->iPage];
    int nCell;
    Pgno n = pCur->apPage[iCellDepth+1]->pgno;
    unsigned char *pTmp;

    pCell = ((pLeaf)->aData + ((pLeaf)->maskPage & __builtin_bswap16(*(u16*)(&(pLeaf)->aCellIdx[2*(pLeaf->nCell-1)]))));
    if( pCell<&pLeaf->aData[4] ) return sqlite3CorruptError(64012);
    nCell = pLeaf->xCellSize(pLeaf, pCell);
    ((void) (0));
    pTmp = pBt->pTmpSpace;
    ((void) (0));
    rc = sqlite3PagerWrite(pLeaf->pDbPage);
    insertCell(pPage, iCellIdx, pCell-4, nCell+4, pTmp, n, &rc);
    dropCell(pLeaf, pLeaf->nCell-1, nCell, &rc);
    if( rc ) return rc;
  }
# 64038 "sqlite3.c"
  rc = balance(pCur);
  if( rc==0 && pCur->iPage>iCellDepth )
{

    while( pCur->iPage>iCellDepth )
{

      releasePage(pCur->apPage[pCur->iPage--]);
    }
    rc = balance(pCur);
  }

  if( rc==0 )
{

    if( bSkipnext )
{

      ((void) (0));
      ((void) (0));
      ((void) (0));
      pCur->eState = 2;
      if( iCellIdx>=pPage->nCell )
{

        pCur->skipNext = -1;
        pCur->aiIdx[iCellDepth] = pPage->nCell-1;
      }else{
        pCur->skipNext = 1;
      }
    }else{
      rc = moveToRoot(pCur);
      if( bPreserve )
{

        pCur->eState = 3;
      }
    }
  }
  return rc;
}
# 64079 "sqlite3.c"
static int btreeCreateTable(Btree *p, int *piTable, int createTabFlags)
{

  BtShared *pBt = p->pBt;
  MemPage *pRoot;
  Pgno pgnoRoot;
  int rc;
  int ptfFlags;

  ((void) (0));
  ((void) (0));
  ((void) (0));







  if( pBt->autoVacuum )
{

    Pgno pgnoMove;
    MemPage *pPageMove;






    invalidateAllOverflowCache(pBt);





    sqlite3BtreeGetMeta(p, 4, &pgnoRoot);
    pgnoRoot++;




    while( pgnoRoot==ptrmapPageno(pBt, pgnoRoot) ||
        pgnoRoot==((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1)) )
{

      pgnoRoot++;
    }
    ((void) (0));
    ;





    rc = allocateBtreePage(pBt, &pPageMove, &pgnoMove, pgnoRoot, 1);
    if( rc!=0 )
{

      return rc;
    }

    if( pgnoMove!=pgnoRoot )
{







      u8 eType = 0;
      Pgno iPtrPage = 0;




      rc = saveAllCursors(pBt, 0, 0);
      releasePage(pPageMove);
      if( rc!=0 )
{

        return rc;
      }


      rc = btreeGetPage(pBt, pgnoRoot, &pRoot, 0);
      if( rc!=0 )
{

        return rc;
      }
      rc = ptrmapGet(pBt, pgnoRoot, &eType, &iPtrPage);
      if( eType==1 || eType==2 )
{

        rc = sqlite3CorruptError(64159);
      }
      if( rc!=0 )
{

        releasePage(pRoot);
        return rc;
      }
      ((void) (0));
      ((void) (0));
      rc = relocatePage(pBt, pRoot, eType, iPtrPage, pgnoMove, 0);
      releasePage(pRoot);


      if( rc!=0 )
{

        return rc;
      }
      rc = btreeGetPage(pBt, pgnoRoot, &pRoot, 0);
      if( rc!=0 )
{

        return rc;
      }
      rc = sqlite3PagerWrite(pRoot->pDbPage);
      if( rc!=0 )
{

        releasePage(pRoot);
        return rc;
      }
    }else{
      pRoot = pPageMove;
    }


    ptrmapPut(pBt, pgnoRoot, 1, 0, &rc);
    if( rc )
{

      releasePage(pRoot);
      return rc;
    }





    ((void) (0));
    rc = sqlite3BtreeUpdateMeta(p, 4, pgnoRoot);
    if( (rc) )
{

      releasePage(pRoot);
      return rc;
    }

  }else{
    rc = allocateBtreePage(pBt, &pRoot, &pgnoRoot, 1, 0);
    if( rc ) return rc;
  }

  ((void) (0));
  if( createTabFlags & 1 )
{

    ptfFlags = 0x01 | 0x04 | 0x08;
  }else{
    ptfFlags = 0x02 | 0x08;
  }
  zeroPage(pRoot, ptfFlags);
  sqlite3PagerUnref(pRoot->pDbPage);
  ((void) (0));
  *piTable = (int)pgnoRoot;
  return 0;
}
static int sqlite3BtreeCreateTable(Btree *p, int *piTable, int flags)
{

  int rc;
  sqlite3BtreeEnter(p);
  rc = btreeCreateTable(p, piTable, flags);
  sqlite3BtreeLeave(p);
  return rc;
}





static int clearDatabasePage(
  BtShared *pBt,
  Pgno pgno,
  int freePageFlag,
  int *pnChange
)
{

  MemPage *pPage;
  int rc;
  unsigned char *pCell;
  int i;
  int hdr;
  u16 szCell;

  ((void) (0));
  if( pgno>btreePagecount(pBt) )
{

    return sqlite3CorruptError(64249);
  }
  rc = getAndInitPage(pBt, pgno, &pPage, 0, 0);
  if( rc ) return rc;
  if( pPage->bBusy )
{

    rc = sqlite3CorruptError(64254);
    goto cleardatabasepage_out;
  }
  pPage->bBusy = 1;
  hdr = pPage->hdrOffset;
  for(i=0; i<pPage->nCell; i++)
{

    pCell = ((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(i)]))));
    if( !pPage->leaf )
{

      rc = clearDatabasePage(pBt, sqlite3Get4byte(pCell), 1, pnChange);
      if( rc ) goto cleardatabasepage_out;
    }
    rc = clearCell(pPage, pCell, &szCell);
    if( rc ) goto cleardatabasepage_out;
  }
  if( !pPage->leaf )
{

    rc = clearDatabasePage(pBt, sqlite3Get4byte(&pPage->aData[hdr+8]), 1, pnChange);
    if( rc ) goto cleardatabasepage_out;
  }else if( pnChange )
{

    ((void) (0));
    ;
    *pnChange += pPage->nCell;
  }
  if( freePageFlag )
{

    freePage(pPage, &rc);
  }else if( (rc = sqlite3PagerWrite(pPage->pDbPage))==0 )
{

    zeroPage(pPage, pPage->aData[hdr] | 0x08);
  }

cleardatabasepage_out:
  pPage->bBusy = 0;
  releasePage(pPage);
  return rc;
}
# 64301 "sqlite3.c"
static int sqlite3BtreeClearTable(Btree *p, int iTable, int *pnChange)
{

  int rc;
  BtShared *pBt = p->pBt;
  sqlite3BtreeEnter(p);
  ((void) (0));

  rc = saveAllCursors(pBt, (Pgno)iTable, 0);

  if( 0==rc )
{




    invalidateIncrblobCursors(p, 0, 1);
    rc = clearDatabasePage(pBt, (Pgno)iTable, 0, pnChange);
  }
  sqlite3BtreeLeave(p);
  return rc;
}






static int sqlite3BtreeClearTableOfCursor(BtCursor *pCur)
{

  return sqlite3BtreeClearTable(pCur->pBtree, pCur->pgnoRoot, 0);
}
# 64349 "sqlite3.c"
static int btreeDropTable(Btree *p, Pgno iTable, int *piMoved)
{

  int rc;
  MemPage *pPage = 0;
  BtShared *pBt = p->pBt;

  ((void) (0));
  ((void) (0));
# 64365 "sqlite3.c"
  if( (pBt->pCursor) )
{

    ;
    return (6 | (1<<8));
  }





  if( (iTable<2) )
{

    return sqlite3CorruptError(64375);
  }

  rc = btreeGetPage(pBt, (Pgno)iTable, &pPage, 0);
  if( rc ) return rc;
  rc = sqlite3BtreeClearTable(p, iTable, 0);
  if( rc )
{

    releasePage(pPage);
    return rc;
  }

  *piMoved = 0;





  if( pBt->autoVacuum )
{

    Pgno maxRootPgno;
    sqlite3BtreeGetMeta(p, 4, &maxRootPgno);

    if( iTable==maxRootPgno )
{




      freePage(pPage, &rc);
      releasePage(pPage);
      if( rc!=0 )
{

        return rc;
      }
    }else{




      MemPage *pMove;
      releasePage(pPage);
      rc = btreeGetPage(pBt, maxRootPgno, &pMove, 0);
      if( rc!=0 )
{

        return rc;
      }
      rc = relocatePage(pBt, pMove, 1, 0, iTable, 0);
      releasePage(pMove);
      if( rc!=0 )
{

        return rc;
      }
      pMove = 0;
      rc = btreeGetPage(pBt, maxRootPgno, &pMove, 0);
      freePage(pMove, &rc);
      releasePage(pMove);
      if( rc!=0 )
{

        return rc;
      }
      *piMoved = maxRootPgno;
    }






    maxRootPgno--;
    while( maxRootPgno==((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1))
           || (ptrmapPageno((pBt), (maxRootPgno))==(maxRootPgno)) )
{

      maxRootPgno--;
    }
    ((void) (0));

    rc = sqlite3BtreeUpdateMeta(p, 4, maxRootPgno);
  }else{
    freePage(pPage, &rc);
    releasePage(pPage);
  }

  return rc;
}
static int sqlite3BtreeDropTable(Btree *p, int iTable, int *piMoved)
{

  int rc;
  sqlite3BtreeEnter(p);
  rc = btreeDropTable(p, iTable, piMoved);
  sqlite3BtreeLeave(p);
  return rc;
}
# 64480 "sqlite3.c"
static void sqlite3BtreeGetMeta(Btree *p, int idx, u32 *pMeta)
{

  BtShared *pBt = p->pBt;

  sqlite3BtreeEnter(p);
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  if( idx==15 )
{

    *pMeta = sqlite3PagerDataVersion(pBt->pPager) + p->iDataVersion;
  }else{
    *pMeta = sqlite3Get4byte(&pBt->pPage1->aData[36 + idx*4]);
  }
# 64503 "sqlite3.c"
  sqlite3BtreeLeave(p);
}





static int sqlite3BtreeUpdateMeta(Btree *p, int idx, u32 iMeta)
{

  BtShared *pBt = p->pBt;
  unsigned char *pP1;
  int rc;
  ((void) (0));
  sqlite3BtreeEnter(p);
  ((void) (0));
  ((void) (0));
  pP1 = pBt->pPage1->aData;
  rc = sqlite3PagerWrite(pBt->pPage1->pDbPage);
  if( rc==0 )
{

    sqlite3Put4byte(&pP1[36 + idx*4], iMeta);

    if( idx==7 )
{

      ((void) (0));
      ((void) (0));
      pBt->incrVacuum = (u8)iMeta;
    }

  }
  sqlite3BtreeLeave(p);
  return rc;
}
# 64543 "sqlite3.c"
static int sqlite3BtreeCount(BtCursor *pCur, i64 *pnEntry)
{

  i64 nEntry = 0;
  int rc;

  if( pCur->pgnoRoot==0 )
{

    *pnEntry = 0;
    return 0;
  }
  rc = moveToRoot(pCur);




  while( rc==0 )
{

    int iIdx;
    MemPage *pPage;





    pPage = pCur->apPage[pCur->iPage];
    if( pPage->leaf || !pPage->intKey )
{

      nEntry += pPage->nCell;
    }
# 64579 "sqlite3.c"
    if( pPage->leaf )
{

      do {
        if( pCur->iPage==0 )
{


          *pnEntry = nEntry;
          return moveToRoot(pCur);
        }
        moveToParent(pCur);
      }while ( pCur->aiIdx[pCur->iPage]>=pCur->apPage[pCur->iPage]->nCell );

      pCur->aiIdx[pCur->iPage]++;
      pPage = pCur->apPage[pCur->iPage];
    }




    iIdx = pCur->aiIdx[pCur->iPage];
    if( iIdx==pPage->nCell )
{

      rc = moveToChild(pCur, sqlite3Get4byte(&pPage->aData[pPage->hdrOffset+8]));
    }else{
      rc = moveToChild(pCur, sqlite3Get4byte(((pPage)->aData + ((pPage)->maskPage & __builtin_bswap16(*(u16*)(&(pPage)->aCellIdx[2*(iIdx)]))))));
    }
  }


  return rc;
}






static Pager *sqlite3BtreePager(Btree *p)
{

  return p->pBt->pPager;
}





static void checkAppendMsg(
  IntegrityCk *pCheck,
  const char *zFormat,
  ...
)
{

  va_list ap;
  if( !pCheck->mxErr ) return;
  pCheck->mxErr--;
  pCheck->nErr++;
  __builtin_va_start(ap,zFormat);
  if( pCheck->errMsg.nChar )
{

    sqlite3StrAccumAppend(&pCheck->errMsg, "\n", 1);
  }
  if( pCheck->zPfx )
{

    sqlite3XPrintf(&pCheck->errMsg, pCheck->zPfx, pCheck->v1, pCheck->v2);
  }
  sqlite3VXPrintf(&pCheck->errMsg, zFormat, ap);
  __builtin_va_end(ap);
  if( pCheck->errMsg.accError==1 )
{

    pCheck->mallocFailed = 1;
  }
}
# 64651 "sqlite3.c"
static int getPageReferenced(IntegrityCk *pCheck, Pgno iPg)
{

  ((void) (0));
  return (pCheck->aPgRef[iPg/8] & (1 << (iPg & 0x07)));
}




static void setPageReferenced(IntegrityCk *pCheck, Pgno iPg)
{

  ((void) (0));
  pCheck->aPgRef[iPg/8] |= (1 << (iPg & 0x07));
}
# 64673 "sqlite3.c"
static int checkRef(IntegrityCk *pCheck, Pgno iPage)
{

  if( iPage==0 ) return 1;
  if( iPage>pCheck->nPage )
{

    checkAppendMsg(pCheck, "invalid page number %d", iPage);
    return 1;
  }
  if( getPageReferenced(pCheck, iPage) )
{

    checkAppendMsg(pCheck, "2nd reference to page %d", iPage);
    return 1;
  }
  setPageReferenced(pCheck, iPage);
  return 0;
}







static void checkPtrmap(
  IntegrityCk *pCheck,
  Pgno iChild,
  u8 eType,
  Pgno iParent
)
{

  int rc;
  u8 ePtrmapType;
  Pgno iPtrmapParent;

  rc = ptrmapGet(pCheck->pBt, iChild, &ePtrmapType, &iPtrmapParent);
  if( rc!=0 )
{

    if( rc==7 || rc==(10 | (12<<8)) ) pCheck->mallocFailed = 1;
    checkAppendMsg(pCheck, "Failed to read ptrmap key=%d", iChild);
    return;
  }

  if( ePtrmapType!=eType || iPtrmapParent!=iParent )
{

    checkAppendMsg(pCheck,
      "Bad ptr map entry key=%d expected=(%d,%d) got=(%d,%d)",
      iChild, eType, iParent, ePtrmapType, iPtrmapParent);
  }
}






static void checkList(
  IntegrityCk *pCheck,
  int isFreeList,
  int iPage,
  int N
)
{

  int i;
  int expected = N;
  int iFirst = iPage;
  while( N-- > 0 && pCheck->mxErr )
{

    DbPage *pOvflPage;
    unsigned char *pOvflData;
    if( iPage<1 )
{

      checkAppendMsg(pCheck,
         "%d of %d pages missing from overflow list starting at %d",
          N+1, expected, iFirst);
      break;
    }
    if( checkRef(pCheck, iPage) ) break;
    if( sqlite3PagerGet(pCheck->pPager, (Pgno)iPage, &pOvflPage, 0) )
{

      checkAppendMsg(pCheck, "failed to get page %d", iPage);
      break;
    }
    pOvflData = (unsigned char *)sqlite3PagerGetData(pOvflPage);
    if( isFreeList )
{

      int n = sqlite3Get4byte(&pOvflData[4]);

      if( pCheck->pBt->autoVacuum )
{

        checkPtrmap(pCheck, iPage, 2, 0);
      }

      if( n>(int)pCheck->pBt->usableSize/4-2 )
{

        checkAppendMsg(pCheck,
           "freelist leaf count too big on page %d", iPage);
        N--;
      }else{
        for(i=0; i<n; i++)
{

          Pgno iFreePage = sqlite3Get4byte(&pOvflData[8+i*4]);

          if( pCheck->pBt->autoVacuum )
{

            checkPtrmap(pCheck, iFreePage, 2, 0);
          }

          checkRef(pCheck, iFreePage);
        }
        N -= n;
      }
    }

    else{




      if( pCheck->pBt->autoVacuum && N>0 )
{

        i = sqlite3Get4byte(pOvflData);
        checkPtrmap(pCheck, i, 4, iPage);
      }
    }

    iPage = sqlite3Get4byte(pOvflData);
    sqlite3PagerUnref(pOvflPage);

    if( isFreeList && N<(iPage!=0) )
{

      checkAppendMsg(pCheck, "free-page count in header is too small");
    }
  }
}
# 64814 "sqlite3.c"
static void btreeHeapInsert(u32 *aHeap, u32 x)
{

  u32 j, i = ++aHeap[0];
  aHeap[i] = x;
  while( (j = i/2)>0 && aHeap[j]>aHeap[i] )
{

    x = aHeap[j];
    aHeap[j] = aHeap[i];
    aHeap[i] = x;
    i = j;
  }
}
static int btreeHeapPull(u32 *aHeap, u32 *pOut)
{

  u32 j, i, x;
  if( (x = aHeap[0])==0 ) return 0;
  *pOut = aHeap[1];
  aHeap[1] = aHeap[x];
  aHeap[x] = 0xffffffff;
  aHeap[0]--;
  i = 1;
  while( (j = i*2)<=aHeap[0] )
{

    if( aHeap[j]>aHeap[j+1] ) j++;
    if( aHeap[i]<aHeap[j] ) break;
    x = aHeap[i];
    aHeap[i] = aHeap[j];
    aHeap[j] = x;
    i = j;
  }
  return 1;
}
# 64858 "sqlite3.c"
static int checkTreePage(
  IntegrityCk *pCheck,
  int iPage,
  i64 *piMinKey,
  i64 maxKey
)
{

  MemPage *pPage = 0;
  int i;
  int rc;
  int depth = -1, d2;
  int pgno;
  int nFrag;
  int hdr;
  int cellStart;
  int nCell;
  int doCoverageCheck = 1;
  int keyCanBeEqual = 1;

  u8 *data;
  u8 *pCell;
  u8 *pCellIdx;
  BtShared *pBt;
  u32 pc;
  u32 usableSize;
  u32 contentOffset;
  u32 *heap = 0;
  u32 x, prev = 0;
  const char *saved_zPfx = pCheck->zPfx;
  int saved_v1 = pCheck->v1;
  int saved_v2 = pCheck->v2;
  u8 savedIsInit = 0;



  pBt = pCheck->pBt;
  usableSize = pBt->usableSize;
  if( iPage==0 ) return 0;
  if( checkRef(pCheck, iPage) ) return 0;
  pCheck->zPfx = "Page %d: ";
  pCheck->v1 = iPage;
  if( (rc = btreeGetPage(pBt, (Pgno)iPage, &pPage, 0))!=0 )
{

    checkAppendMsg(pCheck,
       "unable to get the page. error code=%d", rc);
    goto end_of_check;
  }



  savedIsInit = pPage->isInit;
  pPage->isInit = 0;
  if( (rc = btreeInitPage(pPage))!=0 )
{

    ((void) (0));
    checkAppendMsg(pCheck,
                   "btreeInitPage() returns error code %d", rc);
    goto end_of_check;
  }
  data = pPage->aData;
  hdr = pPage->hdrOffset;


  pCheck->zPfx = "On tree page %d cell %d: ";
  contentOffset = (((((int)((&data[hdr+5])[0]<<8 | (&data[hdr+5])[1]))-1)&0xffff)+1);
  ((void) (0));



  nCell = ((&data[hdr+3])[0]<<8 | (&data[hdr+3])[1]);
  ((void) (0));



  cellStart = hdr + 12 - 4*pPage->leaf;
  ((void) (0));
  pCellIdx = &data[cellStart + 2*(nCell-1)];

  if( !pPage->leaf )
{


    pgno = sqlite3Get4byte(&data[hdr+8]);

    if( pBt->autoVacuum )
{

      pCheck->zPfx = "On page %d at right child: ";
      checkPtrmap(pCheck, pgno, 5, iPage);
    }

    depth = checkTreePage(pCheck, pgno, &maxKey, maxKey);
    keyCanBeEqual = 0;
  }else{


    heap = pCheck->heap;
    heap[0] = 0;
  }



  for(i=nCell-1; i>=0 && pCheck->mxErr; i--)
{

    CellInfo info;


    pCheck->v2 = i;
    ((void) (0));
    pc = __builtin_bswap16(*(u16*)(pCellIdx));
    pCellIdx -= 2;
    if( pc<contentOffset || pc>usableSize-4 )
{

      checkAppendMsg(pCheck, "Offset %d out of range %d..%d",
                             pc, contentOffset, usableSize-4);
      doCoverageCheck = 0;
      continue;
    }
    pCell = &data[pc];
    pPage->xParseCell(pPage, pCell, &info);
    if( pc+info.nSize>usableSize )
{

      checkAppendMsg(pCheck, "Extends off end of page");
      doCoverageCheck = 0;
      continue;
    }


    if( pPage->intKey )
{

      if( keyCanBeEqual ? (info.nKey > maxKey) : (info.nKey >= maxKey) )
{

        checkAppendMsg(pCheck, "Rowid %lld out of order", info.nKey);
      }
      maxKey = info.nKey;
    }


    if( info.nPayload>info.nLocal )
{

      int nPage;
      Pgno pgnoOvfl;
      ((void) (0));
      nPage = (info.nPayload - info.nLocal + usableSize - 5)/(usableSize - 4);
      pgnoOvfl = sqlite3Get4byte(&pCell[info.nSize - 4]);

      if( pBt->autoVacuum )
{

        checkPtrmap(pCheck, pgnoOvfl, 3, iPage);
      }

      checkList(pCheck, 0, pgnoOvfl, nPage);
    }

    if( !pPage->leaf )
{


      pgno = sqlite3Get4byte(pCell);

      if( pBt->autoVacuum )
{

        checkPtrmap(pCheck, pgno, 5, iPage);
      }

      d2 = checkTreePage(pCheck, pgno, &maxKey, maxKey);
      keyCanBeEqual = 0;
      if( d2!=depth )
{

        checkAppendMsg(pCheck, "Child page depth differs");
        depth = d2;
      }
    }else{

      btreeHeapInsert(heap, (pc<<16)|(pc+info.nSize-1));
    }
  }
  *piMinKey = maxKey;



  pCheck->zPfx = 0;
  if( doCoverageCheck && pCheck->mxErr>0 )
{




    if( !pPage->leaf )
{

      heap = pCheck->heap;
      heap[0] = 0;
      for(i=nCell-1; i>=0; i--)
{

        u32 size;
        pc = __builtin_bswap16(*(u16*)(&data[cellStart+i*2]));
        size = pPage->xCellSize(pPage, &data[pc]);
        btreeHeapInsert(heap, (pc<<16)|(pc+size-1));
      }
    }






    i = ((&data[hdr+1])[0]<<8 | (&data[hdr+1])[1]);
    while( i>0 )
{

      int size, j;
      ((void) (0));
      size = ((&data[i+2])[0]<<8 | (&data[i+2])[1]);
      ((void) (0));
      btreeHeapInsert(heap, (((u32)i)<<16)|(i+size-1));




      j = ((&data[i])[0]<<8 | (&data[i])[1]);


      ((void) (0));
      ((void) (0));
      i = j;
    }
# 65073 "sqlite3.c"
    nFrag = 0;
    prev = contentOffset - 1;
    while( btreeHeapPull(heap,&x) )
{

      if( (prev&0xffff)>=(x>>16) )
{

        checkAppendMsg(pCheck,
          "Multiple uses for byte %u of page %d", x>>16, iPage);
        break;
      }else{
        nFrag += (x>>16) - (prev&0xffff) - 1;
        prev = x;
      }
    }
    nFrag += usableSize - (prev&0xffff) - 1;





    if( heap[0]==0 && nFrag!=data[hdr+7] )
{

      checkAppendMsg(pCheck,
          "Fragmentation of %d bytes reported as %d on page %d",
          nFrag, data[hdr+7], iPage);
    }
  }

end_of_check:
  if( !doCoverageCheck ) pPage->isInit = savedIsInit;
  releasePage(pPage);
  pCheck->zPfx = saved_zPfx;
  pCheck->v1 = saved_v1;
  pCheck->v2 = saved_v2;
  return depth+1;
}
# 65122 "sqlite3.c"
static char *sqlite3BtreeIntegrityCheck(
  Btree *p,
  int *aRoot,
  int nRoot,
  int mxErr,
  int *pnErr
)
{

  Pgno i;
  IntegrityCk sCheck;
  BtShared *pBt = p->pBt;
  int savedDbFlags = pBt->db->flags;
  char zErr[100];
  ;

  sqlite3BtreeEnter(p);
  ((void) (0));
  ;
  ((void) (0));
  sCheck.pBt = pBt;
  sCheck.pPager = pBt->pPager;
  sCheck.nPage = btreePagecount(sCheck.pBt);
  sCheck.mxErr = mxErr;
  sCheck.nErr = 0;
  sCheck.mallocFailed = 0;
  sCheck.zPfx = 0;
  sCheck.v1 = 0;
  sCheck.v2 = 0;
  sCheck.aPgRef = 0;
  sCheck.heap = 0;
  sqlite3StrAccumInit(&sCheck.errMsg, 0, zErr, sizeof(zErr), 1000000000);
  sCheck.errMsg.printfFlags = 0x01;
  if( sCheck.nPage==0 )
{

    goto integrity_ck_cleanup;
  }

  sCheck.aPgRef = sqlite3MallocZero((sCheck.nPage / 8)+ 1);
  if( !sCheck.aPgRef )
{

    sCheck.mallocFailed = 1;
    goto integrity_ck_cleanup;
  }
  sCheck.heap = (u32*)sqlite3PageMalloc( pBt->pageSize );
  if( sCheck.heap==0 )
{

    sCheck.mallocFailed = 1;
    goto integrity_ck_cleanup;
  }

  i = ((Pgno)((sqlite3PendingByte/((pBt)->pageSize))+1));
  if( i<=sCheck.nPage ) setPageReferenced(&sCheck, i);



  sCheck.zPfx = "Main freelist: ";
  checkList(&sCheck, 1, sqlite3Get4byte(&pBt->pPage1->aData[32]),
            sqlite3Get4byte(&pBt->pPage1->aData[36]));
  sCheck.zPfx = 0;



  ;
  pBt->db->flags &= ~0x10000000;
  for(i=0; (int)i<nRoot && sCheck.mxErr; i++)
{

    i64 notUsed;
    if( aRoot[i]==0 ) continue;

    if( pBt->autoVacuum && aRoot[i]>1 )
{

      checkPtrmap(&sCheck, aRoot[i], 1, 0);
    }

    checkTreePage(&sCheck, aRoot[i], &notUsed, (0xffffffff|(((i64)0x7fffffff)<<32)));
  }
  pBt->db->flags = savedDbFlags;



  for(i=1; i<=sCheck.nPage && sCheck.mxErr; i++)
{

# 65205 "sqlite3.c"
    if( getPageReferenced(&sCheck, i)==0 &&
       (ptrmapPageno(pBt, i)!=i || !pBt->autoVacuum) )
{

      checkAppendMsg(&sCheck, "Page %d is never used", i);
    }
    if( getPageReferenced(&sCheck, i)!=0 &&
       (ptrmapPageno(pBt, i)==i && pBt->autoVacuum) )
{

      checkAppendMsg(&sCheck, "Pointer map page %d is referenced", i);
    }

  }



integrity_ck_cleanup:
  sqlite3PageFree(sCheck.heap);
  sqlite3_free(sCheck.aPgRef);
  if( sCheck.mallocFailed )
{

    sqlite3StrAccumReset(&sCheck.errMsg);
    sCheck.nErr++;
  }
  *pnErr = sCheck.nErr;
  if( sCheck.nErr==0 ) sqlite3StrAccumReset(&sCheck.errMsg);

  ((void) (0));
  sqlite3BtreeLeave(p);
  return sqlite3StrAccumFinish(&sCheck.errMsg);
}
# 65241 "sqlite3.c"
static const char *sqlite3BtreeGetFilename(Btree *p)
{

  ((void) (0));
  return sqlite3PagerFilename(p->pBt->pPager, 1);
}
# 65254 "sqlite3.c"
static const char *sqlite3BtreeGetJournalname(Btree *p)
{

  ((void) (0));
  return sqlite3PagerJournalname(p->pBt->pPager);
}




static int sqlite3BtreeIsInTrans(Btree *p)
{

  ((void) (0));
  return (p && (p->inTrans==2));
}
# 65276 "sqlite3.c"
static int sqlite3BtreeCheckpoint(Btree *p, int eMode, int *pnLog, int *pnCkpt)
{

  int rc = 0;
  if( p )
{

    BtShared *pBt = p->pBt;
    sqlite3BtreeEnter(p);
    if( pBt->inTransaction!=0 )
{

      rc = 6;
    }else{
      rc = sqlite3PagerCheckpoint(pBt->pPager, eMode, pnLog, pnCkpt);
    }
    sqlite3BtreeLeave(p);
  }
  return rc;
}





static int sqlite3BtreeIsInReadTrans(Btree *p)
{

  ((void) (0));
  ((void) (0));
  return p->inTrans!=0;
}

static int sqlite3BtreeIsInBackup(Btree *p)
{

  ((void) (0));
  ((void) (0));
  return p->nBackup!=0;
}
# 65327 "sqlite3.c"
static void *sqlite3BtreeSchema(Btree *p, int nBytes, void(*xFree)(void *))
{

  BtShared *pBt = p->pBt;
  sqlite3BtreeEnter(p);
  if( !pBt->pSchema && nBytes )
{

    pBt->pSchema = sqlite3DbMallocZero(0, nBytes);
    pBt->xFreeSchema = xFree;
  }
  sqlite3BtreeLeave(p);
  return pBt->pSchema;
}






static int sqlite3BtreeSchemaLocked(Btree *p)
{

  int rc;
  ((void) (0));
  sqlite3BtreeEnter(p);
  rc = querySharedCacheTableLock(p, 1, 1);
  ((void) (0));
  sqlite3BtreeLeave(p);
  return rc;
}
# 65360 "sqlite3.c"
static int sqlite3BtreeLockTable(Btree *p, int iTab, u8 isWriteLock)
{

  int rc = 0;
  ((void) (0));
  if( p->sharable )
{

    u8 lockType = 1 + isWriteLock;
    ((void) (0));
    ((void) (0));

    sqlite3BtreeEnter(p);
    rc = querySharedCacheTableLock(p, iTab, lockType);
    if( rc==0 )
{

      rc = setSharedCacheTableLock(p, iTab, lockType);
    }
    sqlite3BtreeLeave(p);
  }
  return rc;
}
# 65390 "sqlite3.c"
static int sqlite3BtreePutData(BtCursor *pCsr, u32 offset, u32 amt, void *z)
{

  int rc;
  ((void) (0));
  ((void) (0));
  ((void) (0));

  rc = (pCsr->eState>=3 ? btreeRestoreCursorPosition(pCsr) : 0);
  if( rc!=0 )
{

    return rc;
  }
  ((void) (0));
  if( pCsr->eState!=1 )
{

    return 4;
  }
# 65413 "sqlite3.c"
  saveAllCursors(pCsr->pBt, pCsr->pgnoRoot, pCsr);
  ((void) (0));
# 65423 "sqlite3.c"
  if( (pCsr->curFlags & 0x01)==0 )
{

    return 8;
  }
  ((void) (0))
                                                        ;
  ((void) (0));
  ((void) (0));
  ((void) (0));

  return accessPayload(pCsr, offset, amt, (unsigned char *)z, 1);
}




static void sqlite3BtreeIncrblobCursor(BtCursor *pCur)
{

  pCur->curFlags |= 0x10;
  pCur->pBtree->hasIncrblobCur = 1;
}







static int sqlite3BtreeSetVersion(Btree *pBtree, int iVersion)
{

  BtShared *pBt = pBtree->pBt;
  int rc;

  ((void) (0));




  pBt->btsFlags &= ~0x0010;
  if( iVersion==1 ) pBt->btsFlags |= 0x0010;

  rc = sqlite3BtreeBeginTrans(pBtree, 0);
  if( rc==0 )
{

    u8 *aData = pBt->pPage1->aData;
    if( aData[18]!=(u8)iVersion || aData[19]!=(u8)iVersion )
{

      rc = sqlite3BtreeBeginTrans(pBtree, 2);
      if( rc==0 )
{

        rc = sqlite3PagerWrite(pBt->pPage1->pDbPage);
        if( rc==0 )
{

          aData[18] = (u8)iVersion;
          aData[19] = (u8)iVersion;
        }
      }
    }
  }

  pBt->btsFlags &= ~0x0010;
  return rc;
}





static int sqlite3BtreeCursorHasHint(BtCursor *pCsr, unsigned int mask)
{

  return (pCsr->hints & mask)!=0;
}




static int sqlite3BtreeIsReadonly(Btree *p)
{

  return (p->pBt->btsFlags & 0x0001)!=0;
}




static int sqlite3HeaderSizeBtree(void)
{
 return (((sizeof(MemPage))+7)&~7); }





static int sqlite3BtreeSharable(Btree *p)
{

  return p->sharable;
}
# 65531 "sqlite3.c"
struct sqlite3_backup {
  sqlite3* pDestDb;
  Btree *pDest;
  u32 iDestSchema;
  int bDestLocked;

  Pgno iNext;
  sqlite3* pSrcDb;
  Btree *pSrc;

  int rc;




  Pgno nRemaining;
  Pgno nPagecount;

  int isAttached;
  sqlite3_backup *pNext;
};
# 65592 "sqlite3.c"
static Btree *findBtree(sqlite3 *pErrorDb, sqlite3 *pDb, const char *zDb)
{

  int i = sqlite3FindDbName(pDb, zDb);

  if( i==1 )
{

    Parse *pParse;
    int rc = 0;
    pParse = sqlite3DbMallocZero(pErrorDb,sizeof(*pParse));
    if( pParse==0 )
{

      sqlite3ErrorWithMsg(pErrorDb, 7, "out of memory");
      rc = 7;
    }else{
      pParse->db = pDb;
      if( sqlite3OpenTempDatabase(pParse) )
{

        sqlite3ErrorWithMsg(pErrorDb, pParse->rc, "%s", pParse->zErrMsg);
        rc = 1;
      }
      sqlite3DbFree(pErrorDb, pParse->zErrMsg);
      sqlite3ParserReset(pParse);
      sqlite3DbFree(pErrorDb,pParse);
    }
    if( rc )
{

      return 0;
    }
  }

  if( i<0 )
{

    sqlite3ErrorWithMsg(pErrorDb, 1, "unknown database %s", zDb);
    return 0;
  }

  return pDb->aDb[i].pBt;
}





static int setDestPgsz(sqlite3_backup *p)
{

  int rc;
  rc = sqlite3BtreeSetPageSize(p->pDest,sqlite3BtreeGetPageSize(p->pSrc),-1,0);
  return rc;
}







static int checkReadTransaction(sqlite3 *db, Btree *p)
{

  if( sqlite3BtreeIsInReadTrans(p) )
{

    sqlite3ErrorWithMsg(db, 1, "destination database is in use");
    return 1;
  }
  return 0;
}
# 65657 "sqlite3.c"
 sqlite3_backup * sqlite3_backup_init(
  sqlite3* pDestDb,
  const char *zDestDb,
  sqlite3* pSrcDb,
  const char *zSrcDb
)
{

  sqlite3_backup *p;
# 65680 "sqlite3.c"
  sqlite3_mutex_enter(pSrcDb->mutex);
  sqlite3_mutex_enter(pDestDb->mutex);

  if( pSrcDb==pDestDb )
{

    sqlite3ErrorWithMsg(
        pDestDb, 1, "source and destination must be distinct"
    );
    p = 0;
  }else {




    p = (sqlite3_backup *)sqlite3MallocZero(sizeof(sqlite3_backup));
    if( !p )
{

      sqlite3Error(pDestDb, 7);
    }
  }


  if( p )
{

    p->pSrc = findBtree(pDestDb, pSrcDb, zSrcDb);
    p->pDest = findBtree(pDestDb, pDestDb, zDestDb);
    p->pDestDb = pDestDb;
    p->pSrcDb = pSrcDb;
    p->iNext = 1;
    p->isAttached = 0;

    if( 0==p->pSrc || 0==p->pDest
     || setDestPgsz(p)==7
     || checkReadTransaction(pDestDb, p->pDest)!=0
     )
{






      sqlite3_free(p);
      p = 0;
    }
  }
  if( p )
{

    p->pSrc->nBackup++;
  }

  sqlite3_mutex_leave(pDestDb->mutex);
  sqlite3_mutex_leave(pSrcDb->mutex);
  return p;
}






static int isFatalError(int rc)
{

  return (rc!=0 && rc!=5 && (rc!=6));
}






static int backupOnePage(
  sqlite3_backup *p,
  Pgno iSrcPg,
  const u8 *zSrcData,
  int bUpdate
)
{

  Pager * const pDestPager = sqlite3BtreePager(p->pDest);
  const int nSrcPgsz = sqlite3BtreeGetPageSize(p->pSrc);
  int nDestPgsz = sqlite3BtreeGetPageSize(p->pDest);
  const int nCopy = ((nSrcPgsz)<(nDestPgsz)?(nSrcPgsz):(nDestPgsz));
  const i64 iEnd = (i64)iSrcPg*(i64)nSrcPgsz;







  int rc = 0;
  i64 iOff;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));




  if( nSrcPgsz!=nDestPgsz && sqlite3PagerIsMemdb(pDestPager) )
{

    rc = 8;
  }
# 65802 "sqlite3.c"
  for(iOff=iEnd-(i64)nSrcPgsz; rc==0 && iOff<iEnd; iOff+=nDestPgsz)
{

    DbPage *pDestPg = 0;
    Pgno iDest = (Pgno)(iOff/nDestPgsz)+1;
    if( iDest==((Pgno)((sqlite3PendingByte/((p->pDest->pBt)->pageSize))+1)) ) continue;
    if( 0==(rc = sqlite3PagerGet(pDestPager, iDest, &pDestPg, 0))
     && 0==(rc = sqlite3PagerWrite(pDestPg))
    )
{

      const u8 *zIn = &zSrcData[iOff%nSrcPgsz];
      u8 *zDestData = sqlite3PagerGetData(pDestPg);
      u8 *zOut = &zDestData[iOff%nDestPgsz];
# 65820 "sqlite3.c"
      memcpy(zOut, zIn, nCopy);
      ((u8 *)sqlite3PagerGetExtra(pDestPg))[0] = 0;
      if( iOff==0 && bUpdate==0 )
{

        sqlite3Put4byte(&zOut[28], sqlite3BtreeLastPage(p->pSrc));
      }
    }
    sqlite3PagerUnref(pDestPg);
  }

  return rc;
}
# 65840 "sqlite3.c"
static int backupTruncateFile(sqlite3_file *pFile, i64 iSize)
{

  i64 iCurrent;
  int rc = sqlite3OsFileSize(pFile, &iCurrent);
  if( rc==0 && iCurrent>iSize )
{

    rc = sqlite3OsTruncate(pFile, iSize);
  }
  return rc;
}





static void attachBackupObject(sqlite3_backup *p)
{

  sqlite3_backup **pp;
  ((void) (0));
  pp = sqlite3PagerBackupPtr(sqlite3BtreePager(p->pSrc));
  p->pNext = *pp;
  *pp = p;
  p->isAttached = 1;
}




 int sqlite3_backup_step(sqlite3_backup *p, int nPage)
{

  int rc;
  int destMode;
  int pgszSrc = 0;
  int pgszDest = 0;




  sqlite3_mutex_enter(p->pSrcDb->mutex);
  sqlite3BtreeEnter(p->pSrc);
  if( p->pDestDb )
{

    sqlite3_mutex_enter(p->pDestDb->mutex);
  }

  rc = p->rc;
  if( !isFatalError(rc) )
{

    Pager * const pSrcPager = sqlite3BtreePager(p->pSrc);
    Pager * const pDestPager = sqlite3BtreePager(p->pDest);
    int ii;
    int nSrcPage = -1;
    int bCloseTrans = 0;




    if( p->pDestDb && p->pSrc->pBt->inTransaction==2 )
{

      rc = 5;
    }else{
      rc = 0;
    }


    if( 0==rc && p->bDestLocked==0
     && 0==(rc = sqlite3BtreeBeginTrans(p->pDest, 2))
    )
{

      p->bDestLocked = 1;
      sqlite3BtreeGetMeta(p->pDest, 1, &p->iDestSchema);
    }





    if( rc==0 && 0==sqlite3BtreeIsInReadTrans(p->pSrc) )
{

      rc = sqlite3BtreeBeginTrans(p->pSrc, 0);
      bCloseTrans = 1;
    }



    pgszSrc = sqlite3BtreeGetPageSize(p->pSrc);
    pgszDest = sqlite3BtreeGetPageSize(p->pDest);
    destMode = sqlite3PagerGetJournalMode(sqlite3BtreePager(p->pDest));
    if( 0==rc && destMode==5 && pgszSrc!=pgszDest )
{

      rc = 8;
    }




    nSrcPage = (int)sqlite3BtreeLastPage(p->pSrc);
    ((void) (0));
    for(ii=0; (nPage<0 || ii<nPage) && p->iNext<=(Pgno)nSrcPage && !rc; ii++)
{

      const Pgno iSrcPg = p->iNext;
      if( iSrcPg!=((Pgno)((sqlite3PendingByte/((p->pSrc->pBt)->pageSize))+1)) )
{

        DbPage *pSrcPg;
        rc = sqlite3PagerGet(pSrcPager, iSrcPg, &pSrcPg,0x02);
        if( rc==0 )
{

          rc = backupOnePage(p, iSrcPg, sqlite3PagerGetData(pSrcPg), 0);
          sqlite3PagerUnref(pSrcPg);
        }
      }
      p->iNext++;
    }
    if( rc==0 )
{

      p->nPagecount = nSrcPage;
      p->nRemaining = nSrcPage+1-p->iNext;
      if( p->iNext>(Pgno)nSrcPage )
{

        rc = 101;
      }else if( !p->isAttached )
{

        attachBackupObject(p);
      }
    }






    if( rc==101 )
{

      if( nSrcPage==0 )
{

        rc = sqlite3BtreeNewDb(p->pDest);
        nSrcPage = 1;
      }
      if( rc==0 || rc==101 )
{

        rc = sqlite3BtreeUpdateMeta(p->pDest,1,p->iDestSchema+1);
      }
      if( rc==0 )
{

        if( p->pDestDb )
{

          sqlite3ResetAllSchemasOfConnection(p->pDestDb);
        }
        if( destMode==5 )
{

          rc = sqlite3BtreeSetVersion(p->pDest, 2);
        }
      }
      if( rc==0 )
{

        int nDestTruncate;
# 65985 "sqlite3.c"
        ((void) (0));
        ((void) (0));
        if( pgszSrc<pgszDest )
{

          int ratio = pgszDest/pgszSrc;
          nDestTruncate = (nSrcPage+ratio-1)/ratio;
          if( nDestTruncate==(int)((Pgno)((sqlite3PendingByte/((p->pDest->pBt)->pageSize))+1)) )
{

            nDestTruncate--;
          }
        }else{
          nDestTruncate = nSrcPage * (pgszSrc/pgszDest);
        }
        ((void) (0));

        if( pgszSrc<pgszDest )
{

# 66008 "sqlite3.c"
          const i64 iSize = (i64)pgszSrc * (i64)nSrcPage;
          sqlite3_file * const pFile = sqlite3PagerFile(pDestPager);
          Pgno iPg;
          int nDstPage;
          i64 iOff;
          i64 iEnd;

          ((void) (0));
          ((void) (0))



            ;







          sqlite3PagerPagecount(pDestPager, &nDstPage);
          for(iPg=nDestTruncate; rc==0 && iPg<=(Pgno)nDstPage; iPg++)
{

            if( iPg!=((Pgno)((sqlite3PendingByte/((p->pDest->pBt)->pageSize))+1)) )
{

              DbPage *pPg;
              rc = sqlite3PagerGet(pDestPager, iPg, &pPg, 0);
              if( rc==0 )
{

                rc = sqlite3PagerWrite(pPg);
                sqlite3PagerUnref(pPg);
              }
            }
          }
          if( rc==0 )
{

            rc = sqlite3PagerCommitPhaseOne(pDestPager, 0, 1);
          }


          iEnd = ((sqlite3PendingByte + pgszDest)<(iSize)?(sqlite3PendingByte + pgszDest):(iSize));
          for(
            iOff=sqlite3PendingByte+pgszSrc;
            rc==0 && iOff<iEnd;
            iOff+=pgszSrc
          )
{

            PgHdr *pSrcPg = 0;
            const Pgno iSrcPg = (Pgno)((iOff/pgszSrc)+1);
            rc = sqlite3PagerGet(pSrcPager, iSrcPg, &pSrcPg, 0);
            if( rc==0 )
{

              u8 *zData = sqlite3PagerGetData(pSrcPg);
              rc = sqlite3OsWrite(pFile, zData, pgszSrc, iOff);
            }
            sqlite3PagerUnref(pSrcPg);
          }
          if( rc==0 )
{

            rc = backupTruncateFile(pFile, iSize);
          }


          if( rc==0 )
{

            rc = sqlite3PagerSync(pDestPager, 0);
          }
        }else{
          sqlite3PagerTruncateImage(pDestPager, nDestTruncate);
          rc = sqlite3PagerCommitPhaseOne(pDestPager, 0, 0);
        }


        if( 0==rc
         && 0==(rc = sqlite3BtreeCommitPhaseTwo(p->pDest, 0))
        )
{

          rc = 101;
        }
      }
    }






    if( bCloseTrans )
{

      ;
      sqlite3BtreeCommitPhaseOne(p->pSrc, 0);
      sqlite3BtreeCommitPhaseTwo(p->pSrc, 0);
      ((void) (0));
    }

    if( rc==(10 | (12<<8)) )
{

      rc = 7;
    }
    p->rc = rc;
  }
  if( p->pDestDb )
{

    sqlite3_mutex_leave(p->pDestDb->mutex);
  }
  sqlite3BtreeLeave(p->pSrc);
  sqlite3_mutex_leave(p->pSrcDb->mutex);
  return rc;
}




 int sqlite3_backup_finish(sqlite3_backup *p)
{

  sqlite3_backup **pp;
  sqlite3 *pSrcDb;
  int rc;


  if( p==0 ) return 0;
  pSrcDb = p->pSrcDb;
  sqlite3_mutex_enter(pSrcDb->mutex);
  sqlite3BtreeEnter(p->pSrc);
  if( p->pDestDb )
{

    sqlite3_mutex_enter(p->pDestDb->mutex);
  }


  if( p->pDestDb )
{

    p->pSrc->nBackup--;
  }
  if( p->isAttached )
{

    pp = sqlite3PagerBackupPtr(sqlite3BtreePager(p->pSrc));
    while( *pp!=p )
{

      pp = &(*pp)->pNext;
    }
    *pp = p->pNext;
  }


  sqlite3BtreeRollback(p->pDest, 0, 0);


  rc = (p->rc==101) ? 0 : p->rc;
  if( p->pDestDb )
{

    sqlite3Error(p->pDestDb, rc);


    sqlite3LeaveMutexAndCloseZombie(p->pDestDb);
  }
  sqlite3BtreeLeave(p->pSrc);
  if( p->pDestDb )
{




    sqlite3_free(p);
  }
  sqlite3LeaveMutexAndCloseZombie(pSrcDb);
  return rc;
}





 int sqlite3_backup_remaining(sqlite3_backup *p)
{







  return p->nRemaining;
}





 int sqlite3_backup_pagecount(sqlite3_backup *p)
{







  return p->nPagecount;
}
# 66197 "sqlite3.c"
static __attribute__((noinline)) void backupUpdate(
  sqlite3_backup *p,
  Pgno iPage,
  const u8 *aData
)
{

  ((void) (0));
  do{
    ((void) (0));
    if( !isFatalError(p->rc) && iPage<p->iNext )
{





      int rc;
      ((void) (0));
      sqlite3_mutex_enter(p->pDestDb->mutex);
      rc = backupOnePage(p, iPage, aData, 1);
      sqlite3_mutex_leave(p->pDestDb->mutex);
      ((void) (0));
      if( rc!=0 )
{

        p->rc = rc;
      }
    }
  }while( (p = p->pNext)!=0 );
}
static void sqlite3BackupUpdate(sqlite3_backup *pBackup, Pgno iPage, const u8 *aData)
{

  if( pBackup ) backupUpdate(pBackup, iPage, aData);
}
# 66237 "sqlite3.c"
static void sqlite3BackupRestart(sqlite3_backup *pBackup)
{

  sqlite3_backup *p;
  for(p=pBackup; p; p=p->pNext)
{

    ((void) (0));
    p->iNext = 1;
  }
}
# 66254 "sqlite3.c"
static int sqlite3BtreeCopyFile(Btree *pTo, Btree *pFrom)
{

  int rc;
  sqlite3_file *pFd;
  sqlite3_backup b;
  sqlite3BtreeEnter(pTo);
  sqlite3BtreeEnter(pFrom);

  ((void) (0));
  pFd = sqlite3PagerFile(sqlite3BtreePager(pTo));
  if( pFd->pMethods )
{

    i64 nByte = sqlite3BtreeGetPageSize(pFrom)*(i64)sqlite3BtreeLastPage(pFrom);
    rc = sqlite3OsFileControl(pFd, 11, &nByte);
    if( rc==12 ) rc = 0;
    if( rc ) goto copy_finished;
  }






  memset(&b, 0, sizeof(b));
  b.pSrcDb = pFrom->db;
  b.pSrc = pFrom;
  b.pDest = pTo;
  b.iNext = 1;
# 66292 "sqlite3.c"
  sqlite3_backup_step(&b, 0x7FFFFFFF);
  ((void) (0));
  rc = sqlite3_backup_finish(&b);
  if( rc==0 )
{

    pTo->pBt->btsFlags &= ~0x0002;
  }else{
    sqlite3PagerClearCache(sqlite3BtreePager(b.pDest));
  }

  ((void) (0));
copy_finished:
  sqlite3BtreeLeave(pFrom);
  sqlite3BtreeLeave(pTo);
  return rc;
}
# 66391 "sqlite3.c"
static int sqlite3VdbeChangeEncoding(Mem *pMem, int desiredEnc)
{


  int rc;

  ((void) (0));
  ((void) (0))
                                          ;
  if( !(pMem->flags&0x0002) || pMem->enc==desiredEnc )
{

    return 0;
  }
  ((void) (0));







  rc = sqlite3VdbeMemTranslate(pMem, (u8)desiredEnc);
  ((void) (0));
  ((void) (0));
  ((void) (0));
  return rc;

}
# 66426 "sqlite3.c"
static __attribute__((noinline)) int sqlite3VdbeMemGrow(Mem *pMem, int n, int bPreserve)
{

  ((void) (0));
  ((void) (0));
  ;



  ((void) (0));
  ;

  ((void) (0))
                                                                        ;
  if( pMem->szMalloc<n )
{

    if( n<32 ) n = 32;
    if( bPreserve && pMem->szMalloc>0 && pMem->z==pMem->zMalloc )
{

      pMem->z = pMem->zMalloc = sqlite3DbReallocOrFree(pMem->db, pMem->z, n);
      bPreserve = 0;
    }else{
      if( pMem->szMalloc>0 ) sqlite3DbFree(pMem->db, pMem->zMalloc);
      pMem->zMalloc = sqlite3DbMallocRaw(pMem->db, n);
    }
    if( pMem->zMalloc==0 )
{

      sqlite3VdbeMemSetNull(pMem);
      pMem->z = 0;
      pMem->szMalloc = 0;
      return 7;
    }else{
      pMem->szMalloc = sqlite3DbMallocSize(pMem->db, pMem->zMalloc);
    }
  }

  if( bPreserve && pMem->z && pMem->z!=pMem->zMalloc )
{

    memcpy(pMem->zMalloc, pMem->z, pMem->n);
  }
  if( (pMem->flags&0x0400)!=0 )
{

    ((void) (0));
    pMem->xDel((void *)(pMem->z));
  }

  pMem->z = pMem->zMalloc;
  pMem->flags &= ~(0x0400|0x1000|0x0800);
  return 0;
}
# 66483 "sqlite3.c"
static int sqlite3VdbeMemClearAndResize(Mem *pMem, int szNew)
{

  ((void) (0));
  ((void) (0));
  if( pMem->szMalloc<szNew )
{

    return sqlite3VdbeMemGrow(pMem, szNew, 0);
  }
  ((void) (0));
  pMem->z = pMem->zMalloc;
  pMem->flags &= (0x0001|0x0004|0x0008);
  return 0;
}







static int sqlite3VdbeMemMakeWriteable(Mem *pMem)
{

  int f;
  ((void) (0));
  ((void) (0));
  (((pMem)->flags&0x4000)?sqlite3VdbeMemExpandBlob(pMem):0);
  f = pMem->flags;
  if( (f&(0x0002|0x0010)) && (pMem->szMalloc==0 || pMem->z!=pMem->zMalloc) )
{

    if( sqlite3VdbeMemGrow(pMem, pMem->n + 2, 1) )
{

      return 7;
    }
    pMem->z[pMem->n] = 0;
    pMem->z[pMem->n+1] = 0;
    pMem->flags |= 0x0200;
  }
  pMem->flags &= ~0x1000;




  return 0;
}






static int sqlite3VdbeMemExpandBlob(Mem *pMem)
{

  if( pMem->flags & 0x4000 )
{

    int nByte;
    ((void) (0));
    ((void) (0));
    ((void) (0));


    nByte = pMem->n + pMem->u.nZero;
    if( nByte<=0 )
{

      nByte = 1;
    }
    if( sqlite3VdbeMemGrow(pMem, nByte, 1) )
{

      return 7;
    }

    memset(&pMem->z[pMem->n], 0, pMem->u.nZero);
    pMem->n += pMem->u.nZero;
    pMem->flags &= ~(0x4000|0x0200);
  }
  return 0;
}






static __attribute__((noinline)) int vdbeMemAddTerminator(Mem *pMem)
{

  if( sqlite3VdbeMemGrow(pMem, pMem->n+2, 1) )
{

    return 7;
  }
  pMem->z[pMem->n] = 0;
  pMem->z[pMem->n+1] = 0;
  pMem->flags |= 0x0200;
  return 0;
}




static int sqlite3VdbeMemNulTerminate(Mem *pMem)
{

  ((void) (0));
  ;
  ;
  if( (pMem->flags & (0x0200|0x0002))!=0x0002 )
{

    return 0;
  }else{
    return vdbeMemAddTerminator(pMem);
  }
}
# 66594 "sqlite3.c"
static int sqlite3VdbeMemStringify(Mem *pMem, u8 enc, u8 bForce)
{

  int fg = pMem->flags;
  const int nByte = 32;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));


  if( sqlite3VdbeMemClearAndResize(pMem, nByte) )
{

    return 7;
  }







  if( fg & 0x0004 )
{

    sqlite3_snprintf(nByte, pMem->z, "%lld", pMem->u.i);
  }else{
    ((void) (0));
    sqlite3_snprintf(nByte, pMem->z, "%!.15g", pMem->u.r);
  }
  pMem->n = sqlite3Strlen30(pMem->z);
  pMem->enc = 1;
  pMem->flags |= 0x0002|0x0200;
  if( bForce ) pMem->flags &= ~(0x0004|0x0008);
  sqlite3VdbeChangeEncoding(pMem, enc);
  return 0;
}
# 66638 "sqlite3.c"
static int sqlite3VdbeMemFinalize(Mem *pMem, FuncDef *pFunc)
{

  int rc = 0;
  if( (pFunc && pFunc->xFinalize) )
{

    sqlite3_context ctx;
    Mem t;
    ((void) (0));
    ((void) (0));
    memset(&ctx, 0, sizeof(ctx));
    memset(&t, 0, sizeof(t));
    t.flags = 0x0001;
    t.db = pMem->db;
    ctx.pOut = &t;
    ctx.pMem = pMem;
    ctx.pFunc = pFunc;
    pFunc->xFinalize(&ctx);
    ((void) (0));
    if( pMem->szMalloc>0 ) sqlite3DbFree(pMem->db, pMem->zMalloc);
    memcpy(pMem, &t, sizeof(t));
    rc = ctx.isError;
  }
  return rc;
}
# 66670 "sqlite3.c"
static __attribute__((noinline)) void vdbeMemClearExternAndSetNull(Mem *p)
{

  ((void) (0));
  ((void) (0));
  if( p->flags&0x2000 )
{

    sqlite3VdbeMemFinalize(p, p->u.pDef);
    ((void) (0));
    ;
  }
  if( p->flags&0x0400 )
{

    ((void) (0));
    ((void) (0));
    p->xDel((void *)p->z);
  }else if( p->flags&0x0020 )
{

    sqlite3RowSetClear(p->u.pRowSet);
  }else if( p->flags&0x0040 )
{

    VdbeFrame *pFrame = p->u.pFrame;
    pFrame->pParent = pFrame->v->pDelFrame;
    pFrame->v->pDelFrame = pFrame;
  }
  p->flags = 0x0001;
}
# 66700 "sqlite3.c"
static __attribute__((noinline)) void vdbeMemClear(Mem *p)
{

  if( (((p)->flags&(0x2000|0x0400|0x0020|0x0040))!=0) )
{

    vdbeMemClearExternAndSetNull(p);
  }
  if( p->szMalloc )
{

    sqlite3DbFree(p->db, p->zMalloc);
    p->szMalloc = 0;
  }
  p->z = 0;
}
# 66721 "sqlite3.c"
static void sqlite3VdbeMemRelease(Mem *p)
{

  ((void) (0));
  if( (((p)->flags&(0x2000|0x0400|0x0020|0x0040))!=0) || p->szMalloc )
{

    vdbeMemClear(p);
  }
}






static i64 doubleToInt64(double r)
{

# 66745 "sqlite3.c"
  static const i64 maxInt = (0xffffffff|(((i64)0x7fffffff)<<32));
  static const i64 minInt = (((i64)-1) - (0xffffffff|(((i64)0x7fffffff)<<32)));

  if( r<=(double)minInt )
{

    return minInt;
  }else if( r>=(double)maxInt )
{

    return maxInt;
  }else{
    return (i64)r;
  }

}
# 66769 "sqlite3.c"
static i64 sqlite3VdbeIntValue(Mem *pMem)
{

  int flags;
  ((void) (0));
  ((void) (0));
  flags = pMem->flags;
  if( flags & 0x0004 )
{

    return pMem->u.i;
  }else if( flags & 0x0008 )
{

    return doubleToInt64(pMem->u.r);
  }else if( flags & (0x0002|0x0010) )
{

    i64 value = 0;
    ((void) (0));
    sqlite3Atoi64(pMem->z, &value, pMem->n, pMem->enc);
    return value;
  }else{
    return 0;
  }
}







static double sqlite3VdbeRealValue(Mem *pMem)
{

  ((void) (0));
  ((void) (0));
  if( pMem->flags & 0x0008 )
{

    return pMem->u.r;
  }else if( pMem->flags & 0x0004 )
{

    return (double)pMem->u.i;
  }else if( pMem->flags & (0x0002|0x0010) )
{


    double val = (double)0;
    sqlite3AtoF(pMem->z, &val, pMem->n, pMem->enc);
    return val;
  }else{

    return (double)0;
  }
}





static void sqlite3VdbeIntegerAffinity(Mem *pMem)
{

  i64 ix;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  ix = doubleToInt64(pMem->u.r);
# 66835 "sqlite3.c"
  if( pMem->u.r==ix && ix>(((i64)-1) - (0xffffffff|(((i64)0x7fffffff)<<32))) && ix<(0xffffffff|(((i64)0x7fffffff)<<32)) )
{

    pMem->u.i = ix;
    ((pMem)->flags = ((pMem)->flags&~(0x81ff|0x4000))|0x0004);
  }
}




static int sqlite3VdbeMemIntegerify(Mem *pMem)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));

  pMem->u.i = sqlite3VdbeIntValue(pMem);
  ((pMem)->flags = ((pMem)->flags&~(0x81ff|0x4000))|0x0004);
  return 0;
}





static int sqlite3VdbeMemRealify(Mem *pMem)
{

  ((void) (0));
  ((void) (0));

  pMem->u.r = sqlite3VdbeRealValue(pMem);
  ((pMem)->flags = ((pMem)->flags&~(0x81ff|0x4000))|0x0008);
  return 0;
}
# 66875 "sqlite3.c"
static int sqlite3VdbeMemNumerify(Mem *pMem)
{

  if( (pMem->flags & (0x0004|0x0008|0x0001))==0 )
{

    ((void) (0));
    ((void) (0));
    if( 0==sqlite3Atoi64(pMem->z, &pMem->u.i, pMem->n, pMem->enc) )
{

      ((pMem)->flags = ((pMem)->flags&~(0x81ff|0x4000))|0x0004);
    }else{
      pMem->u.r = sqlite3VdbeRealValue(pMem);
      ((pMem)->flags = ((pMem)->flags&~(0x81ff|0x4000))|0x0008);
      sqlite3VdbeIntegerAffinity(pMem);
    }
  }
  ((void) (0));
  pMem->flags &= ~(0x0002|0x0010);
  return 0;
}
# 66899 "sqlite3.c"
static void sqlite3VdbeMemCast(Mem *pMem, u8 aff, u8 encoding)
{

  if( pMem->flags & 0x0001 ) return;
  switch( aff )
{

    case 'A': {
      if( (pMem->flags & 0x0010)==0 )
{

        sqlite3ValueApplyAffinity(pMem, 'B', encoding);
        ((void) (0));
        ((pMem)->flags = ((pMem)->flags&~(0x81ff|0x4000))|0x0010);
      }else{
        pMem->flags &= ~(0x81ff&~0x0010);
      }
      break;
    }
    case 'C': {
      sqlite3VdbeMemNumerify(pMem);
      break;
    }
    case 'D': {
      sqlite3VdbeMemIntegerify(pMem);
      break;
    }
    case 'E': {
      sqlite3VdbeMemRealify(pMem);
      break;
    }
    default: {
      ((void) (0));
      ((void) (0));
      pMem->flags |= (pMem->flags&0x0010)>>3;
      sqlite3ValueApplyAffinity(pMem, 'B', encoding);
      ((void) (0));
      pMem->flags &= ~(0x0004|0x0008|0x0010|0x4000);
      break;
    }
  }
}






static void sqlite3VdbeMemInit(Mem *pMem, sqlite3 *db, u16 flags)
{

  ((void) (0));
  pMem->flags = flags;
  pMem->db = db;
  pMem->szMalloc = 0;
}
# 66961 "sqlite3.c"
static void sqlite3VdbeMemSetNull(Mem *pMem)
{

  if( (((pMem)->flags&(0x2000|0x0400|0x0020|0x0040))!=0) )
{

    vdbeMemClearExternAndSetNull(pMem);
  }else{
    pMem->flags = 0x0001;
  }
}
static void sqlite3ValueSetNull(sqlite3_value *p)
{

  sqlite3VdbeMemSetNull((Mem*)p);
}





static void sqlite3VdbeMemSetZeroBlob(Mem *pMem, int n)
{

  sqlite3VdbeMemRelease(pMem);
  pMem->flags = 0x0010|0x4000;
  pMem->n = 0;
  if( n<0 ) n = 0;
  pMem->u.nZero = n;
  pMem->enc = 1;
  pMem->z = 0;
}






static __attribute__((noinline)) void vdbeReleaseAndSetInt64(Mem *pMem, i64 val)
{

  sqlite3VdbeMemSetNull(pMem);
  pMem->u.i = val;
  pMem->flags = 0x0004;
}





static void sqlite3VdbeMemSetInt64(Mem *pMem, i64 val)
{

  if( (((pMem)->flags&(0x2000|0x0400|0x0020|0x0040))!=0) )
{

    vdbeReleaseAndSetInt64(pMem, val);
  }else{
    pMem->u.i = val;
    pMem->flags = 0x0004;
  }
}






static void sqlite3VdbeMemSetDouble(Mem *pMem, double val)
{

  sqlite3VdbeMemSetNull(pMem);
  if( !sqlite3IsNaN(val) )
{

    pMem->u.r = val;
    pMem->flags = 0x0008;
  }
}






static void sqlite3VdbeMemSetRowSet(Mem *pMem)
{

  sqlite3 *db = pMem->db;
  ((void) (0));
  ((void) (0));
  sqlite3VdbeMemRelease(pMem);
  pMem->zMalloc = sqlite3DbMallocRawNN(db, 64);
  if( db->mallocFailed )
{

    pMem->flags = 0x0001;
    pMem->szMalloc = 0;
  }else{
    ((void) (0));
    pMem->szMalloc = sqlite3DbMallocSize(db, pMem->zMalloc);
    pMem->u.pRowSet = sqlite3RowSetInit(db, pMem->zMalloc, pMem->szMalloc);
    ((void) (0));
    pMem->flags = 0x0020;
  }
}





static int sqlite3VdbeMemTooBig(Mem *p)
{

  ((void) (0));
  if( p->flags & (0x0002|0x0010) )
{

    int n = p->n;
    if( p->flags & 0x4000 )
{

      n += p->u.nZero;
    }
    return n>p->db->aLimit[0];
  }
  return 0;
}
# 67091 "sqlite3.c"
static __attribute__((noinline)) void vdbeClrCopy(Mem *pTo, const Mem *pFrom, int eType)
{

  vdbeMemClearExternAndSetNull(pTo);
  ((void) (0));
  sqlite3VdbeMemShallowCopy(pTo, pFrom, eType);
}
static void sqlite3VdbeMemShallowCopy(Mem *pTo, const Mem *pFrom, int srcType)
{

  ((void) (0));
  ((void) (0));
  if( (((pTo)->flags&(0x2000|0x0400|0x0020|0x0040))!=0) )
{
 vdbeClrCopy(pTo,pFrom,srcType); return; }
  memcpy(pTo, pFrom, __builtin_offsetof (Mem, zMalloc));
  if( (pFrom->flags&0x0800)==0 )
{

    pTo->flags &= ~(0x0400|0x0800|0x1000);
    ((void) (0));
    pTo->flags |= srcType;
  }
}





static int sqlite3VdbeMemCopy(Mem *pTo, const Mem *pFrom)
{

  int rc = 0;




  ((void) (0));
  ((void) (0));
  if( (((pTo)->flags&(0x2000|0x0400|0x0020|0x0040))!=0) ) vdbeMemClearExternAndSetNull(pTo);
  memcpy(pTo, pFrom, __builtin_offsetof (Mem, zMalloc));
  pTo->flags &= ~0x0400;
  if( pTo->flags&(0x0002|0x0010) )
{

    if( 0==(pFrom->flags&0x0800) )
{

      pTo->flags |= 0x1000;
      rc = sqlite3VdbeMemMakeWriteable(pTo);
    }
  }

  return rc;
}







static void sqlite3VdbeMemMove(Mem *pTo, Mem *pFrom)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));

  sqlite3VdbeMemRelease(pTo);
  memcpy(pTo, pFrom, sizeof(Mem));
  pFrom->flags = 0x0001;
  pFrom->szMalloc = 0;
}
# 67165 "sqlite3.c"
static int sqlite3VdbeMemSetStr(
  Mem *pMem,
  const char *z,
  int n,
  u8 enc,
  void (*xDel)(void*)
)
{

  int nByte = n;
  int iLimit;
  u16 flags = 0;

  ((void) (0));
  ((void) (0));


  if( !z )
{

    sqlite3VdbeMemSetNull(pMem);
    return 0;
  }

  if( pMem->db )
{

    iLimit = pMem->db->aLimit[0];
  }else{
    iLimit = 1000000000;
  }
  flags = (enc==0?0x0010:0x0002);
  if( nByte<0 )
{

    ((void) (0));
    if( enc==1 )
{

      nByte = sqlite3Strlen30(z);
      if( nByte>iLimit ) nByte = iLimit+1;
    }else{
      for(nByte=0; nByte<=iLimit && (z[nByte] | z[nByte+1]); nByte+=2)
{
}
    }
    flags |= 0x0200;
  }





  if( xDel==((sqlite3_destructor_type)-1) )
{

    int nAlloc = nByte;
    if( flags&0x0200 )
{

      nAlloc += (enc==1?1:2);
    }
    if( nByte>iLimit )
{

      return 18;
    }
    ;
    ;
    ;
    if( sqlite3VdbeMemClearAndResize(pMem, ((nAlloc)>(32)?(nAlloc):(32))) )
{

      return 7;
    }
    memcpy(pMem->z, z, nAlloc);
  }else if( xDel==((sqlite3_destructor_type)sqlite3MallocSize) )
{

    sqlite3VdbeMemRelease(pMem);
    pMem->zMalloc = pMem->z = (char *)z;
    pMem->szMalloc = sqlite3DbMallocSize(pMem->db, pMem->zMalloc);
  }else{
    sqlite3VdbeMemRelease(pMem);
    pMem->z = (char *)z;
    pMem->xDel = xDel;
    flags |= ((xDel==((sqlite3_destructor_type)0))?0x0800:0x0400);
  }

  pMem->n = nByte;
  pMem->flags = flags;
  pMem->enc = (enc==0 ? 1 : enc);


  if( pMem->enc!=1 && sqlite3VdbeMemHandleBom(pMem) )
{

    return 7;
  }


  if( nByte>iLimit )
{

    return 18;
  }

  return 0;
}
# 67265 "sqlite3.c"
static __attribute__((noinline)) int vdbeMemFromBtreeResize(
  BtCursor *pCur,
  u32 offset,
  u32 amt,
  int key,
  Mem *pMem
)
{

  int rc;
  pMem->flags = 0x0001;
  if( 0==(rc = sqlite3VdbeMemClearAndResize(pMem, amt+2)) )
{

    if( key )
{

      rc = sqlite3BtreeKey(pCur, offset, amt, pMem->z);
    }else{
      rc = sqlite3BtreeData(pCur, offset, amt, pMem->z);
    }
    if( rc==0 )
{

      pMem->z[amt] = 0;
      pMem->z[amt+1] = 0;
      pMem->flags = 0x0010|0x0200;
      pMem->n = (int)amt;
    }else{
      sqlite3VdbeMemRelease(pMem);
    }
  }
  return rc;
}
static int sqlite3VdbeMemFromBtree(
  BtCursor *pCur,
  u32 offset,
  u32 amt,
  int key,
  Mem *pMem
)
{

  char *zData;
  u32 available = 0;
  int rc = 0;

  ((void) (0));
  ((void) (0));



  ((void) (0));
  if( key )
{

    zData = (char *)sqlite3BtreeKeyFetch(pCur, &available);
  }else{
    zData = (char *)sqlite3BtreeDataFetch(pCur, &available);
  }
  ((void) (0));

  if( offset+amt<=available )
{

    pMem->z = &zData[offset];
    pMem->flags = 0x0010|0x1000;
    pMem->n = (int)amt;
  }else{
    rc = vdbeMemFromBtreeResize(pCur, offset, amt, key, pMem);
  }

  return rc;
}






static __attribute__((noinline)) const void *valueToText(sqlite3_value* pVal, u8 enc)
{

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( pVal->flags & (0x0010|0x0002) )
{

    pVal->flags |= 0x0002;
    if( pVal->flags & 0x4000 )
{

      sqlite3VdbeMemExpandBlob(pVal);
    }
    if( pVal->enc != (enc & ~8) )
{

      sqlite3VdbeChangeEncoding(pVal, enc & ~8);
    }
    if( (enc & 8)!=0 && 1==(1&((int)(long int)(pVal->z))) )
{

      ((void) (0));
      if( sqlite3VdbeMemMakeWriteable(pVal)!=0 )
{

        return 0;
      }
    }
    sqlite3VdbeMemNulTerminate(pVal);
  }else{
    sqlite3VdbeMemStringify(pVal, enc, 0);
    ((void) (0));
  }
  ((void) (0))
                                         ;
  if( pVal->enc==(enc & ~8) )
{

    return pVal->z;
  }else{
    return 0;
  }
}
# 67375 "sqlite3.c"
static const void *sqlite3ValueText(sqlite3_value* pVal, u8 enc)
{

  if( !pVal ) return 0;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( (pVal->flags&(0x0002|0x0200))==(0x0002|0x0200) && pVal->enc==enc )
{

    return pVal->z;
  }
  if( pVal->flags&0x0001 )
{

    return 0;
  }
  return valueToText(pVal, enc);
}




static sqlite3_value *sqlite3ValueNew(sqlite3 *db)
{

  Mem *p = sqlite3DbMallocZero(db, sizeof(*p));
  if( p )
{

    p->flags = 0x0001;
    p->db = db;
  }
  return p;
}





struct ValueNewStat4Ctx {
  Parse *pParse;
  Index *pIdx;
  UnpackedRecord **ppRec;
  int iVal;
};
# 67423 "sqlite3.c"
static sqlite3_value *valueNew(sqlite3 *db, struct ValueNewStat4Ctx *p)
{

# 67459 "sqlite3.c"
  (void)(p);

  return sqlite3ValueNew(db);
}
# 67579 "sqlite3.c"
static int valueFromExpr(
  sqlite3 *db,
  Expr *pExpr,
  u8 enc,
  u8 affinity,
  sqlite3_value **ppVal,
  struct ValueNewStat4Ctx *pCtx
)
{

  int op;
  char *zVal = 0;
  sqlite3_value *pVal = 0;
  int negInt = 1;
  const char *zNeg = "";
  int rc = 0;

  if( !pExpr )
{

    *ppVal = 0;
    return 0;
  }
  while( (op = pExpr->op)==156 || op==159 ) pExpr = pExpr->pLeft;
  if( (op==157) ) op = pExpr->op2;





  ((void) (0));

  if( op==38 )
{

    u8 aff = sqlite3AffinityType(pExpr->u.zToken,0);
    rc = valueFromExpr(db, pExpr->pLeft, enc, aff, ppVal, pCtx);
    ;
    if( *ppVal )
{

      sqlite3VdbeMemCast(*ppVal, aff, 1);
      sqlite3ValueApplyAffinity(*ppVal, affinity, 1);
    }
    return rc;
  }




  if( op==155
   && (pExpr->pLeft->op==132 || pExpr->pLeft->op==133) )
{

    pExpr = pExpr->pLeft;
    op = pExpr->op;
    negInt = -1;
    zNeg = "-";
  }

  if( op==97 || op==133 || op==132 )
{

    pVal = valueNew(db, pCtx);
    if( pVal==0 ) goto no_mem;
    if( (((pExpr)->flags&(0x000400))!=0) )
{

      sqlite3VdbeMemSetInt64(pVal, (i64)pExpr->u.iValue*negInt);
    }else{
      zVal = sqlite3MPrintf(db, "%s%s", zNeg, pExpr->u.zToken);
      if( zVal==0 ) goto no_mem;
      sqlite3ValueSetStr(pVal, -1, zVal, 1, ((sqlite3_destructor_type)sqlite3MallocSize));
    }
    if( (op==132 || op==133 ) && affinity=='A' )
{

      sqlite3ValueApplyAffinity(pVal, 'C', 1);
    }else{
      sqlite3ValueApplyAffinity(pVal, affinity, 1);
    }
    if( pVal->flags & (0x0004|0x0008) ) pVal->flags &= ~0x0002;
    if( enc!=1 )
{

      rc = sqlite3VdbeChangeEncoding(pVal, enc);
    }
  }else if( op==155 ) {

    if( 0==sqlite3ValueFromExpr(db,pExpr->pLeft,enc,affinity,&pVal)
     && pVal!=0
    )
{

      sqlite3VdbeMemNumerify(pVal);
      if( pVal->flags & 0x0008 )
{

        pVal->u.r = -pVal->u.r;
      }else if( pVal->u.i==(((i64)-1) - (0xffffffff|(((i64)0x7fffffff)<<32))) )
{

        pVal->u.r = -(double)(((i64)-1) - (0xffffffff|(((i64)0x7fffffff)<<32)));
        ((pVal)->flags = ((pVal)->flags&~(0x81ff|0x4000))|0x0008);
      }else{
        pVal->u.i = -pVal->u.i;
      }
      sqlite3ValueApplyAffinity(pVal, affinity, enc);
    }
  }else if( op==101 )
{

    pVal = valueNew(db, pCtx);
    if( pVal==0 ) goto no_mem;
  }

  else if( op==134 )
{

    int nVal;
    ((void) (0));
    ((void) (0));
    pVal = valueNew(db, pCtx);
    if( !pVal ) goto no_mem;
    zVal = &pExpr->u.zToken[2];
    nVal = sqlite3Strlen30(zVal)-1;
    ((void) (0));
    sqlite3VdbeMemSetStr(pVal, sqlite3HexToBlob(db, zVal, nVal), nVal/2,
                         0, ((sqlite3_destructor_type)sqlite3MallocSize));
  }
# 67689 "sqlite3.c"
  *ppVal = pVal;
  return rc;

no_mem:
  sqlite3OomFault(db);
  sqlite3DbFree(db, zVal);
  ((void) (0));



  ((void) (0)); sqlite3ValueFree(pVal);

  return 7;
}
# 67714 "sqlite3.c"
static int sqlite3ValueFromExpr(
  sqlite3 *db,
  Expr *pExpr,
  u8 enc,
  u8 affinity,
  sqlite3_value **ppVal
)
{

  return valueFromExpr(db, pExpr, enc, affinity, ppVal, 0);
}
# 67980 "sqlite3.c"
static void sqlite3ValueSetStr(
  sqlite3_value *v,
  int n,
  const void *z,
  u8 enc,
  void (*xDel)(void*)
)
{

  if( v ) sqlite3VdbeMemSetStr((Mem *)v, z, n, enc, xDel);
}




static void sqlite3ValueFree(sqlite3_value *v)
{

  if( !v ) return;
  sqlite3VdbeMemRelease((Mem *)v);
  sqlite3DbFree(((Mem*)v)->db, v);
}






static __attribute__((noinline)) int valueBytes(sqlite3_value *pVal, u8 enc)
{

  return valueToText(pVal, enc)!=0 ? pVal->n : 0;
}
static int sqlite3ValueBytes(sqlite3_value *pVal, u8 enc)
{

  Mem *p = (Mem*)pVal;
  ((void) (0));
  if( (p->flags & 0x0002)!=0 && pVal->enc==enc )
{

    return p->n;
  }
  if( (p->flags & 0x0010)!=0 )
{

    if( p->flags & 0x4000 )
{

      return p->n + p->u.nZero;
    }else{
      return p->n;
    }
  }
  if( p->flags & 0x0001 ) return 0;
  return valueBytes(pVal, enc);
}
# 68046 "sqlite3.c"
static Vdbe *sqlite3VdbeCreate(Parse *pParse)
{

  sqlite3 *db = pParse->db;
  Vdbe *p;
  p = sqlite3DbMallocZero(db, sizeof(Vdbe) );
  if( p==0 ) return 0;
  p->db = db;
  if( db->pVdbe )
{

    db->pVdbe->pPrev = p;
  }
  p->pNext = db->pVdbe;
  p->pPrev = 0;
  db->pVdbe = p;
  p->magic = 0x26bceaa5;
  p->pParse = pParse;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  return p;
}




static void sqlite3VdbeError(Vdbe *p, const char *zFormat, ...)
{

  va_list ap;
  sqlite3DbFree(p->db, p->zErrMsg);
  __builtin_va_start(ap,zFormat);
  p->zErrMsg = sqlite3VMPrintf(p->db, zFormat, ap);
  __builtin_va_end(ap);
}




static void sqlite3VdbeSetSql(Vdbe *p, const char *z, int n, int isPrepareV2)
{

  ((void) (0));
  if( p==0 ) return;



  ((void) (0));
  p->zSql = sqlite3DbStrNDup(p->db, z, n);
  p->isPrepareV2 = (u8)isPrepareV2;
}




 const char * sqlite3_sql(sqlite3_stmt *pStmt)
{

  Vdbe *p = (Vdbe *)pStmt;
  return p ? p->zSql : 0;
}




static void sqlite3VdbeSwap(Vdbe *pA, Vdbe *pB)
{

  Vdbe tmp, *pTmp;
  char *zTmp;
  tmp = *pA;
  *pA = *pB;
  *pB = tmp;
  pTmp = pA->pNext;
  pA->pNext = pB->pNext;
  pB->pNext = pTmp;
  pTmp = pA->pPrev;
  pA->pPrev = pB->pPrev;
  pB->pPrev = pTmp;
  zTmp = pA->zSql;
  pA->zSql = pB->zSql;
  pB->zSql = zTmp;
  pB->isPrepareV2 = pA->isPrepareV2;
}
# 68131 "sqlite3.c"
static int growOpArray(Vdbe *v, int nOp)
{

  VdbeOp *pNew;
  Parse *p = v->pParse;
# 68145 "sqlite3.c"
  int nNew = (p->nOpAlloc ? p->nOpAlloc*2 : (int)(1024/sizeof(Op)));
  (void)(nOp);


  ((void) (0));
  ((void) (0));
  pNew = sqlite3DbRealloc(p->db, v->aOp, nNew*sizeof(Op));
  if( pNew )
{

    p->szOpAlloc = sqlite3DbMallocSize(p->db, pNew);
    p->nOpAlloc = p->szOpAlloc/sizeof(Op);
    v->aOp = pNew;
  }
  return (pNew ? 0 : 7);
}
# 68187 "sqlite3.c"
static __attribute__((noinline)) int growOp3(Vdbe *p, int op, int p1, int p2, int p3)
{

  ((void) (0));
  if( growOpArray(p, 1) ) return 1;
  ((void) (0));
  return sqlite3VdbeAddOp3(p, op, p1, p2, p3);
}
static int sqlite3VdbeAddOp3(Vdbe *p, int op, int p1, int p2, int p3)
{

  int i;
  VdbeOp *pOp;

  i = p->nOp;
  ((void) (0));
  ((void) (0));
  if( p->pParse->nOpAlloc<=i )
{

    return growOp3(p, op, p1, p2, p3);
  }
  p->nOp++;
  pOp = &p->aOp[i];
  pOp->opcode = (u8)op;
  pOp->p5 = 0;
  pOp->p1 = p1;
  pOp->p2 = p2;
  pOp->p3 = p3;
  pOp->p4.p = 0;
  pOp->p4type = 0;
# 68237 "sqlite3.c"
  return i;
}
static int sqlite3VdbeAddOp0(Vdbe *p, int op)
{

  return sqlite3VdbeAddOp3(p, op, 0, 0, 0);
}
static int sqlite3VdbeAddOp1(Vdbe *p, int op, int p1)
{

  return sqlite3VdbeAddOp3(p, op, p1, 0, 0);
}
static int sqlite3VdbeAddOp2(Vdbe *p, int op, int p1, int p2)
{

  return sqlite3VdbeAddOp3(p, op, p1, p2, 0);
}



static int sqlite3VdbeGoto(Vdbe *p, int iDest)
{

  return sqlite3VdbeAddOp3(p, 13, 0, iDest, 0);
}




static int sqlite3VdbeLoadString(Vdbe *p, int iDest, const char *zStr)
{

  return sqlite3VdbeAddOp4(p, 97, 0, iDest, 0, zStr, 0);
}
# 68270 "sqlite3.c"
static void sqlite3VdbeMultiLoad(Vdbe *p, int iDest, const char *zTypes, ...)
{

  va_list ap;
  int i;
  char c;
  __builtin_va_start(ap,zTypes);
  for(i=0; (c = zTypes[i])!=0; i++)
{

    if( c=='s' )
{

      const char *z = __builtin_va_arg(ap,const char*);
      sqlite3VdbeAddOp4(p, z==0 ? 25 : 97, 0, iDest++, 0, z, 0);
    }else{
      ((void) (0));
      sqlite3VdbeAddOp2(p, 22, __builtin_va_arg(ap,int), iDest++);
    }
  }
  __builtin_va_end(ap);
}




static int sqlite3VdbeAddOp4(
  Vdbe *p,
  int op,
  int p1,
  int p2,
  int p3,
  const char *zP4,
  int p4type
)
{

  int addr = sqlite3VdbeAddOp3(p, op, p1, p2, p3);
  sqlite3VdbeChangeP4(p, addr, zP4, p4type);
  return addr;
}





static int sqlite3VdbeAddOp4Dup8(
  Vdbe *p,
  int op,
  int p1,
  int p2,
  int p3,
  const u8 *zP4,
  int p4type
)
{

  char *p4copy = sqlite3DbMallocRawNN(sqlite3VdbeDb(p), 8);
  if( p4copy ) memcpy(p4copy, zP4, 8);
  return sqlite3VdbeAddOp4(p, op, p1, p2, p3, p4copy, p4type);
}
# 68330 "sqlite3.c"
static void sqlite3VdbeAddParseSchemaOp(Vdbe *p, int iDb, char *zWhere)
{

  int j;
  sqlite3VdbeAddOp4(p, 123, iDb, 0, 0, zWhere, (-1));
  for(j=0; j<p->db->nDb; j++) sqlite3VdbeUsesBtree(p, j);
}




static int sqlite3VdbeAddOp4Int(
  Vdbe *p,
  int op,
  int p1,
  int p2,
  int p3,
  int p4
)
{

  int addr = sqlite3VdbeAddOp3(p, op, p1, p2, p3);
  sqlite3VdbeChangeP4(p, addr, ((void*)(long int)(p4)), (-14));
  return addr;
}



static void sqlite3VdbeEndCoroutine(Vdbe *v, int regYield)
{

  sqlite3VdbeAddOp1(v, 17, regYield);







  v->pParse->nTempReg = 0;
  v->pParse->nRangeReg = 0;
}
# 68381 "sqlite3.c"
static int sqlite3VdbeMakeLabel(Vdbe *v)
{

  Parse *p = v->pParse;
  int i = p->nLabel++;
  ((void) (0));
  if( (i & (i-1))==0 )
{

    p->aLabel = sqlite3DbReallocOrFree(p->db, p->aLabel,
                                       (i*2+1)*sizeof(p->aLabel[0]));
  }
  if( p->aLabel )
{

    p->aLabel[i] = -1;
  }
  return (-1-(i));
}






static void sqlite3VdbeResolveLabel(Vdbe *v, int x)
{

  Parse *p = v->pParse;
  int j = (-1-(x));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( p->aLabel )
{

    p->aLabel[j] = v->nOp;
  }
  p->iFixedOp = v->nOp - 1;
}




static void sqlite3VdbeRunOnlyOnce(Vdbe *p)
{

  p->runOnlyOnce = 1;
}




static void sqlite3VdbeReusable(Vdbe *p)
{

  p->runOnlyOnce = 0;
}
# 68573 "sqlite3.c"
static void resolveP2Values(Vdbe *p, int *pMaxFuncArgs)
{

  int i;
  int nMaxArgs = *pMaxFuncArgs;
  Op *pOp;
  Parse *pParse = p->pParse;
  int *aLabel = pParse->aLabel;
  p->readOnly = 1;
  p->bIsReader = 0;
  for(pOp=p->aOp, i=p->nOp-1; i>=0; i--, pOp++)
{

    u8 opcode = pOp->opcode;



    switch( opcode )
{

      case 2: {
        if( pOp->p2!=0 ) p->readOnly = 0;

      }
      case 1:
      case 0: {
        p->bIsReader = 1;
        break;
      }

      case 8:

      case 10:
      case 9: {
        p->readOnly = 0;
        p->bIsReader = 1;
        break;
      }

      case 12: {
        if( pOp->p2>nMaxArgs ) nMaxArgs = pOp->p2;
        break;
      }
      case 11: {
        int n;
        ((void) (0));
        ((void) (0));
        n = pOp[-1].p1;
        if( n>nMaxArgs ) nMaxArgs = n;
        break;
      }

      case 7:
      case 5:
      case 3: {
        pOp->p4.xAdvance = sqlite3BtreeNext;
        pOp->p4type = (-19);
        break;
      }
      case 6:
      case 4: {
        pOp->p4.xAdvance = sqlite3BtreePrevious;
        pOp->p4type = (-19);
        break;
      }
    }

    pOp->opflags = sqlite3OpcodeProperty[opcode];
    if( (pOp->opflags & 0x01)!=0 && pOp->p2<0 )
{

      ((void) (0));
      pOp->p2 = aLabel[(-1-(pOp->p2))];
    }
  }
  sqlite3DbFree(p->db, pParse->aLabel);
  pParse->aLabel = 0;
  pParse->nLabel = 0;
  *pMaxFuncArgs = nMaxArgs;
  ((void) (0));
}




static int sqlite3VdbeCurrentAddr(Vdbe *p)
{

  ((void) (0));
  return p->nOp;
}
# 68680 "sqlite3.c"
static VdbeOp *sqlite3VdbeTakeOpArray(Vdbe *p, int *pnOp, int *pnMaxArg)
{

  VdbeOp *aOp = p->aOp;
  ((void) (0));


  ((void) (0));

  resolveP2Values(p, pnMaxArg);
  *pnOp = p->nOp;
  p->aOp = 0;
  return aOp;
}
# 68700 "sqlite3.c"
static VdbeOp *sqlite3VdbeAddOpList(
  Vdbe *p,
  int nOp,
  VdbeOpList const *aOp,
  int iLineno
)
{

  int i;
  VdbeOp *pOut, *pFirst;
  ((void) (0));
  ((void) (0));
  if( p->nOp + nOp > p->pParse->nOpAlloc && growOpArray(p, nOp) )
{

    return 0;
  }
  pFirst = pOut = &p->aOp[p->nOp];
  for(i=0; i<nOp; i++, aOp++, pOut++)
{

    pOut->opcode = aOp->opcode;
    pOut->p1 = aOp->p1;
    pOut->p2 = aOp->p2;
    ((void) (0));
    if( (sqlite3OpcodeProperty[aOp->opcode] & 0x01)!=0 && aOp->p2>0 )
{

      pOut->p2 += p->nOp;
    }
    pOut->p3 = aOp->p3;
    pOut->p4type = 0;
    pOut->p4.p = 0;
    pOut->p5 = 0;






    (void)iLineno;






  }
  p->nOp += nOp;
  return pFirst;
}
# 68776 "sqlite3.c"
static void sqlite3VdbeChangeOpcode(Vdbe *p, u32 addr, u8 iNewOpcode)
{

  sqlite3VdbeGetOp(p,addr)->opcode = iNewOpcode;
}
static void sqlite3VdbeChangeP1(Vdbe *p, u32 addr, int val)
{

  sqlite3VdbeGetOp(p,addr)->p1 = val;
}
static void sqlite3VdbeChangeP2(Vdbe *p, u32 addr, int val)
{

  sqlite3VdbeGetOp(p,addr)->p2 = val;
}
static void sqlite3VdbeChangeP3(Vdbe *p, u32 addr, int val)
{

  sqlite3VdbeGetOp(p,addr)->p3 = val;
}
static void sqlite3VdbeChangeP5(Vdbe *p, u8 p5)
{

  if( !p->db->mallocFailed ) p->aOp[p->nOp-1].p5 = p5;
}





static void sqlite3VdbeJumpHere(Vdbe *p, int addr)
{

  p->pParse->iFixedOp = p->nOp - 1;
  sqlite3VdbeChangeP2(p, addr, p->nOp);
}






static void freeEphemeralFunction(sqlite3 *db, FuncDef *pDef)
{

  if( (pDef) && (pDef->funcFlags & 0x0010)!=0 )
{

    sqlite3DbFree(db, pDef);
  }
}

static void vdbeFreeOpArray(sqlite3 *, Op *, int);




static void freeP4(sqlite3 *db, int p4type, void *p4)
{

  if( p4 )
{

    ((void) (0));
    switch( p4type )
{

      case (-20): {
        freeEphemeralFunction(db, ((sqlite3_context*)p4)->pFunc);

      }
      case (-12):
      case (-13):
      case (-1):
      case (-15): {
        sqlite3DbFree(db, p4);
        break;
      }
      case (-6): {
        if( db->pnBytesFreed==0 ) sqlite3KeyInfoUnref((KeyInfo*)p4);
        break;
      }






      case (-11): {
        if( db->pnBytesFreed==0 ) sqlite3_free(p4);
        break;
      }
      case (-5): {
        freeEphemeralFunction(db, (FuncDef*)p4);
        break;
      }
      case (-8): {
        if( db->pnBytesFreed==0 )
{

          sqlite3ValueFree((sqlite3_value*)p4);
        }else{
          Mem *p = (Mem*)p4;
          if( p->szMalloc ) sqlite3DbFree(db, p->zMalloc);
          sqlite3DbFree(db, p);
        }
        break;
      }
      case (-10) : {
        if( db->pnBytesFreed==0 ) sqlite3VtabUnlock((VTable *)p4);
        break;
      }
    }
  }
}






static void vdbeFreeOpArray(sqlite3 *db, Op *aOp, int nOp)
{

  if( aOp )
{

    Op *pOp;
    for(pOp=aOp; pOp<&aOp[nOp]; pOp++)
{

      if( pOp->p4type ) freeP4(db, pOp->p4type, pOp->p4.p);



    }
  }
  sqlite3DbFree(db, aOp);
}






static void sqlite3VdbeLinkSubProgram(Vdbe *pVdbe, SubProgram *p)
{

  p->pNext = pVdbe->pProgram;
  pVdbe->pProgram = p;
}




static int sqlite3VdbeChangeToNoop(Vdbe *p, int addr)
{

  VdbeOp *pOp;
  if( p->db->mallocFailed ) return 0;
  ((void) (0));
  pOp = &p->aOp[addr];
  freeP4(p->db, pOp->p4type, pOp->p4.p);
  pOp->p4type = 0;
  pOp->p4.z = 0;
  pOp->opcode = 160;
  return 1;
}





static int sqlite3VdbeDeletePriorOpcode(Vdbe *p, u8 op)
{

  if( (p->nOp-1)>(p->pParse->iFixedOp) && p->aOp[p->nOp-1].opcode==op )
{

    return sqlite3VdbeChangeToNoop(p, p->nOp-1);
  }else{
    return 0;
  }
}
# 68940 "sqlite3.c"
static void __attribute__((noinline)) vdbeChangeP4Full(
  Vdbe *p,
  Op *pOp,
  const char *zP4,
  int n
)
{

  if( pOp->p4type )
{

    freeP4(p->db, pOp->p4type, pOp->p4.p);
    pOp->p4type = 0;
    pOp->p4.p = 0;
  }
  if( n<0 )
{

    sqlite3VdbeChangeP4(p, (int)(pOp - p->aOp), zP4, n);
  }else{
    if( n==0 ) n = sqlite3Strlen30(zP4);
    pOp->p4.z = sqlite3DbStrNDup(p->db, zP4, n);
    pOp->p4type = (-1);
  }
}
static void sqlite3VdbeChangeP4(Vdbe *p, int addr, const char *zP4, int n)
{

  Op *pOp;
  sqlite3 *db;
  ((void) (0));
  db = p->db;
  ((void) (0));
  ((void) (0));
  if( db->mallocFailed )
{

    if( n!=(-10) ) freeP4(db, n, (void*)*(char**)&zP4);
    return;
  }
  ((void) (0));
  ((void) (0));
  if( addr<0 )
{

    addr = p->nOp - 1;
  }
  pOp = &p->aOp[addr];
  if( n>=0 || pOp->p4type )
{

    vdbeChangeP4Full(p, pOp, zP4, n);
    return;
  }
  if( n==(-14) )
{



    pOp->p4.i = ((int)(long int)(zP4));
    pOp->p4type = (-14);
  }else if( zP4!=0 )
{

    ((void) (0));
    pOp->p4.p = (void*)zP4;
    pOp->p4type = (signed char)n;
    if( n==(-10) ) sqlite3VtabLock((VTable*)zP4);
  }
}





static void sqlite3VdbeSetP4KeyInfo(Parse *pParse, Index *pIdx)
{

  Vdbe *v = pParse->pVdbe;
  ((void) (0));
  ((void) (0));
  sqlite3VdbeChangeP4(v, -1, (char*)sqlite3KeyInfoOfIndex(pParse, pIdx),
                      (-6));
}
# 69062 "sqlite3.c"
static VdbeOp *sqlite3VdbeGetOp(Vdbe *p, int addr)
{



  static VdbeOp dummy;
  ((void) (0));
  if( addr<0 )
{

    addr = p->nOp - 1;
  }
  ((void) (0));
  if( p->db->mallocFailed )
{

    return (VdbeOp*)&dummy;
  }else{
    return &p->aOp[addr];
  }
}
# 69247 "sqlite3.c"
static char *displayP4(Op *pOp, char *zTemp, int nTemp)
{

  char *zP4 = zTemp;
  StrAccum x;
  ((void) (0));
  sqlite3StrAccumInit(&x, 0, zTemp, nTemp, 0);
  switch( pOp->p4type )
{

    case (-6): {
      int j;
      KeyInfo *pKeyInfo = pOp->p4.pKeyInfo;
      ((void) (0));
      sqlite3XPrintf(&x, "k(%d", pKeyInfo->nField);
      for(j=0; j<pKeyInfo->nField; j++)
{

        CollSeq *pColl = pKeyInfo->aColl[j];
        const char *zColl = pColl ? pColl->zName : "";
        if( strcmp(zColl, "BINARY")==0 ) zColl = "B";
        sqlite3XPrintf(&x, ",%s%s", pKeyInfo->aSortOrder[j] ? "-" : "", zColl);
      }
      sqlite3StrAccumAppend(&x, ")", 1);
      break;
    }






    case (-4): {
      CollSeq *pColl = pOp->p4.pColl;
      sqlite3XPrintf(&x, "(%.20s)", pColl->zName);
      break;
    }
    case (-5): {
      FuncDef *pDef = pOp->p4.pFunc;
      sqlite3XPrintf(&x, "%s(%d)", pDef->zName, pDef->nArg);
      break;
    }







    case (-13): {
      sqlite3XPrintf(&x, "%lld", *pOp->p4.pI64);
      break;
    }
    case (-14): {
      sqlite3XPrintf(&x, "%d", pOp->p4.i);
      break;
    }
    case (-12): {
      sqlite3XPrintf(&x, "%.16g", *pOp->p4.pReal);
      break;
    }
    case (-8): {
      Mem *pMem = pOp->p4.pMem;
      if( pMem->flags & 0x0002 )
{

        zP4 = pMem->z;
      }else if( pMem->flags & 0x0004 )
{

        sqlite3XPrintf(&x, "%lld", pMem->u.i);
      }else if( pMem->flags & 0x0008 )
{

        sqlite3XPrintf(&x, "%.16g", pMem->u.r);
      }else if( pMem->flags & 0x0001 )
{

        zP4 = "NULL";
      }else{
        ((void) (0));
        zP4 = "(blob)";
      }
      break;
    }

    case (-10): {
      sqlite3_vtab *pVtab = pOp->p4.pVtab->pVtab;
      sqlite3XPrintf(&x, "vtab:%p", pVtab);
      break;
    }

    case (-15): {
      int i;
      int *ai = pOp->p4.ai;
      int n = ai[0];

      for(i=1; i<n; i++)
{

        sqlite3XPrintf(&x, ",%d", ai[i]);
      }
      zTemp[0] = '[';
      sqlite3StrAccumAppend(&x, "]", 1);
      break;
    }
    case (-18): {
      sqlite3XPrintf(&x, "program");
      break;
    }
    case (-19): {
      zTemp[0] = 0;
      break;
    }
    default: {
      zP4 = pOp->p4.z;
      if( zP4==0 )
{

        zP4 = zTemp;
        zTemp[0] = 0;
      }
    }
  }
  sqlite3StrAccumFinish(&x);
  ((void) (0));
  return zP4;
}
# 69367 "sqlite3.c"
static void sqlite3VdbeUsesBtree(Vdbe *p, int i)
{

  ((void) (0));
  ((void) (0));
  (p->btreeMask)|=(((yDbMask)1)<<(i));
  if( i!=1 && sqlite3BtreeSharable(p->db->aDb[i].pBt) )
{

    (p->lockMask)|=(((yDbMask)1)<<(i));
  }
}
# 69398 "sqlite3.c"
static void sqlite3VdbeEnter(Vdbe *p)
{

  int i;
  sqlite3 *db;
  Db *aDb;
  int nDb;
  if( (p->lockMask)==0 ) return;
  db = p->db;
  aDb = db->aDb;
  nDb = db->nDb;
  for(i=0; i<nDb; i++)
{

    if( i!=1 && (((p->lockMask)&(((yDbMask)1)<<(i)))!=0) && (aDb[i].pBt!=0) )
{

      sqlite3BtreeEnter(aDb[i].pBt);
    }
  }
}






static __attribute__((noinline)) void vdbeLeave(Vdbe *p)
{

  int i;
  sqlite3 *db;
  Db *aDb;
  int nDb;
  db = p->db;
  aDb = db->aDb;
  nDb = db->nDb;
  for(i=0; i<nDb; i++)
{

    if( i!=1 && (((p->lockMask)&(((yDbMask)1)<<(i)))!=0) && (aDb[i].pBt!=0) )
{

      sqlite3BtreeLeave(aDb[i].pBt);
    }
  }
}
static void sqlite3VdbeLeave(Vdbe *p)
{

  if( (p->lockMask)==0 ) return;
  vdbeLeave(p);
}
# 69469 "sqlite3.c"
static void releaseMemArray(Mem *p, int N)
{

  if( p && N )
{

    Mem *pEnd = &p[N];
    sqlite3 *db = p->db;
    if( db->pnBytesFreed )
{

      do{
        if( p->szMalloc ) sqlite3DbFree(db, p->zMalloc);
      }while( (++p)<pEnd );
      return;
    }
    do{
      ((void) (0));
      ((void) (0));
# 69495 "sqlite3.c"
      ;
      ;
      ;
      ;
      if( p->flags&(0x2000|0x0400|0x0040|0x0020) )
{

        sqlite3VdbeMemRelease(p);
      }else if( p->szMalloc )
{

        sqlite3DbFree(db, p->zMalloc);
        p->szMalloc = 0;
      }

      p->flags = 0x0080;
    }while( (++p)<pEnd );
  }
}





static void sqlite3VdbeFrameDelete(VdbeFrame *p)
{

  int i;
  Mem *aMem = ((Mem *)&((u8 *)p)[(((sizeof(VdbeFrame))+7)&~7)]);
  VdbeCursor **apCsr = (VdbeCursor **)&aMem[p->nChildMem];
  for(i=0; i<p->nChildCsr; i++)
{

    sqlite3VdbeFreeCursor(p->v, apCsr[i]);
  }
  releaseMemArray(aMem, p->nChildMem);
  sqlite3VdbeDeleteAuxData(p->v->db, &p->pAuxData, -1, 0);
  sqlite3DbFree(p->v->db, p);
}
# 69543 "sqlite3.c"
static int sqlite3VdbeList(
  Vdbe *p
)
{

  int nRow;
  int nSub = 0;
  SubProgram **apSub = 0;
  Mem *pSub = 0;
  sqlite3 *db = p->db;
  int i;
  int rc = 0;
  Mem *pMem = &p->aMem[1];

  ((void) (0));
  ((void) (0));
  ((void) (0));





  releaseMemArray(pMem, 8);
  p->pResultSet = 0;

  if( p->rc==7 )
{



    sqlite3OomFault(db);
    return 1;
  }
# 69580 "sqlite3.c"
  nRow = p->nOp;
  if( p->explain==1 )
{





    ((void) (0));
    pSub = &p->aMem[9];
    if( pSub->flags&0x0010 )
{



      nSub = pSub->n/sizeof(Vdbe*);
      apSub = (SubProgram **)pSub->z;
    }
    for(i=0; i<nSub; i++)
{

      nRow += apSub[i]->nOp;
    }
  }

  do{
    i = p->pc++;
  }while( i<nRow && p->explain==2 && p->aOp[i].opcode!=161 );
  if( i>=nRow )
{

    p->rc = 0;
    rc = 101;
  }else if( db->u1.isInterrupted )
{

    p->rc = 9;
    rc = 1;
    sqlite3VdbeError(p, sqlite3ErrStr(p->rc));
  }else{
    char *zP4;
    Op *pOp;
    if( i<p->nOp )
{



      pOp = &p->aOp[i];
    }else{


      int j;
      i -= p->nOp;
      for(j=0; i>=apSub[j]->nOp; j++)
{

        i -= apSub[j]->nOp;
      }
      pOp = &apSub[j]->aOp[i];
    }
    if( p->explain==1 )
{

      pMem->flags = 0x0004;
      pMem->u.i = i;
      pMem++;

      pMem->flags = 0x0800|0x0002|0x0200;
      pMem->z = (char*)sqlite3OpcodeName(pOp->opcode);
      ((void) (0));
      pMem->n = sqlite3Strlen30(pMem->z);
      pMem->enc = 1;
      pMem++;






      if( pOp->p4type==(-18) )
{

        int nByte = (nSub+1)*sizeof(SubProgram*);
        int j;
        for(j=0; j<nSub; j++)
{

          if( apSub[j]==pOp->p4.pProgram ) break;
        }
        if( j==nSub && 0==sqlite3VdbeMemGrow(pSub, nByte, nSub!=0) )
{

          apSub = (SubProgram **)pSub->z;
          apSub[nSub++] = pOp->p4.pProgram;
          pSub->flags |= 0x0010;
          pSub->n = nSub*sizeof(SubProgram*);
        }
      }
    }

    pMem->flags = 0x0004;
    pMem->u.i = pOp->p1;
    pMem++;

    pMem->flags = 0x0004;
    pMem->u.i = pOp->p2;
    pMem++;

    pMem->flags = 0x0004;
    pMem->u.i = pOp->p3;
    pMem++;

    if( sqlite3VdbeMemClearAndResize(pMem, 100) )
{

      ((void) (0));
      return 1;
    }
    pMem->flags = 0x0002|0x0200;
    zP4 = displayP4(pOp, pMem->z, pMem->szMalloc);
    if( zP4!=pMem->z )
{

      sqlite3VdbeMemSetStr(pMem, zP4, -1, 1, 0);
    }else{
      ((void) (0));
      pMem->n = sqlite3Strlen30(pMem->z);
      pMem->enc = 1;
    }
    pMem++;

    if( p->explain==1 )
{

      if( sqlite3VdbeMemClearAndResize(pMem, 4) )
{

        ((void) (0));
        return 1;
      }
      pMem->flags = 0x0002|0x0200;
      pMem->n = 2;
      sqlite3_snprintf(3, pMem->z, "%.2x", pOp->p5);
      pMem->enc = 1;
      pMem++;
# 69705 "sqlite3.c"
      pMem->flags = 0x0001;

    }

    p->nResColumn = 8 - 4*(p->explain-1);
    p->pResultSet = &p->aMem[1];
    p->rc = 0;
    rc = 100;
  }
  return rc;
}
# 69771 "sqlite3.c"
struct ReusableSpace {
  u8 *pSpace;
  int nFree;
  int nNeeded;
};
# 69791 "sqlite3.c"
static void *allocSpace(
  struct ReusableSpace *p,
  void *pBuf,
  int nByte
)
{

  ((void) (0));
  if( pBuf==0 )
{

    nByte = (((nByte)+7)&~7);
    if( nByte <= p->nFree )
{

      p->nFree -= nByte;
      pBuf = &p->pSpace[p->nFree];
    }else{
      p->nNeeded += nByte;
    }
  }
  ((void) (0));
  return pBuf;
}





static void sqlite3VdbeRewind(Vdbe *p)
{




  ((void) (0));
  ((void) (0));



  ((void) (0));


  p->magic = 0xbdf20da3;






  p->pc = -1;
  p->rc = 0;
  p->errorAction = 2;
  p->nChange = 0;
  p->cacheCtr = 1;
  p->minWriteFileFormat = 255;
  p->iStatement = 0;
  p->nFkConstraint = 0;






}
# 69867 "sqlite3.c"
static void sqlite3VdbeMakeReady(
  Vdbe *p,
  Parse *pParse
)
{

  sqlite3 *db;
  int nVar;
  int nMem;
  int nCursor;
  int nArg;
  int nOnce;
  int n;
  struct ReusableSpace x;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  db = p->db;
  ((void) (0));
  nVar = pParse->nVar;
  nMem = pParse->nMem;
  nCursor = pParse->nTab;
  nArg = pParse->nMaxArg;
  nOnce = pParse->nOnce;
  if( nOnce==0 ) nOnce = 1;






  nMem += nCursor;
  if( nCursor==0 && nMem>0 ) nMem++;





  n = (((sizeof(Op)*p->nOp)+7)&~7);
  x.pSpace = &((u8*)p->aOp)[n];
  ((void) (0));
  x.nFree = ((pParse->szOpAlloc - n)&~7);
  ((void) (0));
  if( x.nFree>0 )
{

    memset(x.pSpace, 0, x.nFree);
    ((void) (0));
  }

  resolveP2Values(p, &nArg);
  p->usesStmtJournal = (u8)(pParse->isMultiWrite && pParse->mayAbort);
  if( pParse->explain && nMem<10 )
{

    nMem = 10;
  }
  p->expired = 0;
# 69933 "sqlite3.c"
  do {
    x.nNeeded = 0;
    p->aMem = allocSpace(&x, p->aMem, nMem*sizeof(Mem));
    p->aVar = allocSpace(&x, p->aVar, nVar*sizeof(Mem));
    p->apArg = allocSpace(&x, p->apArg, nArg*sizeof(Mem*));
    p->apCsr = allocSpace(&x, p->apCsr, nCursor*sizeof(VdbeCursor*));
    p->aOnceFlag = allocSpace(&x, p->aOnceFlag, nOnce);



    if( x.nNeeded==0 ) break;
    x.pSpace = p->pFree = sqlite3DbMallocZero(db, x.nNeeded);
    x.nFree = x.nNeeded;
  }while( !db->mallocFailed );

  p->nCursor = nCursor;
  p->nOnceFlag = nOnce;
  if( p->aVar )
{

    p->nVar = (ynVar)nVar;
    for(n=0; n<nVar; n++)
{

      p->aVar[n].flags = 0x0001;
      p->aVar[n].db = db;
    }
  }
  p->nzVar = pParse->nzVar;
  p->azVar = pParse->azVar;
  pParse->nzVar = 0;
  pParse->azVar = 0;
  if( p->aMem )
{

    p->nMem = nMem;
    for(n=0; n<nMem; n++)
{

      p->aMem[n].flags = 0x0080;
      p->aMem[n].db = db;
    }
  }
  p->explain = pParse->explain;
  sqlite3VdbeRewind(p);
}





static void sqlite3VdbeFreeCursor(Vdbe *p, VdbeCursor *pCx)
{

  if( pCx==0 )
{

    return;
  }
  ((void) (0));
  switch( pCx->eCurType )
{

    case 1: {
      sqlite3VdbeSorterClose(p->db, pCx);
      break;
    }
    case 0: {
      if( pCx->pBt )
{

        sqlite3BtreeClose(pCx->pBt);


      }else{
        ((void) (0));
        sqlite3BtreeCloseCursor(pCx->uc.pCursor);
      }
      break;
    }

    case 2: {
      sqlite3_vtab_cursor *pVCur = pCx->uc.pVCur;
      const sqlite3_module *pModule = pVCur->pVtab->pModule;
      ((void) (0));
      pVCur->pVtab->nRef--;
      pModule->xClose(pVCur);
      break;
    }

  }
}




static void closeCursorsInFrame(Vdbe *p)
{

  if( p->apCsr )
{

    int i;
    for(i=0; i<p->nCursor; i++)
{

      VdbeCursor *pC = p->apCsr[i];
      if( pC )
{

        sqlite3VdbeFreeCursor(p, pC);
        p->apCsr[i] = 0;
      }
    }
  }
}






static int sqlite3VdbeFrameRestore(VdbeFrame *pFrame)
{

  Vdbe *v = pFrame->v;
  closeCursorsInFrame(v);



  v->aOnceFlag = pFrame->aOnceFlag;
  v->nOnceFlag = pFrame->nOnceFlag;
  v->aOp = pFrame->aOp;
  v->nOp = pFrame->nOp;
  v->aMem = pFrame->aMem;
  v->nMem = pFrame->nMem;
  v->apCsr = pFrame->apCsr;
  v->nCursor = pFrame->nCursor;
  v->db->lastRowid = pFrame->lastRowid;
  v->nChange = pFrame->nChange;
  v->db->nChange = pFrame->nDbChange;
  sqlite3VdbeDeleteAuxData(v->db, &v->pAuxData, -1, 0);
  v->pAuxData = pFrame->pAuxData;
  pFrame->pAuxData = 0;
  return pFrame->pc;
}
# 70062 "sqlite3.c"
static void closeAllCursors(Vdbe *p)
{

  if( p->pFrame )
{

    VdbeFrame *pFrame;
    for(pFrame=p->pFrame; pFrame->pParent; pFrame=pFrame->pParent);
    sqlite3VdbeFrameRestore(pFrame);
    p->pFrame = 0;
    p->nFrame = 0;
  }
  ((void) (0));
  closeCursorsInFrame(p);
  if( p->aMem )
{

    releaseMemArray(p->aMem, p->nMem);
  }
  while( p->pDelFrame )
{

    VdbeFrame *pDel = p->pDelFrame;
    p->pDelFrame = pDel->pParent;
    sqlite3VdbeFrameDelete(pDel);
  }


  if( p->pAuxData ) sqlite3VdbeDeleteAuxData(p->db, &p->pAuxData, -1, 0);
  ((void) (0));
}




static void Cleanup(Vdbe *p)
{

  sqlite3 *db = p->db;
# 70102 "sqlite3.c"
  sqlite3DbFree(db, p->zErrMsg);
  p->zErrMsg = 0;
  p->pResultSet = 0;
}







static void sqlite3VdbeSetNumCols(Vdbe *p, int nResColumn)
{

  Mem *pColName;
  int n;
  sqlite3 *db = p->db;

  releaseMemArray(p->aColName, p->nResColumn*2);
  sqlite3DbFree(db, p->aColName);
  n = nResColumn*2;
  p->nResColumn = (u16)nResColumn;
  p->aColName = pColName = (Mem*)sqlite3DbMallocZero(db, sizeof(Mem)*n );
  if( p->aColName==0 ) return;
  while( n-- > 0 )
{

    pColName->flags = 0x0001;
    pColName->db = p->db;
    pColName++;
  }
}
# 70141 "sqlite3.c"
static int sqlite3VdbeSetColName(
  Vdbe *p,
  int idx,
  int var,
  const char *zName,
  void (*xDel)(void*)
)
{

  int rc;
  Mem *pColName;
  ((void) (0));
  ((void) (0));
  if( p->db->mallocFailed )
{

    ((void) (0));
    return 7;
  }
  ((void) (0));
  pColName = &(p->aColName[idx+var*p->nResColumn]);
  rc = sqlite3VdbeMemSetStr(pColName, zName, -1, 1, xDel);
  ((void) (0));
  return rc;
}







static int vdbeCommit(sqlite3 *db, Vdbe *p)
{

  int i;
  int nTrans = 0;


  int rc = 0;
  int needXcommit = 0;
# 70190 "sqlite3.c"
  rc = sqlite3VtabSync(db, p);







  for(i=0; rc==0 && i<db->nDb; i++)
{

    Btree *pBt = db->aDb[i].pBt;
    if( sqlite3BtreeIsInTrans(pBt) )
{




      static const u8 aMJNeeded[] = {
                        1,
                        1,
                        0,
                        1,
                        0,
                        0
      };
      Pager *pPager;
      needXcommit = 1;
      sqlite3BtreeEnter(pBt);
      pPager = sqlite3BtreePager(pBt);
      if( db->aDb[i].safety_level!=0x01
       && aMJNeeded[sqlite3PagerGetJournalMode(pPager)]
      )
{

        ((void) (0));
        nTrans++;
      }
      rc = sqlite3PagerExclusiveLock(pPager);
      sqlite3BtreeLeave(pBt);
    }
  }
  if( rc!=0 )
{

    return rc;
  }


  if( needXcommit && db->xCommitCallback )
{

    rc = db->xCommitCallback(db->pCommitArg);
    if( rc )
{

      return (19 | (2<<8));
    }
  }
# 70247 "sqlite3.c"
  if( 0==sqlite3Strlen30(sqlite3BtreeGetFilename(db->aDb[0].pBt))
   || nTrans<=1
  )
{

    for(i=0; rc==0 && i<db->nDb; i++)
{

      Btree *pBt = db->aDb[i].pBt;
      if( pBt )
{

        rc = sqlite3BtreeCommitPhaseOne(pBt, 0);
      }
    }






    for(i=0; rc==0 && i<db->nDb; i++)
{

      Btree *pBt = db->aDb[i].pBt;
      if( pBt )
{

        rc = sqlite3BtreeCommitPhaseTwo(pBt, 0);
      }
    }
    if( rc==0 )
{

      sqlite3VtabCommit(db);
    }
  }






  else{
    sqlite3_vfs *pVfs = db->pVfs;
    char *zMaster = 0;
    char const *zMainFile = sqlite3BtreeGetFilename(db->aDb[0].pBt);
    sqlite3_file *pMaster = 0;
    i64 offset = 0;
    int res;
    int retryCount = 0;
    int nMainFile;


    nMainFile = sqlite3Strlen30(zMainFile);
    zMaster = sqlite3MPrintf(db, "%s-mjXXXXXX9XXz", zMainFile);
    if( zMaster==0 ) return 7;
    do {
      u32 iRandom;
      if( retryCount )
{

        if( retryCount>100 )
{

          sqlite3_log(13, "MJ delete: %s", zMaster);
          sqlite3OsDelete(pVfs, zMaster, 0);
          break;
        }else if( retryCount==1 )
{

          sqlite3_log(13, "MJ collide: %s", zMaster);
        }
      }
      retryCount++;
      sqlite3_randomness(sizeof(iRandom), &iRandom);
      sqlite3_snprintf(13, &zMaster[nMainFile], "-mj%06X9%02X",
                               (iRandom>>8)&0xffffff, iRandom&0xff);


      ((void) (0));
      ;
      rc = sqlite3OsAccess(pVfs, zMaster, 0, &res);
    }while( rc==0 && res );
    if( rc==0 )
{


      rc = sqlite3OsOpenMalloc(pVfs, zMaster, &pMaster,
          0x00000002|0x00000004|
          0x00000010|0x00004000, 0
      );
    }
    if( rc!=0 )
{

      sqlite3DbFree(db, zMaster);
      return rc;
    }







    for(i=0; i<db->nDb; i++)
{

      Btree *pBt = db->aDb[i].pBt;
      if( sqlite3BtreeIsInTrans(pBt) )
{

        char const *zFile = sqlite3BtreeGetJournalname(pBt);
        if( zFile==0 )
{

          continue;
        }
        ((void) (0));
        rc = sqlite3OsWrite(pMaster, zFile, sqlite3Strlen30(zFile)+1, offset);
        offset += sqlite3Strlen30(zFile)+1;
        if( rc!=0 )
{

          sqlite3OsCloseFree(pMaster);
          sqlite3OsDelete(pVfs, zMaster, 0);
          sqlite3DbFree(db, zMaster);
          return rc;
        }
      }
    }




    if( 0==(sqlite3OsDeviceCharacteristics(pMaster)&0x00000400)
     && 0!=(rc = sqlite3OsSync(pMaster, 0x00002))
    )
{

      sqlite3OsCloseFree(pMaster);
      sqlite3OsDelete(pVfs, zMaster, 0);
      sqlite3DbFree(db, zMaster);
      return rc;
    }
# 70372 "sqlite3.c"
    for(i=0; rc==0 && i<db->nDb; i++)
{

      Btree *pBt = db->aDb[i].pBt;
      if( pBt )
{

        rc = sqlite3BtreeCommitPhaseOne(pBt, zMaster);
      }
    }
    sqlite3OsCloseFree(pMaster);
    ((void) (0));
    if( rc!=0 )
{

      sqlite3DbFree(db, zMaster);
      return rc;
    }





    rc = sqlite3OsDelete(pVfs, zMaster, 1);
    sqlite3DbFree(db, zMaster);
    zMaster = 0;
    if( rc )
{

      return rc;
    }
# 70403 "sqlite3.c"
    ;
    sqlite3BeginBenignMalloc();
    for(i=0; i<db->nDb; i++)
{

      Btree *pBt = db->aDb[i].pBt;
      if( pBt )
{

        sqlite3BtreeCommitPhaseTwo(pBt, 1);
      }
    }
    sqlite3EndBenignMalloc();
    ;

    sqlite3VtabCommit(db);
  }


  return rc;
}
# 70463 "sqlite3.c"
static int sqlite3VdbeCloseStatement(Vdbe *p, int eOp)
{

  sqlite3 *const db = p->db;
  int rc = 0;






  if( db->nStatement && p->iStatement )
{

    int i;
    const int iSavepoint = p->iStatement-1;

    ((void) (0));
    ((void) (0));
    ((void) (0));

    for(i=0; i<db->nDb; i++)
{

      int rc2 = 0;
      Btree *pBt = db->aDb[i].pBt;
      if( pBt )
{

        if( eOp==2 )
{

          rc2 = sqlite3BtreeSavepoint(pBt, 2, iSavepoint);
        }
        if( rc2==0 )
{

          rc2 = sqlite3BtreeSavepoint(pBt, 1, iSavepoint);
        }
        if( rc==0 )
{

          rc = rc2;
        }
      }
    }
    db->nStatement--;
    p->iStatement = 0;

    if( rc==0 )
{

      if( eOp==2 )
{

        rc = sqlite3VtabSavepoint(db, 2, iSavepoint);
      }
      if( rc==0 )
{

        rc = sqlite3VtabSavepoint(db, 1, iSavepoint);
      }
    }




    if( eOp==2 )
{

      db->nDeferredCons = p->nStmtDefCons;
      db->nDeferredImmCons = p->nStmtDefImmCons;
    }
  }
  return rc;
}
# 70529 "sqlite3.c"
static int sqlite3VdbeCheckFk(Vdbe *p, int deferred)
{

  sqlite3 *db = p->db;
  if( (deferred && (db->nDeferredCons+db->nDeferredImmCons)>0)
   || (!deferred && p->nFkConstraint>0)
  )
{

    p->rc = (19 | (3<<8));
    p->errorAction = 2;
    sqlite3VdbeError(p, "FOREIGN KEY constraint failed");
    return 1;
  }
  return 0;
}
# 70556 "sqlite3.c"
static int sqlite3VdbeHalt(Vdbe *p)
{

  int rc;
  sqlite3 *db = p->db;
# 70576 "sqlite3.c"
  if( db->mallocFailed )
{

    p->rc = 7;
  }
  if( p->aOnceFlag ) memset(p->aOnceFlag, 0, p->nOnceFlag);
  closeAllCursors(p);
  if( p->magic!=0xbdf20da3 )
{

    return 0;
  }
  ;



  if( p->pc>=0 && p->bIsReader )
{

    int mrc;
    int eStatementOp = 0;
    int isSpecialError;


    sqlite3VdbeEnter(p);


    mrc = p->rc & 0xff;
    isSpecialError = mrc==7 || mrc==10
                     || mrc==9 || mrc==13;
    if( isSpecialError )
{

# 70613 "sqlite3.c"
      if( !p->readOnly || mrc!=9 )
{

        if( (mrc==7 || mrc==13) && p->usesStmtJournal )
{

          eStatementOp = 2;
        }else{



          sqlite3RollbackAll(db, (4 | (2<<8)));
          sqlite3CloseSavepoints(db);
          db->autoCommit = 1;
          p->nChange = 0;
        }
      }
    }


    if( p->rc==0 )
{

      sqlite3VdbeCheckFk(p, 0);
    }







    if( !((db)->nVTrans>0 && (db)->aVTrans==0)
     && db->autoCommit
     && db->nVdbeWrite==(p->readOnly==0)
    )
{

      if( p->rc==0 || (p->errorAction==3 && !isSpecialError) )
{

        rc = sqlite3VdbeCheckFk(p, 1);
        if( rc!=0 )
{

          if( (p->readOnly) )
{

            sqlite3VdbeLeave(p);
            return 1;
          }
          rc = (19 | (3<<8));
        }else{




          rc = vdbeCommit(db, p);
        }
        if( rc==5 && p->readOnly )
{

          sqlite3VdbeLeave(p);
          return 5;
        }else if( rc!=0 )
{

          p->rc = rc;
          sqlite3RollbackAll(db, 0);
          p->nChange = 0;
        }else{
          db->nDeferredCons = 0;
          db->nDeferredImmCons = 0;
          db->flags &= ~0x01000000;
          sqlite3CommitInternalChanges(db);
        }
      }else{
        sqlite3RollbackAll(db, 0);
        p->nChange = 0;
      }
      db->nStatement = 0;
    }else if( eStatementOp==0 )
{

      if( p->rc==0 || p->errorAction==3 )
{

        eStatementOp = 1;
      }else if( p->errorAction==2 )
{

        eStatementOp = 2;
      }else{
        sqlite3RollbackAll(db, (4 | (2<<8)));
        sqlite3CloseSavepoints(db);
        db->autoCommit = 1;
        p->nChange = 0;
      }
    }







    if( eStatementOp )
{

      rc = sqlite3VdbeCloseStatement(p, eStatementOp);
      if( rc )
{

        if( p->rc==0 || (p->rc&0xff)==19 )
{

          p->rc = rc;
          sqlite3DbFree(db, p->zErrMsg);
          p->zErrMsg = 0;
        }
        sqlite3RollbackAll(db, (4 | (2<<8)));
        sqlite3CloseSavepoints(db);
        db->autoCommit = 1;
        p->nChange = 0;
      }
    }




    if( p->changeCntOn )
{

      if( eStatementOp!=2 )
{

        sqlite3VdbeSetChanges(db, p->nChange);
      }else{
        sqlite3VdbeSetChanges(db, 0);
      }
      p->nChange = 0;
    }


    sqlite3VdbeLeave(p);
  }


  if( p->pc>=0 )
{

    db->nVdbeActive--;
    if( !p->readOnly ) db->nVdbeWrite--;
    if( p->bIsReader ) db->nVdbeRead--;
    ((void) (0));
    ((void) (0));
    ((void) (0));
  }
  p->magic = 0x519c2973;
  ;
  if( db->mallocFailed )
{

    p->rc = 7;
  }





  if( db->autoCommit )
{

    ;
  }

  ((void) (0));
  return (p->rc==5 ? 5 : 0);
}






static void sqlite3VdbeResetStepResult(Vdbe *p)
{

  p->rc = 0;
}
# 70770 "sqlite3.c"
static int sqlite3VdbeTransferError(Vdbe *p)
{

  sqlite3 *db = p->db;
  int rc = p->rc;
  if( p->zErrMsg )
{

    db->bBenignMalloc++;
    sqlite3BeginBenignMalloc();
    if( db->pErr==0 ) db->pErr = sqlite3ValueNew(db);
    sqlite3ValueSetStr(db->pErr, -1, p->zErrMsg, 1, ((sqlite3_destructor_type)-1));
    sqlite3EndBenignMalloc();
    db->bBenignMalloc--;
    db->errCode = rc;
  }else{
    sqlite3Error(db, rc);
  }
  return rc;
}
# 70819 "sqlite3.c"
static int sqlite3VdbeReset(Vdbe *p)
{

  sqlite3 *db;
  db = p->db;





  sqlite3VdbeHalt(p);






  if( p->pc>=0 )
{

    ;
    sqlite3VdbeTransferError(p);
    sqlite3DbFree(db, p->zErrMsg);
    p->zErrMsg = 0;
    if( p->runOnlyOnce ) p->expired = 1;
  }else if( p->rc && p->expired )
{





    sqlite3ErrorWithMsg(db, p->rc, p->zErrMsg ? "%s" : 0, p->zErrMsg);
    sqlite3DbFree(db, p->zErrMsg);
    p->zErrMsg = 0;
  }



  Cleanup(p);
# 70890 "sqlite3.c"
  p->iCurrentTime = 0;
  p->magic = 0x26bceaa5;
  return p->rc & db->errMask;
}





static int sqlite3VdbeFinalize(Vdbe *p)
{

  int rc = 0;
  if( p->magic==0xbdf20da3 || p->magic==0x519c2973 )
{

    rc = sqlite3VdbeReset(p);
    ((void) (0));
  }
  sqlite3VdbeDelete(p);
  return rc;
}
# 70925 "sqlite3.c"
static void sqlite3VdbeDeleteAuxData(sqlite3 *db, AuxData **pp, int iOp, int mask)
{

  while( *pp )
{

    AuxData *pAux = *pp;
    if( (iOp<0)
     || (pAux->iOp==iOp && (pAux->iArg>31 || !(mask & (((unsigned int)1)<<(pAux->iArg)))))
    )
{

      ;
      if( pAux->xDelete )
{

        pAux->xDelete(pAux->pAux);
      }
      *pp = pAux->pNext;
      sqlite3DbFree(db, pAux);
    }else{
      pp= &pAux->pNext;
    }
  }
}
# 70951 "sqlite3.c"
static void sqlite3VdbeClearObject(sqlite3 *db, Vdbe *p)
{

  SubProgram *pSub, *pNext;
  int i;
  ((void) (0));
  releaseMemArray(p->aVar, p->nVar);
  releaseMemArray(p->aColName, p->nResColumn*2);
  for(pSub=p->pProgram; pSub; pSub=pNext)
{

    pNext = pSub->pNext;
    vdbeFreeOpArray(db, pSub->aOp, pSub->nOp);
    sqlite3DbFree(db, pSub);
  }
  for(i=p->nzVar-1; i>=0; i--) sqlite3DbFree(db, p->azVar[i]);
  sqlite3DbFree(db, p->azVar);
  vdbeFreeOpArray(db, p->aOp, p->nOp);
  sqlite3DbFree(db, p->aColName);
  sqlite3DbFree(db, p->zSql);
  sqlite3DbFree(db, p->pFree);






}




static void sqlite3VdbeDelete(Vdbe *p)
{

  sqlite3 *db;

  if( (p==0) ) return;
  db = p->db;
  ((void) (0));
  sqlite3VdbeClearObject(db, p);
  if( p->pPrev )
{

    p->pPrev->pNext = p->pNext;
  }else{
    ((void) (0));
    db->pVdbe = p->pNext;
  }
  if( p->pNext )
{

    p->pNext->pPrev = p->pPrev;
  }
  p->magic = 0xb606c3c8;
  p->db = 0;
  sqlite3DbFree(db, p);
}






static int __attribute__((noinline)) handleDeferredMoveto(VdbeCursor *p)
{

  int res, rc;



  ((void) (0));
  ((void) (0));
  ((void) (0));
  rc = sqlite3BtreeMovetoUnpacked(p->uc.pCursor, 0, p->movetoTarget, 0, &res);
  if( rc ) return rc;
  if( res!=0 ) return sqlite3CorruptError(71015);



  p->deferredMoveto = 0;
  p->cacheStatus = 0;
  return 0;
}
# 71031 "sqlite3.c"
static int __attribute__((noinline)) handleMovedCursor(VdbeCursor *p)
{

  int isDifferentRow, rc;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  rc = sqlite3BtreeCursorRestore(p->uc.pCursor, &isDifferentRow);
  p->cacheStatus = 0;
  if( isDifferentRow ) p->nullRow = 1;
  return rc;
}





static int sqlite3VdbeCursorRestore(VdbeCursor *p)
{

  ((void) (0));
  if( sqlite3BtreeCursorHasMoved(p->uc.pCursor) )
{

    return handleMovedCursor(p);
  }
  return 0;
}
# 71067 "sqlite3.c"
static int sqlite3VdbeCursorMoveto(VdbeCursor **pp, int *piCol)
{

  VdbeCursor *p = *pp;
  if( p->eCurType==0 )
{

    if( p->deferredMoveto )
{

      int iMap;
      if( p->aAltMap && (iMap = p->aAltMap[1+*piCol])>0 )
{

        *pp = p->pAltCursor;
        *piCol = iMap - 1;
        return 0;
      }
      return handleDeferredMoveto(p);
    }
    if( sqlite3BtreeCursorHasMoved(p->uc.pCursor) )
{

      return handleMovedCursor(p);
    }
  }
  return 0;
}
# 71131 "sqlite3.c"
static u32 sqlite3VdbeSerialType(Mem *pMem, int file_format, u32 *pLen)
{

  int flags = pMem->flags;
  u32 n;

  ((void) (0));
  if( flags&0x0001 )
{

    *pLen = 0;
    return 0;
  }
  if( flags&0x0004 )
{



    i64 i = pMem->u.i;
    u64 u;
    if( i<0 )
{

      u = ~i;
    }else{
      u = i;
    }
    if( u<=127 )
{

      if( (i&1)==i && file_format>=4 )
{

        *pLen = 0;
        return 8+(u32)u;
      }else{
        *pLen = 1;
        return 1;
      }
    }
    if( u<=32767 )
{
 *pLen = 2; return 2; }
    if( u<=8388607 )
{
 *pLen = 3; return 3; }
    if( u<=2147483647 )
{
 *pLen = 4; return 4; }
    if( u<=((((i64)0x00008000)<<32)-1) )
{
 *pLen = 6; return 5; }
    *pLen = 8;
    return 6;
  }
  if( flags&0x0008 )
{

    *pLen = 8;
    return 7;
  }
  ((void) (0));
  ((void) (0));
  n = (u32)pMem->n;
  if( flags & 0x4000 )
{

    n += pMem->u.nZero;
  }
  *pLen = n;
  return ((n*2) + 12 + ((flags&0x0002)!=0));
}




static const u8 sqlite3SmallTypeSizes[] = {

            0, 1, 2, 3, 4, 6, 8, 8, 0, 0,
            0, 0, 0, 0, 1, 1, 2, 2, 3, 3,
            4, 4, 5, 5, 6, 6, 7, 7, 8, 8,
            9, 9, 10, 10, 11, 11, 12, 12, 13, 13,
           14, 14, 15, 15, 16, 16, 17, 17, 18, 18,
           19, 19, 20, 20, 21, 21, 22, 22, 23, 23,
           24, 24, 25, 25, 26, 26, 27, 27, 28, 28,
           29, 29, 30, 30, 31, 31, 32, 32, 33, 33,
           34, 34, 35, 35, 36, 36, 37, 37, 38, 38,
           39, 39, 40, 40, 41, 41, 42, 42, 43, 43,
           44, 44, 45, 45, 46, 46, 47, 47, 48, 48,
           49, 49, 50, 50, 51, 51, 52, 52, 53, 53,
           54, 54, 55, 55, 56, 56, 57, 57
};




static u32 sqlite3VdbeSerialTypeLen(u32 serial_type)
{

  if( serial_type>=128 )
{

    return (serial_type-12)/2;
  }else{
    ((void) (0))
                                                                         ;
    return sqlite3SmallTypeSizes[serial_type];
  }
}
static u8 sqlite3VdbeOneByteSerialTypeLen(u8 serial_type)
{

  ((void) (0));
  return sqlite3SmallTypeSizes[serial_type];
}
# 71283 "sqlite3.c"
static u32 sqlite3VdbeSerialPut(u8 *buf, Mem *pMem, u32 serial_type)
{

  u32 len;


  if( serial_type<=7 && serial_type>0 )
{

    u64 v;
    u32 i;
    if( serial_type==7 )
{

      ((void) (0));
      memcpy(&v, &pMem->u.r, sizeof(v));
      ;
    }else{
      v = pMem->u.i;
    }
    len = i = sqlite3SmallTypeSizes[serial_type];
    ((void) (0));
    do{
      buf[--i] = (u8)(v&0xFF);
      v >>= 8;
    }while( i );
    return len;
  }


  if( serial_type>=12 )
{

    ((void) (0))
                                                            ;
    len = pMem->n;
    if( len>0 ) memcpy(buf, pMem->z, len);
    return len;
  }


  return 0;
}
# 71337 "sqlite3.c"
static u32 __attribute__((noinline)) serialGet(
  const unsigned char *buf,
  u32 serial_type,
  Mem *pMem
)
{

  u64 x = (((u32)(buf)[0]<<24)|((buf)[1]<<16)|((buf)[2]<<8)|(buf)[3]);
  u32 y = (((u32)(buf+4)[0]<<24)|((buf+4)[1]<<16)|((buf+4)[2]<<8)|(buf+4)[3]);
  x = (x<<32) + y;
  if( serial_type==6 )
{



    pMem->u.i = *(i64*)&x;
    pMem->flags = 0x0004;
    ;
  }else{
# 71366 "sqlite3.c"
    ((void) (0));
    ;
    memcpy(&pMem->u.r, &x, sizeof(x));
    pMem->flags = sqlite3IsNaN(pMem->u.r) ? 0x0001 : 0x0008;
  }
  return 8;
}
static u32 sqlite3VdbeSerialGet(
  const unsigned char *buf,
  u32 serial_type,
  Mem *pMem
)
{

  switch( serial_type )
{

    case 10:
    case 11:
    case 0: {

      pMem->flags = 0x0001;
      break;
    }
    case 1: {


      pMem->u.i = ((i8)(buf)[0]);
      pMem->flags = 0x0004;
      ;
      return 1;
    }
    case 2: {


      pMem->u.i = (256*(i8)((buf)[0])|(buf)[1]);
      pMem->flags = 0x0004;
      ;
      return 2;
    }
    case 3: {


      pMem->u.i = (65536*(i8)((buf)[0])|((buf)[1]<<8)|(buf)[2]);
      pMem->flags = 0x0004;
      ;
      return 3;
    }
    case 4: {


      pMem->u.i = (16777216*(i8)((buf)[0])|((buf)[1]<<16)|((buf)[2]<<8)|(buf)[3]);




      pMem->flags = 0x0004;
      ;
      return 4;
    }
    case 5: {


      pMem->u.i = (((u32)(buf+2)[0]<<24)|((buf+2)[1]<<16)|((buf+2)[2]<<8)|(buf+2)[3]) + (((i64)1)<<32)*(256*(i8)((buf)[0])|(buf)[1]);
      pMem->flags = 0x0004;
      ;
      return 6;
    }
    case 6:
    case 7: {


      return serialGet(buf,serial_type,pMem);
    }
    case 8:
    case 9: {


      pMem->u.i = serial_type-8;
      pMem->flags = 0x0004;
      return 0;
    }
    default: {




      static const u16 aFlag[] = { 0x0010|0x1000, 0x0002|0x1000 };
      pMem->z = (char *)buf;
      pMem->n = (serial_type-12)/2;
      pMem->flags = aFlag[serial_type&1];
      return pMem->n;
    }
  }
  return 0;
}
# 71472 "sqlite3.c"
static UnpackedRecord *sqlite3VdbeAllocUnpackedRecord(
  KeyInfo *pKeyInfo,
  char *pSpace,
  int szSpace,
  char **ppFree
)
{

  UnpackedRecord *p;
  int nOff;
  int nByte;





  nOff = (8 - (((int)(long int)(pSpace)) & 7)) & 7;
  nByte = (((sizeof(UnpackedRecord))+7)&~7) + sizeof(Mem)*(pKeyInfo->nField+1);
  if( nByte>szSpace+nOff )
{

    p = (UnpackedRecord *)sqlite3DbMallocRaw(pKeyInfo->db, nByte);
    *ppFree = (char *)p;
    if( !p ) return 0;
  }else{
    p = (UnpackedRecord*)&pSpace[nOff];
    *ppFree = 0;
  }

  p->aMem = (Mem*)&((char*)p)[(((sizeof(UnpackedRecord))+7)&~7)];
  ((void) (0));
  p->pKeyInfo = pKeyInfo;
  p->nField = pKeyInfo->nField + 1;
  return p;
}






static void sqlite3VdbeRecordUnpack(
  KeyInfo *pKeyInfo,
  int nKey,
  const void *pKey,
  UnpackedRecord *p
)
{

  const unsigned char *aKey = (const unsigned char *)pKey;
  int d;
  u32 idx;
  u16 u;
  u32 szHdr;
  Mem *pMem = p->aMem;

  p->default_rc = 0;
  ((void) (0));
  idx = (u8)((*(aKey)<(u8)0x80)?((szHdr)=(u32)*(aKey)),1:sqlite3GetVarint32((aKey),(u32 *)&(szHdr)));
  d = szHdr;
  u = 0;
  while( idx<szHdr && d<=nKey )
{

    u32 serial_type;

    idx += (u8)((*(&aKey[idx])<(u8)0x80)?((serial_type)=(u32)*(&aKey[idx])),1:sqlite3GetVarint32((&aKey[idx]),(u32 *)&(serial_type)));
    pMem->enc = pKeyInfo->enc;
    pMem->db = pKeyInfo->db;

    pMem->szMalloc = 0;
    d += sqlite3VdbeSerialGet(&aKey[d], serial_type, pMem);
    pMem++;
    if( (++u)>=p->nField ) break;
  }
  ((void) (0));
  p->nField = u;
}
# 71690 "sqlite3.c"
static int vdbeCompareMemString(
  const Mem *pMem1,
  const Mem *pMem2,
  const CollSeq *pColl,
  u8 *prcErr
)
{

  if( pMem1->enc==pColl->enc )
{



    return pColl->xCmp(pColl->pUser,pMem1->n,pMem1->z,pMem2->n,pMem2->z);
  }else{
    int rc;
    const void *v1, *v2;
    int n1, n2;
    Mem c1;
    Mem c2;
    sqlite3VdbeMemInit(&c1, pMem1->db, 0x0001);
    sqlite3VdbeMemInit(&c2, pMem1->db, 0x0001);
    sqlite3VdbeMemShallowCopy(&c1, pMem1, 0x1000);
    sqlite3VdbeMemShallowCopy(&c2, pMem2, 0x1000);
    v1 = sqlite3ValueText((sqlite3_value*)&c1, pColl->enc);
    n1 = v1==0 ? 0 : c1.n;
    v2 = sqlite3ValueText((sqlite3_value*)&c2, pColl->enc);
    n2 = v2==0 ? 0 : c2.n;
    rc = pColl->xCmp(pColl->pUser, n1, v1, n2, v2);
    if( (v1==0 || v2==0) && prcErr ) *prcErr = 7;
    sqlite3VdbeMemRelease(&c1);
    sqlite3VdbeMemRelease(&c2);
    return rc;
  }
}






static __attribute__((noinline)) int sqlite3BlobCompare(const Mem *pB1, const Mem *pB2)
{

  int c = memcmp(pB1->z, pB2->z, pB1->n>pB2->n ? pB2->n : pB1->n);
  if( c ) return c;
  return pB1->n - pB2->n;
}






static int sqlite3IntFloatCompare(i64 i, double r)
{

  if( sizeof(long double)>8 )
{

    long double x = (long double)i;
    if( x<r ) return -1;
    if( x>r ) return +1;
    return 0;
  }else{
    i64 y;
    double s;
    if( r<-9223372036854775808.0 ) return +1;
    if( r>9223372036854775807.0 ) return -1;
    y = (i64)r;
    if( i<y ) return -1;
    if( i>y )
{

      if( y==(((i64)-1) - (0xffffffff|(((i64)0x7fffffff)<<32))) && r>0.0 ) return -1;
      return +1;
    }
    s = (double)i;
    if( s<r ) return -1;
    if( s>r ) return +1;
    return 0;
  }
}
# 71771 "sqlite3.c"
static int sqlite3MemCompare(const Mem *pMem1, const Mem *pMem2, const CollSeq *pColl)
{

  int f1, f2;
  int combined_flags;

  f1 = pMem1->flags;
  f2 = pMem2->flags;
  combined_flags = f1|f2;
  ((void) (0));




  if( combined_flags&0x0001 )
{

    return (f2&0x0001) - (f1&0x0001);
  }



  if( combined_flags&(0x0004|0x0008) )
{

    if( (f1 & f2 & 0x0004)!=0 )
{

      if( pMem1->u.i < pMem2->u.i ) return -1;
      if( pMem1->u.i > pMem2->u.i ) return +1;
      return 0;
    }
    if( (f1 & f2 & 0x0008)!=0 )
{

      if( pMem1->u.r < pMem2->u.r ) return -1;
      if( pMem1->u.r > pMem2->u.r ) return +1;
      return 0;
    }
    if( (f1&0x0004)!=0 )
{

      if( (f2&0x0008)!=0 )
{

        return sqlite3IntFloatCompare(pMem1->u.i, pMem2->u.r);
      }else{
        return -1;
      }
    }
    if( (f1&0x0008)!=0 )
{

      if( (f2&0x0004)!=0 )
{

        return -sqlite3IntFloatCompare(pMem2->u.i, pMem1->u.r);
      }else{
        return -1;
      }
    }
    return +1;
  }




  if( combined_flags&0x0002 )
{

    if( (f1 & 0x0002)==0 )
{

      return 1;
    }
    if( (f2 & 0x0002)==0 )
{

      return -1;
    }

    ((void) (0));
    ((void) (0))
                                                                      ;





    ((void) (0));

    if( pColl )
{

      return vdbeCompareMemString(pMem1, pMem2, pColl, 0);
    }


  }


  return sqlite3BlobCompare(pMem1, pMem2);
}
# 71857 "sqlite3.c"
static i64 vdbeRecordDecodeInt(u32 serial_type, const u8 *aKey)
{

  u32 y;
  ((void) (0));
  switch( serial_type )
{

    case 0:
    case 1:
      ;
      return ((i8)(aKey)[0]);
    case 2:
      ;
      return (256*(i8)((aKey)[0])|(aKey)[1]);
    case 3:
      ;
      return (65536*(i8)((aKey)[0])|((aKey)[1]<<8)|(aKey)[2]);
    case 4: {
      ;
      y = (((u32)(aKey)[0]<<24)|((aKey)[1]<<16)|((aKey)[2]<<8)|(aKey)[3]);
      return (i64)*(int*)&y;
    }
    case 5: {
      ;
      return (((u32)(aKey+2)[0]<<24)|((aKey+2)[1]<<16)|((aKey+2)[2]<<8)|(aKey+2)[3]) + (((i64)1)<<32)*(256*(i8)((aKey)[0])|(aKey)[1]);
    }
    case 6: {
      u64 x = (((u32)(aKey)[0]<<24)|((aKey)[1]<<16)|((aKey)[2]<<8)|(aKey)[3]);
      ;
      x = (x<<32) | (((u32)(aKey+4)[0]<<24)|((aKey+4)[1]<<16)|((aKey+4)[2]<<8)|(aKey+4)[3]);
      return (i64)*(i64*)&x;
    }
  }

  return (serial_type - 8);
}
# 71912 "sqlite3.c"
static int sqlite3VdbeRecordCompareWithSkip(
  int nKey1, const void *pKey1,
  UnpackedRecord *pPKey2,
  int bSkip
)
{

  u32 d1;
  int i;
  u32 szHdr1;
  u32 idx1;
  int rc = 0;
  Mem *pRhs = pPKey2->aMem;
  KeyInfo *pKeyInfo = pPKey2->pKeyInfo;
  const unsigned char *aKey1 = (const unsigned char *)pKey1;
  Mem mem1;




  if( bSkip )
{

    u32 s1;
    idx1 = 1 + (u8)((*(&aKey1[1])<(u8)0x80)?((s1)=(u32)*(&aKey1[1])),1:sqlite3GetVarint32((&aKey1[1]),(u32 *)&(s1)));
    szHdr1 = aKey1[0];
    d1 = szHdr1 + sqlite3VdbeSerialTypeLen(s1);
    i = 1;
    pRhs++;
  }else{
    idx1 = (u8)((*(aKey1)<(u8)0x80)?((szHdr1)=(u32)*(aKey1)),1:sqlite3GetVarint32((aKey1),(u32 *)&(szHdr1)));
    d1 = szHdr1;
    if( d1>(unsigned)nKey1 )
{

      pPKey2->errCode = (u8)sqlite3CorruptError(71941);
      return 0;
    }
    i = 0;
  }

 
  ((void) (0))
                      ;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  do{
    u32 serial_type;


    if( pRhs->flags & 0x0004 )
{

      serial_type = aKey1[idx1];
      ;
      if( serial_type>=10 )
{

        rc = +1;
      }else if( serial_type==0 )
{

        rc = -1;
      }else if( serial_type==7 )
{

        sqlite3VdbeSerialGet(&aKey1[d1], serial_type, &mem1);
        rc = -sqlite3IntFloatCompare(pRhs->u.i, mem1.u.r);
      }else{
        i64 lhs = vdbeRecordDecodeInt(serial_type, &aKey1[d1]);
        i64 rhs = pRhs->u.i;
        if( lhs<rhs )
{

          rc = -1;
        }else if( lhs>rhs )
{

          rc = +1;
        }
      }
    }


    else if( pRhs->flags & 0x0008 )
{

      serial_type = aKey1[idx1];
      if( serial_type>=10 )
{





        rc = +1;
      }else if( serial_type==0 )
{

        rc = -1;
      }else{
        sqlite3VdbeSerialGet(&aKey1[d1], serial_type, &mem1);
        if( serial_type==7 )
{

          if( mem1.u.r<pRhs->u.r )
{

            rc = -1;
          }else if( mem1.u.r>pRhs->u.r )
{

            rc = +1;
          }
        }else{
          rc = sqlite3IntFloatCompare(mem1.u.i, pRhs->u.r);
        }
      }
    }


    else if( pRhs->flags & 0x0002 )
{

      (u8)((*(&aKey1[idx1])<(u8)0x80)?((serial_type)=(u32)*(&aKey1[idx1])),1:sqlite3GetVarint32((&aKey1[idx1]),(u32 *)&(serial_type)));
      ;
      if( serial_type<12 )
{

        rc = -1;
      }else if( !(serial_type & 0x01) )
{

        rc = +1;
      }else{
        mem1.n = (serial_type - 12) / 2;
        ;
        ;
        if( (d1+mem1.n) > (unsigned)nKey1 )
{

          pPKey2->errCode = (u8)sqlite3CorruptError(72016);
          return 0;
        }else if( pKeyInfo->aColl[i] )
{

          mem1.enc = pKeyInfo->enc;
          mem1.db = pKeyInfo->db;
          mem1.flags = 0x0002;
          mem1.z = (char*)&aKey1[d1];
          rc = vdbeCompareMemString(
              &mem1, pRhs, pKeyInfo->aColl[i], &pPKey2->errCode
          );
        }else{
          int nCmp = ((mem1.n)<(pRhs->n)?(mem1.n):(pRhs->n));
          rc = memcmp(&aKey1[d1], pRhs->z, nCmp);
          if( rc==0 ) rc = mem1.n - pRhs->n;
        }
      }
    }


    else if( pRhs->flags & 0x0010 )
{

      (u8)((*(&aKey1[idx1])<(u8)0x80)?((serial_type)=(u32)*(&aKey1[idx1])),1:sqlite3GetVarint32((&aKey1[idx1]),(u32 *)&(serial_type)));
      ;
      if( serial_type<12 || (serial_type & 0x01) )
{

        rc = -1;
      }else{
        int nStr = (serial_type - 12) / 2;
        ;
        ;
        if( (d1+nStr) > (unsigned)nKey1 )
{

          pPKey2->errCode = (u8)sqlite3CorruptError(72045);
          return 0;
        }else{
          int nCmp = ((nStr)<(pRhs->n)?(nStr):(pRhs->n));
          rc = memcmp(&aKey1[d1], pRhs->z, nCmp);
          if( rc==0 ) rc = nStr - pRhs->n;
        }
      }
    }


    else{
      serial_type = aKey1[idx1];
      rc = (serial_type!=0);
    }

    if( rc!=0 )
{

      if( pKeyInfo->aSortOrder[i] )
{

        rc = -rc;
      }
      ((void) (0));
      ((void) (0));
      return rc;
    }

    i++;
    pRhs++;
    d1 += sqlite3VdbeSerialTypeLen(serial_type);
    idx1 += sqlite3VarintLen(serial_type);
  }while( idx1<(unsigned)szHdr1 && i<pPKey2->nField && d1<=(unsigned)nKey1 );




  ((void) (0));




  ((void) (0))


   ;
  pPKey2->eqSeen = 1;
  return pPKey2->default_rc;
}
static int sqlite3VdbeRecordCompare(
  int nKey1, const void *pKey1,
  UnpackedRecord *pPKey2
)
{

  return sqlite3VdbeRecordCompareWithSkip(nKey1, pKey1, pPKey2, 0);
}
# 72108 "sqlite3.c"
static int vdbeRecordCompareInt(
  int nKey1, const void *pKey1,
  UnpackedRecord *pPKey2
)
{

  const u8 *aKey = &((const u8*)pKey1)[*(const u8*)pKey1 & 0x3F];
  int serial_type = ((const u8*)pKey1)[1];
  int res;
  u32 y;
  u64 x;
  i64 v = pPKey2->aMem[0].u.i;
  i64 lhs;

  ;
  ((void) (0));
  switch( serial_type )
{

    case 1: {
      lhs = ((i8)(aKey)[0]);
      ;
      break;
    }
    case 2: {
      lhs = (256*(i8)((aKey)[0])|(aKey)[1]);
      ;
      break;
    }
    case 3: {
      lhs = (65536*(i8)((aKey)[0])|((aKey)[1]<<8)|(aKey)[2]);
      ;
      break;
    }
    case 4: {
      y = (((u32)(aKey)[0]<<24)|((aKey)[1]<<16)|((aKey)[2]<<8)|(aKey)[3]);
      lhs = (i64)*(int*)&y;
      ;
      break;
    }
    case 5: {
      lhs = (((u32)(aKey+2)[0]<<24)|((aKey+2)[1]<<16)|((aKey+2)[2]<<8)|(aKey+2)[3]) + (((i64)1)<<32)*(256*(i8)((aKey)[0])|(aKey)[1]);
      ;
      break;
    }
    case 6: {
      x = (((u32)(aKey)[0]<<24)|((aKey)[1]<<16)|((aKey)[2]<<8)|(aKey)[3]);
      x = (x<<32) | (((u32)(aKey+4)[0]<<24)|((aKey+4)[1]<<16)|((aKey+4)[2]<<8)|(aKey+4)[3]);
      lhs = *(i64*)&x;
      ;
      break;
    }
    case 8:
      lhs = 0;
      break;
    case 9:
      lhs = 1;
      break;







    case 0: case 7:
      return sqlite3VdbeRecordCompare(nKey1, pKey1, pPKey2);

    default:
      return sqlite3VdbeRecordCompare(nKey1, pKey1, pPKey2);
  }

  if( v>lhs )
{

    res = pPKey2->r1;
  }else if( v<lhs )
{

    res = pPKey2->r2;
  }else if( pPKey2->nField>1 )
{



    res = sqlite3VdbeRecordCompareWithSkip(nKey1, pKey1, pPKey2, 1);
  }else{


    res = pPKey2->default_rc;
    pPKey2->eqSeen = 1;
  }

  ((void) (0));
  return res;
}







static int vdbeRecordCompareString(
  int nKey1, const void *pKey1,
  UnpackedRecord *pPKey2
)
{

  const u8 *aKey1 = (const u8*)pKey1;
  int serial_type;
  int res;

  ((void) (0));
  ;
  (u8)((*(&aKey1[1])<(u8)0x80)?((serial_type)=(u32)*(&aKey1[1])),1:sqlite3GetVarint32((&aKey1[1]),(u32 *)&(serial_type)));
  if( serial_type<12 )
{

    res = pPKey2->r1;
  }else if( !(serial_type & 0x01) )
{

    res = pPKey2->r2;
  }else{
    int nCmp;
    int nStr;
    int szHdr = aKey1[0];

    nStr = (serial_type-12) / 2;
    if( (szHdr + nStr) > nKey1 )
{

      pPKey2->errCode = (u8)sqlite3CorruptError(72223);
      return 0;
    }
    nCmp = ((pPKey2->aMem[0].n)<(nStr)?(pPKey2->aMem[0].n):(nStr));
    res = memcmp(&aKey1[szHdr], pPKey2->aMem[0].z, nCmp);

    if( res==0 )
{

      res = nStr - pPKey2->aMem[0].n;
      if( res==0 )
{

        if( pPKey2->nField>1 )
{

          res = sqlite3VdbeRecordCompareWithSkip(nKey1, pKey1, pPKey2, 1);
        }else{
          res = pPKey2->default_rc;
          pPKey2->eqSeen = 1;
        }
      }else if( res>0 )
{

        res = pPKey2->r2;
      }else{
        res = pPKey2->r1;
      }
    }else if( res>0 )
{

      res = pPKey2->r2;
    }else{
      res = pPKey2->r1;
    }
  }

  ((void) (0))


   ;
  return res;
}






static RecordCompare sqlite3VdbeFindCompare(UnpackedRecord *p)
{

# 72276 "sqlite3.c"
  if( (p->pKeyInfo->nField + p->pKeyInfo->nXField)<=13 )
{

    int flags = p->aMem[0].flags;
    if( p->pKeyInfo->aSortOrder[0] )
{

      p->r1 = 1;
      p->r2 = -1;
    }else{
      p->r1 = -1;
      p->r2 = 1;
    }
    if( (flags & 0x0004) )
{

      return vdbeRecordCompareInt;
    }
    ;
    ;
    ;
    if( (flags & (0x0008|0x0001|0x0010))==0 && p->pKeyInfo->aColl[0]==0 )
{

      ((void) (0));
      return vdbeRecordCompareString;
    }
  }

  return sqlite3VdbeRecordCompare;
}
# 72308 "sqlite3.c"
static int sqlite3VdbeIdxRowid(sqlite3 *db, BtCursor *pCur, i64 *rowid)
{

  i64 nCellKey = 0;
  int rc;
  u32 szHdr;
  u32 typeRowid;
  u32 lenRowid;
  Mem m, v;






  ((void) (0));
  sqlite3BtreeKeySize(pCur, &nCellKey);
  ((void) (0));
  ((void) (0));


  sqlite3VdbeMemInit(&m, db, 0);
  rc = sqlite3VdbeMemFromBtree(pCur, 0, (u32)nCellKey, 1, &m);
  if( rc )
{

    return rc;
  }


  (void)(u8)((*((u8*)m.z)<(u8)0x80)?((szHdr)=(u32)*((u8*)m.z)),1:sqlite3GetVarint32(((u8*)m.z),(u32 *)&(szHdr)));
  ;
  ;
  if( (szHdr<3 || (int)szHdr>m.n) )
{

    goto idx_rowid_corruption;
  }



  (void)(u8)((*((u8*)&m.z[szHdr-1])<(u8)0x80)?((typeRowid)=(u32)*((u8*)&m.z[szHdr-1])),1:sqlite3GetVarint32(((u8*)&m.z[szHdr-1]),(u32 *)&(typeRowid)));
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  if( (typeRowid<1 || typeRowid>9 || typeRowid==7) )
{

    goto idx_rowid_corruption;
  }
  lenRowid = sqlite3SmallTypeSizes[typeRowid];
  ;
  if( ((u32)m.n<szHdr+lenRowid) )
{

    goto idx_rowid_corruption;
  }


  sqlite3VdbeSerialGet((u8*)&m.z[m.n-lenRowid], typeRowid, &v);
  *rowid = v.u.i;
  sqlite3VdbeMemRelease(&m);
  return 0;



idx_rowid_corruption:
  ;
  sqlite3VdbeMemRelease(&m);
  return sqlite3CorruptError(72372);
}
# 72386 "sqlite3.c"
static int sqlite3VdbeIdxKeyCompare(
  sqlite3 *db,
  VdbeCursor *pC,
  UnpackedRecord *pUnpacked,
  int *res
)
{

  i64 nCellKey = 0;
  int rc;
  BtCursor *pCur;
  Mem m;

  ((void) (0));
  pCur = pC->uc.pCursor;
  ((void) (0));
  sqlite3BtreeKeySize(pCur, &nCellKey);
  ((void) (0));


  if( nCellKey<=0 || nCellKey>0x7fffffff )
{

    *res = 0;
    return sqlite3CorruptError(72406);
  }
  sqlite3VdbeMemInit(&m, db, 0);
  rc = sqlite3VdbeMemFromBtree(pCur, 0, (u32)nCellKey, 1, &m);
  if( rc )
{

    return rc;
  }
  *res = sqlite3VdbeRecordCompare(m.n, m.z, pUnpacked);
  sqlite3VdbeMemRelease(&m);
  return 0;
}





static void sqlite3VdbeSetChanges(sqlite3 *db, int nChange)
{

  ((void) (0));
  db->nChange = nChange;
  db->nTotalChange += nChange;
}





static void sqlite3VdbeCountChanges(Vdbe *v)
{

  v->changeCntOn = 1;
}
# 72446 "sqlite3.c"
static void sqlite3ExpirePreparedStatements(sqlite3 *db)
{

  Vdbe *p;
  for(p = db->pVdbe; p; p=p->pNext)
{

    p->expired = 1;
  }
}




static sqlite3 *sqlite3VdbeDb(Vdbe *v)
{

  return v->db;
}
# 72468 "sqlite3.c"
static sqlite3_value *sqlite3VdbeGetBoundValue(Vdbe *v, int iVar, u8 aff)
{

  ((void) (0));
  if( v )
{

    Mem *pMem = &v->aVar[iVar-1];
    if( 0==(pMem->flags & 0x0001) )
{

      sqlite3_value *pRet = sqlite3ValueNew(v->db);
      if( pRet )
{

        sqlite3VdbeMemCopy((Mem *)pRet, pMem);
        sqlite3ValueApplyAffinity(pRet, aff, 1);
      }
      return pRet;
    }
  }
  return 0;
}






static void sqlite3VdbeSetVarmask(Vdbe *v, int iVar)
{

  ((void) (0));
  if( iVar>32 )
{

    v->expmask = 0xffffffff;
  }else{
    v->expmask |= ((u32)1 << (iVar-1));
  }
}







static void sqlite3VtabImportErrmsg(Vdbe *p, sqlite3_vtab *pVtab)
{

  if( pVtab->zErrMsg )
{

    sqlite3 *db = p->db;
    sqlite3DbFree(db, p->zErrMsg);
    p->zErrMsg = sqlite3DbStrDup(db, pVtab->zErrMsg);
    sqlite3_free(pVtab->zErrMsg);
    pVtab->zErrMsg = 0;
  }
}
# 72544 "sqlite3.c"
 int sqlite3_expired(sqlite3_stmt *pStmt)
{

  Vdbe *p = (Vdbe*)pStmt;
  return p==0 || p->expired;
}







static int vdbeSafety(Vdbe *p)
{

  if( p->db==0 )
{

    sqlite3_log(21, "API called with finalized prepared statement");
    return 1;
  }else{
    return 0;
  }
}
static int vdbeSafetyNotNull(Vdbe *p)
{

  if( p==0 )
{

    sqlite3_log(21, "API called with NULL prepared statement");
    return 1;
  }else{
    return vdbeSafety(p);
  }
}






static __attribute__((noinline)) void invokeProfileCallback(sqlite3 *db, Vdbe *p)
{

  sqlite3_int64 iNow;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  sqlite3OsCurrentTimeInt64(db->pVfs, &iNow);
  db->xProfile(db->pProfileArg, p->zSql, (iNow - p->startTime)*1000000);
  p->startTime = 0;
}
# 72606 "sqlite3.c"
 int sqlite3_finalize(sqlite3_stmt *pStmt)
{

  int rc;
  if( pStmt==0 )
{



    rc = 0;
  }else{
    Vdbe *v = (Vdbe*)pStmt;
    sqlite3 *db = v->db;
    if( vdbeSafety(v) ) return sqlite3MisuseError(72615);
    sqlite3_mutex_enter(db->mutex);
    if( ((v)->startTime)>0 )
{
 invokeProfileCallback(db,v); };
    rc = sqlite3VdbeFinalize(v);
    rc = sqlite3ApiExit(db, rc);
    sqlite3LeaveMutexAndCloseZombie(db);
  }
  return rc;
}
# 72633 "sqlite3.c"
 int sqlite3_reset(sqlite3_stmt *pStmt)
{

  int rc;
  if( pStmt==0 )
{

    rc = 0;
  }else{
    Vdbe *v = (Vdbe*)pStmt;
    sqlite3 *db = v->db;
    sqlite3_mutex_enter(db->mutex);
    if( ((v)->startTime)>0 )
{
 invokeProfileCallback(db,v); };
    rc = sqlite3VdbeReset(v);
    sqlite3VdbeRewind(v);
    ((void) (0));
    rc = sqlite3ApiExit(db, rc);
    sqlite3_mutex_leave(db->mutex);
  }
  return rc;
}




 int sqlite3_clear_bindings(sqlite3_stmt *pStmt)
{

  int i;
  int rc = 0;
  Vdbe *p = (Vdbe*)pStmt;

  sqlite3_mutex *mutex = ((Vdbe*)pStmt)->db->mutex;

  sqlite3_mutex_enter(mutex);
  for(i=0; i<p->nVar; i++)
{

    sqlite3VdbeMemRelease(&p->aVar[i]);
    p->aVar[i].flags = 0x0001;
  }
  if( p->isPrepareV2 && p->expmask )
{

    p->expired = 1;
  }
  sqlite3_mutex_leave(mutex);
  return rc;
}






 const void * sqlite3_value_blob(sqlite3_value *pVal)
{

  Mem *p = (Mem*)pVal;
  if( p->flags & (0x0010|0x0002) )
{

    if( sqlite3VdbeMemExpandBlob(p)!=0 )
{

      ((void) (0));
      return 0;
    }
    p->flags |= 0x0010;
    return p->n ? p->z : 0;
  }else{
    return sqlite3_value_text(pVal);
  }
}
 int sqlite3_value_bytes(sqlite3_value *pVal)
{

  return sqlite3ValueBytes(pVal, 1);
}
 int sqlite3_value_bytes16(sqlite3_value *pVal)
{

  return sqlite3ValueBytes(pVal, 2);
}
 double sqlite3_value_double(sqlite3_value *pVal)
{

  return sqlite3VdbeRealValue((Mem*)pVal);
}
 int sqlite3_value_int(sqlite3_value *pVal)
{

  return (int)sqlite3VdbeIntValue((Mem*)pVal);
}
 sqlite_int64 sqlite3_value_int64(sqlite3_value *pVal)
{

  return sqlite3VdbeIntValue((Mem*)pVal);
}
 unsigned int sqlite3_value_subtype(sqlite3_value *pVal)
{

  Mem *pMem = (Mem*)pVal;
  return ((pMem->flags & 0x8000) ? pMem->eSubtype : 0);
}
 const unsigned char * sqlite3_value_text(sqlite3_value *pVal)
{

  return (const unsigned char *)sqlite3ValueText(pVal, 1);
}

 const void * sqlite3_value_text16(sqlite3_value* pVal)
{

  return sqlite3ValueText(pVal, 2);
}
 const void * sqlite3_value_text16be(sqlite3_value *pVal)
{

  return sqlite3ValueText(pVal, 3);
}
 const void * sqlite3_value_text16le(sqlite3_value *pVal)
{

  return sqlite3ValueText(pVal, 2);
}





 int sqlite3_value_type(sqlite3_value* pVal)
{

  static const u8 aType[] = {
     4,
     5,
     3,
     5,
     1,
     5,
     1,
     5,
     2,
     5,
     2,
     5,
     1,
     5,
     1,
     5,
     4,
     5,
     3,
     5,
     1,
     5,
     1,
     5,
     2,
     5,
     2,
     5,
     1,
     5,
     1,
     5,
  };
  return aType[pVal->flags&0x001f];
}



 sqlite3_value * sqlite3_value_dup(const sqlite3_value *pOrig)
{

  sqlite3_value *pNew;
  if( pOrig==0 ) return 0;
  pNew = sqlite3_malloc( sizeof(*pNew) );
  if( pNew==0 ) return 0;
  memset(pNew, 0, sizeof(*pNew));
  memcpy(pNew, pOrig, __builtin_offsetof (Mem, zMalloc));
  pNew->flags &= ~0x0400;
  pNew->db = 0;
  if( pNew->flags&(0x0002|0x0010) )
{

    pNew->flags &= ~(0x0800|0x0400);
    pNew->flags |= 0x1000;
    if( sqlite3VdbeMemMakeWriteable(pNew)!=0 )
{

      sqlite3ValueFree(pNew);
      pNew = 0;
    }
  }
  return pNew;
}




 void sqlite3_value_free(sqlite3_value *pOld)
{

  sqlite3ValueFree(pOld);
}
# 72807 "sqlite3.c"
static void setResultStrOrError(
  sqlite3_context *pCtx,
  const char *z,
  int n,
  u8 enc,
  void (*xDel)(void*)
)
{

  if( sqlite3VdbeMemSetStr(pCtx->pOut, z, n, enc, xDel)==18 )
{

    sqlite3_result_error_toobig(pCtx);
  }
}
static int invokeValueDestructor(
  const void *p,
  void (*xDel)(void*),
  sqlite3_context *pCtx
)
{

  ((void) (0));
  if( xDel==0 )
{


  }else if( xDel==((sqlite3_destructor_type)-1) )
{


  }else{
    xDel((void*)p);
  }
  if( pCtx ) sqlite3_result_error_toobig(pCtx);
  return 18;
}
 void sqlite3_result_blob(
  sqlite3_context *pCtx,
  const void *z,
  int n,
  void (*xDel)(void *)
)
{

  ((void) (0));
  ((void) (0));
  setResultStrOrError(pCtx, z, n, 0, xDel);
}
 void sqlite3_result_blob64(
  sqlite3_context *pCtx,
  const void *z,
  sqlite3_uint64 n,
  void (*xDel)(void *)
)
{

  ((void) (0));
  ((void) (0));
  if( n>0x7fffffff )
{

    (void)invokeValueDestructor(z, xDel, pCtx);
  }else{
    setResultStrOrError(pCtx, z, (int)n, 0, xDel);
  }
}
 void sqlite3_result_double(sqlite3_context *pCtx, double rVal)
{

  ((void) (0));
  sqlite3VdbeMemSetDouble(pCtx->pOut, rVal);
}
 void sqlite3_result_error(sqlite3_context *pCtx, const char *z, int n)
{

  ((void) (0));
  pCtx->isError = 1;
  pCtx->fErrorOrAux = 1;
  sqlite3VdbeMemSetStr(pCtx->pOut, z, n, 1, ((sqlite3_destructor_type)-1));
}

 void sqlite3_result_error16(sqlite3_context *pCtx, const void *z, int n)
{

  ((void) (0));
  pCtx->isError = 1;
  pCtx->fErrorOrAux = 1;
  sqlite3VdbeMemSetStr(pCtx->pOut, z, n, 2, ((sqlite3_destructor_type)-1));
}

 void sqlite3_result_int(sqlite3_context *pCtx, int iVal)
{

  ((void) (0));
  sqlite3VdbeMemSetInt64(pCtx->pOut, (i64)iVal);
}
 void sqlite3_result_int64(sqlite3_context *pCtx, i64 iVal)
{

  ((void) (0));
  sqlite3VdbeMemSetInt64(pCtx->pOut, iVal);
}
 void sqlite3_result_null(sqlite3_context *pCtx)
{

  ((void) (0));
  sqlite3VdbeMemSetNull(pCtx->pOut);
}
 void sqlite3_result_subtype(sqlite3_context *pCtx, unsigned int eSubtype)
{

  Mem *pOut = pCtx->pOut;
  ((void) (0));
  pOut->eSubtype = eSubtype & 0xff;
  pOut->flags |= 0x8000;
}
 void sqlite3_result_text(
  sqlite3_context *pCtx,
  const char *z,
  int n,
  void (*xDel)(void *)
)
{

  ((void) (0));
  setResultStrOrError(pCtx, z, n, 1, xDel);
}
 void sqlite3_result_text64(
  sqlite3_context *pCtx,
  const char *z,
  sqlite3_uint64 n,
  void (*xDel)(void *),
  unsigned char enc
)
{

  ((void) (0));
  ((void) (0));
  if( enc==4 ) enc = 2;
  if( n>0x7fffffff )
{

    (void)invokeValueDestructor(z, xDel, pCtx);
  }else{
    setResultStrOrError(pCtx, z, (int)n, enc, xDel);
  }
}

 void sqlite3_result_text16(
  sqlite3_context *pCtx,
  const void *z,
  int n,
  void (*xDel)(void *)
)
{

  ((void) (0));
  setResultStrOrError(pCtx, z, n, 2, xDel);
}
 void sqlite3_result_text16be(
  sqlite3_context *pCtx,
  const void *z,
  int n,
  void (*xDel)(void *)
)
{

  ((void) (0));
  setResultStrOrError(pCtx, z, n, 3, xDel);
}
 void sqlite3_result_text16le(
  sqlite3_context *pCtx,
  const void *z,
  int n,
  void (*xDel)(void *)
)
{

  ((void) (0));
  setResultStrOrError(pCtx, z, n, 2, xDel);
}

 void sqlite3_result_value(sqlite3_context *pCtx, sqlite3_value *pValue)
{

  ((void) (0));
  sqlite3VdbeMemCopy(pCtx->pOut, pValue);
}
 void sqlite3_result_zeroblob(sqlite3_context *pCtx, int n)
{

  ((void) (0));
  sqlite3VdbeMemSetZeroBlob(pCtx->pOut, n);
}
 int sqlite3_result_zeroblob64(sqlite3_context *pCtx, u64 n)
{

  Mem *pOut = pCtx->pOut;
  ((void) (0));
  if( n>(u64)pOut->db->aLimit[0] )
{

    return 18;
  }
  sqlite3VdbeMemSetZeroBlob(pCtx->pOut, (int)n);
  return 0;
}
 void sqlite3_result_error_code(sqlite3_context *pCtx, int errCode)
{

  pCtx->isError = errCode;
  pCtx->fErrorOrAux = 1;



  if( pCtx->pOut->flags & 0x0001 )
{

    sqlite3VdbeMemSetStr(pCtx->pOut, sqlite3ErrStr(errCode), -1,
                         1, ((sqlite3_destructor_type)0));
  }
}


 void sqlite3_result_error_toobig(sqlite3_context *pCtx)
{

  ((void) (0));
  pCtx->isError = 18;
  pCtx->fErrorOrAux = 1;
  sqlite3VdbeMemSetStr(pCtx->pOut, "string or blob too big", -1,
                       1, ((sqlite3_destructor_type)0));
}


 void sqlite3_result_error_nomem(sqlite3_context *pCtx)
{

  ((void) (0));
  sqlite3VdbeMemSetNull(pCtx->pOut);
  pCtx->isError = 7;
  pCtx->fErrorOrAux = 1;
  sqlite3OomFault(pCtx->pOut->db);
}





static int doWalCallbacks(sqlite3 *db)
{

  int rc = 0;

  int i;
  for(i=0; i<db->nDb; i++)
{

    Btree *pBt = db->aDb[i].pBt;
    if( pBt )
{

      int nEntry;
      sqlite3BtreeEnter(pBt);
      nEntry = sqlite3PagerWalCallback(sqlite3BtreePager(pBt));
      sqlite3BtreeLeave(pBt);
      if( db->xWalCallback && nEntry>0 && rc==0 )
{

        rc = db->xWalCallback(db->pWalArg, db, db->aDb[i].zName, nEntry);
      }
    }
  }

  return rc;
}
# 73029 "sqlite3.c"
static int sqlite3Step(Vdbe *p)
{

  sqlite3 *db;
  int rc;

  ((void) (0));
  if( p->magic!=0xbdf20da3 )
{

# 73058 "sqlite3.c"
    sqlite3_reset((sqlite3_stmt*)p);

  }


  db = p->db;
  if( db->mallocFailed )
{

    p->rc = 7;
    return 7;
  }

  if( p->pc<=0 && p->expired )
{

    p->rc = 17;
    rc = 1;
    goto end_of_step;
  }
  if( p->pc<0 )
{





    if( db->nVdbeActive==0 )
{

      db->u1.isInterrupted = 0;
    }

    ((void) (0))

     ;


    if( db->xProfile && !db->init.busy && p->zSql )
{

      sqlite3OsCurrentTimeInt64(db->pVfs, &p->startTime);
    }else{
      ((void) (0));
    }


    db->nVdbeActive++;
    if( p->readOnly==0 ) db->nVdbeWrite++;
    if( p->bIsReader ) db->nVdbeRead++;
    p->pc = 0;
  }




  if( p->explain )
{

    rc = sqlite3VdbeList(p);
  }else

  {
    db->nVdbeExec++;
    rc = sqlite3VdbeExec(p);
    db->nVdbeExec--;
  }



  if( rc!=100 ) if( ((p)->startTime)>0 )
{
 invokeProfileCallback(db,p); };


  if( rc==101 )
{

    ((void) (0));
    p->rc = doWalCallbacks(db);
    if( p->rc!=0 )
{

      rc = 1;
    }
  }

  db->errCode = rc;
  if( 7==sqlite3ApiExit(p->db, p->rc) )
{

    p->rc = 7;
  }
end_of_step:







  ((void) (0))

   ;
  ((void) (0));
  if( p->isPrepareV2 && rc!=100 && rc!=101 )
{





    rc = sqlite3VdbeTransferError(p);
  }
  return (rc&db->errMask);
}






 int sqlite3_step(sqlite3_stmt *pStmt)
{

  int rc = 0;
  int rc2 = 0;
  Vdbe *v = (Vdbe*)pStmt;
  int cnt = 0;
  sqlite3 *db;

  if( vdbeSafetyNotNull(v) )
{

    return sqlite3MisuseError(73166);
  }
  db = v->db;
  sqlite3_mutex_enter(db->mutex);
  v->doingRerun = 0;
  while( (rc = sqlite3Step(v))==17
         && cnt++ < 50 )
{

    int savedPc = v->pc;
    rc2 = rc = sqlite3Reprepare(v);
    if( rc!=0) break;
    sqlite3_reset(pStmt);
    if( savedPc>=0 ) v->doingRerun = 1;
    ((void) (0));
  }
  if( rc2!=0 )
{

# 73189 "sqlite3.c"
    const char *zErr = (const char *)sqlite3_value_text(db->pErr);
    sqlite3DbFree(db, v->zErrMsg);
    if( !db->mallocFailed )
{

      v->zErrMsg = sqlite3DbStrDup(db, zErr);
      v->rc = rc2;
    } else {
      v->zErrMsg = 0;
      v->rc = rc = 7;
    }
  }
  rc = sqlite3ApiExit(db, rc);
  sqlite3_mutex_leave(db->mutex);
  return rc;
}






 void * sqlite3_user_data(sqlite3_context *p)
{

  ((void) (0));
  return p->pFunc->pUserData;
}
# 73224 "sqlite3.c"
 sqlite3 * sqlite3_context_db_handle(sqlite3_context *p)
{

  ((void) (0));
  return p->pOut->db;
}
# 73236 "sqlite3.c"
static sqlite3_int64 sqlite3StmtCurrentTime(sqlite3_context *p)
{

  int rc;

  sqlite3_int64 *piTime = &p->pVdbe->iCurrentTime;
  ((void) (0));




  if( *piTime==0 )
{

    rc = sqlite3OsCurrentTimeInt64(p->pOut->db->pVfs, piTime);
    if( rc ) *piTime = 0;
  }
  return *piTime;
}
# 73260 "sqlite3.c"
static void sqlite3InvalidFunction(
  sqlite3_context *context,
  int NotUsed,
  sqlite3_value **NotUsed2
)
{

  const char *zName = context->pFunc->zName;
  char *zErr;
  (void)(NotUsed),(void)(NotUsed2);
  zErr = sqlite3_mprintf(
      "unable to use function %s in the requested context", zName);
  sqlite3_result_error(context, zErr, -1);
  sqlite3_free(zErr);
}





static __attribute__((noinline)) void *createAggContext(sqlite3_context *p, int nByte)
{

  Mem *pMem = p->pMem;
  ((void) (0));
  if( nByte<=0 )
{

    sqlite3VdbeMemSetNull(pMem);
    pMem->z = 0;
  }else{
    sqlite3VdbeMemClearAndResize(pMem, nByte);
    pMem->flags = 0x2000;
    pMem->u.pDef = p->pFunc;
    if( pMem->z )
{

      memset(pMem->z, 0, nByte);
    }
  }
  return (void*)pMem->z;
}






 void * sqlite3_aggregate_context(sqlite3_context *p, int nByte)
{

  ((void) (0));
  ((void) (0));
  ;
  if( (p->pMem->flags & 0x2000)==0 )
{

    return createAggContext(p, nByte);
  }else{
    return (void*)p->pMem->z;
  }
}





 void * sqlite3_get_auxdata(sqlite3_context *pCtx, int iArg)
{

  AuxData *pAuxData;

  ((void) (0));



  ((void) (0));

  for(pAuxData=pCtx->pVdbe->pAuxData; pAuxData; pAuxData=pAuxData->pNext)
{

    if( pAuxData->iOp==pCtx->iOp && pAuxData->iArg==iArg ) break;
  }

  return (pAuxData ? pAuxData->pAux : 0);
}






 void sqlite3_set_auxdata(
  sqlite3_context *pCtx,
  int iArg,
  void *pAux,
  void (*xDelete)(void*)
)
{

  AuxData *pAuxData;
  Vdbe *pVdbe = pCtx->pVdbe;

  ((void) (0));
  if( iArg<0 ) goto failed;



  ((void) (0));


  for(pAuxData=pVdbe->pAuxData; pAuxData; pAuxData=pAuxData->pNext)
{

    if( pAuxData->iOp==pCtx->iOp && pAuxData->iArg==iArg ) break;
  }
  if( pAuxData==0 )
{

    pAuxData = sqlite3DbMallocZero(pVdbe->db, sizeof(AuxData));
    if( !pAuxData ) goto failed;
    pAuxData->iOp = pCtx->iOp;
    pAuxData->iArg = iArg;
    pAuxData->pNext = pVdbe->pAuxData;
    pVdbe->pAuxData = pAuxData;
    if( pCtx->fErrorOrAux==0 )
{

      pCtx->isError = 0;
      pCtx->fErrorOrAux = 1;
    }
  }else if( pAuxData->xDelete )
{

    pAuxData->xDelete(pAuxData->pAux);
  }

  pAuxData->pAux = pAux;
  pAuxData->xDelete = xDelete;
  return;

failed:
  if( xDelete )
{

    xDelete(pAux);
  }
}
# 73391 "sqlite3.c"
 int sqlite3_aggregate_count(sqlite3_context *p)
{

  ((void) (0));
  return p->pMem->n;
}





 int sqlite3_column_count(sqlite3_stmt *pStmt)
{

  Vdbe *pVm = (Vdbe *)pStmt;
  return pVm ? pVm->nResColumn : 0;
}





 int sqlite3_data_count(sqlite3_stmt *pStmt)
{

  Vdbe *pVm = (Vdbe *)pStmt;
  if( pVm==0 || pVm->pResultSet==0 ) return 0;
  return pVm->nResColumn;
}




static const Mem *columnNullValue(void)
{

# 73428 "sqlite3.c"
  static const Mem nullMem



    = {
                            {0},
                            (u16)0x0001,
                            (u8)0,
                            (u8)0,
                            (int)0,
                            (char*)0,
                            (char*)0,
                            (int)0,
                            (u32)0,
                            (sqlite3*)0,
                            (void(*)(void*))0,




      };
  return &nullMem;
}







static Mem *columnMem(sqlite3_stmt *pStmt, int i)
{

  Vdbe *pVm;
  Mem *pOut;

  pVm = (Vdbe *)pStmt;
  if( pVm && pVm->pResultSet!=0 && i<pVm->nResColumn && i>=0 )
{

    sqlite3_mutex_enter(pVm->db->mutex);
    pOut = &pVm->pResultSet[i];
  }else{
    if( pVm && (pVm->db) )
{

      sqlite3_mutex_enter(pVm->db->mutex);
      sqlite3Error(pVm->db, 25);
    }
    pOut = (Mem*)columnNullValue();
  }
  return pOut;
}
# 73494 "sqlite3.c"
static void columnMallocFailure(sqlite3_stmt *pStmt)
{





  Vdbe *p = (Vdbe *)pStmt;
  if( p )
{

    p->rc = sqlite3ApiExit(p->db, p->rc);
    sqlite3_mutex_leave(p->db->mutex);
  }
}





 const void * sqlite3_column_blob(sqlite3_stmt *pStmt, int i)
{

  const void *val;
  val = sqlite3_value_blob( columnMem(pStmt,i) );




  columnMallocFailure(pStmt);
  return val;
}
 int sqlite3_column_bytes(sqlite3_stmt *pStmt, int i)
{

  int val = sqlite3_value_bytes( columnMem(pStmt,i) );
  columnMallocFailure(pStmt);
  return val;
}
 int sqlite3_column_bytes16(sqlite3_stmt *pStmt, int i)
{

  int val = sqlite3_value_bytes16( columnMem(pStmt,i) );
  columnMallocFailure(pStmt);
  return val;
}
 double sqlite3_column_double(sqlite3_stmt *pStmt, int i)
{

  double val = sqlite3_value_double( columnMem(pStmt,i) );
  columnMallocFailure(pStmt);
  return val;
}
 int sqlite3_column_int(sqlite3_stmt *pStmt, int i)
{

  int val = sqlite3_value_int( columnMem(pStmt,i) );
  columnMallocFailure(pStmt);
  return val;
}
 sqlite_int64 sqlite3_column_int64(sqlite3_stmt *pStmt, int i)
{

  sqlite_int64 val = sqlite3_value_int64( columnMem(pStmt,i) );
  columnMallocFailure(pStmt);
  return val;
}
 const unsigned char * sqlite3_column_text(sqlite3_stmt *pStmt, int i)
{

  const unsigned char *val = sqlite3_value_text( columnMem(pStmt,i) );
  columnMallocFailure(pStmt);
  return val;
}
 sqlite3_value * sqlite3_column_value(sqlite3_stmt *pStmt, int i)
{

  Mem *pOut = columnMem(pStmt, i);
  if( pOut->flags&0x0800 )
{

    pOut->flags &= ~0x0800;
    pOut->flags |= 0x1000;
  }
  columnMallocFailure(pStmt);
  return (sqlite3_value *)pOut;
}

 const void * sqlite3_column_text16(sqlite3_stmt *pStmt, int i)
{

  const void *val = sqlite3_value_text16( columnMem(pStmt,i) );
  columnMallocFailure(pStmt);
  return val;
}

 int sqlite3_column_type(sqlite3_stmt *pStmt, int i)
{

  int iType = sqlite3_value_type( columnMem(pStmt,i) );
  columnMallocFailure(pStmt);
  return iType;
}
# 73590 "sqlite3.c"
static const void *columnName(
  sqlite3_stmt *pStmt,
  int N,
  const void *(*xFunc)(Mem*),
  int useType
)
{

  const void *ret;
  Vdbe *p;
  int n;
  sqlite3 *db;






  ret = 0;
  p = (Vdbe *)pStmt;
  db = p->db;
  ((void) (0));
  n = sqlite3_column_count(pStmt);
  if( N<n && N>=0 )
{

    N += useType*n;
    sqlite3_mutex_enter(db->mutex);
    ((void) (0));
    ret = xFunc(&p->aColName[N]);



    if( db->mallocFailed )
{

      sqlite3OomClear(db);
      ret = 0;
    }
    sqlite3_mutex_leave(db->mutex);
  }
  return ret;
}





 const char * sqlite3_column_name(sqlite3_stmt *pStmt, int N)
{

  return columnName(
      pStmt, N, (const void*(*)(Mem*))sqlite3_value_text, 0);
}

 const void * sqlite3_column_name16(sqlite3_stmt *pStmt, int N)
{

  return columnName(
      pStmt, N, (const void*(*)(Mem*))sqlite3_value_text16, 0);
}
# 73657 "sqlite3.c"
 const char * sqlite3_column_decltype(sqlite3_stmt *pStmt, int N)
{

  return columnName(
      pStmt, N, (const void*(*)(Mem*))sqlite3_value_text, 1);
}

 const void * sqlite3_column_decltype16(sqlite3_stmt *pStmt, int N)
{

  return columnName(
      pStmt, N, (const void*(*)(Mem*))sqlite3_value_text16, 1);
}
# 73735 "sqlite3.c"
static int vdbeUnbind(Vdbe *p, int i)
{

  Mem *pVar;
  if( vdbeSafetyNotNull(p) )
{

    return sqlite3MisuseError(73738);
  }
  sqlite3_mutex_enter(p->db->mutex);
  if( p->magic!=0xbdf20da3 || p->pc>=0 )
{

    sqlite3Error(p->db, 21);
    sqlite3_mutex_leave(p->db->mutex);
    sqlite3_log(21,
        "bind on a busy prepared statement: [%s]", p->zSql);
    return sqlite3MisuseError(73746);
  }
  if( i<1 || i>p->nVar )
{

    sqlite3Error(p->db, 25);
    sqlite3_mutex_leave(p->db->mutex);
    return 25;
  }
  i--;
  pVar = &p->aVar[i];
  sqlite3VdbeMemRelease(pVar);
  pVar->flags = 0x0001;
  sqlite3Error(p->db, 0);
# 73768 "sqlite3.c"
  if( p->isPrepareV2 &&
     ((i<32 && p->expmask & ((u32)1 << i)) || p->expmask==0xffffffff)
  )
{

    p->expired = 1;
  }
  return 0;
}




static int bindText(
  sqlite3_stmt *pStmt,
  int i,
  const void *zData,
  int nData,
  void (*xDel)(void*),
  u8 encoding
)
{

  Vdbe *p = (Vdbe *)pStmt;
  Mem *pVar;
  int rc;

  rc = vdbeUnbind(p, i);
  if( rc==0 )
{

    if( zData!=0 )
{

      pVar = &p->aVar[i-1];
      rc = sqlite3VdbeMemSetStr(pVar, zData, nData, encoding, xDel);
      if( rc==0 && encoding!=0 )
{

        rc = sqlite3VdbeChangeEncoding(pVar, ((p->db)->enc));
      }
      sqlite3Error(p->db, rc);
      rc = sqlite3ApiExit(p->db, rc);
    }
    sqlite3_mutex_leave(p->db->mutex);
  }else if( xDel!=((sqlite3_destructor_type)0) && xDel!=((sqlite3_destructor_type)-1) )
{

    xDel((void*)zData);
  }
  return rc;
}





 int sqlite3_bind_blob(
  sqlite3_stmt *pStmt,
  int i,
  const void *zData,
  int nData,
  void (*xDel)(void*)
)
{




  return bindText(pStmt, i, zData, nData, xDel, 0);
}
 int sqlite3_bind_blob64(
  sqlite3_stmt *pStmt,
  int i,
  const void *zData,
  sqlite3_uint64 nData,
  void (*xDel)(void*)
)
{

  ((void) (0));
  if( nData>0x7fffffff )
{

    return invokeValueDestructor(zData, xDel, 0);
  }else{
    return bindText(pStmt, i, zData, (int)nData, xDel, 0);
  }
}
 int sqlite3_bind_double(sqlite3_stmt *pStmt, int i, double rValue)
{

  int rc;
  Vdbe *p = (Vdbe *)pStmt;
  rc = vdbeUnbind(p, i);
  if( rc==0 )
{

    sqlite3VdbeMemSetDouble(&p->aVar[i-1], rValue);
    sqlite3_mutex_leave(p->db->mutex);
  }
  return rc;
}
 int sqlite3_bind_int(sqlite3_stmt *p, int i, int iValue)
{

  return sqlite3_bind_int64(p, i, (i64)iValue);
}
 int sqlite3_bind_int64(sqlite3_stmt *pStmt, int i, sqlite_int64 iValue)
{

  int rc;
  Vdbe *p = (Vdbe *)pStmt;
  rc = vdbeUnbind(p, i);
  if( rc==0 )
{

    sqlite3VdbeMemSetInt64(&p->aVar[i-1], iValue);
    sqlite3_mutex_leave(p->db->mutex);
  }
  return rc;
}
 int sqlite3_bind_null(sqlite3_stmt *pStmt, int i)
{

  int rc;
  Vdbe *p = (Vdbe*)pStmt;
  rc = vdbeUnbind(p, i);
  if( rc==0 )
{

    sqlite3_mutex_leave(p->db->mutex);
  }
  return rc;
}
 int sqlite3_bind_text(
  sqlite3_stmt *pStmt,
  int i,
  const char *zData,
  int nData,
  void (*xDel)(void*)
)
{

  return bindText(pStmt, i, zData, nData, xDel, 1);
}
 int sqlite3_bind_text64(
  sqlite3_stmt *pStmt,
  int i,
  const char *zData,
  sqlite3_uint64 nData,
  void (*xDel)(void*),
  unsigned char enc
)
{

  ((void) (0));
  if( nData>0x7fffffff )
{

    return invokeValueDestructor(zData, xDel, 0);
  }else{
    if( enc==4 ) enc = 2;
    return bindText(pStmt, i, zData, (int)nData, xDel, enc);
  }
}

 int sqlite3_bind_text16(
  sqlite3_stmt *pStmt,
  int i,
  const void *zData,
  int nData,
  void (*xDel)(void*)
)
{

  return bindText(pStmt, i, zData, nData, xDel, 2);
}

 int sqlite3_bind_value(sqlite3_stmt *pStmt, int i, const sqlite3_value *pValue)
{

  int rc;
  switch( sqlite3_value_type((sqlite3_value*)pValue) )
{

    case 1: {
      rc = sqlite3_bind_int64(pStmt, i, pValue->u.i);
      break;
    }
    case 2: {
      rc = sqlite3_bind_double(pStmt, i, pValue->u.r);
      break;
    }
    case 4: {
      if( pValue->flags & 0x4000 )
{

        rc = sqlite3_bind_zeroblob(pStmt, i, pValue->u.nZero);
      }else{
        rc = sqlite3_bind_blob(pStmt, i, pValue->z, pValue->n,((sqlite3_destructor_type)-1));
      }
      break;
    }
    case 3: {
      rc = bindText(pStmt,i, pValue->z, pValue->n, ((sqlite3_destructor_type)-1),
                              pValue->enc);
      break;
    }
    default: {
      rc = sqlite3_bind_null(pStmt, i);
      break;
    }
  }
  return rc;
}
 int sqlite3_bind_zeroblob(sqlite3_stmt *pStmt, int i, int n)
{

  int rc;
  Vdbe *p = (Vdbe *)pStmt;
  rc = vdbeUnbind(p, i);
  if( rc==0 )
{

    sqlite3VdbeMemSetZeroBlob(&p->aVar[i-1], n);
    sqlite3_mutex_leave(p->db->mutex);
  }
  return rc;
}
 int sqlite3_bind_zeroblob64(sqlite3_stmt *pStmt, int i, sqlite3_uint64 n)
{

  int rc;
  Vdbe *p = (Vdbe *)pStmt;
  sqlite3_mutex_enter(p->db->mutex);
  if( n>(u64)p->db->aLimit[0] )
{

    rc = 18;
  }else{
    ((void) (0));
    rc = sqlite3_bind_zeroblob(pStmt, i, n);
  }
  rc = sqlite3ApiExit(p->db, rc);
  sqlite3_mutex_leave(p->db->mutex);
  return rc;
}





 int sqlite3_bind_parameter_count(sqlite3_stmt *pStmt)
{

  Vdbe *p = (Vdbe*)pStmt;
  return p ? p->nVar : 0;
}







 const char * sqlite3_bind_parameter_name(sqlite3_stmt *pStmt, int i)
{

  Vdbe *p = (Vdbe*)pStmt;
  if( p==0 || i<1 || i>p->nzVar )
{

    return 0;
  }
  return p->azVar[i-1];
}






static int sqlite3VdbeParameterIndex(Vdbe *p, const char *zName, int nName)
{

  int i;
  if( p==0 )
{

    return 0;
  }
  if( zName )
{

    for(i=0; i<p->nzVar; i++)
{

      const char *z = p->azVar[i];
      if( z && strncmp(z,zName,nName)==0 && z[nName]==0 )
{

        return i+1;
      }
    }
  }
  return 0;
}
 int sqlite3_bind_parameter_index(sqlite3_stmt *pStmt, const char *zName)
{

  return sqlite3VdbeParameterIndex((Vdbe*)pStmt, zName, sqlite3Strlen30(zName));
}




static int sqlite3TransferBindings(sqlite3_stmt *pFromStmt, sqlite3_stmt *pToStmt)
{

  Vdbe *pFrom = (Vdbe*)pFromStmt;
  Vdbe *pTo = (Vdbe*)pToStmt;
  int i;
  ((void) (0));
  ((void) (0));
  sqlite3_mutex_enter(pTo->db->mutex);
  for(i=0; i<pFrom->nVar; i++)
{

    sqlite3VdbeMemMove(&pTo->aVar[i], &pFrom->aVar[i]);
  }
  sqlite3_mutex_leave(pTo->db->mutex);
  return 0;
}
# 74040 "sqlite3.c"
 int sqlite3_transfer_bindings(sqlite3_stmt *pFromStmt, sqlite3_stmt *pToStmt)
{

  Vdbe *pFrom = (Vdbe*)pFromStmt;
  Vdbe *pTo = (Vdbe*)pToStmt;
  if( pFrom->nVar!=pTo->nVar )
{

    return 1;
  }
  if( pTo->isPrepareV2 && pTo->expmask )
{

    pTo->expired = 1;
  }
  if( pFrom->isPrepareV2 && pFrom->expmask )
{

    pFrom->expired = 1;
  }
  return sqlite3TransferBindings(pFromStmt, pToStmt);
}
# 74062 "sqlite3.c"
 sqlite3 * sqlite3_db_handle(sqlite3_stmt *pStmt)
{

  return pStmt ? ((Vdbe*)pStmt)->db : 0;
}





 int sqlite3_stmt_readonly(sqlite3_stmt *pStmt)
{

  return pStmt ? ((Vdbe*)pStmt)->readOnly : 1;
}




 int sqlite3_stmt_busy(sqlite3_stmt *pStmt)
{

  Vdbe *v = (Vdbe*)pStmt;
  return v!=0 && v->pc>=0 && v->magic==0xbdf20da3;
}







 sqlite3_stmt * sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt)
{

  sqlite3_stmt *pNext;






  sqlite3_mutex_enter(pDb->mutex);
  if( pStmt==0 )
{

    pNext = (sqlite3_stmt*)pDb->pVdbe;
  }else{
    pNext = (sqlite3_stmt*)((Vdbe*)pStmt)->pNext;
  }
  sqlite3_mutex_leave(pDb->mutex);
  return pNext;
}




 int sqlite3_stmt_status(sqlite3_stmt *pStmt, int op, int resetFlag)
{

  Vdbe *pVdbe = (Vdbe*)pStmt;
  u32 v;






  v = pVdbe->aCounter[op];
  if( resetFlag ) pVdbe->aCounter[op] = 0;
  return (int)v;
}
# 74222 "sqlite3.c"
static int findNextHostParameter(const char *zSql, int *pnToken)
{

  int tokenType;
  int nTotal = 0;
  int n;

  *pnToken = 0;
  while( zSql[0] )
{

    n = sqlite3GetToken((u8*)zSql, &tokenType);
    ((void) (0));
    if( tokenType==135 )
{

      *pnToken = n;
      break;
    }
    nTotal += n;
    zSql += n;
  }
  return nTotal;
}
# 74265 "sqlite3.c"
static char *sqlite3VdbeExpandSql(
  Vdbe *p,
  const char *zRawSql
)
{

  sqlite3 *db;
  int idx = 0;
  int nextIndex = 1;
  int n;
  int nToken;
  int i;
  Mem *pVar;
  StrAccum out;
  char zBase[100];

  db = p->db;
  sqlite3StrAccumInit(&out, db, zBase, sizeof(zBase),
                      db->aLimit[0]);
  if( db->nVdbeExec>1 )
{

    while( *zRawSql )
{

      const char *zStart = zRawSql;
      while( *(zRawSql++)!='\n' && *zRawSql );
      sqlite3StrAccumAppend(&out, "-- ", 3);
      ((void) (0));
      sqlite3StrAccumAppend(&out, zStart, (int)(zRawSql-zStart));
    }
  }else if( p->nVar==0 )
{

    sqlite3StrAccumAppend(&out, zRawSql, sqlite3Strlen30(zRawSql));
  }else{
    while( zRawSql[0] )
{

      n = findNextHostParameter(zRawSql, &nToken);
      ((void) (0));
      sqlite3StrAccumAppend(&out, zRawSql, n);
      zRawSql += n;
      ((void) (0));
      if( nToken==0 ) break;
      if( zRawSql[0]=='?' )
{

        if( nToken>1 )
{

          ((void) (0));
          sqlite3GetInt32(&zRawSql[1], &idx);
        }else{
          idx = nextIndex;
        }
      }else{
        ((void) (0))
                                                    ;
        ;
        ;
        ;
        ;
        idx = sqlite3VdbeParameterIndex(p, zRawSql, nToken);
        ((void) (0));
      }
      zRawSql += nToken;
      nextIndex = idx + 1;
      ((void) (0));
      pVar = &p->aVar[idx-1];
      if( pVar->flags & 0x0001 )
{

        sqlite3StrAccumAppend(&out, "NULL", 4);
      }else if( pVar->flags & 0x0004 )
{

        sqlite3XPrintf(&out, "%lld", pVar->u.i);
      }else if( pVar->flags & 0x0008 )
{

        sqlite3XPrintf(&out, "%!.15g", pVar->u.r);
      }else if( pVar->flags & 0x0002 )
{

        int nOut;

        u8 enc = ((db)->enc);
        Mem utf8;
        if( enc!=1 )
{

          memset(&utf8, 0, sizeof(utf8));
          utf8.db = db;
          sqlite3VdbeMemSetStr(&utf8, pVar->z, pVar->n, enc, ((sqlite3_destructor_type)0));
          sqlite3VdbeChangeEncoding(&utf8, 1);
          pVar = &utf8;
        }

        nOut = pVar->n;






        sqlite3XPrintf(&out, "'%.*q'", nOut, pVar->z);






        if( enc!=1 ) sqlite3VdbeMemRelease(&utf8);

      }else if( pVar->flags & 0x4000 )
{

        sqlite3XPrintf(&out, "zeroblob(%d)", pVar->u.nZero);
      }else{
        int nOut;
        ((void) (0));
        sqlite3StrAccumAppend(&out, "x'", 2);
        nOut = pVar->n;



        for(i=0; i<nOut; i++)
{

          sqlite3XPrintf(&out, "%02x", pVar->z[i]&0xff);
        }
        sqlite3StrAccumAppend(&out, "'", 1);





      }
    }
  }
  return sqlite3StrAccumFinish(&out);
}
# 74558 "sqlite3.c"
static VdbeCursor *allocateCursor(
  Vdbe *p,
  int iCur,
  int nField,
  int iDb,
  u8 eCurType
)
{

# 74583 "sqlite3.c"
  Mem *pMem = iCur>0 ? &p->aMem[p->nMem-iCur] : p->aMem;

  int nByte;
  VdbeCursor *pCx = 0;
  nByte =
      (((sizeof(VdbeCursor))+7)&~7) + 2*sizeof(u32)*nField +
      (eCurType==0?sqlite3BtreeCursorSize():0);

  ((void) (0));
  if( p->apCsr[iCur] )
{

    sqlite3VdbeFreeCursor(p, p->apCsr[iCur]);
    p->apCsr[iCur] = 0;
  }
  if( 0==sqlite3VdbeMemClearAndResize(pMem, nByte) )
{

    p->apCsr[iCur] = pCx = (VdbeCursor*)pMem->z;
    memset(pCx, 0, sizeof(VdbeCursor));
    pCx->eCurType = eCurType;
    pCx->iDb = iDb;
    pCx->nField = nField;
    pCx->aOffset = &pCx->aType[nField];
    if( eCurType==0 )
{

      pCx->uc.pCursor = (BtCursor*)
          &pMem->z[(((sizeof(VdbeCursor))+7)&~7)+2*sizeof(u32)*nField];
      sqlite3BtreeCursorZero(pCx->uc.pCursor);
    }
  }
  return pCx;
}
# 74627 "sqlite3.c"
static void applyNumericAffinity(Mem *pRec, int bTryForInt)
{

  double rValue;
  i64 iValue;
  u8 enc = pRec->enc;
  ((void) (0));
  if( sqlite3AtoF(pRec->z, &rValue, pRec->n, enc)==0 ) return;
  if( 0==sqlite3Atoi64(pRec->z, &iValue, pRec->n, enc) )
{

    pRec->u.i = iValue;
    pRec->flags |= 0x0004;
  }else{
    pRec->u.r = rValue;
    pRec->flags |= 0x0008;
    if( bTryForInt ) sqlite3VdbeIntegerAffinity(pRec);
  }
}
# 74661 "sqlite3.c"
static void applyAffinity(
  Mem *pRec,
  char affinity,
  u8 enc
)
{

  if( affinity>='C' )
{

    ((void) (0))
                                              ;
    if( (pRec->flags & 0x0004)==0 )
{

      if( (pRec->flags & 0x0008)==0 )
{

        if( pRec->flags & 0x0002 ) applyNumericAffinity(pRec,1);
      }else{
        sqlite3VdbeIntegerAffinity(pRec);
      }
    }
  }else if( affinity=='B' )
{





    if( 0==(pRec->flags&0x0002) && (pRec->flags&(0x0008|0x0004)) )
{

      sqlite3VdbeMemStringify(pRec, enc, 1);
    }
    pRec->flags &= ~(0x0008|0x0004);
  }
}







 int sqlite3_value_numeric_type(sqlite3_value *pVal)
{

  int eType = sqlite3_value_type(pVal);
  if( eType==3 )
{

    Mem *pMem = (Mem*)pVal;
    applyNumericAffinity(pMem, 0);
    eType = sqlite3_value_type(pVal);
  }
  return eType;
}





static void sqlite3ValueApplyAffinity(
  sqlite3_value *pVal,
  u8 affinity,
  u8 enc
)
{

  applyAffinity((Mem *)pVal, affinity, enc);
}







static u16 __attribute__((noinline)) computeNumericType(Mem *pMem)
{

  ((void) (0));
  ((void) (0));
  if( sqlite3AtoF(pMem->z, &pMem->u.r, pMem->n, pMem->enc)==0 )
{

    return 0;
  }
  if( sqlite3Atoi64(pMem->z, &pMem->u.i, pMem->n, pMem->enc)==0 )
{

    return 0x0004;
  }
  return 0x0008;
}
# 74741 "sqlite3.c"
static u16 numericType(Mem *pMem)
{

  if( pMem->flags & (0x0004|0x0008) )
{

    return pMem->flags & (0x0004|0x0008);
  }
  if( pMem->flags & (0x0002|0x0010) )
{

    return computeNumericType(pMem);
  }
  return 0;
}
# 74997 "sqlite3.c"
static __attribute__((noinline)) Mem *out2PrereleaseWithClear(Mem *pOut)
{

  sqlite3VdbeMemSetNull(pOut);
  pOut->flags = 0x0004;
  return pOut;
}
static Mem *out2Prerelease(Vdbe *p, VdbeOp *pOp)
{

  Mem *pOut;
  ((void) (0));
  ((void) (0));
  pOut = &p->aMem[pOp->p2];
  ;
  if( (((pOut)->flags&(0x2000|0x0400|0x0020|0x0040))!=0) )
{

    return out2PrereleaseWithClear(pOut);
  }else{
    pOut->flags = 0x0004;
    return pOut;
  }
}






static int sqlite3VdbeExec(
  Vdbe *p
)
{

  Op *aOp = p->aOp;
  Op *pOp = aOp;






  int rc = 0;
  sqlite3 *db = p->db;
  u8 resetSchemaOnFault = 0;
  u8 encoding = ((db)->enc);
  int iCompare = 0;
  unsigned nVmStep = 0;

  unsigned nProgressLimit = 0;

  Mem *aMem = p->aMem;
  Mem *pIn1 = 0;
  Mem *pIn2 = 0;
  Mem *pIn3 = 0;
  Mem *pOut = 0;
  int *aPermute = 0;
  i64 lastRowid = db->lastRowid;





  ((void) (0));
  sqlite3VdbeEnter(p);
  if( p->rc==7 )
{



    goto no_mem;
  }
  ((void) (0));
  ((void) (0));
  p->rc = 0;
  p->iCurrentTime = 0;
  ((void) (0));
  p->pResultSet = 0;
  db->busyHandler.nBusy = 0;
  if( db->u1.isInterrupted ) goto abort_due_to_interrupt;
  ;

  if( db->xProgress )
{

    u32 iPrior = p->aCounter[4];
    ((void) (0));
    nProgressLimit = db->nProgressOps - (iPrior % db->nProgressOps);
  }
# 75103 "sqlite3.c"
  for(pOp=&aOp[p->pc]; 1; pOp++)
{



    ((void) (0));

    ((void) (0));



    nVmStep++;
# 75177 "sqlite3.c"
    switch( pOp->opcode )
{

# 75226 "sqlite3.c"
case 13: {
jump_to_p2_and_check_for_interrupt:
  pOp = &aOp[pOp->p2 - 1];
# 75240 "sqlite3.c"
check_for_interrupt:
  if( db->u1.isInterrupted ) goto abort_due_to_interrupt;







  if( db->xProgress!=0 && nVmStep>=nProgressLimit )
{

    ((void) (0));
    nProgressLimit = nVmStep + db->nProgressOps - (nVmStep%db->nProgressOps);
    if( db->xProgress(db->pProgressArg) )
{

      rc = 9;
      goto abort_due_to_error;
    }
  }


  break;
}






case 14: {
  ((void) (0));
  pIn1 = &aMem[pOp->p1];
  ((void) (0));
  ;
  pIn1->flags = 0x0004;
  pIn1->u.i = (int)(pOp-aOp);
  ;



jump_to_p2:
  pOp = &aOp[pOp->p2 - 1];
  break;
}






case 15: {
  pIn1 = &aMem[pOp->p1];
  ((void) (0));
  pOp = &aOp[pIn1->u.i];
  pIn1->flags = 0x0080;
  break;
}
# 75307 "sqlite3.c"
case 16: {
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pOut = &aMem[pOp->p1];
  ((void) (0));
  pOut->u.i = pOp->p3 - 1;
  pOut->flags = 0x0004;
  if( pOp->p2 ) goto jump_to_p2;
  break;
}
# 75327 "sqlite3.c"
case 17: {
  VdbeOp *pCaller;
  pIn1 = &aMem[pOp->p1];
  ((void) (0));
  ((void) (0));
  pCaller = &aOp[pIn1->u.i];
  ((void) (0));
  ((void) (0));
  pOp = &aOp[pCaller->p2 - 1];
  pIn1->flags = 0x0080;
  break;
}
# 75353 "sqlite3.c"
case 18: {
  int pcDest;
  pIn1 = &aMem[pOp->p1];
  ((void) (0));
  pIn1->flags = 0x0004;
  pcDest = (int)pIn1->u.i;
  pIn1->u.i = (int)(pOp - aOp);
  ;
  pOp = &aOp[pcDest];
  break;
}
# 75373 "sqlite3.c"
case 20: {
  pIn3 = &aMem[pOp->p3];
  if( (pIn3->flags & 0x0001)==0 ) break;

}
# 75409 "sqlite3.c"
case 21: {
  const char *zType;
  const char *zLogFmt;
  VdbeFrame *pFrame;
  int pcx;

  pcx = (int)(pOp - aOp);
  if( pOp->p1==0 && p->pFrame )
{


    pFrame = p->pFrame;
    p->pFrame = pFrame->pParent;
    p->nFrame--;
    sqlite3VdbeSetChanges(db, p->nChange);
    pcx = sqlite3VdbeFrameRestore(pFrame);
    lastRowid = db->lastRowid;
    if( pOp->p2==4 )
{






      pcx = p->aOp[pcx].p2-1;
    }
    aOp = p->aOp;
    aMem = p->aMem;
    pOp = &aOp[pcx];
    break;
  }
  p->rc = pOp->p1;
  p->errorAction = (u8)pOp->p2;
  p->pc = pcx;
  if( p->rc )
{

    if( pOp->p5 )
{

      static const char * const azType[] = { "NOT NULL", "UNIQUE", "CHECK",
                                             "FOREIGN KEY" };
      ((void) (0));
      ;
      ;
      ;
      ;
      zType = azType[pOp->p5-1];
    }else{
      zType = 0;
    }
    ((void) (0));
    zLogFmt = "abort at %d in [%s]: %s";
    if( zType && pOp->p4.z )
{

      sqlite3VdbeError(p, "%s constraint failed: %s", zType, pOp->p4.z);
    }else if( pOp->p4.z )
{

      sqlite3VdbeError(p, "%s", pOp->p4.z);
    }else{
      sqlite3VdbeError(p, "%s constraint failed", zType);
    }
    sqlite3_log(pOp->p1, zLogFmt, pcx, p->zSql, p->zErrMsg);
  }
  rc = sqlite3VdbeHalt(p);
  ((void) (0));
  if( rc==5 )
{

    p->rc = rc = 5;
  }else{
    ((void) (0));
    ((void) (0));
    rc = p->rc ? 1 : 101;
  }
  goto vdbe_return;
}






case 22: {
  pOut = out2Prerelease(p, pOp);
  pOut->u.i = pOp->p1;
  break;
}







case 23: {
  pOut = out2Prerelease(p, pOp);
  ((void) (0));
  pOut->u.i = *pOp->p4.pI64;
  break;
}
# 75507 "sqlite3.c"
case 133: {
  pOut = out2Prerelease(p, pOp);
  pOut->flags = 0x0008;
  ((void) (0));
  pOut->u.r = *pOp->p4.pReal;
  break;
}
# 75524 "sqlite3.c"
case 97: {
  ((void) (0));
  pOut = out2Prerelease(p, pOp);
  pOp->opcode = 24;
  pOp->p1 = sqlite3Strlen30(pOp->p4.z);


  if( encoding!=1 )
{

    rc = sqlite3VdbeMemSetStr(pOut, pOp->p4.z, -1, 1, ((sqlite3_destructor_type)0));
    if( rc )
{

      ((void) (0));
      goto too_big;
    }
    if( 0!=sqlite3VdbeChangeEncoding(pOut, encoding) ) goto no_mem;
    ((void) (0));
    ((void) (0));
    pOut->szMalloc = 0;
    pOut->flags |= 0x0800;
    if( pOp->p4type==(-1) )
{

      sqlite3DbFree(db, pOp->p4.z);
    }
    pOp->p4type = (-1);
    pOp->p4.z = pOut->z;
    pOp->p1 = pOut->n;
  }

  if( pOp->p1>db->aLimit[0] )
{

    goto too_big;
  }

}
# 75566 "sqlite3.c"
case 24: {
  ((void) (0));
  pOut = out2Prerelease(p, pOp);
  pOut->flags = 0x0002|0x0800|0x0200;
  pOut->z = pOp->p4.z;
  pOut->n = pOp->p1;
  pOut->enc = encoding;
  ;

  if( pOp->p5 )
{

    ((void) (0));
    ((void) (0));
    pIn3 = &aMem[pOp->p3];
    ((void) (0));
    if( pIn3->u.i ) pOut->flags = 0x0010|0x0800|0x0200;
  }

  break;
}
# 75598 "sqlite3.c"
case 25: {
  int cnt;
  u16 nullFlag;
  pOut = out2Prerelease(p, pOp);
  cnt = pOp->p3-pOp->p2;
  ((void) (0));
  pOut->flags = nullFlag = pOp->p1 ? (0x0001|0x0100) : 0x0001;
  while( cnt>0 )
{

    pOut++;
    ;
    sqlite3VdbeMemSetNull(pOut);
    pOut->flags = nullFlag;
    cnt--;
  }
  break;
}
# 75623 "sqlite3.c"
case 26: {
  ((void) (0));
  pOut = &aMem[pOp->p1];
  pOut->flags = (pOut->flags|0x0001)&~0x0080;
  break;
}







case 27: {
  ((void) (0));
  pOut = out2Prerelease(p, pOp);
  sqlite3VdbeMemSetStr(pOut, pOp->p4.z, pOp->p1, 0, 0);
  pOut->enc = encoding;
  ;
  break;
}
# 75653 "sqlite3.c"
case 28: {
  Mem *pVar;

  ((void) (0));
  ((void) (0));
  pVar = &p->aVar[pOp->p1 - 1];
  if( sqlite3VdbeMemTooBig(pVar) )
{

    goto too_big;
  }
  pOut = out2Prerelease(p, pOp);
  sqlite3VdbeMemShallowCopy(pOut, pVar, 0x0800);
  ;
  break;
}
# 75677 "sqlite3.c"
case 29: {
  int n;
  int p1;
  int p2;

  n = pOp->p3;
  p1 = pOp->p1;
  p2 = pOp->p2;
  ((void) (0));
  ((void) (0));

  pIn1 = &aMem[p1];
  pOut = &aMem[p2];
  do{
    ((void) (0));
    ((void) (0));
    ((void) (0));
    ;
    sqlite3VdbeMemMove(pOut, pIn1);





    if( ((pOut)->flags&0x1000)!=0 && sqlite3VdbeMemMakeWriteable(pOut) )
{
 goto no_mem;};
    ;
    pIn1++;
    pOut++;
  }while( --n );
  break;
}
# 75717 "sqlite3.c"
case 30: {
  int n;

  n = pOp->p3;
  pIn1 = &aMem[pOp->p1];
  pOut = &aMem[pOp->p2];
  ((void) (0));
  while( 1 )
{

    sqlite3VdbeMemShallowCopy(pOut, pIn1, 0x1000);
    if( ((pOut)->flags&0x1000)!=0 && sqlite3VdbeMemMakeWriteable(pOut) )
{
 goto no_mem;};



    ;
    if( (n--)==0 ) break;
    pOut++;
    pIn1++;
  }
  break;
}
# 75751 "sqlite3.c"
case 31: {
  pIn1 = &aMem[pOp->p1];
  pOut = &aMem[pOp->p2];
  ((void) (0));
  sqlite3VdbeMemShallowCopy(pOut, pIn1, 0x1000);



  break;
}
# 75770 "sqlite3.c"
case 32: {
  pIn1 = &aMem[pOp->p1];
  ((void) (0));
  pOut = &aMem[pOp->p2];
  sqlite3VdbeMemSetInt64(pOut, pIn1->u.i);
  break;
}
# 75787 "sqlite3.c"
case 33: {
  Mem *pMem;
  int i;
  ((void) (0));
  ((void) (0));
  ((void) (0));




  if( db->xProgress!=0
   && nVmStep>=nProgressLimit
   && db->xProgress(db->pProgressArg)!=0
  )
{

    rc = 9;
    goto abort_due_to_error;
  }





  if( 0!=(rc = sqlite3VdbeCheckFk(p, 0)) )
{

    ((void) (0));
    ((void) (0));
    goto abort_due_to_error;
  }
# 75830 "sqlite3.c"
  ((void) (0));
  rc = sqlite3VdbeCloseStatement(p, 1);
  ((void) (0));


  p->cacheCtr = (p->cacheCtr + 2)|1;





  pMem = p->pResultSet = &aMem[pOp->p1];
  for(i=0; i<pOp->p2; i++)
{

    ((void) (0));
    if( ((&pMem[i])->flags&0x1000)!=0 && sqlite3VdbeMemMakeWriteable(&pMem[i]) )
{
 goto no_mem;};
    ((void) (0))
                                                        ;
    sqlite3VdbeMemNulTerminate(&pMem[i]);
    ;
  }
  if( db->mallocFailed ) goto no_mem;



  p->pc = (int)(pOp - aOp) + 1;
  rc = 100;
  goto vdbe_return;
}
# 75872 "sqlite3.c"
case 94: {
  i64 nByte;

  pIn1 = &aMem[pOp->p1];
  pIn2 = &aMem[pOp->p2];
  pOut = &aMem[pOp->p3];
  ((void) (0));
  if( (pIn1->flags | pIn2->flags) & 0x0001 )
{

    sqlite3VdbeMemSetNull(pOut);
    break;
  }
  if( (((pIn1)->flags&0x4000)?sqlite3VdbeMemExpandBlob(pIn1):0) || (((pIn2)->flags&0x4000)?sqlite3VdbeMemExpandBlob(pIn2):0) ) goto no_mem;
  if(((pIn1)->flags&(0x0002|0x0010))==0 && sqlite3VdbeMemStringify(pIn1,encoding,0)) { goto no_mem; };
  if(((pIn2)->flags&(0x0002|0x0010))==0 && sqlite3VdbeMemStringify(pIn2,encoding,0)) { goto no_mem; };
  nByte = pIn1->n + pIn2->n;
  if( nByte>db->aLimit[0] )
{

    goto too_big;
  }
  if( sqlite3VdbeMemGrow(pOut, (int)nByte+2, pOut==pIn2) )
{

    goto no_mem;
  }
  ((pOut)->flags = ((pOut)->flags&~(0x81ff|0x4000))|0x0002);
  if( pOut!=pIn2 )
{

    memcpy(pOut->z, pIn2->z, pIn2->n);
  }
  memcpy(&pOut->z[pIn2->n], pIn1->z, pIn1->n);
  pOut->z[nByte]=0;
  pOut->z[nByte+1] = 0;
  pOut->flags |= 0x0200;
  pOut->n = (int)nByte;
  pOut->enc = encoding;
  ;
  break;
}
# 75945 "sqlite3.c"
case 89:
case 90:
case 91:
case 92:
case 93: {
  char bIntint;
  u16 flags;
  u16 type1;
  u16 type2;
  i64 iA;
  i64 iB;
  double rA;
  double rB;

  pIn1 = &aMem[pOp->p1];
  type1 = numericType(pIn1);
  pIn2 = &aMem[pOp->p2];
  type2 = numericType(pIn2);
  pOut = &aMem[pOp->p3];
  flags = pIn1->flags | pIn2->flags;
  if( (flags & 0x0001)!=0 ) goto arithmetic_result_is_null;
  if( (type1 & type2 & 0x0004)!=0 )
{

    iA = pIn1->u.i;
    iB = pIn2->u.i;
    bIntint = 1;
    switch( pOp->opcode )
{

      case 89: if( sqlite3AddInt64(&iB,iA) ) goto fp_math; break;
      case 90: if( sqlite3SubInt64(&iB,iA) ) goto fp_math; break;
      case 91: if( sqlite3MulInt64(&iB,iA) ) goto fp_math; break;
      case 92: {
        if( iA==0 ) goto arithmetic_result_is_null;
        if( iA==-1 && iB==(((i64)-1) - (0xffffffff|(((i64)0x7fffffff)<<32))) ) goto fp_math;
        iB /= iA;
        break;
      }
      default: {
        if( iA==0 ) goto arithmetic_result_is_null;
        if( iA==-1 ) iA = 1;
        iB %= iA;
        break;
      }
    }
    pOut->u.i = iB;
    ((pOut)->flags = ((pOut)->flags&~(0x81ff|0x4000))|0x0004);
  }else{
    bIntint = 0;
fp_math:
    rA = sqlite3VdbeRealValue(pIn1);
    rB = sqlite3VdbeRealValue(pIn2);
    switch( pOp->opcode )
{

      case 89: rB += rA; break;
      case 90: rB -= rA; break;
      case 91: rB *= rA; break;
      case 92: {

        if( rA==(double)0 ) goto arithmetic_result_is_null;
        rB /= rA;
        break;
      }
      default: {
        iA = (i64)rA;
        iB = (i64)rB;
        if( iA==0 ) goto arithmetic_result_is_null;
        if( iA==-1 ) iA = 1;
        rB = (double)(iB % iA);
        break;
      }
    }




    if( sqlite3IsNaN(rB) )
{

      goto arithmetic_result_is_null;
    }
    pOut->u.r = rB;
    ((pOut)->flags = ((pOut)->flags&~(0x81ff|0x4000))|0x0008);
    if( ((type1|type2)&0x0008)==0 && !bIntint )
{

      sqlite3VdbeIntegerAffinity(pOut);
    }

  }
  break;

arithmetic_result_is_null:
  sqlite3VdbeMemSetNull(pOut);
  break;
}
# 76049 "sqlite3.c"
case 34: {
  ((void) (0));
  if( pOp->p1 )
{

    sqlite3VdbeMemSetInt64(&aMem[pOp->p1], 0);
  }
  break;
}
# 76098 "sqlite3.c"
case 35: {
  int n;
  sqlite3_context *pCtx;

  ((void) (0));
  n = pOp->p5;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pCtx = sqlite3DbMallocRawNN(db, sizeof(*pCtx) + (n-1)*sizeof(sqlite3_value*));
  if( pCtx==0 ) goto no_mem;
  pCtx->pOut = 0;
  pCtx->pFunc = pOp->p4.pFunc;
  pCtx->iOp = (int)(pOp - aOp);
  pCtx->pVdbe = p;
  pCtx->argc = n;
  pOp->p4type = (-20);
  pOp->p4.pCtx = pCtx;
  pOp->opcode = 36;

}
case 36: {
  int i;
  sqlite3_context *pCtx;

  ((void) (0));
  pCtx = pOp->p4.pCtx;





  pOut = &aMem[pOp->p3];
  if( pCtx->pOut != pOut )
{

    pCtx->pOut = pOut;
    for(i=pCtx->argc-1; i>=0; i--) pCtx->argv[i] = &aMem[pOp->p2+i];
  }

  ;






  ((pCtx->pOut)->flags = ((pCtx->pOut)->flags&~(0x81ff|0x4000))|0x0001);
  pCtx->fErrorOrAux = 0;
  db->lastRowid = lastRowid;
  (*pCtx->pFunc->xSFunc)(pCtx, pCtx->argc, pCtx->argv);
  lastRowid = db->lastRowid;


  if( pCtx->fErrorOrAux )
{

    if( pCtx->isError )
{

      sqlite3VdbeError(p, "%s", sqlite3_value_text(pCtx->pOut));
      rc = pCtx->isError;
    }
    sqlite3VdbeDeleteAuxData(db, &p->pAuxData, pCtx->iOp, pOp->p1);
    if( rc ) goto abort_due_to_error;
  }


  if( pOut->flags & (0x0002|0x0010) )
{

    sqlite3VdbeChangeEncoding(pCtx->pOut, encoding);
    if( sqlite3VdbeMemTooBig(pCtx->pOut) ) goto too_big;
  }

  ;
  ;
  break;
}
# 76200 "sqlite3.c"
case 85:
case 86:
case 87:
case 88: {
  i64 iA;
  u64 uA;
  i64 iB;
  u8 op;

  pIn1 = &aMem[pOp->p1];
  pIn2 = &aMem[pOp->p2];
  pOut = &aMem[pOp->p3];
  if( (pIn1->flags | pIn2->flags) & 0x0001 )
{

    sqlite3VdbeMemSetNull(pOut);
    break;
  }
  iA = sqlite3VdbeIntValue(pIn2);
  iB = sqlite3VdbeIntValue(pIn1);
  op = pOp->opcode;
  if( op==85 )
{

    iA &= iB;
  }else if( op==86 )
{

    iA |= iB;
  }else if( iB!=0 )
{

    ((void) (0));


    if( iB<0 )
{

      ((void) (0));
      op = 2*87 + 1 - op;
      iB = iB>(-64) ? -iB : 64;
    }

    if( iB>=64 )
{

      iA = (iA>=0 || op==87) ? 0 : -1;
    }else{
      memcpy(&uA, &iA, sizeof(uA));
      if( op==87 )
{

        uA <<= iB;
      }else{
        uA >>= iB;

        if( iA<0 ) uA |= ((((u64)0xffffffff)<<32)|0xffffffff) << (64-iB);
      }
      memcpy(&iA, &uA, sizeof(iA));
    }
  }
  pOut->u.i = iA;
  ((pOut)->flags = ((pOut)->flags&~(0x81ff|0x4000))|0x0004);
  break;
}
# 76260 "sqlite3.c"
case 37: {
  pIn1 = &aMem[pOp->p1];
  ;
  sqlite3VdbeMemIntegerify(pIn1);
  pIn1->u.i += pOp->p2;
  break;
}
# 76275 "sqlite3.c"
case 38: {
  pIn1 = &aMem[pOp->p1];
  if( (pIn1->flags & 0x0004)==0 )
{

    applyAffinity(pIn1, 'C', encoding);
    ;
    if( (pIn1->flags & 0x0004)==0 )
{

      if( pOp->p2==0 )
{

        rc = 20;
        goto abort_due_to_error;
      }else{
        goto jump_to_p2;
      }
    }
  }
  ((pIn1)->flags = ((pIn1)->flags&~(0x81ff|0x4000))|0x0004);
  break;
}
# 76303 "sqlite3.c"
case 39: {
  pIn1 = &aMem[pOp->p1];
  if( pIn1->flags & 0x0004 )
{

    sqlite3VdbeMemRealify(pIn1);
  }
  break;
}
# 76328 "sqlite3.c"
case 40: {
  ((void) (0));
  ;
  ;
  ;
  ;
  ;
  pIn1 = &aMem[pOp->p1];
  ;
  rc = (((pIn1)->flags&0x4000)?sqlite3VdbeMemExpandBlob(pIn1):0);
  sqlite3VdbeMemCast(pIn1, pOp->p2, encoding);
  ;
  if( rc ) goto abort_due_to_error;
  break;
}
# 76427 "sqlite3.c"
case 79:
case 78:
case 82:
case 81:
case 80:
case 83: {
  int res;
  char affinity;
  u16 flags1;
  u16 flags3;

  pIn1 = &aMem[pOp->p1];
  pIn3 = &aMem[pOp->p3];
  flags1 = pIn1->flags;
  flags3 = pIn3->flags;
  if( (flags1 | flags3)&0x0001 )
{


    if( pOp->p5 & 0x80 )
{





      ((void) (0));
      ((void) (0));
      ((void) (0));
      if( (flags1&0x0001)!=0
       && (flags3&0x0001)!=0
       && (flags3&0x0100)==0
      )
{

        res = 0;
      }else{
        res = 1;
      }
    }else{




      if( pOp->p5 & 0x20 )
{

        pOut = &aMem[pOp->p2];
        ;
        ((pOut)->flags = ((pOut)->flags&~(0x81ff|0x4000))|0x0001);
        ;
      }else{
        ;
        if( pOp->p5 & 0x10 )
{

          goto jump_to_p2;
        }
      }
      break;
    }
  }else{

    affinity = pOp->p5 & 0x47;
    if( affinity>='C' )
{

      if( (flags1 & (0x0004|0x0008|0x0002))==0x0002 )
{

        applyNumericAffinity(pIn1,0);
      }
      if( (flags3 & (0x0004|0x0008|0x0002))==0x0002 )
{

        applyNumericAffinity(pIn3,0);
      }
    }else if( affinity=='B' )
{

      if( (flags1 & 0x0002)==0 && (flags1 & (0x0004|0x0008))!=0 )
{

        ;
        ;
        sqlite3VdbeMemStringify(pIn1, encoding, 1);
        ;
        flags1 = (pIn1->flags & ~0x81ff) | (flags1 & 0x81ff);
      }
      if( (flags3 & 0x0002)==0 && (flags3 & (0x0004|0x0008))!=0 )
{

        ;
        ;
        sqlite3VdbeMemStringify(pIn3, encoding, 1);
        ;
        flags3 = (pIn3->flags & ~0x81ff) | (flags3 & 0x81ff);
      }
    }
    ((void) (0));
    if( flags1 & 0x4000 )
{

      sqlite3VdbeMemExpandBlob(pIn1);
      flags1 &= ~0x4000;
    }
    if( flags3 & 0x4000 )
{

      sqlite3VdbeMemExpandBlob(pIn3);
      flags3 &= ~0x4000;
    }
    res = sqlite3MemCompare(pIn3, pIn1, pOp->p4.pColl);
  }
  switch( pOp->opcode )
{

    case 79: res = res==0; break;
    case 78: res = res!=0; break;
    case 82: res = res<0; break;
    case 81: res = res<=0; break;
    case 80: res = res>0; break;
    default: res = res>=0; break;
  }


  ((void) (0));
  pIn1->flags = flags1;
  ((void) (0));
  pIn3->flags = flags3;

  if( pOp->p5 & 0x20 )
{

    pOut = &aMem[pOp->p2];
    ;
    ((pOut)->flags = ((pOut)->flags&~(0x81ff|0x4000))|0x0004);
    pOut->u.i = res;
    ;
  }else{
    ;
    if( res )
{

      goto jump_to_p2;
    }
  }
  break;
}
# 76557 "sqlite3.c"
case 41: {
  ((void) (0));
  ((void) (0));
  aPermute = pOp->p4.ai + 1;
  break;
}
# 76584 "sqlite3.c"
case 42: {
  int n;
  int i;
  int p1;
  int p2;
  const KeyInfo *pKeyInfo;
  int idx;
  CollSeq *pColl;
  int bRev;

  if( (pOp->p5 & 0x01)==0 ) aPermute = 0;
  n = pOp->p3;
  pKeyInfo = pOp->p4.pKeyInfo;
  ((void) (0));
  ((void) (0));
  p1 = pOp->p1;
  p2 = pOp->p2;
# 76612 "sqlite3.c"
  for(i=0; i<n; i++)
{

    idx = aPermute ? aPermute[i] : i;
    ((void) (0));
    ((void) (0));
    ;
    ;
    ((void) (0));
    pColl = pKeyInfo->aColl[i];
    bRev = pKeyInfo->aSortOrder[i];
    iCompare = sqlite3MemCompare(&aMem[p1+idx], &aMem[p2+idx], pColl);
    if( iCompare )
{

      if( bRev ) iCompare = -iCompare;
      break;
    }
  }
  aPermute = 0;
  break;
}







case 43: {
  if( iCompare<0 )
{

    ; pOp = &aOp[pOp->p1 - 1];
  }else if( iCompare==0 )
{

    ; pOp = &aOp[pOp->p2 - 1];
  }else{
    ; pOp = &aOp[pOp->p3 - 1];
  }
  break;
}
# 76668 "sqlite3.c"
case 72:
case 71: {
  int v1;
  int v2;

  pIn1 = &aMem[pOp->p1];
  if( pIn1->flags & 0x0001 )
{

    v1 = 2;
  }else{
    v1 = sqlite3VdbeIntValue(pIn1)!=0;
  }
  pIn2 = &aMem[pOp->p2];
  if( pIn2->flags & 0x0001 )
{

    v2 = 2;
  }else{
    v2 = sqlite3VdbeIntValue(pIn2)!=0;
  }
  if( pOp->opcode==72 )
{

    static const unsigned char and_logic[] = { 0, 0, 0, 0, 1, 2, 0, 2, 2 };
    v1 = and_logic[v1*3+v2];
  }else{
    static const unsigned char or_logic[] = { 0, 1, 2, 1, 1, 1, 2, 1, 2 };
    v1 = or_logic[v1*3+v2];
  }
  pOut = &aMem[pOp->p3];
  if( v1==2 )
{

    ((pOut)->flags = ((pOut)->flags&~(0x81ff|0x4000))|0x0001);
  }else{
    pOut->u.i = v1;
    ((pOut)->flags = ((pOut)->flags&~(0x81ff|0x4000))|0x0004);
  }
  break;
}
# 76709 "sqlite3.c"
case 19: {
  pIn1 = &aMem[pOp->p1];
  pOut = &aMem[pOp->p2];
  sqlite3VdbeMemSetNull(pOut);
  if( (pIn1->flags & 0x0001)==0 )
{

    pOut->flags = 0x0004;
    pOut->u.i = !sqlite3VdbeIntValue(pIn1);
  }
  break;
}
# 76727 "sqlite3.c"
case 96: {
  pIn1 = &aMem[pOp->p1];
  pOut = &aMem[pOp->p2];
  sqlite3VdbeMemSetNull(pOut);
  if( (pIn1->flags & 0x0001)==0 )
{

    pOut->flags = 0x0004;
    pOut->u.i = ~sqlite3VdbeIntValue(pIn1);
  }
  break;
}
# 76749 "sqlite3.c"
case 44: {
  ((void) (0));
  ;
  if( p->aOnceFlag[pOp->p1] )
{

    goto jump_to_p2;
  }else{
    p->aOnceFlag[pOp->p1] = 1;
  }
  break;
}
# 76772 "sqlite3.c"
case 45:
case 46: {
  int c;
  pIn1 = &aMem[pOp->p1];
  if( pIn1->flags & 0x0001 )
{

    c = pOp->p3;
  }else{



    c = sqlite3VdbeRealValue(pIn1)!=0.0;

    if( pOp->opcode==46 ) c = !c;
  }
  ;
  if( c )
{

    goto jump_to_p2;
  }
  break;
}






case 76: {
  pIn1 = &aMem[pOp->p1];
  ;
  if( (pIn1->flags & 0x0001)!=0 )
{

    goto jump_to_p2;
  }
  break;
}






case 77: {
  pIn1 = &aMem[pOp->p1];
  ;
  if( (pIn1->flags & 0x0001)==0 )
{

    goto jump_to_p2;
  }
  break;
}
# 76846 "sqlite3.c"
case 47: {
  i64 payloadSize64;
  int p2;
  VdbeCursor *pC;
  BtCursor *pCrsr;
  u32 *aOffset;
  int len;
  int i;
  Mem *pDest;
  Mem sMem;
  const u8 *zData;
  const u8 *zHdr;
  const u8 *zEndHdr;
  u32 offset;
  u64 offset64;
  u32 avail;
  u32 t;
  Mem *pReg;

  pC = p->apCsr[pOp->p1];
  p2 = pOp->p2;


  rc = sqlite3VdbeCursorMoveto(&pC, &p2);

  ((void) (0));
  pDest = &aMem[pOp->p3];
  ;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  aOffset = pC->aOffset;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pCrsr = pC->uc.pCursor;

  if( rc ) goto abort_due_to_error;
  if( pC->cacheStatus!=p->cacheCtr )
{

    if( pC->nullRow )
{

      if( pC->eCurType==3 )
{

        ((void) (0));
        pReg = &aMem[pC->uc.pseudoTableReg];
        ((void) (0));
        ((void) (0));
        pC->payloadSize = pC->szRow = avail = pReg->n;
        pC->aRow = (u8*)pReg->z;
      }else{
        sqlite3VdbeMemSetNull(pDest);
        goto op_column_out;
      }
    }else{
      ((void) (0));
      ((void) (0));
      if( pC->isTable==0 )
{

        ((void) (0));
        sqlite3BtreeKeySize(pCrsr, &payloadSize64);
        ((void) (0));



        ((void) (0));
        pC->aRow = sqlite3BtreeKeyFetch(pCrsr, &avail);
        pC->payloadSize = (u32)payloadSize64;
      }else{
        ((void) (0));
        sqlite3BtreeDataSize(pCrsr, &pC->payloadSize);
        ((void) (0));
        pC->aRow = sqlite3BtreeDataFetch(pCrsr, &avail);
      }
      ((void) (0));
      if( pC->payloadSize <= (u32)avail )
{

        pC->szRow = pC->payloadSize;
      }else if( pC->payloadSize > (u32)db->aLimit[0] )
{

        goto too_big;
      }else{
        pC->szRow = avail;
      }
    }
    pC->cacheStatus = p->cacheCtr;
    pC->iHdrOffset = (u8)((*(pC->aRow)<(u8)0x80)?((offset)=(u32)*(pC->aRow)),1:sqlite3GetVarint32((pC->aRow),(u32 *)&(offset)));
    pC->nHdrParsed = 0;
    aOffset[0] = offset;


    if( avail<offset )
{





      pC->aRow = 0;
      pC->szRow = 0;
# 76948 "sqlite3.c"
      if( offset > 98307 || offset > pC->payloadSize )
{

        rc = sqlite3CorruptError(76949);
        goto abort_due_to_error;
      }
    }





    ((void) (0));
    goto op_column_read_header;
  }




  if( pC->nHdrParsed<=p2 )
{




    op_column_read_header:
    if( pC->iHdrOffset<aOffset[0] )
{


      if( pC->aRow==0 )
{

        memset(&sMem, 0, sizeof(sMem));
        rc = sqlite3VdbeMemFromBtree(pCrsr, 0, aOffset[0], !pC->isTable, &sMem);
        if( rc!=0 ) goto abort_due_to_error;
        zData = (u8*)sMem.z;
      }else{
        zData = pC->aRow;
      }


      i = pC->nHdrParsed;
      offset64 = aOffset[i];
      zHdr = zData + pC->iHdrOffset;
      zEndHdr = zData + aOffset[0];
      ((void) (0));
      do{
        if( (t = zHdr[0])<0x80 )
{

          zHdr++;
          offset64 += sqlite3VdbeOneByteSerialTypeLen(t);
        }else{
          zHdr += sqlite3GetVarint32(zHdr, &t);
          offset64 += sqlite3VdbeSerialTypeLen(t);
        }
        pC->aType[i++] = t;
        aOffset[i] = (u32)(offset64 & 0xffffffff);
      }while( i<=p2 && zHdr<zEndHdr );
      pC->nHdrParsed = i;
      pC->iHdrOffset = (u32)(zHdr - zData);






      if( (zHdr>=zEndHdr && (zHdr>zEndHdr || offset64!=pC->payloadSize))
       || (offset64 > pC->payloadSize)
      )
{

        if( pC->aRow==0 ) sqlite3VdbeMemRelease(&sMem);
        rc = sqlite3CorruptError(77010);
        goto abort_due_to_error;
      }
      if( pC->aRow==0 ) sqlite3VdbeMemRelease(&sMem);

    }else{
      t = 0;
    }





    if( pC->nHdrParsed<=p2 )
{

      if( pOp->p4type==(-8) )
{

        sqlite3VdbeMemShallowCopy(pDest, pOp->p4.pMem, 0x0800);
      }else{
        sqlite3VdbeMemSetNull(pDest);
      }
      goto op_column_out;
    }
  }else{
    t = pC->aType[p2];
  }





  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( (((pDest)->flags&(0x2000|0x0400|0x0020|0x0040))!=0) ) sqlite3VdbeMemSetNull(pDest);
  ((void) (0));
  pDest->enc = encoding;
  if( pC->szRow>=aOffset[p2+1] )
{



    zData = pC->aRow + aOffset[p2];
    if( t<12 )
{

      sqlite3VdbeSerialGet(zData, t, pDest);
    }else{




      static const u16 aFlag[] = { 0x0010, 0x0002|0x0200 };
      pDest->n = len = (t-12)/2;
      if( pDest->szMalloc < len+2 )
{

        pDest->flags = 0x0001;
        if( sqlite3VdbeMemGrow(pDest, len+2, 0) ) goto no_mem;
      }else{
        pDest->z = pDest->zMalloc;
      }
      memcpy(pDest->z, zData, len);
      pDest->z[len] = 0;
      pDest->z[len+1] = 0;
      pDest->flags = aFlag[t&1];
    }
  }else{

    if( ((pOp->p5 & (0x40|0x80))!=0
          && ((t>=12 && (t&1)==0) || (pOp->p5 & 0x80)!=0))
     || (len = sqlite3VdbeSerialTypeLen(t))==0
    )
{







      static u8 aZero[8];
      sqlite3VdbeSerialGet(aZero, t, pDest);
    }else{
      rc = sqlite3VdbeMemFromBtree(pCrsr, aOffset[p2], len, !pC->isTable,
                                   pDest);
      if( rc!=0 ) goto abort_due_to_error;
      sqlite3VdbeSerialGet((const u8*)pDest->z, t, pDest);
      pDest->flags &= ~0x1000;
    }
  }

op_column_out:
  ;
  ;
  break;
}
# 77107 "sqlite3.c"
case 48: {
  const char *zAffinity;
  char cAff;

  zAffinity = pOp->p4.z;
  ((void) (0));
  ((void) (0));
  pIn1 = &aMem[pOp->p1];
  while( (cAff = *(zAffinity++))!=0 )
{

    ((void) (0));
    ((void) (0));
    applyAffinity(pIn1, cAff, encoding);
    pIn1++;
  }
  break;
}
# 77140 "sqlite3.c"
case 49: {
  u8 *zNewRecord;
  Mem *pRec;
  u64 nData;
  int nHdr;
  i64 nByte;
  i64 nZero;
  int nVarint;
  u32 serial_type;
  Mem *pData0;
  Mem *pLast;
  int nField;
  char *zAffinity;
  int file_format;
  int i;
  int j;
  u32 len;
# 77173 "sqlite3.c"
  nData = 0;
  nHdr = 0;
  nZero = 0;
  nField = pOp->p1;
  zAffinity = pOp->p4.z;
  ((void) (0));
  pData0 = &aMem[nField];
  nField = pOp->p2;
  pLast = &pData0[nField-1];
  file_format = p->minWriteFileFormat;


  ((void) (0));
  pOut = &aMem[pOp->p3];
  ;



  ((void) (0));
  if( zAffinity )
{

    pRec = pData0;
    do{
      applyAffinity(pRec++, *(zAffinity++), encoding);
      ((void) (0));
    }while( zAffinity[0] );
  }




  pRec = pLast;
  do{
    ((void) (0));
    pRec->uTemp = serial_type = sqlite3VdbeSerialType(pRec, file_format, &len);
    if( pRec->flags & 0x4000 )
{

      if( nData )
{

        if( sqlite3VdbeMemExpandBlob(pRec) ) goto no_mem;
      }else{
        nZero += pRec->u.nZero;
        len -= pRec->u.nZero;
      }
    }
    nData += len;
    ;
    ;
    nHdr += serial_type<=127 ? 1 : sqlite3VarintLen(serial_type);
  }while( (--pRec)>=pData0 );





  ;
  ;
  if( nHdr<=126 )
{


    nHdr += 1;
  }else{

    nVarint = sqlite3VarintLen(nHdr);
    nHdr += nVarint;
    if( nVarint<sqlite3VarintLen(nHdr) ) nHdr++;
  }
  nByte = nHdr+nData;
  if( nByte+nZero>db->aLimit[0] )
{

    goto too_big;
  }






  if( sqlite3VdbeMemClearAndResize(pOut, (int)nByte) )
{

    goto no_mem;
  }
  zNewRecord = (u8 *)pOut->z;


  i = (u8)(((u32)(nHdr)<(u32)0x80)?(*(zNewRecord)=(unsigned char)(nHdr)),1: sqlite3PutVarint((zNewRecord),(nHdr)));
  j = nHdr;
  ((void) (0));
  pRec = pData0;
  do{
    serial_type = pRec->uTemp;


    i += (u8)(((u32)(serial_type)<(u32)0x80)?(*(&zNewRecord[i])=(unsigned char)(serial_type)),1: sqlite3PutVarint((&zNewRecord[i]),(serial_type)));


    j += sqlite3VdbeSerialPut(&zNewRecord[j], pRec, serial_type);
  }while( (++pRec)<=pLast );
  ((void) (0));
  ((void) (0));

  ((void) (0));
  pOut->n = (int)nByte;
  pOut->flags = 0x0010;
  if( nZero )
{

    pOut->u.nZero = nZero;
    pOut->flags |= 0x4000;
  }
  pOut->enc = 1;
  ;
  ;
  break;
}
# 77288 "sqlite3.c"
case 50: {
  i64 nEntry;
  BtCursor *pCrsr;

  ((void) (0));
  pCrsr = p->apCsr[pOp->p1]->uc.pCursor;
  ((void) (0));
  nEntry = 0;
  rc = sqlite3BtreeCount(pCrsr, &nEntry);
  if( rc ) goto abort_due_to_error;
  pOut = out2Prerelease(p, pOp);
  pOut->u.i = nEntry;
  break;
}
# 77310 "sqlite3.c"
case 0: {
  int p1;
  char *zName;
  int nName;
  Savepoint *pNew;
  Savepoint *pSavepoint;
  Savepoint *pTmp;
  int iSavepoint;
  int ii;

  p1 = pOp->p1;
  zName = pOp->p4.z;




  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  if( p1==0 )
{

    if( db->nVdbeWrite>0 )
{




      sqlite3VdbeError(p, "cannot open savepoint - SQL statements in progress");
      rc = 5;
    }else{
      nName = sqlite3Strlen30(zName);






      ((void) (0));
      rc = sqlite3VtabSavepoint(db, 0,
                                db->nStatement+db->nSavepoint);
      if( rc!=0 ) goto abort_due_to_error;



      pNew = sqlite3DbMallocRawNN(db, sizeof(Savepoint)+nName+1);
      if( pNew )
{

        pNew->zName = (char *)&pNew[1];
        memcpy(pNew->zName, zName, nName+1);



        if( db->autoCommit )
{

          db->autoCommit = 0;
          db->isTransactionSavepoint = 1;
        }else{
          db->nSavepoint++;
        }


        pNew->pNext = db->pSavepoint;
        db->pSavepoint = pNew;
        pNew->nDeferredCons = db->nDeferredCons;
        pNew->nDeferredImmCons = db->nDeferredImmCons;
      }
    }
  }else{
    iSavepoint = 0;



    for(
      pSavepoint = db->pSavepoint;
      pSavepoint && sqlite3StrICmp(pSavepoint->zName, zName);
      pSavepoint = pSavepoint->pNext
    )
{

      iSavepoint++;
    }
    if( !pSavepoint )
{

      sqlite3VdbeError(p, "no such savepoint: %s", zName);
      rc = 1;
    }else if( db->nVdbeWrite>0 && p1==1 )
{




      sqlite3VdbeError(p, "cannot release savepoint - "
                          "SQL statements in progress");
      rc = 5;
    }else{





      int isTransaction = pSavepoint->pNext==0 && db->isTransactionSavepoint;
      if( isTransaction && p1==1 )
{

        if( (rc = sqlite3VdbeCheckFk(p, 1))!=0 )
{

          goto vdbe_return;
        }
        db->autoCommit = 1;
        if( sqlite3VdbeHalt(p)==5 )
{

          p->pc = (int)(pOp - aOp);
          db->autoCommit = 0;
          p->rc = rc = 5;
          goto vdbe_return;
        }
        db->isTransactionSavepoint = 0;
        rc = p->rc;
      }else{
        int isSchemaChange;
        iSavepoint = db->nSavepoint - iSavepoint - 1;
        if( p1==2 )
{

          isSchemaChange = (db->flags & 0x00000002)!=0;
          for(ii=0; ii<db->nDb; ii++)
{

            rc = sqlite3BtreeTripAllCursors(db->aDb[ii].pBt,
                                       (4 | (2<<8)),
                                       isSchemaChange==0);
            if( rc!=0 ) goto abort_due_to_error;
          }
        }else{
          isSchemaChange = 0;
        }
        for(ii=0; ii<db->nDb; ii++)
{

          rc = sqlite3BtreeSavepoint(db->aDb[ii].pBt, p1, iSavepoint);
          if( rc!=0 )
{

            goto abort_due_to_error;
          }
        }
        if( isSchemaChange )
{

          sqlite3ExpirePreparedStatements(db);
          sqlite3ResetAllSchemasOfConnection(db);
          db->flags = (db->flags | 0x00000002);
        }
      }



      while( db->pSavepoint!=pSavepoint )
{

        pTmp = db->pSavepoint;
        db->pSavepoint = pTmp->pNext;
        sqlite3DbFree(db, pTmp);
        db->nSavepoint--;
      }





      if( p1==1 )
{

        ((void) (0));
        db->pSavepoint = pSavepoint->pNext;
        sqlite3DbFree(db, pSavepoint);
        if( !isTransaction )
{

          db->nSavepoint--;
        }
      }else{
        db->nDeferredCons = pSavepoint->nDeferredCons;
        db->nDeferredImmCons = pSavepoint->nDeferredImmCons;
      }

      if( !isTransaction || p1==2 )
{

        rc = sqlite3VtabSavepoint(db, p1, iSavepoint);
        if( rc!=0 ) goto abort_due_to_error;
      }
    }
  }
  if( rc ) goto abort_due_to_error;

  break;
}
# 77489 "sqlite3.c"
case 1: {
  int desiredAutoCommit;
  int iRollback;

  desiredAutoCommit = pOp->p1;
  iRollback = pOp->p2;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  if( desiredAutoCommit!=db->autoCommit )
{

    if( iRollback )
{

      ((void) (0));
      sqlite3RollbackAll(db, (4 | (2<<8)));
      db->autoCommit = 1;
    }else if( desiredAutoCommit && db->nVdbeWrite>0 )
{




      sqlite3VdbeError(p, "cannot commit transaction - "
                          "SQL statements in progress");
      rc = 5;
      goto abort_due_to_error;
    }else if( (rc = sqlite3VdbeCheckFk(p, 1))!=0 )
{

      goto vdbe_return;
    }else{
      db->autoCommit = (u8)desiredAutoCommit;
    }
    if( sqlite3VdbeHalt(p)==5 )
{

      p->pc = (int)(pOp - aOp);
      db->autoCommit = (u8)(1-desiredAutoCommit);
      p->rc = rc = 5;
      goto vdbe_return;
    }
    ((void) (0));
    sqlite3CloseSavepoints(db);
    if( p->rc==0 )
{

      rc = 101;
    }else{
      rc = 1;
    }
    goto vdbe_return;
  }else{
    sqlite3VdbeError(p,
        (!desiredAutoCommit)?"cannot start a transaction within a transaction":(
        (iRollback)?"cannot rollback - no transaction is active":
                   "cannot commit - no transaction is active"));

    rc = 1;
    goto abort_due_to_error;
  }
  break;
}
# 77578 "sqlite3.c"
case 2: {
  Btree *pBt;
  int iMeta;
  int iGen;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  if( pOp->p2 && (db->flags & 0x02000000)!=0 )
{

    rc = 8;
    goto abort_due_to_error;
  }
  pBt = db->aDb[pOp->p1].pBt;

  if( pBt )
{

    rc = sqlite3BtreeBeginTrans(pBt, pOp->p2);
    ;
    ;
    if( (rc&0xff)==5 )
{

      p->pc = (int)(pOp - aOp);
      p->rc = rc;
      goto vdbe_return;
    }
    if( rc!=0 )
{

      goto abort_due_to_error;
    }

    if( pOp->p2 && p->usesStmtJournal
     && (db->autoCommit==0 || db->nVdbeRead>1)
    )
{

      ((void) (0));
      if( p->iStatement==0 )
{

        ((void) (0));
        db->nStatement++;
        p->iStatement = db->nSavepoint + db->nStatement;
      }

      rc = sqlite3VtabSavepoint(db, 0, p->iStatement-1);
      if( rc==0 )
{

        rc = sqlite3BtreeBeginStmt(pBt, p->iStatement);
      }




      p->nStmtDefCons = db->nDeferredCons;
      p->nStmtDefImmCons = db->nDeferredImmCons;
    }







    sqlite3BtreeGetMeta(pBt, 1, (u32 *)&iMeta);
    iGen = db->aDb[pOp->p1].pSchema->iGeneration;
  }else{
    iGen = iMeta = 0;
  }
  ((void) (0));
  if( pOp->p5 && (iMeta!=pOp->p3 || iGen!=pOp->p4.i) )
{

    sqlite3DbFree(db, p->zErrMsg);
    p->zErrMsg = sqlite3DbStrDup(db, "database schema has changed");
# 77656 "sqlite3.c"
    if( db->aDb[pOp->p1].pSchema->schema_cookie!=iMeta )
{

      sqlite3ResetOneSchema(db, pOp->p1);
    }
    p->expired = 1;
    rc = 17;
  }
  if( rc ) goto abort_due_to_error;
  break;
}
# 77678 "sqlite3.c"
case 51: {
  int iMeta;
  int iDb;
  int iCookie;

  ((void) (0));
  iDb = pOp->p1;
  iCookie = pOp->p3;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  sqlite3BtreeGetMeta(db->aDb[iDb].pBt, iCookie, (u32 *)&iMeta);
  pOut = out2Prerelease(p, pOp);
  pOut->u.i = iMeta;
  break;
}
# 77707 "sqlite3.c"
case 52: {
  Db *pDb;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pDb = &db->aDb[pOp->p1];
  ((void) (0));
  ((void) (0));

  rc = sqlite3BtreeUpdateMeta(pDb->pBt, pOp->p2, pOp->p3);
  if( pOp->p2==1 )
{


    pDb->pSchema->schema_cookie = pOp->p3;
    db->flags |= 0x00000002;
  }else if( pOp->p2==2 )
{


    pDb->pSchema->file_format = pOp->p3;
  }
  if( pOp->p1==1 )
{



    sqlite3ExpirePreparedStatements(db);
    p->expired = 0;
  }
  if( rc ) goto abort_due_to_error;
  break;
}
# 77801 "sqlite3.c"
case 53: {
  int nField;
  KeyInfo *pKeyInfo;
  int p2;
  int iDb;
  int wrFlag;
  Btree *pX;
  VdbeCursor *pCur;
  Db *pDb;

  ((void) (0));
  ((void) (0));
  pCur = p->apCsr[pOp->p1];
  if( pCur && pCur->pgnoRoot==(u32)pOp->p2 )
{

    ((void) (0));
    goto open_cursor_set_hints;
  }


case 54:
case 55:

  ((void) (0));
  ((void) (0));
  ((void) (0))
                             ;

  if( p->expired )
{

    rc = (4 | (2<<8));
    goto abort_due_to_error;
  }

  nField = 0;
  pKeyInfo = 0;
  p2 = pOp->p2;
  iDb = pOp->p3;
  ((void) (0));
  ((void) (0));
  pDb = &db->aDb[iDb];
  pX = pDb->pBt;
  ((void) (0));
  if( pOp->opcode==55 )
{

    ((void) (0));
    wrFlag = 0x00000004 | (pOp->p5 & 0x08);
    ((void) (0));
    if( pDb->pSchema->file_format < p->minWriteFileFormat )
{

      p->minWriteFileFormat = pDb->pSchema->file_format;
    }
  }else{
    wrFlag = 0;
  }
  if( pOp->p5 & 0x10 )
{

    ((void) (0));
    ((void) (0));
    pIn2 = &aMem[p2];
    ((void) (0));
    ((void) (0));
    sqlite3VdbeMemIntegerify(pIn2);
    p2 = (int)pIn2->u.i;




    ((void) (0));
  }
  if( pOp->p4type==(-6) )
{

    pKeyInfo = pOp->p4.pKeyInfo;
    ((void) (0));
    ((void) (0));
    nField = pKeyInfo->nField+pKeyInfo->nXField;
  }else if( pOp->p4type==(-14) )
{

    nField = pOp->p4.i;
  }
  ((void) (0));
  ((void) (0));
  ;
  pCur = allocateCursor(p, pOp->p1, nField, iDb, 0);
  if( pCur==0 ) goto no_mem;
  pCur->nullRow = 1;
  pCur->isOrdered = 1;
  pCur->pgnoRoot = p2;



  rc = sqlite3BtreeCursor(pX, p2, wrFlag, pKeyInfo, pCur->uc.pCursor);
  pCur->pKeyInfo = pKeyInfo;




  pCur->isTable = pOp->p4type!=(-6);

open_cursor_set_hints:
  ((void) (0));
  ((void) (0));
  ;



  sqlite3BtreeCursorHintFlags(pCur->uc.pCursor,
                               (pOp->p5 & (0x01|0x02)));
  if( rc ) goto abort_due_to_error;
  break;
}
# 77932 "sqlite3.c"
case 56:
case 57: {
  VdbeCursor *pCx;
  KeyInfo *pKeyInfo;

  static const int vfsFlags =
      0x00000002 |
      0x00000004 |
      0x00000010 |
      0x00000008 |
      0x00000400;
  ((void) (0));
  ((void) (0));
  pCx = allocateCursor(p, pOp->p1, pOp->p2, -1, 0);
  if( pCx==0 ) goto no_mem;
  pCx->nullRow = 1;
  pCx->isEphemeral = 1;
  rc = sqlite3BtreeOpen(db->pVfs, 0, db, &pCx->pBt,
                        1 | 4 | pOp->p5, vfsFlags);
  if( rc==0 )
{

    rc = sqlite3BtreeBeginTrans(pCx->pBt, 1);
  }
  if( rc==0 )
{






    if( (pKeyInfo = pOp->p4.pKeyInfo)!=0 )
{

      int pgno;
      ((void) (0));
      rc = sqlite3BtreeCreateTable(pCx->pBt, &pgno, 2 | pOp->p5);
      if( rc==0 )
{

        ((void) (0));
        ((void) (0));
        ((void) (0));
        pCx->pKeyInfo = pKeyInfo;
        rc = sqlite3BtreeCursor(pCx->pBt, pgno, 0x00000004,
                                pKeyInfo, pCx->uc.pCursor);
      }
      pCx->isTable = 0;
    }else{
      rc = sqlite3BtreeCursor(pCx->pBt, 1, 0x00000004,
                              0, pCx->uc.pCursor);
      pCx->isTable = 1;
    }
  }
  if( rc ) goto abort_due_to_error;
  pCx->isOrdered = (pOp->p5!=8);
  break;
}
# 77994 "sqlite3.c"
case 58: {
  VdbeCursor *pCx;

  ((void) (0));
  ((void) (0));
  pCx = allocateCursor(p, pOp->p1, pOp->p2, -1, 1);
  if( pCx==0 ) goto no_mem;
  pCx->pKeyInfo = pOp->p4.pKeyInfo;
  ((void) (0));
  ((void) (0));
  rc = sqlite3VdbeSorterInit(db, pOp->p3, pCx);
  if( rc ) goto abort_due_to_error;
  break;
}
# 78016 "sqlite3.c"
case 59: {
  VdbeCursor *pC;
  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  if( (pC->seqCount++)==0 )
{

    goto jump_to_p2;
  }
  break;
}
# 78043 "sqlite3.c"
case 60: {
  VdbeCursor *pCx;

  ((void) (0));
  ((void) (0));
  pCx = allocateCursor(p, pOp->p1, pOp->p3, -1, 3);
  if( pCx==0 ) goto no_mem;
  pCx->nullRow = 1;
  pCx->uc.pseudoTableReg = pOp->p2;
  pCx->isTable = 1;
  ((void) (0));
  break;
}






case 61: {
  ((void) (0));
  sqlite3VdbeFreeCursor(p, p->apCsr[pOp->p1]);
  p->apCsr[pOp->p1] = 0;
  break;
}
# 78175 "sqlite3.c"
case 63:
case 64:
case 65:
case 66: {
  int res;
  int oc;
  VdbeCursor *pC;
  UnpackedRecord r;
  int nField;
  i64 iKey;
  int eqOnly;

  ((void) (0));
  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  oc = pOp->opcode;
  eqOnly = 0;
  pC->nullRow = 0;




  if( pC->isTable )
{


    ((void) (0));




    pIn3 = &aMem[pOp->p3];
    if( (pIn3->flags & (0x0004|0x0008|0x0002))==0x0002 )
{

      applyNumericAffinity(pIn3, 0);
    }
    iKey = sqlite3VdbeIntValue(pIn3);



    if( (pIn3->flags & 0x0004)==0 )
{

      if( (pIn3->flags & 0x0008)==0 )
{



        ; goto jump_to_p2;
        break;
      }
# 78234 "sqlite3.c"
      if( pIn3->u.r<(double)iKey )
{

        ((void) (0));
        ((void) (0));
        ((void) (0));
        if( (oc & 0x0001)==(66 & 0x0001) ) oc--;
      }



      else if( pIn3->u.r>(double)iKey )
{

        ((void) (0));
        ((void) (0));
        ((void) (0));
        if( (oc & 0x0001)==(63 & 0x0001) ) oc++;
      }
    }
    rc = sqlite3BtreeMovetoUnpacked(pC->uc.pCursor, 0, (u64)iKey, 0, &res);
    pC->movetoTarget = iKey;
    if( rc!=0 )
{

      goto abort_due_to_error;
    }
  }else{




    if( sqlite3BtreeCursorHasHint(pC->uc.pCursor, 0x00000002) )
{

      eqOnly = 1;
      ((void) (0));
      ((void) (0));
      ((void) (0));
      ((void) (0));
      ((void) (0));
      ((void) (0));
    }

    nField = pOp->p4.i;
    ((void) (0));
    ((void) (0));
    r.pKeyInfo = pC->pKeyInfo;
    r.nField = (u16)nField;
# 78283 "sqlite3.c"
    r.default_rc = ((1 & (oc - 63)) ? -1 : +1);
    ((void) (0));
    ((void) (0));
    ((void) (0));
    ((void) (0));

    r.aMem = &aMem[pOp->p3];



    (((r.aMem)->flags&0x4000)?sqlite3VdbeMemExpandBlob(r.aMem):0);
    r.eqSeen = 0;
    rc = sqlite3BtreeMovetoUnpacked(pC->uc.pCursor, &r, 0, 0, &res);
    if( rc!=0 )
{

      goto abort_due_to_error;
    }
    if( eqOnly && r.eqSeen==0 )
{

      ((void) (0));
      goto seek_not_found;
    }
  }
  pC->deferredMoveto = 0;
  pC->cacheStatus = 0;



  if( oc>=65 )
{
 ((void) (0));
    if( res<0 || (res==0 && oc==66) )
{

      res = 0;
      rc = sqlite3BtreeNext(pC->uc.pCursor, &res);
      if( rc!=0 ) goto abort_due_to_error;
    }else{
      res = 0;
    }
  }else{
    ((void) (0));
    if( res>0 || (res==0 && oc==63) )
{

      res = 0;
      rc = sqlite3BtreePrevious(pC->uc.pCursor, &res);
      if( rc!=0 ) goto abort_due_to_error;
    }else{



      res = sqlite3BtreeEof(pC->uc.pCursor);
    }
  }
seek_not_found:
  ((void) (0));
  ;
  if( res )
{

    goto jump_to_p2;
  }else if( eqOnly )
{

    ((void) (0));
    pOp++;
  }
  break;
}
# 78402 "sqlite3.c"
case 67:
case 68:
case 69: {
  int alreadyExists;
  int takeJump;
  int ii;
  VdbeCursor *pC;
  int res;
  char *pFree;
  UnpackedRecord *pIdxKey;
  UnpackedRecord r;
  char aTempRec[(((sizeof(UnpackedRecord))+7)&~7) + sizeof(Mem)*4 + 7];





  ((void) (0));
  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));



  pIn3 = &aMem[pOp->p3];
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pFree = 0;
  if( pOp->p4.i>0 )
{

    r.pKeyInfo = pC->pKeyInfo;
    r.nField = (u16)pOp->p4.i;
    r.aMem = pIn3;
    for(ii=0; ii<r.nField; ii++)
{

      ((void) (0));
      (((&r.aMem[ii])->flags&0x4000)?sqlite3VdbeMemExpandBlob(&r.aMem[ii]):0);



    }
    pIdxKey = &r;
  }else{
    pIdxKey = sqlite3VdbeAllocUnpackedRecord(
        pC->pKeyInfo, aTempRec, sizeof(aTempRec), &pFree
    );
    if( pIdxKey==0 ) goto no_mem;
    ((void) (0));
    (((pIn3)->flags&0x4000)?sqlite3VdbeMemExpandBlob(pIn3):0);
    sqlite3VdbeRecordUnpack(pC->pKeyInfo, pIn3->n, pIn3->z, pIdxKey);
  }
  pIdxKey->default_rc = 0;
  takeJump = 0;
  if( pOp->opcode==67 )
{




    for(ii=0; ii<pIdxKey->nField; ii++)
{

      if( pIdxKey->aMem[ii].flags & 0x0001 )
{

        takeJump = 1;
        break;
      }
    }
  }
  rc = sqlite3BtreeMovetoUnpacked(pC->uc.pCursor, pIdxKey, 0, 0, &res);
  sqlite3DbFree(db, pFree);
  if( rc!=0 )
{

    goto abort_due_to_error;
  }
  pC->seekResult = res;
  alreadyExists = (res==0);
  pC->nullRow = 1-alreadyExists;
  pC->deferredMoveto = 0;
  pC->cacheStatus = 0;
  if( pOp->opcode==69 )
{

    ;
    if( alreadyExists ) goto jump_to_p2;
  }else{
    ;
    if( takeJump || !alreadyExists ) goto jump_to_p2;
  }
  break;
}
# 78504 "sqlite3.c"
case 70: {
  VdbeCursor *pC;
  BtCursor *pCrsr;
  int res;
  u64 iKey;

  pIn3 = &aMem[pOp->p3];
  ((void) (0));
  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));



  ((void) (0));
  ((void) (0));
  pCrsr = pC->uc.pCursor;
  ((void) (0));
  res = 0;
  iKey = pIn3->u.i;
  rc = sqlite3BtreeMovetoUnpacked(pCrsr, 0, iKey, 0, &res);
  ((void) (0));
  pC->movetoTarget = iKey;
  pC->nullRow = 0;
  pC->cacheStatus = 0;
  pC->deferredMoveto = 0;
  ;
  pC->seekResult = res;
  if( res!=0 )
{

    ((void) (0));
    if( pOp->p2==0 )
{

      rc = sqlite3CorruptError(78535);
    }else{
      goto jump_to_p2;
    }
  }
  if( rc ) goto abort_due_to_error;
  break;
}
# 78552 "sqlite3.c"
case 73: {
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pOut = out2Prerelease(p, pOp);
  pOut->u.i = p->apCsr[pOp->p1]->seqCount++;
  break;
}
# 78577 "sqlite3.c"
case 74: {
  i64 v;
  VdbeCursor *pC;
  int res;
  int cnt;
  Mem *pMem;
  VdbeFrame *pFrame;

  v = 0;
  res = 0;
  pOut = out2Prerelease(p, pOp);
  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  ((void) (0));
  {
# 78607 "sqlite3.c"
    ((void) (0));
# 78619 "sqlite3.c"
    if( !pC->useRandomRowid )
{

      rc = sqlite3BtreeLast(pC->uc.pCursor, &res);
      if( rc!=0 )
{

        goto abort_due_to_error;
      }
      if( res )
{

        v = 1;
      }else{
        ((void) (0));
        rc = sqlite3BtreeKeySize(pC->uc.pCursor, &v);
        ((void) (0));
        if( v>=(i64)( (((u64)0x7fffffff)<<32) | (u64)0xffffffff ) )
{

          pC->useRandomRowid = 1;
        }else{
          v++;
        }
      }
    }


    if( pOp->p3 )
{


      ((void) (0));
      if( p->pFrame )
{

        for(pFrame=p->pFrame; pFrame->pParent; pFrame=pFrame->pParent);

        ((void) (0));
        pMem = &pFrame->aMem[pOp->p3];
      }else{

        ((void) (0));
        pMem = &aMem[pOp->p3];
        ;
      }
      ((void) (0));

      ;
      sqlite3VdbeMemIntegerify(pMem);
      ((void) (0));
      if( pMem->u.i==(i64)( (((u64)0x7fffffff)<<32) | (u64)0xffffffff ) || pC->useRandomRowid )
{

        rc = 13;
        goto abort_due_to_error;
      }
      if( v<pMem->u.i+1 )
{

        v = pMem->u.i + 1;
      }
      pMem->u.i = v;
    }

    if( pC->useRandomRowid )
{





      ((void) (0));

      cnt = 0;
      do{
        sqlite3_randomness(sizeof(v), &v);
        v &= ((i64)( (((u64)0x7fffffff)<<32) | (u64)0xffffffff )>>1); v++;
      }while( ((rc = sqlite3BtreeMovetoUnpacked(pC->uc.pCursor, 0, (u64)v,
                                                 0, &res))==0)
            && (res==0)
            && (++cnt<100));
      if( rc ) goto abort_due_to_error;
      if( res==0 )
{

        rc = 13;
        goto abort_due_to_error;
      }
      ((void) (0));
    }
    pC->deferredMoveto = 0;
    pC->cacheStatus = 0;
  }
  pOut->u.i = v;
  break;
}
# 78743 "sqlite3.c"
case 75:
case 84: {
  Mem *pData;
  Mem *pKey;
  i64 iKey;
  VdbeCursor *pC;
  int nZero;
  int seekResult;
  const char *zDb;
  const char *zTbl;
  int op;

  pData = &aMem[pOp->p2];
  ((void) (0));
  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ;

  if( pOp->opcode==75 )
{

    pKey = &aMem[pOp->p3];
    ((void) (0));
    ((void) (0));
    ;
    iKey = pKey->u.i;
  }else{
    ((void) (0));
    iKey = pOp->p3;
  }

  if( pOp->p5 & 0x01 ) p->nChange++;
  if( pOp->p5 & 0x02 ) db->lastRowid = lastRowid = iKey;
  if( pData->flags & 0x0001 )
{

    pData->z = 0;
    pData->n = 0;
  }else{
    ((void) (0));
  }
  seekResult = ((pOp->p5 & 0x10) ? pC->seekResult : 0);
  if( pData->flags & 0x4000 )
{

    nZero = pData->u.nZero;
  }else{
    nZero = 0;
  }
  rc = sqlite3BtreeInsert(pC->uc.pCursor, 0, iKey,
                          pData->z, pData->n, nZero,
                          (pOp->p5 & 0x08)!=0, seekResult
  );
  pC->deferredMoveto = 0;
  pC->cacheStatus = 0;


  if( rc ) goto abort_due_to_error;
  if( db->xUpdateCallback && pOp->p4.z )
{

    zDb = db->aDb[pC->iDb].zName;
    zTbl = pOp->p4.z;
    op = ((pOp->p5 & 0x04) ? 23 : 18);
    ((void) (0));
    db->xUpdateCallback(db->pUpdateArg, op, zDb, zTbl, iKey);
    ((void) (0));
  }
  break;
}
# 78839 "sqlite3.c"
case 95: {
  VdbeCursor *pC;
  u8 hasUpdateCallback;

  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  hasUpdateCallback = db->xUpdateCallback && pOp->p4.z && pC->isTable;
  if( pOp->p5 && hasUpdateCallback )
{

    sqlite3BtreeKeySize(pC->uc.pCursor, &pC->movetoTarget);
  }
# 78867 "sqlite3.c"
  ((void) (0));
  ((void) (0));
  ((void) (0));
# 78885 "sqlite3.c"
  rc = sqlite3BtreeDelete(pC->uc.pCursor, pOp->p5);
  pC->cacheStatus = 0;


  if( rc ) goto abort_due_to_error;
  if( hasUpdateCallback )
{

    db->xUpdateCallback(db->pUpdateArg, 9,
                        db->aDb[pC->iDb].zName, pOp->p4.z, pC->movetoTarget);
    ((void) (0));
  }
  if( pOp->p2 & 0x01 ) p->nChange++;
  break;
}







case 98: {
  sqlite3VdbeSetChanges(db, p->nChange);
  p->nChange = 0;
  break;
}
# 78926 "sqlite3.c"
case 99: {
  VdbeCursor *pC;
  int res;
  int nKeyCol;

  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  pIn3 = &aMem[pOp->p3];
  nKeyCol = pOp->p4.i;
  res = 0;
  rc = sqlite3VdbeSorterCompare(pC, pIn3, nKeyCol, &res);
  ;
  if( rc ) goto abort_due_to_error;
  if( res ) goto jump_to_p2;
  break;
};
# 78956 "sqlite3.c"
case 100: {
  VdbeCursor *pC;

  pOut = &aMem[pOp->p2];
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  rc = sqlite3VdbeSorterRowkey(pC, pOut);
  ((void) (0));
  ((void) (0));
  if( rc ) goto abort_due_to_error;
  p->apCsr[pOp->p3]->cacheStatus = 0;
  break;
}
# 78992 "sqlite3.c"
case 101:
case 102: {
  VdbeCursor *pC;
  BtCursor *pCrsr;
  u32 n;
  i64 n64;

  pOut = &aMem[pOp->p2];
  ;


  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pCrsr = pC->uc.pCursor;
# 79021 "sqlite3.c"
  ((void) (0));
  ((void) (0));





  if( pC->isTable==0 )
{

    ((void) (0));
    sqlite3BtreeKeySize(pCrsr, &n64);
    ((void) (0));
    if( n64>db->aLimit[0] )
{

      goto too_big;
    }
    n = (u32)n64;
  }else{
    sqlite3BtreeDataSize(pCrsr, &n);
    ((void) (0));
    if( n>(u32)db->aLimit[0] )
{

      goto too_big;
    }
  }
  ;
  if( sqlite3VdbeMemClearAndResize(pOut, ((n)>(32)?(n):(32))) )
{

    goto no_mem;
  }
  pOut->n = n;
  ((pOut)->flags = ((pOut)->flags&~(0x81ff|0x4000))|0x0010);
  if( pC->isTable==0 )
{

    rc = sqlite3BtreeKey(pCrsr, 0, n, pOut->z);
  }else{
    rc = sqlite3BtreeData(pCrsr, 0, n, pOut->z);
  }
  if( rc ) goto abort_due_to_error;
  pOut->enc = 1;
  ;
  ;
  break;
}
# 79071 "sqlite3.c"
case 103: {
  VdbeCursor *pC;
  i64 v;
  sqlite3_vtab *pVtab;
  const sqlite3_module *pModule;

  pOut = out2Prerelease(p, pOp);
  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  if( pC->nullRow )
{

    pOut->flags = 0x0001;
    break;
  }else if( pC->deferredMoveto )
{

    v = pC->movetoTarget;

  }else if( pC->eCurType==2 )
{

    ((void) (0));
    pVtab = pC->uc.pVCur->pVtab;
    pModule = pVtab->pModule;
    ((void) (0));
    rc = pModule->xRowid(pC->uc.pVCur, &v);
    sqlite3VtabImportErrmsg(p, pVtab);
    if( rc ) goto abort_due_to_error;

  }else{
    ((void) (0));
    ((void) (0));
    rc = sqlite3VdbeCursorRestore(pC);
    if( rc ) goto abort_due_to_error;
    if( pC->nullRow )
{

      pOut->flags = 0x0001;
      break;
    }
    rc = sqlite3BtreeKeySize(pC->uc.pCursor, &v);
    ((void) (0));
  }
  pOut->u.i = v;
  break;
}







case 104: {
  VdbeCursor *pC;

  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  pC->nullRow = 1;
  pC->cacheStatus = 0;
  if( pC->eCurType==0 )
{

    ((void) (0));
    sqlite3BtreeClearCursor(pC->uc.pCursor);
  }
  break;
}
# 79146 "sqlite3.c"
case 105: {
  VdbeCursor *pC;
  BtCursor *pCrsr;
  int res;

  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  pCrsr = pC->uc.pCursor;
  res = 0;
  ((void) (0));
  rc = sqlite3BtreeLast(pCrsr, &res);
  pC->nullRow = (u8)res;
  pC->deferredMoveto = 0;
  pC->cacheStatus = 0;
  pC->seekResult = pOp->p3;



  if( rc ) goto abort_due_to_error;
  if( pOp->p2>0 )
{

    ;
    if( res ) goto jump_to_p2;
  }
  break;
}
# 79187 "sqlite3.c"
case 106:
case 107: {




  p->aCounter[2]++;

}
# 79208 "sqlite3.c"
case 108: {
  VdbeCursor *pC;
  BtCursor *pCrsr;
  int res;

  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  res = 1;



  if( ((pC)->eCurType==1) )
{

    rc = sqlite3VdbeSorterRewind(pC, &res);
  }else{
    ((void) (0));
    pCrsr = pC->uc.pCursor;
    ((void) (0));
    rc = sqlite3BtreeFirst(pCrsr, &res);
    pC->deferredMoveto = 0;
    pC->cacheStatus = 0;
  }
  if( rc ) goto abort_due_to_error;
  pC->nullRow = (u8)res;
  ((void) (0));
  ;
  if( res ) goto jump_to_p2;
  break;
}
# 79302 "sqlite3.c"
case 3: {
  VdbeCursor *pC;
  int res;

  pC = p->apCsr[pOp->p1];
  ((void) (0));
  res = 0;
  rc = sqlite3VdbeSorterNext(db, pC, &res);
  goto next_tail;
case 4:
case 5:
  if( p->apCsr[pOp->p1]==0 ) break;

case 6:
case 7:
  ((void) (0));
  ((void) (0));
  pC = p->apCsr[pOp->p1];
  res = pOp->p3;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));



  ((void) (0))

                                                        ;
  ((void) (0))

                               ;

  rc = pOp->p4.xAdvance(pC->uc.pCursor, &res);
next_tail:
  pC->cacheStatus = 0;
  ;
  if( rc ) goto abort_due_to_error;
  if( res==0 )
{

    pC->nullRow = 0;
    p->aCounter[pOp->p5]++;



    goto jump_to_p2_and_check_for_interrupt;
  }else{
    pC->nullRow = 1;
  }
  goto check_for_interrupt;
}
# 79379 "sqlite3.c"
case 109:
case 110: {
  VdbeCursor *pC;
  int nKey;
  const char *zKey;

  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  pIn2 = &aMem[pOp->p2];
  ((void) (0));
  if( pOp->p5 & 0x01 ) p->nChange++;
  ((void) (0));
  ((void) (0));
  rc = (((pIn2)->flags&0x4000)?sqlite3VdbeMemExpandBlob(pIn2):0);
  if( rc ) goto abort_due_to_error;
  if( pOp->opcode==109 )
{

    rc = sqlite3VdbeSorterWrite(pC, pIn2);
  }else{
    nKey = pIn2->n;
    zKey = pIn2->z;
    rc = sqlite3BtreeInsert(pC->uc.pCursor, zKey, nKey, "", 0, 0, pOp->p3,
        ((pOp->p5 & 0x10) ? pC->seekResult : 0)
        );
    ((void) (0));
    pC->cacheStatus = 0;
  }
  if( rc) goto abort_due_to_error;
  break;
}
# 79418 "sqlite3.c"
case 111: {
  VdbeCursor *pC;
  BtCursor *pCrsr;
  int res;
  UnpackedRecord r;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  pCrsr = pC->uc.pCursor;
  ((void) (0));
  ((void) (0));
  r.pKeyInfo = pC->pKeyInfo;
  r.nField = (u16)pOp->p3;
  r.default_rc = 0;
  r.aMem = &aMem[pOp->p2];
  rc = sqlite3BtreeMovetoUnpacked(pCrsr, &r, 0, 0, &res);
  if( rc ) goto abort_due_to_error;
  if( res==0 )
{

    rc = sqlite3BtreeDelete(pCrsr, 0x04);
    if( rc ) goto abort_due_to_error;
  }
  ((void) (0));
  pC->cacheStatus = 0;
  break;
}
# 79476 "sqlite3.c"
case 112:
case 113: {
  VdbeCursor *pC;
  VdbeCursor *pTabCur;
  i64 rowid;

  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));



  rc = sqlite3VdbeCursorRestore(pC);




  if( (rc!=0) ) goto abort_due_to_error;

  if( !pC->nullRow )
{

    rowid = 0;
    rc = sqlite3VdbeIdxRowid(db, pC->uc.pCursor, &rowid);
    if( rc!=0 )
{

      goto abort_due_to_error;
    }
    if( pOp->opcode==112 )
{

      ((void) (0));
      pTabCur = p->apCsr[pOp->p3];
      ((void) (0));
      ((void) (0));
      ((void) (0));
      ((void) (0));
      pTabCur->nullRow = 0;
      pTabCur->movetoTarget = rowid;
      pTabCur->deferredMoveto = 1;
      ((void) (0));
      pTabCur->aAltMap = pOp->p4.ai;
      pTabCur->pAltCursor = pC;
    }else{
      pOut = out2Prerelease(p, pOp);
      pOut->u.i = rowid;
      pOut->flags = 0x0004;
    }
  }else{
    ((void) (0));
    sqlite3VdbeMemSetNull(&aMem[pOp->p2]);
  }
  break;
}
# 79575 "sqlite3.c"
case 114:
case 115:
case 116:
case 117: {
  VdbeCursor *pC;
  int res;
  UnpackedRecord r;

  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));
  r.pKeyInfo = pC->pKeyInfo;
  r.nField = (u16)pOp->p4.i;
  if( pOp->opcode<116 )
{

    ((void) (0));
    r.default_rc = -1;
  }else{
    ((void) (0));
    r.default_rc = 0;
  }
  r.aMem = &aMem[pOp->p3];



  res = 0;
  rc = sqlite3VdbeIdxKeyCompare(db, pC, &r, &res);
  ((void) (0));
  if( (pOp->opcode&1)==(116&1) )
{

    ((void) (0));
    res = -res;
  }else{
    ((void) (0));
    res++;
  }
  ;
  if( rc ) goto abort_due_to_error;
  if( res>0 ) goto jump_to_p2;
  break;
}
# 79641 "sqlite3.c"
case 118: {
  int iMoved;
  int iDb;

  ((void) (0));
  ((void) (0));
  pOut = out2Prerelease(p, pOp);
  pOut->flags = 0x0001;
  if( db->nVdbeRead > db->nVDestroy+1 )
{

    rc = 6;
    p->errorAction = 2;
    goto abort_due_to_error;
  }else{
    iDb = pOp->p3;
    ((void) (0));
    iMoved = 0;
    rc = sqlite3BtreeDropTable(db->aDb[iDb].pBt, pOp->p1, &iMoved);
    pOut->flags = 0x0004;
    pOut->u.i = iMoved;
    if( rc ) goto abort_due_to_error;

    if( iMoved!=0 )
{

      sqlite3RootPageMoved(db, iDb, iMoved, pOp->p1);

      ((void) (0));
      resetSchemaOnFault = iDb+1;
    }

  }
  break;
}
# 79691 "sqlite3.c"
case 119: {
  int nChange;

  nChange = 0;
  ((void) (0));
  ((void) (0));
  rc = sqlite3BtreeClearTable(
      db->aDb[pOp->p2].pBt, pOp->p1, (pOp->p3 ? &nChange : 0)
  );
  if( pOp->p3 )
{

    p->nChange += nChange;
    if( pOp->p3>0 )
{

      ((void) (0));
      ;
      aMem[pOp->p3].u.i += nChange;
    }
  }
  if( rc ) goto abort_due_to_error;
  break;
}
# 79720 "sqlite3.c"
case 120: {
  VdbeCursor *pC;

  ((void) (0));
  pC = p->apCsr[pOp->p1];
  ((void) (0));
  if( ((pC)->eCurType==1) )
{

    sqlite3VdbeSorterReset(db, pC->uc.pSorter);
  }else{
    ((void) (0));
    ((void) (0));
    rc = sqlite3BtreeClearTableOfCursor(pC->uc.pCursor);
    if( rc ) goto abort_due_to_error;
  }
  break;
}
# 79761 "sqlite3.c"
case 121:
case 122: {
  int pgno;
  int flags;
  Db *pDb;

  pOut = out2Prerelease(p, pOp);
  pgno = 0;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pDb = &db->aDb[pOp->p1];
  ((void) (0));
  if( pOp->opcode==122 )
{


    flags = 1;
  }else{
    flags = 2;
  }
  rc = sqlite3BtreeCreateTable(pDb->pBt, &pgno, flags);
  if( rc ) goto abort_due_to_error;
  pOut->u.i = pgno;
  break;
}
# 79794 "sqlite3.c"
case 123: {
  int iDb;
  const char *zMaster;
  char *zSql;
  InitData initData;
# 79810 "sqlite3.c"
  iDb = pOp->p1;
  ((void) (0));
  ((void) (0));
                                 {
    zMaster = ((!0)&&(iDb==1)?"sqlite_temp_master":"sqlite_master");
    initData.db = db;
    initData.iDb = pOp->p1;
    initData.pzErrMsg = &p->zErrMsg;
    zSql = sqlite3MPrintf(db,
       "SELECT name, rootpage, sql FROM '%q'.%s WHERE %s ORDER BY rowid",
       db->aDb[iDb].zName, zMaster, pOp->p4.z);
    if( zSql==0 )
{

      rc = 7;
    }else{
      ((void) (0));
      db->init.busy = 1;
      initData.rc = 0;
      ((void) (0));
      rc = sqlite3_exec(db, zSql, sqlite3InitCallback, &initData, 0);
      if( rc==0 ) rc = initData.rc;
      sqlite3DbFree(db, zSql);
      db->init.busy = 0;
    }
  }
  if( rc )
{

    sqlite3ResetAllSchemasOfConnection(db);
    if( rc==7 )
{

      goto no_mem;
    }
    goto abort_due_to_error;
  }
  break;
}
# 79851 "sqlite3.c"
case 124: {
  ((void) (0));
  rc = sqlite3AnalysisLoad(db, pOp->p1);
  if( rc ) goto abort_due_to_error;
  break;
}
# 79867 "sqlite3.c"
case 125: {
  sqlite3UnlinkAndDeleteTable(db, pOp->p1, pOp->p4.z);
  break;
}
# 79880 "sqlite3.c"
case 126: {
  sqlite3UnlinkAndDeleteIndex(db, pOp->p1, pOp->p4.z);
  break;
}
# 79893 "sqlite3.c"
case 127: {
  sqlite3UnlinkAndDeleteTrigger(db, pOp->p1, pOp->p4.z);
  break;
}
# 79919 "sqlite3.c"
case 128: {
  int nRoot;
  int *aRoot;
  int nErr;
  char *z;
  Mem *pnErr;

  ((void) (0));
  nRoot = pOp->p2;
  aRoot = pOp->p4.ai;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pnErr = &aMem[pOp->p3];
  ((void) (0));
  ((void) (0));
  pIn1 = &aMem[pOp->p1];
  ((void) (0));
  ((void) (0));
  z = sqlite3BtreeIntegrityCheck(db->aDb[pOp->p5].pBt, aRoot, nRoot,
                                 (int)pnErr->u.i, &nErr);
  pnErr->u.i -= nErr;
  sqlite3VdbeMemSetNull(pIn1);
  if( nErr==0 )
{

    ((void) (0));
  }else if( z==0 )
{

    goto no_mem;
  }else{
    sqlite3VdbeMemSetStr(pIn1, z, -1, 1, sqlite3_free);
  }
  ;
  sqlite3VdbeChangeEncoding(pIn1, encoding);
  break;
}
# 79963 "sqlite3.c"
case 129: {
  pIn1 = &aMem[pOp->p1];
  pIn2 = &aMem[pOp->p2];
  ((void) (0));
  if( (pIn1->flags & 0x0020)==0 )
{

    sqlite3VdbeMemSetRowSet(pIn1);
    if( (pIn1->flags & 0x0020)==0 ) goto no_mem;
  }
  sqlite3RowSetInsert(pIn1->u.pRowSet, pIn2->u.i);
  break;
}
# 79982 "sqlite3.c"
case 130: {
  i64 val;

  pIn1 = &aMem[pOp->p1];
  if( (pIn1->flags & 0x0020)==0
   || sqlite3RowSetNext(pIn1->u.pRowSet, &val)==0
  )
{


    sqlite3VdbeMemSetNull(pIn1);
    ;
    goto jump_to_p2_and_check_for_interrupt;
  }else{

    ;
    sqlite3VdbeMemSetInt64(&aMem[pOp->p3], val);
  }
  goto check_for_interrupt;
}
# 80025 "sqlite3.c"
case 131: {
  int iSet;
  int exists;

  pIn1 = &aMem[pOp->p1];
  pIn3 = &aMem[pOp->p3];
  iSet = pOp->p4.i;
  ((void) (0));




  if( (pIn1->flags & 0x0020)==0 )
{

    sqlite3VdbeMemSetRowSet(pIn1);
    if( (pIn1->flags & 0x0020)==0 ) goto no_mem;
  }

  ((void) (0));
  ((void) (0));
  if( iSet )
{

    exists = sqlite3RowSetTest(pIn1->u.pRowSet, iSet, pIn3->u.i);
    ;
    if( exists ) goto jump_to_p2;
  }
  if( iSet>=0 )
{

    sqlite3RowSetInsert(pIn1->u.pRowSet, pIn3->u.i);
  }
  break;
}
# 80073 "sqlite3.c"
case 132: {
  int nMem;
  int nByte;
  Mem *pRt;
  Mem *pMem;
  Mem *pEnd;
  VdbeFrame *pFrame;
  SubProgram *pProgram;
  void *t;

  pProgram = pOp->p4.pProgram;
  pRt = &aMem[pOp->p3];
  ((void) (0));
# 80098 "sqlite3.c"
  if( pOp->p5 )
{

    t = pProgram->token;
    for(pFrame=p->pFrame; pFrame && pFrame->token!=t; pFrame=pFrame->pParent);
    if( pFrame ) break;
  }

  if( p->nFrame>=db->aLimit[10] )
{

    rc = 1;
    sqlite3VdbeError(p, "too many levels of trigger recursion");
    goto abort_due_to_error;
  }





  if( (pRt->flags&0x0040)==0 )
{






    nMem = pProgram->nMem + pProgram->nCsr;
    ((void) (0));
    if( pProgram->nCsr==0 ) nMem++;
    nByte = (((sizeof(VdbeFrame))+7)&~7)
              + nMem * sizeof(Mem)
              + pProgram->nCsr * sizeof(VdbeCursor *)
              + pProgram->nOnce * sizeof(u8);
    pFrame = sqlite3DbMallocZero(db, nByte);
    if( !pFrame )
{

      goto no_mem;
    }
    sqlite3VdbeMemRelease(pRt);
    pRt->flags = 0x0040;
    pRt->u.pFrame = pFrame;

    pFrame->v = p;
    pFrame->nChildMem = nMem;
    pFrame->nChildCsr = pProgram->nCsr;
    pFrame->pc = (int)(pOp - aOp);
    pFrame->aMem = p->aMem;
    pFrame->nMem = p->nMem;
    pFrame->apCsr = p->apCsr;
    pFrame->nCursor = p->nCursor;
    pFrame->aOp = p->aOp;
    pFrame->nOp = p->nOp;
    pFrame->token = pProgram->token;
    pFrame->aOnceFlag = p->aOnceFlag;
    pFrame->nOnceFlag = p->nOnceFlag;




    pEnd = &((Mem *)&((u8 *)pFrame)[(((sizeof(VdbeFrame))+7)&~7)])[pFrame->nChildMem];
    for(pMem=((Mem *)&((u8 *)pFrame)[(((sizeof(VdbeFrame))+7)&~7)]); pMem!=pEnd; pMem++)
{

      pMem->flags = 0x0080;
      pMem->db = db;
    }
  }else{
    pFrame = pRt->u.pFrame;
    ((void) (0))
                                                                       ;
    ((void) (0));
    ((void) (0));
  }

  p->nFrame++;
  pFrame->pParent = p->pFrame;
  pFrame->lastRowid = lastRowid;
  pFrame->nChange = p->nChange;
  pFrame->nDbChange = p->db->nChange;
  ((void) (0));
  pFrame->pAuxData = p->pAuxData;
  p->pAuxData = 0;
  p->nChange = 0;
  p->pFrame = pFrame;
  p->aMem = aMem = ((Mem *)&((u8 *)pFrame)[(((sizeof(VdbeFrame))+7)&~7)]);
  p->nMem = pFrame->nChildMem;
  p->nCursor = (u16)pFrame->nChildCsr;
  p->apCsr = (VdbeCursor **)&aMem[p->nMem];
  p->aOp = aOp = pProgram->aOp;
  p->nOp = pProgram->nOp;
  p->aOnceFlag = (u8 *)&p->apCsr[p->nCursor];
  p->nOnceFlag = pProgram->nOnce;



  pOp = &aOp[-1];
  memset(p->aOnceFlag, 0, p->nOnceFlag);

  break;
}
# 80204 "sqlite3.c"
case 134: {
  VdbeFrame *pFrame;
  Mem *pIn;
  pOut = out2Prerelease(p, pOp);
  pFrame = p->pFrame;
  pIn = &pFrame->aMem[pOp->p1 + pFrame->aOp[pFrame->pc].p1];
  sqlite3VdbeMemShallowCopy(pOut, pIn, 0x1000);
  break;
}
# 80225 "sqlite3.c"
case 135: {
  if( db->flags & 0x01000000 )
{

    db->nDeferredImmCons += pOp->p2;
  }else if( pOp->p1 )
{

    db->nDeferredCons += pOp->p2;
  }else{
    p->nFkConstraint += pOp->p2;
  }
  break;
}
# 80248 "sqlite3.c"
case 136: {
  if( pOp->p1 )
{

    ;
    if( db->nDeferredCons==0 && db->nDeferredImmCons==0 ) goto jump_to_p2;
  }else{
    ;
    if( p->nFkConstraint==0 && db->nDeferredImmCons==0 ) goto jump_to_p2;
  }
  break;
}
# 80272 "sqlite3.c"
case 137: {
  VdbeFrame *pFrame;
  if( p->pFrame )
{

    for(pFrame=p->pFrame; pFrame->pParent; pFrame=pFrame->pParent);
    pIn1 = &pFrame->aMem[pOp->p1];
  }else{
    pIn1 = &aMem[pOp->p1];
  }
  ((void) (0));
  sqlite3VdbeMemIntegerify(pIn1);
  pIn2 = &aMem[pOp->p2];
  sqlite3VdbeMemIntegerify(pIn2);
  if( pIn1->u.i<pIn2->u.i)
{

    pIn1->u.i = pIn2->u.i;
  }
  break;
}
# 80301 "sqlite3.c"
case 138: {
  pIn1 = &aMem[pOp->p1];
  ((void) (0));
  ;
  if( pIn1->u.i>0 )
{

    pIn1->u.i -= pOp->p3;
    goto jump_to_p2;
  }
  break;
}
# 80330 "sqlite3.c"
case 139: {
  pIn1 = &aMem[pOp->p1];
  pIn3 = &aMem[pOp->p3];
  pOut = out2Prerelease(p, pOp);
  ((void) (0));
  ((void) (0));
  pOut->u.i = pIn1->u.i<=0 ? -1 : pIn1->u.i+(pIn3->u.i>0?pIn3->u.i:0);
  break;
}
# 80348 "sqlite3.c"
case 140: {
  pIn1 = &aMem[pOp->p1];
  ((void) (0));
  ;
  if( pIn1->u.i )
{

     pIn1->u.i -= pOp->p3;
     goto jump_to_p2;
  }
  break;
}







case 141: {
  pIn1 = &aMem[pOp->p1];
  ((void) (0));
  pIn1->u.i--;
  ;
  if( pIn1->u.i==0 ) goto jump_to_p2;
  break;
}
# 80382 "sqlite3.c"
case 142: {
  pIn1 = &aMem[pOp->p1];
  ((void) (0));
  ;
  if( (pIn1->u.i++)==0 ) goto jump_to_p2;
  break;
}
# 80418 "sqlite3.c"
case 143: {
  int n;
  sqlite3_context *pCtx;

  ((void) (0));
  n = pOp->p5;
  ((void) (0));
  ((void) (0));
  ((void) (0));
  pCtx = sqlite3DbMallocRawNN(db, sizeof(*pCtx) + (n-1)*sizeof(sqlite3_value*));
  if( pCtx==0 ) goto no_mem;
  pCtx->pMem = 0;
  pCtx->pFunc = pOp->p4.pFunc;
  pCtx->iOp = (int)(pOp - aOp);
  pCtx->pVdbe = p;
  pCtx->argc = n;
  pOp->p4type = (-20);
  pOp->p4.pCtx = pCtx;
  pOp->opcode = 144;

}
case 144: {
  int i;
  sqlite3_context *pCtx;
  Mem *pMem;
  Mem t;

  ((void) (0));
  pCtx = pOp->p4.pCtx;
  pMem = &aMem[pOp->p3];





  if( pCtx->pMem != pMem )
{

    pCtx->pMem = pMem;
    for(i=pCtx->argc-1; i>=0; i--) pCtx->argv[i] = &aMem[pOp->p2+i];
  }
# 80465 "sqlite3.c"
  pMem->n++;
  sqlite3VdbeMemInit(&t, db, 0x0001);
  pCtx->pOut = &t;
  pCtx->fErrorOrAux = 0;
  pCtx->skipFlag = 0;
  (pCtx->pFunc->xSFunc)(pCtx,pCtx->argc,pCtx->argv);
  if( pCtx->fErrorOrAux )
{

    if( pCtx->isError )
{

      sqlite3VdbeError(p, "%s", sqlite3_value_text(&t));
      rc = pCtx->isError;
    }
    sqlite3VdbeMemRelease(&t);
    if( rc ) goto abort_due_to_error;
  }else{
    ((void) (0));
  }
  if( pCtx->skipFlag )
{

    ((void) (0));
    i = pOp[-1].p1;
    if( i ) sqlite3VdbeMemSetInt64(&aMem[i], 1);
  }
  break;
}
# 80502 "sqlite3.c"
case 145: {
  Mem *pMem;
  ((void) (0));
  pMem = &aMem[pOp->p1];
  ((void) (0));
  rc = sqlite3VdbeMemFinalize(pMem, pOp->p4.pFunc);
  if( rc )
{

    sqlite3VdbeError(p, "%s", sqlite3_value_text(pMem));
    goto abort_due_to_error;
  }
  sqlite3VdbeChangeEncoding(pMem, encoding);
  ;
  if( sqlite3VdbeMemTooBig(pMem) )
{

    goto too_big;
  }
  break;
}
# 80532 "sqlite3.c"
case 8: {
  int i;
  int aRes[3];
  Mem *pMem;

  ((void) (0));
  aRes[0] = 0;
  aRes[1] = aRes[2] = -1;
  ((void) (0))



   ;
  rc = sqlite3Checkpoint(db, pOp->p1, pOp->p2, &aRes[1], &aRes[2]);
  if( rc )
{

    if( rc!=5 ) goto abort_due_to_error;
    rc = 0;
    aRes[0] = 1;
  }
  for(i=0, pMem = &aMem[pOp->p3]; i<3; i++, pMem++)
{

    sqlite3VdbeMemSetInt64(pMem, (i64)aRes[i]);
  }
  break;
};
# 80570 "sqlite3.c"
case 9: {
  Btree *pBt;
  Pager *pPager;
  int eNew;
  int eOld;

  const char *zFilename;


  pOut = out2Prerelease(p, pOp);
  eNew = pOp->p3;
  ((void) (0))






   ;
  ((void) (0));
  ((void) (0));

  pBt = db->aDb[pOp->p1].pBt;
  pPager = sqlite3BtreePager(pBt);
  eOld = sqlite3PagerGetJournalMode(pPager);
  if( eNew==(-1) ) eNew = eOld;
  if( !sqlite3PagerOkToChangeJournalMode(pPager) ) eNew = eOld;


  zFilename = sqlite3PagerFilename(pPager, 1);




  if( eNew==5
   && (sqlite3Strlen30(zFilename)==0
       || !sqlite3PagerWalSupported(pPager))
  )
{

    eNew = eOld;
  }

  if( (eNew!=eOld)
   && (eOld==5 || eNew==5)
  )
{

    if( !db->autoCommit || db->nVdbeRead>1 )
{

      rc = 1;
      sqlite3VdbeError(p,
          "cannot change %s wal mode from within a transaction",
          (eNew==5 ? "into" : "out of")
      );
      goto abort_due_to_error;
    }else{

      if( eOld==5 )
{






        rc = sqlite3PagerCloseWal(pPager);
        if( rc==0 )
{

          sqlite3PagerSetJournalMode(pPager, eNew);
        }
      }else if( eOld==4 )
{



        sqlite3PagerSetJournalMode(pPager, 2);
      }




      ((void) (0));
      if( rc==0 )
{

        rc = sqlite3BtreeSetVersion(pBt, (eNew==5 ? 2 : 1));
      }
    }
  }


  if( rc ) eNew = eOld;
  eNew = sqlite3PagerSetJournalMode(pPager, eNew);

  pOut->flags = 0x0002|0x0800|0x0200;
  pOut->z = (char *)sqlite3JournalModename(eNew);
  pOut->n = sqlite3Strlen30(pOut->z);
  pOut->enc = 1;
  sqlite3VdbeChangeEncoding(pOut, encoding);
  if( rc ) goto abort_due_to_error;
  break;
};
# 80670 "sqlite3.c"
case 10: {
  ((void) (0));
  rc = sqlite3RunVacuum(&p->zErrMsg, db);
  if( rc ) goto abort_due_to_error;
  break;
}
# 80685 "sqlite3.c"
case 146: {
  Btree *pBt;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  pBt = db->aDb[pOp->p1].pBt;
  rc = sqlite3BtreeIncrVacuum(pBt);
  ;
  if( rc )
{

    if( rc!=101 ) goto abort_due_to_error;
    rc = 0;
    goto jump_to_p2;
  }
  break;
}
# 80713 "sqlite3.c"
case 147: {
  if( !pOp->p1 )
{

    sqlite3ExpirePreparedStatements(db);
  }else{
    p->expired = 1;
  }
  break;
}
# 80738 "sqlite3.c"
case 148: {
  u8 isWriteLock = (u8)pOp->p3;
  if( isWriteLock || 0==(db->flags&0x0004000) )
{

    int p1 = pOp->p1;
    ((void) (0));
    ((void) (0));
    ((void) (0));
    rc = sqlite3BtreeLockTable(db->aDb[p1].pBt, pOp->p2, isWriteLock);
    if( rc )
{

      if( (rc&0xFF)==6 )
{

        const char *z = pOp->p4.z;
        sqlite3VdbeError(p, "database table is locked: %s", z);
      }
      goto abort_due_to_error;
    }
  }
  break;
}
# 80768 "sqlite3.c"
case 149: {
  VTable *pVTab;
  pVTab = pOp->p4.pVtab;
  rc = sqlite3VtabBegin(db, pVTab);
  if( pVTab ) sqlite3VtabImportErrmsg(p, pVTab->pVtab);
  if( rc ) goto abort_due_to_error;
  break;
}
# 80784 "sqlite3.c"
case 150: {
  Mem sMem;
  const char *zTab;

  memset(&sMem, 0, sizeof(sMem));
  sMem.db = db;


  ((void) (0));
  ((void) (0));
  rc = sqlite3VdbeMemCopy(&sMem, &aMem[pOp->p2]);
  ((void) (0));
  zTab = (const char*)sqlite3_value_text(&sMem);
  ((void) (0));
  if( zTab )
{

    rc = sqlite3VtabCallCreate(db, pOp->p1, zTab, &p->zErrMsg);
  }
  sqlite3VdbeMemRelease(&sMem);
  if( rc ) goto abort_due_to_error;
  break;
}
# 80813 "sqlite3.c"
case 151: {
  db->nVDestroy++;
  rc = sqlite3VtabCallDestroy(db, pOp->p1, pOp->p4.z);
  db->nVDestroy--;
  if( rc ) goto abort_due_to_error;
  break;
}
# 80829 "sqlite3.c"
case 152: {
  VdbeCursor *pCur;
  sqlite3_vtab_cursor *pVCur;
  sqlite3_vtab *pVtab;
  const sqlite3_module *pModule;

  ((void) (0));
  pCur = 0;
  pVCur = 0;
  pVtab = pOp->p4.pVtab->pVtab;
  if( pVtab==0 || (pVtab->pModule==0) )
{

    rc = 6;
    goto abort_due_to_error;
  }
  pModule = pVtab->pModule;
  rc = pModule->xOpen(pVtab, &pVCur);
  sqlite3VtabImportErrmsg(p, pVtab);
  if( rc ) goto abort_due_to_error;


  pVCur->pVtab = pVtab;


  pCur = allocateCursor(p, pOp->p1, 0, -1, 2);
  if( pCur )
{

    pCur->uc.pVCur = pVCur;
    pVtab->nRef++;
  }else{
    ((void) (0));
    pModule->xClose(pVCur);
    goto no_mem;
  }
  break;
}
# 80885 "sqlite3.c"
case 11: {
  int nArg;
  int iQuery;
  const sqlite3_module *pModule;
  Mem *pQuery;
  Mem *pArgc;
  sqlite3_vtab_cursor *pVCur;
  sqlite3_vtab *pVtab;
  VdbeCursor *pCur;
  int res;
  int i;
  Mem **apArg;

  pQuery = &aMem[pOp->p3];
  pArgc = &pQuery[1];
  pCur = p->apCsr[pOp->p1];
  ((void) (0));
  ;
  ((void) (0));
  pVCur = pCur->uc.pVCur;
  pVtab = pVCur->pVtab;
  pModule = pVtab->pModule;


  ((void) (0));
  nArg = (int)pArgc->u.i;
  iQuery = (int)pQuery->u.i;


  res = 0;
  apArg = p->apArg;
  for(i = 0; i<nArg; i++)
{

    apArg[i] = &pArgc[i+1];
  }
  rc = pModule->xFilter(pVCur, iQuery, pOp->p4.z, nArg, apArg);
  sqlite3VtabImportErrmsg(p, pVtab);
  if( rc ) goto abort_due_to_error;
  res = pModule->xEof(pVCur);
  pCur->nullRow = 0;
  ;
  if( res ) goto jump_to_p2;
  break;
}
# 80938 "sqlite3.c"
case 153: {
  sqlite3_vtab *pVtab;
  const sqlite3_module *pModule;
  Mem *pDest;
  sqlite3_context sContext;

  VdbeCursor *pCur = p->apCsr[pOp->p1];
  ((void) (0));
  ((void) (0));
  pDest = &aMem[pOp->p3];
  ;
  if( pCur->nullRow )
{

    sqlite3VdbeMemSetNull(pDest);
    break;
  }
  pVtab = pCur->uc.pVCur->pVtab;
  pModule = pVtab->pModule;
  ((void) (0));
  memset(&sContext, 0, sizeof(sContext));
  sContext.pOut = pDest;
  ((pDest)->flags = ((pDest)->flags&~(0x81ff|0x4000))|0x0001);
  rc = pModule->xColumn(pCur->uc.pVCur, &sContext, pOp->p2);
  sqlite3VtabImportErrmsg(p, pVtab);
  if( sContext.isError )
{

    rc = sContext.isError;
  }
  sqlite3VdbeChangeEncoding(pDest, encoding);
  ;
  ;

  if( sqlite3VdbeMemTooBig(pDest) )
{

    goto too_big;
  }
  if( rc ) goto abort_due_to_error;
  break;
}
# 80983 "sqlite3.c"
case 154: {
  sqlite3_vtab *pVtab;
  const sqlite3_module *pModule;
  int res;
  VdbeCursor *pCur;

  res = 0;
  pCur = p->apCsr[pOp->p1];
  ((void) (0));
  if( pCur->nullRow )
{

    break;
  }
  pVtab = pCur->uc.pVCur->pVtab;
  pModule = pVtab->pModule;
  ((void) (0));







  rc = pModule->xNext(pCur->uc.pVCur);
  sqlite3VtabImportErrmsg(p, pVtab);
  if( rc ) goto abort_due_to_error;
  res = pModule->xEof(pCur->uc.pVCur);
  ;
  if( !res )
{


    goto jump_to_p2_and_check_for_interrupt;
  }
  goto check_for_interrupt;
}
# 81025 "sqlite3.c"
case 155: {
  sqlite3_vtab *pVtab;
  Mem *pName;

  pVtab = pOp->p4.pVtab->pVtab;
  pName = &aMem[pOp->p1];
  ((void) (0));
  ((void) (0));
  ((void) (0));
  ;
  ((void) (0));
  ;
  ;
  ;
  rc = sqlite3VdbeChangeEncoding(pName, 1);
  if( rc ) goto abort_due_to_error;
  rc = pVtab->pModule->xRename(pVtab, pName->z);
  sqlite3VtabImportErrmsg(p, pVtab);
  p->expired = 0;
  if( rc ) goto abort_due_to_error;
  break;
}
# 81077 "sqlite3.c"
case 12: {
  sqlite3_vtab *pVtab;
  const sqlite3_module *pModule;
  int nArg;
  int i;
  sqlite_int64 rowid;
  Mem **apArg;
  Mem *pX;

  ((void) (0))

   ;
  ((void) (0));
  pVtab = pOp->p4.pVtab->pVtab;
  if( pVtab==0 || (pVtab->pModule==0) )
{

    rc = 6;
    goto abort_due_to_error;
  }
  pModule = pVtab->pModule;
  nArg = pOp->p2;
  ((void) (0));
  if( (pModule->xUpdate) )
{

    u8 vtabOnConflict = db->vtabOnConflict;
    apArg = p->apArg;
    pX = &aMem[pOp->p3];
    for(i=0; i<nArg; i++)
{

      ((void) (0));
      ;
      apArg[i] = pX;
      pX++;
    }
    db->vtabOnConflict = pOp->p5;
    rc = pModule->xUpdate(pVtab, nArg, apArg, &rowid);
    db->vtabOnConflict = vtabOnConflict;
    sqlite3VtabImportErrmsg(p, pVtab);
    if( rc==0 && pOp->p1 )
{

      ((void) (0));
      db->lastRowid = lastRowid = rowid;
    }
    if( (rc&0xff)==19 && pOp->p4.pVtab->bConstraint )
{

      if( pOp->p5==4 )
{

        rc = 0;
      }else{
        p->errorAction = ((pOp->p5==5) ? 2 : pOp->p5);
      }
    }else{
      p->nChange++;
    }
    if( rc ) goto abort_due_to_error;
  }
  break;
}







case 156: {
  pOut = out2Prerelease(p, pOp);
  pOut->u.i = sqlite3BtreeLastPage(db->aDb[pOp->p1].pBt);
  break;
}
# 81153 "sqlite3.c"
case 157: {
  unsigned int newMax;
  Btree *pBt;

  pOut = out2Prerelease(p, pOp);
  pBt = db->aDb[pOp->p1].pBt;
  newMax = 0;
  if( pOp->p3 )
{

    newMax = sqlite3BtreeLastPage(pBt);
    if( newMax < (unsigned)pOp->p3 ) newMax = (unsigned)pOp->p3;
  }
  pOut->u.i = sqlite3BtreeMaxPageCount(pBt, newMax);
  break;
}
# 81182 "sqlite3.c"
case 158: {
  char *zTrace;
  char *z;


  if( db->xTrace
   && !p->doingRerun
   && (zTrace = (pOp->p4.z ? pOp->p4.z : p->zSql))!=0
  )
{

    z = sqlite3VdbeExpandSql(p, zTrace);
    db->xTrace(db->pTraceArg, z);
    sqlite3DbFree(db, z);
  }
# 81213 "sqlite3.c"
  if( pOp->p2 ) goto jump_to_p2;
  break;
}
# 81251 "sqlite3.c"
default: {
  ((void) (0));
  break;
}







    }
# 81292 "sqlite3.c"
  }




abort_due_to_error:
  if( db->mallocFailed ) rc = 7;
  ((void) (0));
  if( p->zErrMsg==0 && rc!=(10 | (12<<8)) )
{

    sqlite3VdbeError(p, "%s", sqlite3ErrStr(rc));
  }
  p->rc = rc;
  sqlite3SystemError(db, rc);
  ;
  sqlite3_log(rc, "statement aborts at %d: [%s] %s",
                   (int)(pOp - aOp), p->zSql, p->zErrMsg);
  sqlite3VdbeHalt(p);
  if( rc==(10 | (12<<8)) ) sqlite3OomFault(db);
  rc = 1;
  if( resetSchemaOnFault>0 )
{

    sqlite3ResetOneSchema(db, resetSchemaOnFault-1);
  }




vdbe_return:
  db->lastRowid = lastRowid;
  ;
  p->aCounter[4] += (int)nVmStep;
  sqlite3VdbeLeave(p);
  ((void) (0))

   ;
  return rc;




too_big:
  sqlite3VdbeError(p, "string or blob too big");
  rc = 18;
  goto abort_due_to_error;



no_mem:
  sqlite3OomFault(db);
  sqlite3VdbeError(p, "out of memory");
  rc = 7;
  goto abort_due_to_error;




abort_due_to_interrupt:
  ((void) (0));
  rc = db->mallocFailed ? 7 : 9;
  p->rc = rc;
  sqlite3VdbeError(p, "%s", sqlite3ErrStr(rc));
  goto abort_due_to_error;
}
# 81381 "sqlite3.c"
typedef struct Incrblob Incrblob;
struct Incrblob {
  int flags;
  int nByte;
  int iOffset;
  int iCol;
  BtCursor *pCsr;
  sqlite3_stmt *pStmt;
  sqlite3 *db;
};
# 81410 "sqlite3.c"
static int blobSeekToRow(Incrblob *p, sqlite3_int64 iRow, char **pzErr)
{

  int rc;
  char *zErr = 0;
  Vdbe *v = (Vdbe *)p->pStmt;





  ((void) (0));
  v->aVar[0].u.i = iRow;

  rc = sqlite3_step(p->pStmt);
  if( rc==100 )
{

    VdbeCursor *pC = v->apCsr[0];
    u32 type = pC->aType[p->iCol];
    if( type<12 )
{

      zErr = sqlite3MPrintf(p->db, "cannot open value of type %s",
          type==0?"null": type==7?"real": "integer"
      );
      rc = 1;
      sqlite3_finalize(p->pStmt);
      p->pStmt = 0;
    }else{
      p->iOffset = pC->aType[p->iCol + pC->nField];
      p->nByte = sqlite3VdbeSerialTypeLen(type);
      p->pCsr = pC->uc.pCursor;
      sqlite3BtreeIncrblobCursor(p->pCsr);
    }
  }

  if( rc==100 )
{

    rc = 0;
  }else if( p->pStmt )
{

    rc = sqlite3_finalize(p->pStmt);
    p->pStmt = 0;
    if( rc==0 )
{

      zErr = sqlite3MPrintf(p->db, "no such rowid: %lld", iRow);
      rc = 1;
    }else{
      zErr = sqlite3MPrintf(p->db, "%s", sqlite3_errmsg(p->db));
    }
  }

  ((void) (0));
  ((void) (0));

  *pzErr = zErr;
  return rc;
}




 int sqlite3_blob_open(
  sqlite3* db,
  const char *zDb,
  const char *zTable,
  const char *zColumn,
  sqlite_int64 iRow,
  int flags,
  sqlite3_blob **ppBlob
)
{

  int nAttempt = 0;
  int iCol;
  int rc = 0;
  char *zErr = 0;
  Table *pTab;
  Parse *pParse = 0;
  Incrblob *pBlob = 0;






  *ppBlob = 0;





  flags = !!flags;

  sqlite3_mutex_enter(db->mutex);

  pBlob = (Incrblob *)sqlite3DbMallocZero(db, sizeof(Incrblob));
  if( !pBlob ) goto blob_open_out;
  pParse = sqlite3DbMallocRaw(db,sizeof(*pParse));
  if( !pParse ) goto blob_open_out;

  do {
    memset(pParse, 0, sizeof(Parse));
    pParse->db = db;
    sqlite3DbFree(db, zErr);
    zErr = 0;

    sqlite3BtreeEnterAll(db);
    pTab = sqlite3LocateTable(pParse, 0, zTable, zDb);
    if( pTab && (((pTab)->tabFlags & 0x10)!=0) )
{

      pTab = 0;
      sqlite3ErrorMsg(pParse, "cannot open virtual table: %s", zTable);
    }
    if( pTab && !(((pTab)->tabFlags & 0x20)==0) )
{

      pTab = 0;
      sqlite3ErrorMsg(pParse, "cannot open table without rowid: %s", zTable);
    }

    if( pTab && pTab->pSelect )
{

      pTab = 0;
      sqlite3ErrorMsg(pParse, "cannot open view: %s", zTable);
    }

    if( !pTab )
{

      if( pParse->zErrMsg )
{

        sqlite3DbFree(db, zErr);
        zErr = pParse->zErrMsg;
        pParse->zErrMsg = 0;
      }
      rc = 1;
      sqlite3BtreeLeaveAll(db);
      goto blob_open_out;
    }


    for(iCol=0; iCol<pTab->nCol; iCol++) {
      if( sqlite3StrICmp(pTab->aCol[iCol].zName, zColumn)==0 )
{

        break;
      }
    }
    if( iCol==pTab->nCol )
{

      sqlite3DbFree(db, zErr);
      zErr = sqlite3MPrintf(db, "no such column: \"%s\"", zColumn);
      rc = 1;
      sqlite3BtreeLeaveAll(db);
      goto blob_open_out;
    }





    if( flags )
{

      const char *zFault = 0;
      Index *pIdx;

      if( db->flags&0x00080000 )
{





        FKey *pFKey;
        for(pFKey=pTab->pFKey; pFKey; pFKey=pFKey->pNextFrom)
{

          int j;
          for(j=0; j<pFKey->nCol; j++)
{

            if( pFKey->aCol[j].iFrom==iCol )
{

              zFault = "foreign key";
            }
          }
        }
      }

      for(pIdx=pTab->pIndex; pIdx; pIdx=pIdx->pNext)
{

        int j;
        for(j=0; j<pIdx->nKeyCol; j++)
{


          if( pIdx->aiColumn[j]==iCol || pIdx->aiColumn[j]==(-2) )
{

            zFault = "indexed";
          }
        }
      }
      if( zFault )
{

        sqlite3DbFree(db, zErr);
        zErr = sqlite3MPrintf(db, "cannot open %s column for writing", zFault);
        rc = 1;
        sqlite3BtreeLeaveAll(db);
        goto blob_open_out;
      }
    }

    pBlob->pStmt = (sqlite3_stmt *)sqlite3VdbeCreate(pParse);
    ((void) (0));
    if( pBlob->pStmt )
{

# 81609 "sqlite3.c"
      static const int iLn = 0;
      static const VdbeOpList openBlob[] = {
        {148, 0, 0, 0},
        {54, 0, 0, 0},
        {28, 1, 1, 0},
        {70, 0, 7, 1},
        {47, 0, 0, 1},
        {33, 1, 0, 0},
        {13, 0, 2, 0},
        {61, 0, 0, 0},
        {21, 0, 0, 0},
      };
      Vdbe *v = (Vdbe *)pBlob->pStmt;
      int iDb = sqlite3SchemaToIndex(db, pTab->pSchema);
      VdbeOp *aOp;

      sqlite3VdbeAddOp4Int(v, 2, iDb, flags,
                           pTab->pSchema->schema_cookie,
                           pTab->pSchema->iGeneration);
      sqlite3VdbeChangeP5(v, 1);
      aOp = sqlite3VdbeAddOpList(v, ((int)(sizeof(openBlob)/sizeof(openBlob[0]))), openBlob, iLn);


      sqlite3VdbeUsesBtree(v, iDb);

      if( db->mallocFailed==0 )
{

        ((void) (0));




        aOp[0].p1 = iDb;
        aOp[0].p2 = pTab->tnum;
        aOp[0].p3 = flags;
        sqlite3VdbeChangeP4(v, 1, pTab->zName, 0);
      }
      if( db->mallocFailed==0 )
{





        if( flags ) aOp[1].opcode = 55;
        aOp[1].p2 = pTab->tnum;
        aOp[1].p3 = iDb;
# 81661 "sqlite3.c"
        aOp[1].p4type = (-14);
        aOp[1].p4.i = pTab->nCol+1;
        aOp[4].p2 = pTab->nCol;

        pParse->nVar = 1;
        pParse->nMem = 1;
        pParse->nTab = 1;
        sqlite3VdbeMakeReady(v, pParse);
      }
    }

    pBlob->flags = flags;
    pBlob->iCol = iCol;
    pBlob->db = db;
    sqlite3BtreeLeaveAll(db);
    if( db->mallocFailed )
{

      goto blob_open_out;
    }
    sqlite3_bind_int64(pBlob->pStmt, 1, iRow);
    rc = blobSeekToRow(pBlob, iRow, &zErr);
  } while( (++nAttempt)<50 && rc==17 );

blob_open_out:
  if( rc==0 && db->mallocFailed==0 )
{

    *ppBlob = (sqlite3_blob *)pBlob;
  }else{
    if( pBlob && pBlob->pStmt ) sqlite3VdbeFinalize((Vdbe *)pBlob->pStmt);
    sqlite3DbFree(db, pBlob);
  }
  sqlite3ErrorWithMsg(db, rc, (zErr ? "%s" : 0), zErr);
  sqlite3DbFree(db, zErr);
  sqlite3ParserReset(pParse);
  sqlite3DbFree(db,pParse);
  rc = sqlite3ApiExit(db, rc);
  sqlite3_mutex_leave(db->mutex);
  return rc;
}





 int sqlite3_blob_close(sqlite3_blob *pBlob)
{

  Incrblob *p = (Incrblob *)pBlob;
  int rc;
  sqlite3 *db;

  if( p )
{

    db = p->db;
    sqlite3_mutex_enter(db->mutex);
    rc = sqlite3_finalize(p->pStmt);
    sqlite3DbFree(db, p);
    sqlite3_mutex_leave(db->mutex);
  }else{
    rc = 0;
  }
  return rc;
}




static int blobReadWrite(
  sqlite3_blob *pBlob,
  void *z,
  int n,
  int iOffset,
  int (*xCall)(BtCursor*, u32, u32, void*)
)
{

  int rc;
  Incrblob *p = (Incrblob *)pBlob;
  Vdbe *v;
  sqlite3 *db;

  if( p==0 ) return sqlite3MisuseError(81735);
  db = p->db;
  sqlite3_mutex_enter(db->mutex);
  v = (Vdbe*)p->pStmt;

  if( n<0 || iOffset<0 || ((sqlite3_int64)iOffset+n)>p->nByte )
{


    rc = 1;
  }else if( v==0 )
{




    rc = 4;
  }else{



    ((void) (0));
    sqlite3BtreeEnterCursor(p->pCsr);
    rc = xCall(p->pCsr, iOffset+p->iOffset, n, z);
    sqlite3BtreeLeaveCursor(p->pCsr);
    if( rc==4 )
{

      sqlite3VdbeFinalize(v);
      p->pStmt = 0;
    }else{
      v->rc = rc;
    }
  }
  sqlite3Error(db, rc);
  rc = sqlite3ApiExit(db, rc);
  sqlite3_mutex_leave(db->mutex);
  return rc;
}




 int sqlite3_blob_read(sqlite3_blob *pBlob, void *z, int n, int iOffset)
{

  return blobReadWrite(pBlob, z, n, iOffset, sqlite3BtreeData);
}




 int sqlite3_blob_write(sqlite3_blob *pBlob, const void *z, int n, int iOffset)
{

  return blobReadWrite(pBlob, (void *)z, n, iOffset, sqlite3BtreePutData);
}







 int sqlite3_blob_bytes(sqlite3_blob *pBlob)
{

  Incrblob *p = (Incrblob *)pBlob;
  return (p && p->pStmt) ? p->nByte : 0;
}
# 81804 "sqlite3.c"
 int sqlite3_blob_reopen(sqlite3_blob *pBlob, sqlite3_int64 iRow)
{

  int rc;
  Incrblob *p = (Incrblob *)pBlob;
  sqlite3 *db;

  if( p==0 ) return sqlite3MisuseError(81809);
  db = p->db;
  sqlite3_mutex_enter(db->mutex);

  if( p->pStmt==0 )
{




    rc = 4;
  }else{
    char *zErr;
    rc = blobSeekToRow(p, iRow, &zErr);
    if( rc!=0 )
{

      sqlite3ErrorWithMsg(db, rc, (zErr ? "%s" : 0), zErr);
      sqlite3DbFree(db, zErr);
    }
    ((void) (0));
  }

  rc = sqlite3ApiExit(db, rc);
  ((void) (0));
  sqlite3_mutex_leave(db->mutex);
  return rc;
}
# 81997 "sqlite3.c"
typedef struct MergeEngine MergeEngine;
typedef struct PmaReader PmaReader;
typedef struct PmaWriter PmaWriter;
typedef struct SorterRecord SorterRecord;
typedef struct SortSubtask SortSubtask;
typedef struct SorterFile SorterFile;
typedef struct SorterList SorterList;
typedef struct IncrMerger IncrMerger;





struct SorterFile {
  sqlite3_file *pFd;
  i64 iEof;
};
# 82023 "sqlite3.c"
struct SorterList {
  SorterRecord *pList;
  u8 *aMemory;
  int szPMA;
};
# 82093 "sqlite3.c"
struct MergeEngine {
  int nTree;
  SortSubtask *pTask;
  int *aTree;
  PmaReader *aReadr;
};
# 82131 "sqlite3.c"
typedef int (*SorterCompare)(SortSubtask*,int*,const void*,int,const void*,int);
struct SortSubtask {
  SQLiteThread *pThread;
  int bDone;
  VdbeSorter *pSorter;
  UnpackedRecord *pUnpacked;
  SorterList list;
  int nPMA;
  SorterCompare xCompare;
  SorterFile file;
  SorterFile file2;
};
# 82154 "sqlite3.c"
struct VdbeSorter {
  int mnPmaSize;
  int mxPmaSize;
  int mxKeysize;
  int pgsz;
  PmaReader *pReader;
  MergeEngine *pMerger;
  sqlite3 *db;
  KeyInfo *pKeyInfo;
  UnpackedRecord *pUnpacked;
  SorterList list;
  int iMemory;
  int nMemory;
  u8 bUsePMA;
  u8 bUseThreads;
  u8 iPrev;
  u8 nTask;
  u8 typeMask;
  SortSubtask aTask[1];
};
# 82187 "sqlite3.c"
struct PmaReader {
  i64 iReadOff;
  i64 iEof;
  int nAlloc;
  int nKey;
  sqlite3_file *pFd;
  u8 *aAlloc;
  u8 *aKey;
  u8 *aBuffer;
  int nBuffer;
  u8 *aMap;
  IncrMerger *pIncr;
};
# 82233 "sqlite3.c"
struct IncrMerger {
  SortSubtask *pTask;
  MergeEngine *pMerger;
  i64 iStartOff;
  int mxSz;
  int bEof;
  int bUseThread;
  SorterFile aFile[2];
};
# 82251 "sqlite3.c"
struct PmaWriter {
  int eFWErr;
  u8 *aBuffer;
  int nBuffer;
  int iBufStart;
  int iBufEnd;
  i64 iWriteOff;
  sqlite3_file *pFd;
};
# 82279 "sqlite3.c"
struct SorterRecord {
  int nVal;
  union {
    SorterRecord *pNext;
    int iNext;
  } u;

};
# 82299 "sqlite3.c"
static int vdbeIncrSwap(IncrMerger*);
static void vdbeIncrFree(IncrMerger *);





static void vdbePmaReaderClear(PmaReader *pReadr)
{

  sqlite3_free(pReadr->aAlloc);
  sqlite3_free(pReadr->aBuffer);
  if( pReadr->aMap ) sqlite3OsUnfetch(pReadr->pFd, 0, pReadr->aMap);
  vdbeIncrFree(pReadr->pIncr);
  memset(pReadr, 0, sizeof(PmaReader));
}
# 82323 "sqlite3.c"
static int vdbePmaReadBlob(
  PmaReader *p,
  int nByte,
  u8 **ppOut
)
{

  int iBuf;
  int nAvail;

  if( p->aMap )
{

    *ppOut = &p->aMap[p->iReadOff];
    p->iReadOff += nByte;
    return 0;
  }

  ((void) (0));




  iBuf = p->iReadOff % p->nBuffer;
  if( iBuf==0 )
{

    int nRead;
    int rc;


    if( (p->iEof - p->iReadOff) > (i64)p->nBuffer )
{

      nRead = p->nBuffer;
    }else{
      nRead = (int)(p->iEof - p->iReadOff);
    }
    ((void) (0));


    rc = sqlite3OsRead(p->pFd, p->aBuffer, nRead, p->iReadOff);
    ((void) (0));
    if( rc!=0 ) return rc;
  }
  nAvail = p->nBuffer - iBuf;

  if( nByte<=nAvail )
{




    *ppOut = &p->aBuffer[iBuf];
    p->iReadOff += nByte;
  }else{



    int nRem;


    if( p->nAlloc<nByte )
{

      u8 *aNew;
      int nNew = ((128)>(p->nAlloc*2)?(128):(p->nAlloc*2));
      while( nByte>nNew ) nNew = nNew*2;
      aNew = sqlite3Realloc(p->aAlloc, nNew);
      if( !aNew ) return 7;
      p->nAlloc = nNew;
      p->aAlloc = aNew;
    }



    memcpy(p->aAlloc, &p->aBuffer[iBuf], nAvail);
    p->iReadOff += nAvail;
    nRem = nByte - nAvail;



    while( nRem>0 )
{

      int rc;
      int nCopy;
      u8 *aNext;

      nCopy = nRem;
      if( nRem>p->nBuffer ) nCopy = p->nBuffer;
      rc = vdbePmaReadBlob(p, nCopy, &aNext);
      if( rc!=0 ) return rc;
      ((void) (0));
      memcpy(&p->aAlloc[nByte - nRem], aNext, nCopy);
      nRem -= nCopy;
    }

    *ppOut = p->aAlloc;
  }

  return 0;
}





static int vdbePmaReadVarint(PmaReader *p, u64 *pnOut)
{

  int iBuf;

  if( p->aMap )
{

    p->iReadOff += sqlite3GetVarint(&p->aMap[p->iReadOff], pnOut);
  }else{
    iBuf = p->iReadOff % p->nBuffer;
    if( iBuf && (p->nBuffer-iBuf)>=9 )
{

      p->iReadOff += sqlite3GetVarint(&p->aBuffer[iBuf], pnOut);
    }else{
      u8 aVarint[16], *a;
      int i = 0, rc;
      do{
        rc = vdbePmaReadBlob(p, 1, &a);
        if( rc ) return rc;
        aVarint[(i++)&0xf] = a[0];
      }while( (a[0]&0x80)!=0 );
      sqlite3GetVarint(aVarint, pnOut);
    }
  }

  return 0;
}
# 82450 "sqlite3.c"
static int vdbeSorterMapFile(SortSubtask *pTask, SorterFile *pFile, u8 **pp)
{

  int rc = 0;
  if( pFile->iEof<=(i64)(pTask->pSorter->db->nMaxSorterMmap) )
{

    sqlite3_file *pFd = pFile->pFd;
    if( pFd->pMethods->iVersion>=3 )
{

      rc = sqlite3OsFetch(pFd, 0, (int)pFile->iEof, (void**)pp);
      ;
    }
  }
  return rc;
}






static int vdbePmaReaderSeek(
  SortSubtask *pTask,
  PmaReader *pReadr,
  SorterFile *pFile,
  i64 iOff
)
{

  int rc = 0;

  ((void) (0));

  if( sqlite3FaultSim(201) ) return (10 | (1<<8));
  if( pReadr->aMap )
{

    sqlite3OsUnfetch(pReadr->pFd, 0, pReadr->aMap);
    pReadr->aMap = 0;
  }
  pReadr->iReadOff = iOff;
  pReadr->iEof = pFile->iEof;
  pReadr->pFd = pFile->pFd;

  rc = vdbeSorterMapFile(pTask, pFile, &pReadr->aMap);
  if( rc==0 && pReadr->aMap==0 )
{

    int pgsz = pTask->pSorter->pgsz;
    int iBuf = pReadr->iReadOff % pgsz;
    if( pReadr->aBuffer==0 )
{

      pReadr->aBuffer = (u8*)sqlite3Malloc(pgsz);
      if( pReadr->aBuffer==0 ) rc = 7;
      pReadr->nBuffer = pgsz;
    }
    if( rc==0 && iBuf )
{

      int nRead = pgsz - iBuf;
      if( (pReadr->iReadOff + nRead) > pReadr->iEof )
{

        nRead = (int)(pReadr->iEof - pReadr->iReadOff);
      }
      rc = sqlite3OsRead(
          pReadr->pFd, &pReadr->aBuffer[iBuf], nRead, pReadr->iReadOff
      );
      ;
    }
  }

  return rc;
}





static int vdbePmaReaderNext(PmaReader *pReadr)
{

  int rc = 0;
  u64 nRec = 0;


  if( pReadr->iReadOff>=pReadr->iEof )
{

    IncrMerger *pIncr = pReadr->pIncr;
    int bEof = 1;
    if( pIncr )
{

      rc = vdbeIncrSwap(pIncr);
      if( rc==0 && pIncr->bEof==0 )
{

        rc = vdbePmaReaderSeek(
            pIncr->pTask, pReadr, &pIncr->aFile[0], pIncr->iStartOff
        );
        bEof = 0;
      }
    }

    if( bEof )
{


      vdbePmaReaderClear(pReadr);
      ;
      return rc;
    }
  }

  if( rc==0 )
{

    rc = vdbePmaReadVarint(pReadr, &nRec);
  }
  if( rc==0 )
{

    pReadr->nKey = (int)nRec;
    rc = vdbePmaReadBlob(pReadr, (int)nRec, &pReadr->aKey);
    ;
  }

  return rc;
}
# 82561 "sqlite3.c"
static int vdbePmaReaderInit(
  SortSubtask *pTask,
  SorterFile *pFile,
  i64 iStart,
  PmaReader *pReadr,
  i64 *pnByte
)
{

  int rc;

  ((void) (0));
  ((void) (0));
  ((void) (0));
  ((void) (0));

  rc = vdbePmaReaderSeek(pTask, pReadr, pFile, iStart);
  if( rc==0 )
{

    u64 nByte = 0;
    rc = vdbePmaReadVarint(pReadr, &nByte);
    pReadr->iEof = pReadr->iReadOff + nByte;
    *pnByte += nByte;
  }

  if( rc==0 )
{

    rc = vdbePmaReaderNext(pReadr);
  }
  return rc;
}






static int vdbeSorterCompareTail(
  SortSubtask *pTask,
  int *pbKey2Cached,
  const void *pKey1, int nKey1,
  const void *pKey2, int nKey2
)
{

  UnpackedRecord *r2 = pTask->pUnpacked;
  if( *pbKey2Cached==0 )
{

    sqlite3VdbeRecordUnpack(pTask->pSorter->pKeyInfo, nKey2, pKey2, r2);
    *pbKey2Cached = 1;
  }
  return sqlite3VdbeRecordCompareWithSkip(nKey1, pKey1, r2, 1);
}
# 82621 "sqlite3.c"
static int vdbeSorterCompare(
  SortSubtask *pTask,
  int *pbKey2Cached,
  const void *pKey1, int nKey1,
  const void *pKey2, int nKey2
)
{

  UnpackedRecord *r2 = pTask->pUnpacked;
  if( !*pbKey2Cached )
{

    sqlite3VdbeRecordUnpack(pTask->pSorter->pKeyInfo, nKey2, pKey2, r2);
    *pbKey2Cached = 1;
  }
  return sqlite3VdbeRecordCompare(nKey1, pKey1, r2);
}






static int vdbeSorterCompareText(
  SortSubtask *pTask,
  int *pbKey2Cached,
  const void *pKey1, int nKey1,
  const void *pKey2, int nKey2
)
{

  const u8 * const p1 = (const u8 * const)pKey1;
  const u8 * const p2 = (const u8 * const)pKey2;
  const u8 * const v1 = &p1[ p1[0] ];
  const u8 * const v2 = &p2[ p2[0] ];

  int n1;
  int n2;
  int res;

  (u8)((*(&p1[1])<(u8)0x80)?((n1)=(u32)*(&p1[1])),1:sqlite3GetVarint32((&p1[1]),(u32 *)&(n1))); n1 = (n1 - 13) / 2;
  (u8)((*(&p2[1])<(u8)0x80)?((n2)=(u32)*(&p2[1])),1:sqlite3GetVarint32((&p2[1]),(u32 *)&(n2))); n2 = (n2 - 13) / 2;
  res = memcmp(v1, v2, ((n1)<(n2)?(n1):(n2)));
  if( res==0 )
{

    res = n1 - n2;
  }

  if( res==0 )
{

    if( pTask->pSorter->pKeyInfo->nField>1 )
{

      res = vdbeSorterCompareTail(
          pTask, pbKey2Cached, pKey1, nKey1, pKey2, nKey2
      );
    }
  }else{
    if( pTask->pSorter->pKeyInfo->aSortOrder[0] )
{

      res = res * -1;
    }
  }

  return res;
}





static int vdbeSorterCompareInt(
  SortSubtask *pTask,
  int *pbKey2Cached,
  const void *pKey1, int nKey1,
  const void *pKey2, int nKey2
)
{

  const u8 * const p1 = (const u8 * const)pKey1;
  const u8 * const p2 = (const u8 * const)pKey2;
  const int s1 = p1[1];
  const int s2 = p2[1];
  const u8 * const v1 = &p1[ p1[0] ];
  const u8 * const v2 = &p2[ p2[0] ];
  int res;

  ((void) (0));
  ((void) (0));

  if( s1>7 && s2>7 )
{

    res = s1 - s2;
  }else{
    if( s1==s2 )
{

      if( (*v1 ^ *v2) & 0x80 )
{


        res = (*v1 & 0x80) ? -1 : +1;
      }else{

        static const u8 aLen[] = {0, 1, 2, 3, 4, 6, 8 };
        int i;
        res = 0;
        for(i=0; i<aLen[s1]; i++)
{

          if( (res = v1[i] - v2[i]) ) break;
        }
      }
    }else{
      if( s2>7 )
{

        res = +1;
      }else if( s1>7 )
{

        res = -1;
      }else{
        res = s1 - s2;
      }
      ((void) (0));

      if( res>0 )
{

        if( *v1 & 0x80 ) res = -1;
      }else{
        if( *v2 & 0x80 ) res = +1;
      }
    }
  }

  if( res==0 )
{

    if( pTask->pSorter->pKeyInfo->nField>1 )
{

      res = vdbeSorterCompareTail(
          pTask, pbKey2Cached, pKey1, nKey1, pKey2, nKey2
      );
    }
  }else if( pTask->pSorter->pKeyInfo->aSortOrder[0] )
{

    res = res * -1;
  }

  return res;
}
# 82764 "sqlite3.c"
static int sqlite3VdbeSorterInit(
  sqlite3 *db,
  int nField,
  VdbeCursor *pCsr
)
{

  int pgsz;
  int i;
  int mxCache;
  VdbeSorter *pSorter;
  KeyInfo *pKeyInfo;
  int szKeyInfo;
  int sz;
  int rc = 0;



  int nWorker;




  if( sqlite3TempInMemory(db) || sqlite3Config.bCoreMutex==0 )
{

    nWorker = 0;
  }else{
    nWorker = db->aLimit[11];
  }
# 82800 "sqlite3.c"
  ((void) (0));
  ((void) (0));
  szKeyInfo = sizeof(KeyInfo) + (pCsr->pKeyInfo->nField-1)*sizeof(CollSeq*);
  sz = sizeof(VdbeSorter) + nWorker * sizeof(SortSubtask);

  pSorter = (VdbeSorter*)sqlite3DbMallocZero(db, sz + szKeyInfo);
  pCsr->uc.pSorter = pSorter;
  if( pSorter==0 )
{

    rc = 7;
  }else{
    pSorter->pKeyInfo = pKeyInfo = (KeyInfo*)((u8*)pSorter + sz);
    memcpy(pKeyInfo, pCsr->pKeyInfo, szKeyInfo);
    pKeyInfo->db = 0;
    if( nField && nWorker==0 )
{

      pKeyInfo->nXField += (pKeyInfo->nField - nField);
      pKeyInfo->nField = nField;
    }
    pSorter->pgsz = pgsz = sqlite3BtreeGetPageSize(db->aDb[0].pBt);
    pSorter->nTask = nWorker + 1;
    pSorter->iPrev = (u8)(nWorker - 1);
    pSorter->bUseThreads = (pSorter->nTask>1);
    pSorter->db = db;
    for(i=0; i<pSorter->nTask; i++)
{

      SortSubtask *pTask = &pSorter->aTask[i];
      pTask->pSorter = pSorter;
    }

    if( !sqlite3TempInMemory(db) )
{

      u32 szPma = sqlite3Config.szPma;
      pSorter->mnPmaSize = szPma * pgsz;
      mxCache = db->aDb[0].pSchema->cache_size;
      if( mxCache<(int)szPma ) mxCache = (int)szPma;
      pSorter->mxPmaSize = (((i64)mxCache*pgsz)<((1<<29))?((i64)mxCache*pgsz):((1<<29)));





      if( sqlite3Config.pScratch==0 )
{

        ((void) (0));
        pSorter->nMemory = pgsz;
        pSorter->list.aMemory = (u8*)sqlite3Malloc(pgsz);
        if( !pSorter->list.aMemory ) rc = 7;
      }
    }

    if( (pKeyInfo->nField+pKeyInfo->nXField)<13
     && (pKeyInfo->aColl[0]==0 || pKeyInfo->aColl[0]==db->pDfltColl)
    )
{

      pSorter->typeMask = 0x01 | 0x02;
    }
  }

  return rc;
}





static void vdbeSorterRecordFree(sqlite3 *db, SorterRecord *pRecord)
{

  SorterRecord *p;
  SorterRecord *pNext;
  for(p=pRecord; p; p=pNext)
{

    pNext = p->u.pNext;
    sqlite3DbFree(db, p);
  }
}





static void vdbeSortSubtaskCleanup(sqlite3 *db, SortSubtask *pTask)
{

  sqlite3DbFree(db, pTask->pUnpacked);



  if( pTask->list.aMemory )
{

    sqlite3_free(pTask->list.aMemory);
  }else

  {
    ((void) (0));
    vdbeSorterRecordFree(0, pTask->list.pList);
  }
  if( pTask->file.pFd )
{

    sqlite3OsCloseFree(pTask->file.pFd);
  }
  if( pTask->file2.pFd )
{

    sqlite3OsCloseFree(pTask->file2.pFd);
  }
  memset(pTask, 0, sizeof(SortSubtask));
}
# 82938 "sqlite3.c"
static int vdbeSorterJoinThread(SortSubtask *pTask)
{

  int rc = 0;
  if( pTask->pThread )
{




    void *pRet = ((void*)(long int)(1));
    ;
    (void)sqlite3ThreadJoin(pTask->pThread, &pRet);
    ;
    rc = ((int)(long int)(pRet));
    ((void) (0));
    pTask->bDone = 0;
    pTask->pThread = 0;
  }
  return rc;
}




static int vdbeSorterCreateThread(
  SortSubtask *pTask,
  void *(*xTask)(void*),
  void *pIn
)
{

  ((void) (0));
  return sqlite3ThreadCreate(&pTask->pThread, xTask, pIn);
}





static int vdbeSorterJoinAll(VdbeSorter *pSorter, int rcin)
{

  int rc = rcin;
  int i;
# 82983 "sqlite3.c"
  for(i=pSorter->nTask-1; i>=0; i--)
{

    SortSubtask *pTask = &pSorter->aTask[i];
    int rc2 = vdbeSorterJoinThread(pTask);
    if( rc==0 ) rc = rc2;
  }
  return rc;
}
# 83002 "sqlite3.c"
static MergeEngine *vdbeMergeEngineNew(int nReader)
{

  int N = 2;
  int nByte;
  MergeEngine *pNew;

  ((void) (0));

  while( N<nReader ) N += N;
  nByte = sizeof(MergeEngine) + N * (sizeof(int) + sizeof(PmaReader));

  pNew = sqlite3FaultSim(100) ? 0 : (MergeEngine*)sqlite3MallocZero(nByte);
  if( pNew )
{

    pNew->nTree = N;
    pNew->pTask = 0;
    pNew->aReadr = (PmaReader*)&pNew[1];
    pNew->aTree = (int*)&pNew->aReadr[N];
  }
  return pNew;
}




static void vdbeMergeEngineFree(MergeEngine *pMerger)
{

  int i;
  if( pMerger )
{

    for(i=0; i<pMerger->nTree; i++)
{

      vdbePmaReaderClear(&pMerger->aReadr[i]);
    }
  }
  sqlite3_free(pMerger);
}





static void vdbeIncrFree(IncrMerger *pIncr)
{

  if( pIncr )
{


    if( pIncr->bUseThread )
{

      vdbeSorterJoinThread(pIncr->pTask);
      if( pIncr->aFile[0].pFd ) sqlite3OsCloseFree(pIncr->aFile[0].pFd);
      if( pIncr->aFile[1].pFd ) sqlite3OsCloseFree(pIncr->aFile[1].pFd);
    }

    vdbeMergeEngineFree(pIncr->pMerger);
    sqlite3_free(pIncr);
  }
}




static void sqlite3VdbeSorterReset(sqlite3 *db, VdbeSorter *pSorter)
{

  int i;
  (void)vdbeSorterJoinAll(pSorter, 0);
  ((void) (0));

  if( pSorter->pReader )
{

    vdbePmaReaderClear(pSorter->pReader);
    sqlite3DbFree(db, pSorter->pReader);
    pSorter->pReader = 0;
  }

  vdbeMergeEngineFree(pSorter->pMerger);
  pSorter->pMerger = 0;
  for(i=0; i<pSorter->nTask; i++)
{

    SortSubtask *pTask = &pSorter->aTask[i];
    vdbeSortSubtaskCleanup(db, pTask);
    pTask->pSorter = pSorter;
  }
  if( pSorter->list.aMemory==0 )
{

    vdbeSorterRecordFree(0, pSorter->list.pList);
  }
  pSorter->list.pList = 0;
  pSorter->list.szPMA = 0;
  pSorter->bUsePMA = 0;
  pSorter->iMemory = 0;
  pSorter->mxKeysize = 0;
  sqlite3DbFree(db, pSorter->pUnpacked);
  pSorter->pUnpacked = 0;
}




static void sqlite3VdbeSorterClose(sqlite3 *db, VdbeCursor *pCsr)
{

  VdbeSorter *pSorter;
  ((void) (0));
  pSorter = pCsr->uc.pSorter;
  if( pSorter )
{

    sqlite3VdbeSorterReset(db, pSorter);
    sqlite3_free(pSorter->list.aMemory);
    sqlite3DbFree(db, pSorter);
    pCsr->uc.pSorter = 0;
  }
}
# 83111 "sqlite3.c"
static void vdbeSorterExtendFile(sqlite3 *db, sqlite3_file *pFd, i64 nByte)
{

  if( nByte<=(i64)(db->nMaxSorterMmap) && pFd->pMethods->iVersion>=3 )
{

    void *p = 0;
    int chunksize = 4*1024;
    sqlite3OsFileControlHint(pFd, 6, &chunksize);
    sqlite3OsFileControlHint(pFd, 5, &nByte);
    sqlite3OsFetch(pFd, 0, (int)nByte, &p);
    sqlite3OsUnfetch(pFd, 0, p);
  }
}
# 83130 "sqlite3.c"
static int vdbeSorterOpenTempFile(
  sqlite3 *db,
  i64 nExtend,
  sqlite3_file **ppFd
)
{

  int rc;
  if( sqlite3FaultSim(202) ) return (10 | (13<<8));
  rc = sqlite3OsOpenMalloc(db->pVfs, 0, ppFd,
      0x00001000 |
      0x00000002 | 0x00000004 |
      0x00000010 | 0x00000008, &rc
  );
  if( rc==0 )
{

    i64 max = 0x7fff0000;
    sqlite3OsFileControlHint(*ppFd, 18, (void*)&max);
    if( nExtend>0 )
{

      vdbeSorterExtendFile(db, *ppFd, nExtend);
    }
  }
  return rc;
}






static int vdbeSortAllocUnpacked(SortSubtask *pTask)
{

  if( pTask->pUnpacked==0 )
{

    char *pFree;
    pTask->pUnpacked = sqlite3VdbeAllocUnpackedRecord(
        pTask->pSorter->pKeyInfo, 0, 0, &pFree
    );
    ((void) (0));
    if( pFree==0 ) return 7;
    pTask->pUnpacked->nField = pTask->pSorter->pKeyInfo->nField;
    pTask->pUnpacked->errCode = 0;
  }
  return 0;
}






static void vdbeSorterMerge(
  SortSubtask *pTask,
  SorterRecord *p1,
  SorterRecord *p2,
  SorterRecord **ppOut
)
{

  SorterRecord *pFinal = 0;
  SorterRecord **pp = &pFinal;
  int bCached = 0;

  while( p1 && p2 )
{

    int res;
    res = pTask->xCompare(
        pTask, &bCached, ((void*)((SorterRecord*)(p1) + 1)), p1->nVal, ((void*)((SorterRecord*)(p2) + 1)), p2->nVal
    );

    if( res<=0 )
{

      *pp = p1;
      pp = &p1->u.pNext;
      p1 = p1->u.pNext;
    }else{
      *pp = p2;
      pp = &p2->u.pNext;
      p2 = p2->u.pNext;
      bCached = 0;
    }
  }
  *pp = p1 ? p1 : p2;
  *ppOut = pFinal;
}





static SorterCompare vdbeSorterGetCompare(VdbeSorter *p)
{

  if( p->typeMask==0x01 )
{

    return vdbeSorterCompareInt;
  }else if( p->typeMask==0x02 )
{

    return vdbeSorterCompareText;
  }
  return vdbeSorterCompare;
}






static int vdbeSorterSort(SortSubtask *pTask, SorterList *pList)
{

  int i;
  SorterRecord **aSlot;
  SorterRecord *p;
  int rc;

  rc = vdbeSortAllocUnpacked(pTask);
  if( rc!=0 ) return rc;

  p = pList->pList;
  pTask->xCompare = vdbeSorterGetCompare(pTask->pSorter);

  aSlot = (SorterRecord **)sqlite3MallocZero(64 * sizeof(SorterRecord *));
  if( !aSlot )
{

    return 7;
  }

  while( p )
{

    SorterRecord *pNext;
    if( pList->aMemory )
{

      if( (u8*)p==pList->aMemory )
{

        pNext = 0;
      }else{
        ((void) (0));
        pNext = (SorterRecord*)&pList->aMemory[p->u.iNext];
      }
    }else{
      pNext = p->u.pNext;
    }

    p->u.pNext = 0;
    for(i=0; aSlot[i]; i++)
{

      vdbeSorterMerge(pTask, p, aSlot[i], &p);
      aSlot[i] = 0;
    }
    aSlot[i] = p;
    p = pNext;
  }

  p = 0;
  for(i=0; i<64; i++)
{

    vdbeSorterMerge(pTask, p, aSlot[i], &p);
  }
  pList->pList = p;

  sqlite3_free(aSlot);
  ((void) (0))

   ;
  return pTask->pUnpacked->errCode;
}




static void vdbePmaWriterInit(
  sqlite3_file *pFd,
  PmaWriter *p,
  int nBuf,
  i64 iStart
)
{

  memset(p, 0, sizeof(PmaWriter));
  p->aBuffer = (u8*)sqlite3Malloc(nBuf);
  if( !p->aBuffer )
{

    p->eFWErr = 7;
  }else{
    p->iBufEnd = p->iBufStart = (iStart % nBuf);
    p->iWriteOff = iStart - p->iBufStart;
    p->nBuffer = nBuf;
    p->pFd = pFd;
  }
}





static void vdbePmaWriteBlob(PmaWriter *p, u8 *pData, int nData)
{

  int nRem = nData;
  while( nRem>0 && p->eFWErr==0 )
{

    int nCopy = nRem;
    if( nCopy>(p->nBuffer - p->iBufEnd) )
{

      nCopy = p->nBuffer - p->iBufEnd;
    }

    memcpy(&p->aBuffer[p->iBufEnd], &pData[nData-nRem], nCopy);
    p->iBufEnd += nCopy;
    if( p->iBufEnd==p->nBuffer )
{

      p->eFWErr = sqlite3OsWrite(p->pFd,
          &p->aBuffer[p->iBufStart], p->iBufEnd - p->iBufStart,
          p->iWriteOff + p->iBufStart
      );
      p->iBufStart = p->iBufEnd = 0;
      p->iWriteOff += p->nBuffer;
    }
    ((void) (0));

    nRem -= nCopy;
  }
}
# 83335 "sqlite3.c"
static int vdbePmaWriterFinish(PmaWriter *p, i64 *piEof)
{

  int rc;
  if( p->eFWErr==0 && (p->aBuffer) && p->iBufEnd>p->iBufStart )
{

    p->eFWErr = sqlite3OsWrite(p->pFd,
        &p->aBuffer[p->iBufStart], p->iBufEnd - p->iBufStart,
        p->iWriteOff + p->iBufStart
    );
  }
  *piEof = (p->iWriteOff + p->iBufEnd);
  sqlite3_free(p->aBuffer);
  rc = p->eFWErr;
  memset(p, 0, sizeof(PmaWriter));
  return rc;
}





static void vdbePmaWriteVarint(PmaWriter *p, u64 iVal)
{

  int nByte;
  u8 aByte[10];
  nByte = sqlite3PutVarint(aByte, iVal);
  vdbePmaWriteBlob(p, aByte, nByte);
}
# 83375 "sqlite3.c"
static int vdbeSorterListToPMA(SortSubtask *pTask, SorterList *pList)
{

  sqlite3 *db = pTask->pSorter->db;
  int rc = 0;
  PmaWriter writer;







  ;
  memset(&writer, 0, sizeof(PmaWriter));
  ((void) (0));


  if( pTask->file.pFd==0 )
{

    rc = vdbeSorterOpenTempFile(db, 0, &pTask->file.pFd);
    ((void) (0));
    ((void) (0));
    ((void) (0));
  }


  if( rc==0 )
{

    vdbeSorterExtendFile(db, pTask->file.pFd, pTask->file.iEof+pList->szPMA+9);
  }


  if( rc==0 )
{

    rc = vdbeSorterSort(pTask, pList);
  }

  if( rc==0 )
{

    SorterRecord *p;
    SorterRecord *pNext = 0;

    vdbePmaWriterInit(pTask->file.pFd, &writer, pTask->pSorter->pgsz,
                      pTask->file.iEof);
    pTask->nPMA++;
    vdbePmaWriteVarint(&writer, pList->szPMA);
    for(p=pList->pList; p; p=pNext)
{

      pNext = p->u.pNext;
      vdbePmaWriteVarint(&writer, p->nVal);
      vdbePmaWriteBlob(&writer, ((void*)((SorterRecord*)(p) + 1)), p->nVal);
      if( pList->aMemory==0 ) sqlite3_free(p);
    }
    pList->pList = p;
    rc = vdbePmaWriterFinish(&writer, &pTask->file.iEof);
  }

  ;
  ((void) (0));
  ((void) (0));
  return rc;
}
# 83439 "sqlite3.c"
static int vdbeMergeEngineStep(
  MergeEngine *pMerger,
  int *pbEof
)
{

  int rc;
  int iPrev = pMerger->aTree[1];
  SortSubtask *pTask = pMerger->pTask;


  rc = vdbePmaReaderNext(&pMerger->aReadr[iPrev]);


  if( rc==0 )
{

    int i;
    PmaReader *pReadr1;
    PmaReader *pReadr2;
    int bCached = 0;



    pReadr1 = &pMerger->aReadr[(iPrev & 0xFFFE)];
    pReadr2 = &pMerger->aReadr[(iPrev | 0x0001)];

    for(i=(pMerger->nTree+iPrev)/2; i>0; i=i/2)
{


      int iRes;
      if( pReadr1->pFd==0 )
{

        iRes = +1;
      }else if( pReadr2->pFd==0 )
{

        iRes = -1;
      }else{
        iRes = pTask->xCompare(pTask, &bCached,
            pReadr1->aKey, pReadr1->nKey, pReadr2->aKey, pReadr2->nKey
        );
      }
# 83490 "sqlite3.c"
      if( iRes<0 || (iRes==0 && pReadr1<pReadr2) )
{

        pMerger->aTree[i] = (int)(pReadr1 - pMerger->aReadr);
        pReadr2 = &pMerger->aReadr[ pMerger->aTree[i ^ 0x0001] ];
        bCached = 0;
      }else{
        if( pReadr1->pFd ) bCached = 0;
        pMerger->aTree[i] = (int)(pReadr2 - pMerger->aReadr);
        pReadr1 = &pMerger->aReadr[ pMerger->aTree[i ^ 0x0001] ];
      }
    }
    *pbEof = (pMerger->aReadr[pMerger->aTree[1]].pFd==0);
  }

  return (rc==0 ? pTask->pUnpacked->errCode : rc);
}





static void *vdbeSorterFlushThread(void *pCtx)
{

  SortSubtask *pTask = (SortSubtask*)pCtx;
  int rc;
  ((void) (0));
  rc = vdbeSorterListToPMA(pTask, &pTask->list);
  pTask->bDone = 1;
  return ((void*)(long int)(rc));
}






static int vdbeSorterFlushPMA(VdbeSorter *pSorter)
{





  int rc = 0;
  int i;
  SortSubtask *pTask = 0;
  int nWorker = (pSorter->nTask-1);



  pSorter->bUsePMA = 1;
# 83546 "sqlite3.c"
  for(i=0; i<nWorker; i++)
{

    int iTest = (pSorter->iPrev + i + 1) % nWorker;
    pTask = &pSorter->aTask[iTest];
    if( pTask->bDone )
{

      rc = vdbeSorterJoinThread(pTask);
    }
    if( rc!=0 || pTask->pThread==0 ) break;
  }

  if( rc==0 )
{

    if( i==nWorker )
{


      rc = vdbeSorterListToPMA(&pSorter->aTask[nWorker], &pSorter->list);
    }else{

      u8 *aMem = pTask->list.aMemory;
      void *pCtx = (void*)pTask;

      ((void) (0));
      ((void) (0));
      ((void) (0));

      pSorter->iPrev = (u8)(pTask - pSorter->aTask);
      pTask->list = pSorter->list;
      pSorter->list.pList = 0;
      pSorter->list.szPMA = 0;
      if( aMem )
{

        pSorter->list.aMemory = aMem;
        pSorter->nMemory = sqlite3MallocSize(aMem);
      }else if( pSorter->list.aMemory )
{

        pSorter->list.aMemory = sqlite3Malloc(pSorter->nMemory);
        if( !pSorter->list.aMemory ) return 7;
      }

      rc = vdbeSorterCreateThread(pTask, vdbeSorterFlushThread, pCtx);
    }
  }

  return rc;

}




static int sqlite3VdbeSorterWrite(
  const VdbeCursor *pCsr,
  Mem *pVal
)
{

  VdbeSorter *pSorter;
  int rc = 0;
  SorterRecord *pNew;
  int bFlush;
  int nReq;
  int nPMA;
  int t;

  ((void) (0));
  pSorter = pCsr->uc.pSorter;
  (u8)((*((const u8*)&pVal->z[1])<(u8)0x80)?((t)=(u32)*((const u8*)&pVal->z[1])),1:sqlite3GetVarint32(((const u8*)&pVal->z[1]),(u32 *)&(t)));
  if( t>0 && t<10 && t!=7 )
{

    pSorter->typeMask &= 0x01;
  }else if( t>10 && (t & 0x01) )
{

    pSorter->typeMask &= 0x02;
  }else{
    pSorter->typeMask = 0;
  }

  ((void) (0));
# 83632 "sqlite3.c"
  nReq = pVal->n + sizeof(SorterRecord);
  nPMA = pVal->n + sqlite3VarintLen(pVal->n);
  if( pSorter->mxPmaSize )
{

    if( pSorter->list.aMemory )
{

      bFlush = pSorter->iMemory && (pSorter->iMemory+nReq) > pSorter->mxPmaSize;
    }else{
      bFlush = (
          (pSorter->list.szPMA > pSorter->mxPmaSize)
       || (pSorter->list.szPMA > pSorter->mnPmaSize && sqlite3HeapNearlyFull())
      );
    }
    if( bFlush )
{

      rc = vdbeSorterFlushPMA(pSorter);
      pSorter->list.szPMA = 0;
      pSorter->iMemory = 0;
      ((void) (0));
    }
  }

  pSorter->list.szPMA += nPMA;
  if( nPMA>pSorter->mxKeysize )
{

    pSorter->mxKeysize = nPMA;
  }

  if( pSorter->list.aMemory )
{

    int nMin = pSorter->iMemory + nReq;

    if( nMin>pSorter->nMemory )
{

      u8 *aNew;
      int iListOff = (u8*)pSorter->list.pList - pSorter->list.aMemory;
      int nNew = pSorter->nMemory * 2;
      while( nNew < nMin ) nNew = nNew*2;
      if( nNew > pSorter->mxPmaSize ) nNew = pSorter->mxPmaSize;
      if( nNew < nMin ) nNew = nMin;

      aNew = sqlite3Realloc(pSorter->list.aMemory, nNew);
      if( !aNew ) return 7;
      pSorter->list.pList = (SorterRecord*)&aNew[iListOff];
      pSorter->list.aMemory = aNew;
      pSorter->nMemory = nNew;
    }

    pNew = (SorterRecord*)&pSorter->list.aMemory[pSorter->iMemory];
    pSorter->iMemory += (((nReq)+7)&~7);
    if( pSorter->list.pList )
{

      pNew->u.iNext = (int)((u8*)(pSorter->list.pList) - pSorter->list.aMemory);
    }
  }else{
    pNew = (SorterRecord *)sqlite3Malloc(nReq);
    if( pNew==0 )
{

      return 7;
    }
    pNew->u.pNext = pSorter->list.pList;
  }

  memcpy(((void*)((SorterRecord*)(pNew) + 1)), pVal->z, pVal->n);
  pNew->nVal = pVal->n;
  pSorter->list.pList = pNew;

  return rc;
}






static int vdbeIncrPopulate(IncrMerger *pIncr)
{

  int rc = 0;
  int rc2;
  i64 iStart = pIncr->iStartOff;
  SorterFile *pOut = &pIncr->aFile[1];
  SortSubtask *pTask = pIncr->pTask;
  MergeEngine *pMerger = pIncr->pMerger;
  PmaWriter writer;
  ((void) (0));

  ;

  vdbePmaWriterInit(pOut->pFd, &writer, pTask->pSorter->pgsz, iStart);
  while( rc==0 )
{

    int dummy;
    PmaReader *pReader = &pMerger->aReadr[ pMerger->aTree[1] ];
    int nKey = pReader->nKey;
    i64 iEof = writer.iWriteOff + writer.iBufEnd;



    if( pReader->pFd==0 ) break;
    if( (iEof + nKey + sqlite3VarintLen(nKey))>(iStart + pIncr->mxSz) ) break;


    vdbePmaWriteVarint(&writer, nKey);
    vdbePmaWriteBlob(&writer, pReader->aKey, nKey);
    ((void) (0));
    rc = vdbeMergeEngineStep(pIncr->pMerger, &dummy);
  }

  rc2 = vdbePmaWriterFinish(&writer, &pOut->iEof);
  if( rc==0 ) rc = rc2;
  ;
  return rc;
}






static void *vdbeIncrPopulateThread(void *pCtx)
{

  IncrMerger *pIncr = (IncrMerger*)pCtx;
  void *pRet = ((void*)(long int)(vdbeIncrPopulate(pIncr)));
  pIncr->pTask->bDone = 1;
  return pRet;
}




static int vdbeIncrBgPopulate(IncrMerger *pIncr)
{

  void *p = (void*)pIncr;
  ((void) (0));
  return vdbeSorterCreateThread(pIncr->pTask, vdbeIncrPopulateThread, p);
}
# 83775 "sqlite3.c"
static int vdbeIncrSwap(IncrMerger *pIncr)
{

  int rc = 0;


  if( pIncr->bUseThread )
{

    rc = vdbeSorterJoinThread(pIncr->pTask);

    if( rc==0 )
{

      SorterFile f0 = pIncr->aFile[0];
      pIncr->aFile[0] = pIncr->aFile[1];
      pIncr->aFile[1] = f0;
    }

    if( rc==0 )
{

      if( pIncr->aFile[0].iEof==pIncr->iStartOff )
{

        pIncr->bEof = 1;
      }else{
        rc = vdbeIncrBgPopulate(pIncr);
      }
    }
  }else

  {
    rc = vdbeIncrPopulate(pIncr);
    pIncr->aFile[0] = pIncr->aFile[1];
    if( pIncr->aFile[0].iEof==pIncr->iStartOff )
{

      pIncr->bEof = 1;
    }
  }

  return rc;
}







static int vdbeIncrMergerNew(
  SortSubtask *pTask,
  MergeEngine *pMerger,
  IncrMerger **ppOut
)
{

  int rc = 0;
  IncrMerger *pIncr = *ppOut = (IncrMerger*)
       (sqlite3FaultSim(100) ? 0 : sqlite3MallocZero(sizeof(*pIncr)));
  if( pIncr )
{

    pIncr->pMerger = pMerger;
    pIncr->pTask = pTask;
    pIncr->mxSz = ((pTask->pSorter->mxKeysize+9)>(pTask->pSorter->mxPmaSize/2)?(pTask->pSorter->mxKeysize+9):(pTask->pSorter->mxPmaSize/2));
    pTask->file2.iEof += pIncr->mxSz;
  }else{
    vdbeMergeEngineFree(pMerger);
    rc = 7;
  }
  return rc;
}





static void vdbeIncrMergerSetThreads(IncrMerger *pIncr)
{

  pIncr->bUseThread = 1;
  pIncr->pTask->file2.iEof -= pIncr->mxSz;
}
# 83851 "sqlite3.c"
static void vdbeMergeEngineCompare(
  MergeEngine *pMerger,
  int iOut
)
{

  int i1;
  int i2;
  int iRes;
  PmaReader *p1;
  PmaReader *p2;

  ((void) (0));

  if( iOut>=(pMerger->nTree/2) )
{

    i1 = (iOut - pMerger->nTree/2) * 2;
    i2 = i1 + 1;
  }else{
    i1 = pMerger->aTree[iOut*2];
    i2 = pMerger->aTree[iOut*2+1];
  }

  p1 = &pMerger->aReadr[i1];
  p2 = &pMerger->aReadr[i2];

  if( p1->pFd==0 )
{

    iRes = i2;
  }else if( p2->pFd==0 )
{

    iRes = i1;
  }else{
    SortSubtask *pTask = pMerger->pTask;
    int bCached = 0;
    int res;
    ((void) (0));
    res = pTask->xCompare(
        pTask, &bCached, p1->aKey, p1->nKey, p2->aKey, p2->nKey
    );
    if( res<=0 )
{

      iRes = i1;
    }else{
      iRes = i2;
    }
  }

  pMerger->aTree[iOut] = iRes;
}
# 83913 "sqlite3.c"
static int vdbePmaReaderIncrInit(PmaReader *pReadr, int eMode);
# 83933 "sqlite3.c"
static int vdbeMergeEngineInit(
  SortSubtask *pTask,
  MergeEngine *pMerger,
  int eMode
)
{

  int rc = 0;
  int i;
  int nTree = pMerger->nTree;


  ((void) (0));


  ((void) (0));
  pMerger->pTask = pTask;

  for(i=0; i<nTree; i++)
{

    if( 8>0 && eMode==2 )
{








      rc = vdbePmaReaderNext(&pMerger->aReadr[nTree-i-1]);
    }else{
      rc = vdbePmaReaderIncrInit(&pMerger->aReadr[i], 0);
    }
    if( rc!=0 ) return rc;
  }

  for(i=pMerger->nTree-1; i>0; i--)
{

    vdbeMergeEngineCompare(pMerger, i);
  }
  return pTask->pUnpacked->errCode;
}
# 84004 "sqlite3.c"
static int vdbePmaReaderIncrMergeInit(PmaReader *pReadr, int eMode)
{

  int rc = 0;
  IncrMerger *pIncr = pReadr->pIncr;
  SortSubtask *pTask = pIncr->pTask;
  sqlite3 *db = pTask->pSorter->db;


  ((void) (0));

  rc = vdbeMergeEngineInit(pTask, pIncr->pMerger, eMode);




  if( rc==0 )
{

    int mxSz = pIncr->mxSz;

    if( pIncr->bUseThread )
{

      rc = vdbeSorterOpenTempFile(db, mxSz, &pIncr->aFile[0].pFd);
      if( rc==0 )
{

        rc = vdbeSorterOpenTempFile(db, mxSz, &pIncr->aFile[1].pFd);
      }
    }else

                                {
      if( pTask->file2.pFd==0 )
{

        ((void) (0));
        rc = vdbeSorterOpenTempFile(db, pTask->file2.iEof, &pTask->file2.pFd);
        pTask->file2.iEof = 0;
      }
      if( rc==0 )
{

        pIncr->aFile[1].pFd = pTask->file2.pFd;
        pIncr->iStartOff = pTask->file2.iEof;
        pTask->file2.iEof += mxSz;
      }
    }
  }


  if( rc==0 && pIncr->bUseThread )
{

# 84054 "sqlite3.c"
    ((void) (0));
    rc = vdbeIncrPopulate(pIncr);
  }


  if( rc==0 && (8==0 || eMode!=1) )
{

    rc = vdbePmaReaderNext(pReadr);
  }

  return rc;
}






static void *vdbePmaReaderBgIncrInit(void *pCtx)
{

  PmaReader *pReader = (PmaReader*)pCtx;
  void *pRet = ((void*)(long int)(vdbePmaReaderIncrMergeInit(pReader,1)))

                ;
  pReader->pIncr->pTask->bDone = 1;
  return pRet;
}
# 84092 "sqlite3.c"
static int vdbePmaReaderIncrInit(PmaReader *pReadr, int eMode)
{

  IncrMerger *pIncr = pReadr->pIncr;
  int rc = 0;
  if( pIncr )
{


    ((void) (0));
    if( pIncr->bUseThread )
{

      void *pCtx = (void*)pReadr;
      rc = vdbeSorterCreateThread(pIncr->pTask, vdbePmaReaderBgIncrInit, pCtx);
    }else

    {
      rc = vdbePmaReaderIncrMergeInit(pReadr, eMode);
    }
  }
  return rc;
}
# 84122 "sqlite3.c"
static int vdbeMergeEngineLevel0(
  SortSubtask *pTask,
  int nPMA,
  i64 *piOffset,
  MergeEngine **ppOut
)
{

  MergeEngine *pNew;
  i64 iOff = *piOffset;
  int i;
  int rc = 0;

  *ppOut = pNew = vdbeMergeEngineNew(nPMA);
  if( pNew==0 ) rc = 7;

  for(i=0; i<nPMA && rc==0; i++)
{

    i64 nDummy = 0;
    PmaReader *pReadr = &pNew->aReadr[i];
    rc = vdbePmaReaderInit(pTask, &pTask->file, iOff, pReadr, &nDummy);
    iOff = pReadr->iEof;
  }

  if( rc!=0 )
{

    vdbeMergeEngineFree(pNew);
    *ppOut = 0;
  }
  *piOffset = iOff;
  return rc;
}
# 84161 "sqlite3.c"
static int vdbeSorterTreeDepth(int nPMA)
{

  int nDepth = 0;
  i64 nDiv = 16;
  while( nDiv < (i64)nPMA )
{

    nDiv = nDiv * 16;
    nDepth++;
  }
  return nDepth;
}
# 84179 "sqlite3.c"
static int vdbeSorterAddToTree(
  SortSubtask *pTask,
  int nDepth,
  int iSeq,
  MergeEngine *pRoot,
  MergeEngine *pLeaf
)
{

  int rc = 0;
  int nDiv = 1;
  int i;
  MergeEngine *p = pRoot;
  IncrMerger *pIncr;

  rc = vdbeIncrMergerNew(pTask, pLeaf, &pIncr);

  for(i=1; i<nDepth; i++)
{

    nDiv = nDiv * 16;
  }

  for(i=1; i<nDepth && rc==0; i++)
{

    int iIter = (iSeq / nDiv) % 16;
    PmaReader *pReadr = &p->aReadr[iIter];

    if( pReadr->pIncr==0 )
{

      MergeEngine *pNew = vdbeMergeEngineNew(16);
      if( pNew==0 )
{

        rc = 7;
      }else{
        rc = vdbeIncrMergerNew(pTask, pNew, &pReadr->pIncr);
      }
    }
    if( rc==0 )
{

      p = pReadr->pIncr->pMerger;
      nDiv = nDiv / 16;
    }
  }

  if( rc==0 )
{

    p->aReadr[iSeq % 16].pIncr = pIncr;
  }else{
    vdbeIncrFree(pIncr);
  }
  return rc;
}
# 84235 "sqlite3.c"
static int vdbeSorterMergeTreeBuild(
  VdbeSorter *pSorter,
  MergeEngine **ppOut
)
{

  MergeEngine *pMain = 0;
  int rc = 0;
  int iTask;





  ((void) (0));
  if( pSorter->nTask>1 )
{

    pMain = vdbeMergeEngineNew(pSorter->nTask);
    if( pMain==0 ) rc = 7;
  }


  for(iTask=0; rc==0 && iTask<pSorter->nTask; iTask++)
{

    SortSubtask *pTask = &pSorter->aTask[iTask];
    ((void) (0));
    if( 8==0 || pTask->nPMA )
{

      MergeEngine *pRoot = 0;
      int nDepth = vdbeSorterTreeDepth(pTask->nPMA);
      i64 iReadOff = 0;

      if( pTask->nPMA<=16 )
{

        rc = vdbeMergeEngineLevel0(pTask, pTask->nPMA, &iReadOff, &pRoot);
      }else{
        int i;
        int iSeq = 0;
        pRoot = vdbeMergeEngineNew(16);
        if( pRoot==0 ) rc = 7;
        for(i=0; i<pTask->nPMA && rc==0; i += 16)
{

          MergeEngine *pMerger = 0;
          int nReader;

          nReader = ((pTask->nPMA - i)<(16)?(pTask->nPMA - i):(16));
          rc = vdbeMergeEngineLevel0(pTask, nReader, &iReadOff, &pMerger);
          if( rc==0 )
{

            rc = vdbeSorterAddToTree(pTask, nDepth, iSeq++, pRoot, pMerger);
          }
        }
      }

      if( rc==0 )
{


        if( pMain!=0 )
{

          rc = vdbeIncrMergerNew(pTask, pRoot, &pMain->aReadr[iTask].pIncr);
        }else

        {
          ((void) (0));
          pMain = pRoot;
        }
      }else{
        vdbeMergeEngineFree(pRoot);
      }
    }
  }

  if( rc!=0 )
{

    vdbeMergeEngineFree(pMain);
    pMain = 0;
  }
  *ppOut = pMain;
  return rc;
}
# 84314 "sqlite3.c"
static int vdbeSorterSetupMerge(VdbeSorter *pSorter)
{

  int rc;
  SortSubtask *pTask0 = &pSorter->aTask[0];
  MergeEngine *pMain = 0;

  sqlite3 *db = pTask0->pSorter->db;
  int i;
  SorterCompare xCompare = vdbeSorterGetCompare(pSorter);
  for(i=0; i<pSorter->nTask; i++)
{

    pSorter->aTask[i].xCompare = xCompare;
  }


  rc = vdbeSorterMergeTreeBuild(pSorter, &pMain);
  if( rc==0 )
{


    ((void) (0));
    if( pSorter->bUseThreads )
{

      int iTask;
      PmaReader *pReadr = 0;
      SortSubtask *pLast = &pSorter->aTask[pSorter->nTask-1];
      rc = vdbeSortAllocUnpacked(pLast);
      if( rc==0 )
{

        pReadr = (PmaReader*)sqlite3DbMallocZero(db, sizeof(PmaReader));
        pSorter->pReader = pReadr;
        if( pReadr==0 ) rc = 7;
      }
      if( rc==0 )
{

        rc = vdbeIncrMergerNew(pLast, pMain, &pReadr->pIncr);
        if( rc==0 )
{

          vdbeIncrMergerSetThreads(pReadr->pIncr);
          for(iTask=0; iTask<(pSorter->nTask-1); iTask++)
{

            IncrMerger *pIncr;
            if( (pIncr = pMain->aReadr[iTask].pIncr) )
{

              vdbeIncrMergerSetThreads(pIncr);
              ((void) (0));
            }
          }
          for(iTask=0; rc==0 && iTask<pSorter->nTask; iTask++)
{

# 84362 "sqlite3.c"
            PmaReader *p = &pMain->aReadr[iTask];
            ((void) (0))


              ;
            rc = vdbePmaReaderIncrInit(p, 1);
          }
        }
        pMain = 0;
      }
      if( rc==0 )
{

        rc = vdbePmaReaderIncrMergeInit(pReadr, 2);
      }
    }else

    {
      rc = vdbeMergeEngineInit(pTask0, pMain, 0);
      pSorter->pMerger = pMain;
      pMain = 0;
    }
  }

  if( rc!=0 )
{

    vdbeMergeEngineFree(pMain);
  }
  return rc;
}







static int sqlite3VdbeSorterRewind(const VdbeCursor *pCsr, int *pbEof)
{

  VdbeSorter *pSorter;
  int rc = 0;

  ((void) (0));
  pSorter = pCsr->uc.pSorter;
  ((void) (0));




  if( pSorter->bUsePMA==0 )
{

    if( pSorter->list.pList )
{

      *pbEof = 0;
      rc = vdbeSorterSort(&pSorter->aTask[0], &pSorter->list);
    }else{
      *pbEof = 1;
    }
    return rc;
  }





  ((void) (0));
  rc = vdbeSorterFlushPMA(pSorter);


  rc = vdbeSorterJoinAll(pSorter, rc);

  ;



  ((void) (0));
  if( rc==0 )
{

    rc = vdbeSorterSetupMerge(pSorter);
    *pbEof = 0;
  }

  ;
  return rc;
}




static int sqlite3VdbeSorterNext(sqlite3 *db, const VdbeCursor *pCsr, int *pbEof)
{

  VdbeSorter *pSorter;
  int rc;

  ((void) (0));
  pSorter = pCsr->uc.pSorter;
  ((void) (0));
  if( pSorter->bUsePMA )
{

    ((void) (0));
    ((void) (0));
    ((void) (0));

    if( pSorter->bUseThreads )
{

      rc = vdbePmaReaderNext(pSorter->pReader);
      *pbEof = (pSorter->pReader->pFd==0);
    }else

                                    {
      ((void) (0));
      ((void) (0));
      rc = vdbeMergeEngineStep(pSorter->pMerger, pbEof);
    }
  }else{
    SorterRecord *pFree = pSorter->list.pList;
    pSorter->list.pList = pFree->u.pNext;
    pFree->u.pNext = 0;
    if( pSorter->list.aMemory==0 ) vdbeSorterRecordFree(db, pFree);
    *pbEof = !pSorter->list.pList;
    rc = 0;
  }
  return rc;
}





static void *vdbeSorterRowkey(
  const VdbeSorter *pSorter,
  int *pnKey
)
{

  void *pKey;
  if( pSorter->bUsePMA )
{

    PmaReader *pReader;

    if( pSorter->bUseThreads )
{

      pReader = pSorter->pReader;
    }else

                                   {
      pReader = &pSorter->pMerger->aReadr[pSorter->pMerger->aTree[1]];
    }
    *pnKey = pReader->nKey;
    pKey = pReader->aKey;
  }else{
    *pnKey = pSorter->list.pList->nVal;
    pKey = ((void*)((SorterRecord*)(pSorter->list.pList) + 1));
  }
  return pKey;
}




static int sqlite3VdbeSorterRowkey(const VdbeCursor *pCsr, Mem *pOut)
{

  VdbeSorter *pSorter;
  void *pKey; int nKey;

  ((void) (0));
  pSorter = pCsr->uc.pSorter;
  pKey = vdbeSorterRowkey(pSorter, &nKey);
  if( sqlite3VdbeMemClearAndResize(pOut, nKey) )
{

    return 7;
  }
  pOut->n = nKey;
  ((pOut)->flags = ((pOut)->flags&~(0x81ff|0x4000))|0x0010);
  memcpy(pOut->z, pKey, nKey);

  return 0;
}
# 84541 "sqlite3.c"
static int sqlite3VdbeSorterCompare(
  const VdbeCursor *pCsr,
  Mem *pVal,
  int nKeyCol,
  int *pRes
)
{

  VdbeSorter *pSorter;
  UnpackedRecord *r2;
  KeyInfo *pKeyInfo;
  int i;
  void *pKey; int nKey;

  ((void) (0));
  pSorter = pCsr->uc.pSorter;
  r2 = pSorter->pUnpacked;
  pKeyInfo = pCsr->pKeyInfo;
  if( r2==0 )
{

    char *p;
    r2 = pSorter->pUnpacked = sqlite3VdbeAllocUnpackedRecord(pKeyInfo,0,0,&p);
    ((void) (0));
    if( r2==0 ) return 7;
    r2->nField = nKeyCol;
  }
  ((void) (0));

  pKey = vdbeSorterRowkey(pSorter, &nKey);
  sqlite3VdbeRecordUnpack(pKeyInfo, nKey, pKey, r2);
  for(i=0; i<nKeyCol; i++)
{

    if( r2->aMem[i].flags & 0x0001 )
{

      *pRes = -1;
      return 0;
    }
  }

  *pRes = sqlite3VdbeRecordCompare(pVal->n, pVal->z, r2);
  return 0;
}
# 84600 "sqlite3.c"
typedef struct MemJournal MemJournal;
typedef struct FilePoint FilePoint;
typedef struct FileChunk FileChunk;







struct FileChunk {
  FileChunk *pNext;
  u8 zChunk[8];
};
# 84630 "sqlite3.c"
struct FilePoint {
  sqlite3_int64 iOffset;
  FileChunk *pChunk;
};





struct MemJournal {
  const sqlite3_io_methods *pMethod;
  int nChunkSize;

  int nSpill;
  int nSize;
  FileChunk *pFirst;
  FilePoint endpoint;
  FilePoint readpoint;

  int flags;
  sqlite3_vfs *pVfs;
  const char *zJournal;
};





static int memjrnlRead(
  sqlite3_file *pJfd,
  void *zBuf,
  int iAmt,
  sqlite_int64 iOfst
)
{

  MemJournal *p = (MemJournal *)pJfd;
  u8 *zOut = zBuf;
  int nRead = iAmt;
  int iChunkOffset;
  FileChunk *pChunk;







  ((void) (0));
  if( p->readpoint.iOffset!=iOfst || iOfst==0 )
{

    sqlite3_int64 iOff = 0;
    for(pChunk=p->pFirst;
        (pChunk) && (iOff+p->nChunkSize)<=iOfst;
        pChunk=pChunk->pNext
    )
{

      iOff += p->nChunkSize;
    }
  }else{
    pChunk = p->readpoint.pChunk;
  }

  iChunkOffset = (int)(iOfst%p->nChunkSize);
  do {
    int iSpace = p->nChunkSize - iChunkOffset;
    int nCopy = ((nRead)<((p->nChunkSize - iChunkOffset))?(nRead):((p->nChunkSize - iChunkOffset)));
    memcpy(zOut, (u8*)pChunk->zChunk + iChunkOffset, nCopy);
    zOut += nCopy;
    nRead -= iSpace;
    iChunkOffset = 0;
  } while( nRead>=0 && (pChunk=pChunk->pNext)!=0 && nRead>0 );
  p->readpoint.iOffset = iOfst+iAmt;
  p->readpoint.pChunk = pChunk;

  return 0;
}




static void memjrnlFreeChunks(MemJournal *p)
{

  FileChunk *pIter;
  FileChunk *pNext;
  for(pIter=p->pFirst; pIter; pIter=pNext)
{

    pNext = pIter->pNext;
    sqlite3_free(pIter);
  }
  p->pFirst = 0;
}




static int memjrnlCreateFile(MemJournal *p)
{

  int rc;
  sqlite3_file *pReal = (sqlite3_file*)p;
  MemJournal copy = *p;

  memset(p, 0, sizeof(MemJournal));
  rc = sqlite3OsOpen(copy.pVfs, copy.zJournal, pReal, copy.flags, 0);
  if( rc==0 )
{

    int nChunk = copy.nChunkSize;
    i64 iOff = 0;
    FileChunk *pIter;
    for(pIter=copy.pFirst; pIter; pIter=pIter->pNext)
{

      if( iOff + nChunk > copy.endpoint.iOffset )
{

        nChunk = copy.endpoint.iOffset - iOff;
      }
      rc = sqlite3OsWrite(pReal, (u8*)pIter->zChunk, nChunk, iOff);
      if( rc ) break;
      iOff += nChunk;
    }
    if( rc==0 )
{


      memjrnlFreeChunks(&copy);
    }
  }
  if( rc!=0 )
{





    sqlite3OsClose(pReal);
    *p = copy;
  }
  return rc;
}





static int memjrnlWrite(
  sqlite3_file *pJfd,
  const void *zBuf,
  int iAmt,
  sqlite_int64 iOfst
)
{

  MemJournal *p = (MemJournal *)pJfd;
  int nWrite = iAmt;
  u8 *zWrite = (u8 *)zBuf;



  if( p->nSpill>0 && (iAmt+iOfst)>p->nSpill )
{

    int rc = memjrnlCreateFile(p);
    if( rc==0 )
{

      rc = sqlite3OsWrite(pJfd, zBuf, iAmt, iOfst);
    }
    return rc;
  }


  else{





    ((void) (0));






    ((void) (0));

    {
      while( nWrite>0 )
{

        FileChunk *pChunk = p->endpoint.pChunk;
        int iChunkOffset = (int)(p->endpoint.iOffset%p->nChunkSize);
        int iSpace = ((nWrite)<(p->nChunkSize - iChunkOffset)?(nWrite):(p->nChunkSize - iChunkOffset));

        if( iChunkOffset==0 )
{


          FileChunk *pNew = sqlite3_malloc((sizeof(FileChunk) + ((p->nChunkSize)-8)));
          if( !pNew )
{

            return (10 | (12<<8));
          }
          pNew->pNext = 0;
          if( pChunk )
{

            ((void) (0));
            pChunk->pNext = pNew;
          }else{
            ((void) (0));
            p->pFirst = pNew;
          }
          p->endpoint.pChunk = pNew;
        }

        memcpy((u8*)p->endpoint.pChunk->zChunk + iChunkOffset, zWrite, iSpace);
        zWrite += iSpace;
        nWrite -= iSpace;
        p->endpoint.iOffset += iSpace;
      }
      p->nSize = iAmt + iOfst;
    }
  }

  return 0;
}
# 84837 "sqlite3.c"
static int memjrnlTruncate(sqlite3_file *pJfd, sqlite_int64 size)
{

  MemJournal *p = (MemJournal *)pJfd;
  if( (size==0) )
{

    memjrnlFreeChunks(p);
    p->nSize = 0;
    p->endpoint.pChunk = 0;
    p->endpoint.iOffset = 0;
    p->readpoint.pChunk = 0;
    p->readpoint.iOffset = 0;
  }
  return 0;
}




static int memjrnlClose(sqlite3_file *pJfd)
{

  MemJournal *p = (MemJournal *)pJfd;
  memjrnlFreeChunks(p);
  return 0;
}







static int memjrnlSync(sqlite3_file *pJfd, int flags)
{

  (void)(pJfd),(void)(flags);
  return 0;
}




static int memjrnlFileSize(sqlite3_file *pJfd, sqlite_int64 *pSize)
{

  MemJournal *p = (MemJournal *)pJfd;
  *pSize = (sqlite_int64) p->endpoint.iOffset;
  return 0;
}




static const struct sqlite3_io_methods MemJournalMethods = {
  1,
  memjrnlClose,
  memjrnlRead,
  memjrnlWrite,
  memjrnlTruncate,
  memjrnlSync,
  memjrnlFileSize,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
# 84916 "sqlite3.c"
static int sqlite3JournalOpen(
  sqlite3_vfs *pVfs,
  const char *zName,
  sqlite3_file *pJfd,
  int flags,
  int nSpill
)
{

  MemJournal *p = (MemJournal*)pJfd;





  memset(p, 0, sizeof(MemJournal));
  if( nSpill==0 )
{

    return sqlite3OsOpen(pVfs, zName, pJfd, flags, 0);
  }

  if( nSpill>0 )
{

    p->nChunkSize = nSpill;
  }else{
    p->nChunkSize = 8 + 1024 - sizeof(FileChunk);
    ((void) (0));
  }

  p->pMethod = (const sqlite3_io_methods*)&MemJournalMethods;
  p->nSpill = nSpill;
  p->flags = flags;
  p->zJournal = zName;
  p->pVfs = pVfs;
  return 0;
}




static void sqlite3MemJournalOpen(sqlite3_file *pJfd)
{

  sqlite3JournalOpen(0, 0, pJfd, 0, -1);
}
# 84977 "sqlite3.c"
static int sqlite3JournalIsInMemory(sqlite3_file *p)
{

  return p->pMethods==&MemJournalMethods;
}





static int sqlite3JournalSize(sqlite3_vfs *pVfs)
{

  return ((pVfs->szOsFile)>((int)sizeof(MemJournal))?(pVfs->szOsFile):((int)sizeof(MemJournal)));
}
# 85029 "sqlite3.c"
static __attribute__((noinline)) int walkExpr(Walker *pWalker, Expr *pExpr)
{

  int rc;
  ;
  ;
  rc = pWalker->xExprCallback(pWalker, pExpr);
  if( rc==0
              && !(((pExpr)->flags&(0x004000))!=0) )
{

    if( sqlite3WalkExpr(pWalker, pExpr->pLeft) ) return 2;
    if( sqlite3WalkExpr(pWalker, pExpr->pRight) ) return 2;
    if( (((pExpr)->flags&(0x000800))!=0) )
{

      if( sqlite3WalkSelect(pWalker, pExpr->x.pSelect) ) return 2;
    }else{
      if( sqlite3WalkExprList(pWalker, pExpr->x.pList) ) return 2;
    }
  }
  return rc & 2;
}
static int sqlite3WalkExpr(Walker *pWalker, Expr *pExpr)
{

  return pExpr ? walkExpr(pWalker,pExpr) : 0;
}





static int sqlite3WalkExprList(Walker *pWalker, ExprList *p)
{

  int i;
  struct ExprList_item *pItem;
  if( p )
{

    for(i=p->nExpr, pItem=p->a; i>0; i--, pItem++)
{

      if( sqlite3WalkExpr(pWalker, pItem->pExpr) ) return 2;
    }
  }
  return 0;
}







static int sqlite3WalkSelectExpr(Walker *pWalker, Select *p)
{

  if( sqlite3WalkExprList(pWalker, p->pEList) ) return 2;
  if( sqlite3WalkExpr(pWalker, p->pWhere) ) return 2;
  if( sqlite3WalkExprList(pWalker, p->pGroupBy) ) return 2;
  if( sqlite3WalkExpr(pWalker, p->pHaving) ) return 2;
  if( sqlite3WalkExprList(pWalker, p->pOrderBy) ) return 2;
  if( sqlite3WalkExpr(pWalker, p->pLimit) ) return 2;
  if( sqlite3WalkExpr(pWalker, p->pOffset) ) return 2;
  return 0;
}
# 85089 "sqlite3.c"
static int sqlite3WalkSelectFrom(Walker *pWalker, Select *p)
{

  SrcList *pSrc;
  int i;
  struct SrcList_item *pItem;

  pSrc = p->pSrc;
  if( (pSrc) )
{

    for(i=pSrc->nSrc, pItem=pSrc->a; i>0; i--, pItem++)
{

      if( sqlite3WalkSelect(pWalker, pItem->pSelect) )
{

        return 2;
      }
      if( pItem->fg.isTabFunc
       && sqlite3WalkExprList(pWalker, pItem->u1.pFuncArg)
      )
{

        return 2;
      }
    }
  }
  return 0;
}
# 85126 "sqlite3.c"
static int sqlite3WalkSelect(Walker *pWalker, Select *p)
{

  int rc;
  if( p==0 || (pWalker->xSelectCallback==0 && pWalker->xSelectCallback2==0) )
{

    return 0;
  }
  rc = 0;
  pWalker->walkerDepth++;
  while( p )
{

    if( pWalker->xSelectCallback )
{

       rc = pWalker->xSelectCallback(pWalker, p);
       if( rc ) break;
    }
    if( sqlite3WalkSelectExpr(pWalker, p)
     || sqlite3WalkSelectFrom(pWalker, p)
    )
{

      pWalker->walkerDepth--;
      return 2;
    }
    if( pWalker->xSelectCallback2 )
{

      pWalker->xSelectCallback2(pWalker, p);
    }
    p = p->pPrior;
  }
  pWalker->walkerDepth--;
  return rc & 2;
}
# 85184 "sqlite3.c"
static int incrAggDepth(Walker *pWalker, Expr *pExpr)
{

  if( pExpr->op==153 ) pExpr->op2 += pWalker->u.n;
  return 0;
}
static void incrAggFunctionDepth(Expr *pExpr, int N)
{

  if( N>0 )
{

    Walker w;
    memset(&w, 0, sizeof(w));
    w.xExprCallback = incrAggDepth;
    w.u.n = N;
    sqlite3WalkExpr(&w, pExpr);
  }
}
# 85217 "sqlite3.c"
static void resolveAlias(
  Parse *pParse,
  ExprList *pEList,
  int iCol,
  Expr *pExpr,
  const char *zType,
  int nSubquery
)
{

  Expr *pOrig;
  Expr *pDup;
  sqlite3 *db;

  ((void) (0));
  pOrig = pEList->a[iCol].pExpr;
  ((void) (0));
  db = pParse->db;
  pDup = sqlite3ExprDup(db, pOrig, 0);
  if( pDup==0 ) return;
  if( zType[0]!='G' ) incrAggFunctionDepth(pDup, nSubquery);
  if( pExpr->op==95 )
{

    pDup = sqlite3ExprAddCollateString(pParse, pDup, pExpr->u.zToken);
  }
  (pDup)->flags|=(0x400000);
# 85248 "sqlite3.c"
  (pExpr)->flags|=(0x008000);
  sqlite3ExprDelete(db, pExpr);
  memcpy(pExpr, pDup, sizeof(*pExpr));
  if( !(((pExpr)->flags&(0x000400))!=0) && pExpr->u.zToken!=0 )
{

    ((void) (0));
    pExpr->u.zToken = sqlite3DbStrDup(db, pExpr->u.zToken);
    pExpr->flags |= 0x010000;
  }
  sqlite3DbFree(db, pDup);
}
# 85266 "sqlite3.c"
static int nameInUsingClause(IdList *pUsing, const char *zCol)
{

  if( pUsing )
{

    int k;
    for(k=0; k<pUsing->nId; k++)
{

      if( sqlite3StrICmp(pUsing->a[k].zName, zCol)==0 ) return 1;
    }
  }
  return 0;
}
# 85283 "sqlite3.c"
static int sqlite3MatchSpanName(
  const char *zSpan,
  const char *zCol,
  const char *zTab,
  const char *zDb
)
{

  int n;
  for(n=0; (zSpan[n]) && zSpan[n]!='.'; n++)
{
}
  if( zDb && (sqlite3_strnicmp(zSpan, zDb, n)!=0 || zDb[n]!=0) )
{

    return 0;
  }
  zSpan += n+1;
  for(n=0; (zSpan[n]) && zSpan[n]!='.'; n++)
{
}
  if( zTab && (sqlite3_strnicmp(zSpan, zTab, n)!=0 || zTab[n]!=0) )
{

    return 0;
  }
  zSpan += n+1;
  if( zCol && sqlite3StrICmp(zSpan, zCol)!=0 )
{

    return 0;
  }
  return 1;
}
# 85333 "sqlite3.c"
static int lookupName(
  Parse *pParse,
  const char *zDb,
  const char *zTab,
  const char *zCol,
  NameContext *pNC,
  Expr *pExpr
)
{

  int i, j;
  int cnt = 0;
  int cntTab = 0;
  int nSubquery = 0;
  sqlite3 *db = pParse->db;
  struct SrcList_item *pItem;
  struct SrcList_item *pMatch = 0;
  NameContext *pTopNC = pNC;
  Schema *pSchema = 0;
  int isTrigger = 0;
  Table *pTab = 0;
  Column *pCol;

  ((void) (0));
  ((void) (0));
  ((void) (0));


  pExpr->iTable = -1;
  pExpr->pTab = 0;
  ;





  if( zDb )
{

    ;
    ;
    if( (pNC->ncFlags & (0x0010|0x0004))!=0 )
{





      zDb = 0;
    }else{
      for(i=0; i<db->nDb; i++)
{

        ((void) (0));
        if( sqlite3StrICmp(db->aDb[i].zName,zDb)==0 )
{

          pSchema = db->aDb[i].pSchema;
          break;
        }
      }
    }
  }


  while( pNC && cnt==0 )
{

    ExprList *pEList;
    SrcList *pSrcList = pNC->pSrcList;

    if( pSrcList )
{

      for(i=0, pItem=pSrcList->a; i<pSrcList->nSrc; i++, pItem++)
{

        pTab = pItem->pTab;
        ((void) (0));
        ((void) (0));
        if( pItem->pSelect && (pItem->pSelect->selFlags & 0x00400)!=0 )
{

          int hit = 0;
          pEList = pItem->pSelect->pEList;
          for(j=0; j<pEList->nExpr; j++)
{

            if( sqlite3MatchSpanName(pEList->a[j].zSpan, zCol, zTab, zDb) )
{

              cnt++;
              cntTab = 2;
              pMatch = pItem;
              pExpr->iColumn = j;
              hit = 1;
            }
          }
          if( hit || zTab==0 ) continue;
        }
        if( zDb && pTab->pSchema!=pSchema )
{

          continue;
        }
        if( zTab )
{

          const char *zTabName = pItem->zAlias ? pItem->zAlias : pTab->zName;
          ((void) (0));
          if( sqlite3StrICmp(zTabName, zTab)!=0 )
{

            continue;
          }
        }
        if( 0==(cntTab++) )
{

          pMatch = pItem;
        }
        for(j=0, pCol=pTab->aCol; j<pTab->nCol; j++, pCol++)
{

          if( sqlite3StrICmp(pCol->zName, zCol)==0 )
{





            if( cnt==1 )
{

              if( pItem->fg.jointype & 0x0004 ) continue;
              if( nameInUsingClause(pItem->pUsing, zCol) ) continue;
            }
            cnt++;
            pMatch = pItem;

            pExpr->iColumn = j==pTab->iPKey ? -1 : (i16)j;
            break;
          }
        }
      }
      if( pMatch )
{

        pExpr->iTable = pMatch->iCursor;
        pExpr->pTab = pMatch->pTab;

        ((void) (0));
        if( (pMatch->fg.jointype & 0x0008)!=0 )
{

          (pExpr)->flags|=(0x100000);
        }
        pSchema = pExpr->pTab->pSchema;
      }
    }





    if( zDb==0 && zTab!=0 && cntTab==0 && pParse->pTriggerTab!=0 )
{

      int op = pParse->eTriggerOp;
      ((void) (0));
      if( op!=109 && sqlite3StrICmp("new",zTab) == 0 )
{

        pExpr->iTable = 1;
        pTab = pParse->pTriggerTab;
      }else if( op!=108 && sqlite3StrICmp("old",zTab)==0 )
{

        pExpr->iTable = 0;
        pTab = pParse->pTriggerTab;
      }else{
        pTab = 0;
      }

      if( pTab )
{

        int iCol;
        pSchema = pTab->pSchema;
        cntTab++;
        for(iCol=0, pCol=pTab->aCol; iCol<pTab->nCol; iCol++, pCol++)
{

          if( sqlite3StrICmp(pCol->zName, zCol)==0 )
{

            if( iCol==pTab->iPKey )
{

              iCol = -1;
            }
            break;
          }
        }
        if( iCol>=pTab->nCol && sqlite3IsRowid(zCol) && (((pTab)->tabFlags & 0x40)==0) )
{


          iCol = -1;
        }
        if( iCol<pTab->nCol )
{

          cnt++;
          if( iCol<0 )
{

            pExpr->affinity = 'D';
          }else if( pExpr->iTable==0 )
{

            ;
            ;
            pParse->oldmask |= (iCol>=32 ? 0xffffffff : (((u32)1)<<iCol));
          }else{
            ;
            ;
            pParse->newmask |= (iCol>=32 ? 0xffffffff : (((u32)1)<<iCol));
          }
          pExpr->iColumn = (i16)iCol;
          pExpr->pTab = pTab;
          isTrigger = 1;
        }
      }
    }





    if( cnt==0
     && cntTab==1
     && pMatch
     && (pNC->ncFlags & 0x0020)==0
     && sqlite3IsRowid(zCol)
     && (((pMatch->pTab)->tabFlags & 0x40)==0)
    )
{

      cnt = 1;
      pExpr->iColumn = -1;
      pExpr->affinity = 'D';
    }
# 85541 "sqlite3.c"
    if( (pEList = pNC->pEList)!=0
     && zTab==0
     && cnt==0
    )
{

      for(j=0; j<pEList->nExpr; j++)
{

        char *zAs = pEList->a[j].zName;
        if( zAs!=0 && sqlite3StrICmp(zAs, zCol)==0 )
{

          Expr *pOrig;
          ((void) (0));
          ((void) (0));
          ((void) (0));
          pOrig = pEList->a[j].pExpr;
          if( (pNC->ncFlags&0x0001)==0 && (((pOrig)->flags&(0x000002))!=0) )
{

            sqlite3ErrorMsg(pParse, "misuse of aliased aggregate %s", zAs);
            return 2;
          }
          resolveAlias(pParse, pEList, j, pExpr, "", nSubquery);
          cnt = 1;
          pMatch = 0;
          ((void) (0));
          goto lookupname_end;
        }
      }
    }




    if( cnt==0 )
{

      pNC = pNC->pNext;
      nSubquery++;
    }
  }
# 85585 "sqlite3.c"
  if( cnt==0 && zTab==0 && (((pExpr)->flags&(0x000040))!=0) )
{

    pExpr->op = 97;
    pExpr->pTab = 0;
    return 1;
  }





  if( cnt!=1 )
{

    const char *zErr;
    zErr = cnt==0 ? "no such column" : "ambiguous column name";
    if( zDb )
{

      sqlite3ErrorMsg(pParse, "%s: %s.%s.%s", zErr, zDb, zTab, zCol);
    }else if( zTab )
{

      sqlite3ErrorMsg(pParse, "%s: %s.%s", zErr, zTab, zCol);
    }else{
      sqlite3ErrorMsg(pParse, "%s: %s", zErr, zCol);
    }
    pParse->checkSchema = 1;
    pTopNC->nErr++;
  }







  if( pExpr->iColumn>=0 && pMatch!=0 )
{

    int n = pExpr->iColumn;
    ;
    if( n>=((int)(sizeof(Bitmask)*8)) )
{

      n = ((int)(sizeof(Bitmask)*8))-1;
    }
    ((void) (0));
    pMatch->colUsed |= ((Bitmask)1)<<n;
  }



  sqlite3ExprDelete(db, pExpr->pLeft);
  pExpr->pLeft = 0;
  sqlite3ExprDelete(db, pExpr->pRight);
  pExpr->pRight = 0;
  pExpr->op = (isTrigger ? 62 : 152);
lookupname_end:
  if( cnt==1 )
{

    ((void) (0));
    if( !(((pExpr)->flags&(0x400000))!=0) )
{

      sqlite3AuthRead(pParse, pExpr, pSchema, pNC->pSrcList);
    }


    for(;;)
{

      ((void) (0));
      pTopNC->nRef++;
      if( pTopNC==pNC ) break;
      pTopNC = pTopNC->pNext;
    }
    return 1;
  } else {
    return 2;
  }
}





static Expr *sqlite3CreateColumnExpr(sqlite3 *db, SrcList *pSrc, int iSrc, int iCol)
{

  Expr *p = sqlite3ExprAlloc(db, 152, 0, 0);
  if( p )
{

    struct SrcList_item *pItem = &pSrc->a[iSrc];
    p->pTab = pItem->pTab;
    p->iTable = pItem->iCursor;
    if( p->pTab->iPKey==iCol )
{

      p->iColumn = -1;
    }else{
      p->iColumn = (ynVar)iCol;
      ;
      ;
      pItem->colUsed |= ((Bitmask)1)<<(iCol>=((int)(sizeof(Bitmask)*8)) ? ((int)(sizeof(Bitmask)*8))-1 : iCol);
    }
    (p)->flags|=(0x000004);
  }
  return p;
}





static void notValid(
  Parse *pParse,
  NameContext *pNC,
  const char *zMsg,
  int validMask
)
{

  ((void) (0));
  if( (pNC->ncFlags & validMask)!=0 )
{

    const char *zIn = "partial index WHERE clauses";
    if( pNC->ncFlags & 0x0020 ) zIn = "index expressions";

    else if( pNC->ncFlags & 0x0004 ) zIn = "CHECK constraints";

    sqlite3ErrorMsg(pParse, "%s prohibited in %s", zMsg, zIn);
  }
}






static int exprProbability(Expr *p)
{

  double r = -1.0;
  if( p->op!=133 ) return -1;
  sqlite3AtoF(p->u.zToken, &r, sqlite3Strlen30(p->u.zToken), 1);
  ((void) (0));
  if( r>1.0 ) return -1;
  return (int)(r*134217728.0);
}
# 85721 "sqlite3.c"
static int resolveExprStep(Walker *pWalker, Expr *pExpr)
{

  NameContext *pNC;
  Parse *pParse;

  pNC = pWalker->u.pNC;
  ((void) (0));
  pParse = pNC->pParse;
  ((void) (0));

  if( (((pExpr)->flags&(0x000004))!=0) ) return 1;
  (pExpr)->flags|=(0x000004);
# 85741 "sqlite3.c"
  switch( pExpr->op )
{

# 85765 "sqlite3.c"
    case 27: {
      return lookupName(pParse, 0, 0, pExpr->u.zToken, pNC, pExpr);
    }




    case 122: {
      const char *zColumn;
      const char *zTable;
      const char *zDb;
      Expr *pRight;


      notValid(pParse, pNC, "the \".\" operator", 0x0020);

      pRight = pExpr->pRight;
      if( pRight->op==27 )
{

        zDb = 0;
        zTable = pExpr->pLeft->u.zToken;
        zColumn = pRight->u.zToken;
      }else{
        ((void) (0));
        zDb = pExpr->pLeft->u.zToken;
        zTable = pRight->pLeft->u.zToken;
        zColumn = pRight->pRight->u.zToken;
      }
      return lookupName(pParse, zDb, zTable, zColumn, pNC, pExpr);
    }



    case 151: {
      ExprList *pList = pExpr->x.pList;
      int n = pList ? pList->nExpr : 0;
      int no_such_func = 0;
      int wrong_num_args = 0;
      int is_agg = 0;
      int auth;
      int nId;
      const char *zId;
      FuncDef *pDef;
      u8 enc = ((pParse->db)->enc);

      ((void) (0));
      notValid(pParse, pNC, "functions", 0x0010);
      zId = pExpr->u.zToken;
      nId = sqlite3Strlen30(zId);
      pDef = sqlite3FindFunction(pParse->db, zId, n, enc, 0);
      if( pDef==0 )
{

        pDef = sqlite3FindFunction(pParse->db, zId, -2, enc, 0);
        if( pDef==0 )
{

          no_such_func = 1;
        }else{
          wrong_num_args = 1;
        }
      }else{
        is_agg = pDef->xFinalize!=0;
        if( pDef->funcFlags & 0x0400 )
{

          (pExpr)->flags|=(0x040000|0x001000);
          if( n==2 )
{

            pExpr->iTable = exprProbability(pList->a[1].pExpr);
            if( pExpr->iTable<0 )
{

              sqlite3ErrorMsg(pParse,
                "second argument to likelihood() must be a "
                "constant between 0.0 and 1.0");
              pNC->nErr++;
            }
          }else{
# 85843 "sqlite3.c"
            pExpr->iTable = pDef->zName[0]=='u' ? 8388608 : 125829120;
          }
        }

        auth = sqlite3AuthCheck(pParse, 31, 0, pDef->zName, 0);
        if( auth!=0 )
{

          if( auth==1 )
{

            sqlite3ErrorMsg(pParse, "not authorized to use function: %s",
                                    pDef->zName);
            pNC->nErr++;
          }
          pExpr->op = 101;
          return 1;
        }

        if( pDef->funcFlags & (0x0800|0x2000) )
{




          (pExpr)->flags|=(0x080000);
        }
        if( (pDef->funcFlags & 0x0800)==0 )
{




          notValid(pParse, pNC, "non-deterministic functions", 0x0020);
        }
      }
      if( is_agg && (pNC->ncFlags & 0x0001)==0 )
{

        sqlite3ErrorMsg(pParse, "misuse of aggregate function %.*s()", nId,zId);
        pNC->nErr++;
        is_agg = 0;
      }else if( no_such_func && pParse->db->init.busy==0 )
{

        sqlite3ErrorMsg(pParse, "no such function: %.*s", nId, zId);
        pNC->nErr++;
      }else if( wrong_num_args )
{

        sqlite3ErrorMsg(pParse,"wrong number of arguments to function %.*s()",
             nId, zId);
        pNC->nErr++;
      }
      if( is_agg ) pNC->ncFlags &= ~0x0001;
      sqlite3WalkExprList(pWalker, pList);
      if( is_agg )
{

        NameContext *pNC2 = pNC;
        pExpr->op = 153;
        pExpr->op2 = 0;
        while( pNC2 && !sqlite3FunctionUsesThisSrc(pExpr, pNC2->pSrcList) )
{

          pExpr->op2++;
          pNC2 = pNC2->pNext;
        }
        ((void) (0));
        if( pNC2 )
{

          ((void) (0));
          ;
          pNC2->ncFlags |= 0x0002 | (pDef->funcFlags & 0x1000);

        }
        pNC->ncFlags |= 0x0001;
      }



      return 1;
    }

    case 119:
    case 20: ;

    case 75: {
      ;
      if( (((pExpr)->flags&(0x000800))!=0) )
{

        int nRef = pNC->nRef;
        notValid(pParse, pNC, "subqueries", 0x0004|0x0010|0x0020);
        sqlite3WalkSelect(pWalker, pExpr->x.pSelect);
        ((void) (0));
        if( nRef!=pNC->nRef )
{

          (pExpr)->flags|=(0x000020);
        }
      }
      break;
    }
    case 135: {
      notValid(pParse, pNC, "parameters", 0x0004|0x0010|0x0020);
      break;
    }
  }
  return (pParse->nErr || pParse->db->mallocFailed) ? 2 : 0;
}
# 85944 "sqlite3.c"
static int resolveAsName(
  Parse *pParse,
  ExprList *pEList,
  Expr *pE
)
{

  int i;

  (void)(pParse);

  if( pE->op==27 )
{

    char *zCol = pE->u.zToken;
    for(i=0; i<pEList->nExpr; i++)
{

      char *zAs = pEList->a[i].zName;
      if( zAs!=0 && sqlite3StrICmp(zAs, zCol)==0 )
{

        return i+1;
      }
    }
  }
  return 0;
}
# 85983 "sqlite3.c"
static int resolveOrderByTermToExprList(
  Parse *pParse,
  Select *pSelect,
  Expr *pE
)
{

  int i;
  ExprList *pEList;
  NameContext nc;
  sqlite3 *db;
  int rc;
  u8 savedSuppErr;

  ((void) (0));
  pEList = pSelect->pEList;



  memset(&nc, 0, sizeof(nc));
  nc.pParse = pParse;
  nc.pSrcList = pSelect->pSrc;
  nc.pEList = pEList;
  nc.ncFlags = 0x0001;
  nc.nErr = 0;
  db = pParse->db;
  savedSuppErr = db->suppressErr;
  db->suppressErr = 1;
  rc = sqlite3ResolveExprNames(&nc, pE);
  db->suppressErr = savedSuppErr;
  if( rc ) return 0;





  for(i=0; i<pEList->nExpr; i++)
{

    if( sqlite3ExprCompare(pEList->a[i].pExpr, pE, -1)<2 )
{

      return i+1;
    }
  }


  return 0;
}




static void resolveOutOfRangeError(
  Parse *pParse,
  const char *zType,
  int i,
  int mx
)
{

  sqlite3ErrorMsg(pParse,
    "%r %s BY term out of range - should be "
    "between 1 and %d", i, zType, mx);
}
# 86056 "sqlite3.c"
static int resolveCompoundOrderBy(
  Parse *pParse,
  Select *pSelect
)
{

  int i;
  ExprList *pOrderBy;
  ExprList *pEList;
  sqlite3 *db;
  int moreToDo = 1;

  pOrderBy = pSelect->pOrderBy;
  if( pOrderBy==0 ) return 0;
  db = pParse->db;

  if( pOrderBy->nExpr>db->aLimit[2] )
{

    sqlite3ErrorMsg(pParse, "too many terms in ORDER BY clause");
    return 1;
  }

  for(i=0; i<pOrderBy->nExpr; i++)
{

    pOrderBy->a[i].done = 0;
  }
  pSelect->pNext = 0;
  while( pSelect->pPrior )
{

    pSelect->pPrior->pNext = pSelect;
    pSelect = pSelect->pPrior;
  }
  while( pSelect && moreToDo )
{

    struct ExprList_item *pItem;
    moreToDo = 0;
    pEList = pSelect->pEList;
    ((void) (0));
    for(i=0, pItem=pOrderBy->a; i<pOrderBy->nExpr; i++, pItem++)
{

      int iCol = -1;
      Expr *pE, *pDup;
      if( pItem->done ) continue;
      pE = sqlite3ExprSkipCollate(pItem->pExpr);
      if( sqlite3ExprIsInteger(pE, &iCol) )
{

        if( iCol<=0 || iCol>pEList->nExpr )
{

          resolveOutOfRangeError(pParse, "ORDER", i+1, pEList->nExpr);
          return 1;
        }
      }else{
        iCol = resolveAsName(pParse, pEList, pE);
        if( iCol==0 )
{

          pDup = sqlite3ExprDup(db, pE, 0);
          if( !db->mallocFailed )
{

            ((void) (0));
            iCol = resolveOrderByTermToExprList(pParse, pSelect, pDup);
          }
          sqlite3ExprDelete(db, pDup);
        }
      }
      if( iCol>0 )
{



        Expr *pNew = sqlite3Expr(db, 132, 0);
        if( pNew==0 ) return 1;
        pNew->flags |= 0x000400;
        pNew->u.iValue = iCol;
        if( pItem->pExpr==pE )
{

          pItem->pExpr = pNew;
        }else{
          Expr *pParent = pItem->pExpr;
          ((void) (0));
          while( pParent->pLeft->op==95 ) pParent = pParent->pLeft;
          ((void) (0));
          pParent->pLeft = pNew;
        }
        sqlite3ExprDelete(db, pE);
        pItem->u.x.iOrderByCol = (u16)iCol;
        pItem->done = 1;
      }else{
        moreToDo = 1;
      }
    }
    pSelect = pSelect->pNext;
  }
  for(i=0; i<pOrderBy->nExpr; i++)
{

    if( pOrderBy->a[i].done==0 )
{

      sqlite3ErrorMsg(pParse, "%r ORDER BY term does not match any "
            "column in the result set", i+1);
      return 1;
    }
  }
  return 0;
}
# 86154 "sqlite3.c"
static int sqlite3ResolveOrderGroupBy(
  Parse *pParse,
  Select *pSelect,
  ExprList *pOrderBy,
  const char *zType
)
{

  int i;
  sqlite3 *db = pParse->db;
  ExprList *pEList;
  struct ExprList_item *pItem;

  if( pOrderBy==0 || pParse->db->mallocFailed ) return 0;

  if( pOrderBy->nExpr>db->aLimit[2] )
{

    sqlite3ErrorMsg(pParse, "too many terms in %s BY clause", zType);
    return 1;
  }

  pEList = pSelect->pEList;
  ((void) (0));
  for(i=0, pItem=pOrderBy->a; i<pOrderBy->nExpr; i++, pItem++)
{

    if( pItem->u.x.iOrderByCol )
{

      if( pItem->u.x.iOrderByCol>pEList->nExpr )
{

        resolveOutOfRangeError(pParse, zType, i+1, pEList->nExpr);
        return 1;
      }
      resolveAlias(pParse, pEList, pItem->u.x.iOrderByCol-1, pItem->pExpr,
                   zType,0);
    }
  }
  return 0;
}
# 86205 "sqlite3.c"
static int resolveOrderGroupBy(
  NameContext *pNC,
  Select *pSelect,
  ExprList *pOrderBy,
  const char *zType
)
{

  int i, j;
  int iCol;
  struct ExprList_item *pItem;
  Parse *pParse;
  int nResult;

  if( pOrderBy==0 ) return 0;
  nResult = pSelect->pEList->nExpr;
  pParse = pNC->pParse;
  for(i=0, pItem=pOrderBy->a; i<pOrderBy->nExpr; i++, pItem++)
{

    Expr *pE = pItem->pExpr;
    Expr *pE2 = sqlite3ExprSkipCollate(pE);
    if( zType[0]!='G' )
{

      iCol = resolveAsName(pParse, pSelect->pEList, pE2);
      if( iCol>0 )
{





        pItem->u.x.iOrderByCol = (u16)iCol;
        continue;
      }
    }
    if( sqlite3ExprIsInteger(pE2, &iCol) )
{




      if( iCol<1 || iCol>0xffff )
{

        resolveOutOfRangeError(pParse, zType, i+1, nResult);
        return 1;
      }
      pItem->u.x.iOrderByCol = (u16)iCol;
      continue;
    }


    pItem->u.x.iOrderByCol = 0;
    if( sqlite3ResolveExprNames(pNC, pE) )
{

      return 1;
    }
    for(j=0; j<pSelect->pEList->nExpr; j++)
{

      if( sqlite3ExprCompare(pE, pSelect->pEList->a[j].pExpr, -1)==0 )
{

        pItem->u.x.iOrderByCol = j+1;
      }
    }
  }
  return sqlite3ResolveOrderGroupBy(pParse, pSelect, pOrderBy, zType);
}




static int resolveSelectStep(Walker *pWalker, Select *p)
{

  NameContext *pOuterNC;
  NameContext sNC;
  int isCompound;
  int nCompound;
  Parse *pParse;
  int i;
  ExprList *pGroupBy;
  Select *pLeftmost;
  sqlite3 *db;


  ((void) (0));
  if( p->selFlags & 0x00004 )
{

    return 1;
  }
  pOuterNC = pWalker->u.pNC;
  pParse = pWalker->pParse;
  db = pParse->db;
# 86291 "sqlite3.c"
  if( (p->selFlags & 0x00020)==0 )
{

    sqlite3SelectPrep(pParse, p, pOuterNC);
    return (pParse->nErr || db->mallocFailed) ? 2 : 1;
  }

  isCompound = p->pPrior!=0;
  nCompound = 0;
  pLeftmost = p;
  while( p )
{

    ((void) (0));
    ((void) (0));
    p->selFlags |= 0x00004;




    memset(&sNC, 0, sizeof(sNC));
    sNC.pParse = pParse;
    if( sqlite3ResolveExprNames(&sNC, p->pLimit) ||
        sqlite3ResolveExprNames(&sNC, p->pOffset) )
{

      return 2;
    }







    if( p->selFlags & 0x08000 )
{

      Select *pSub = p->pSrc->a[0].pSelect;
      ((void) (0));
      ((void) (0));
      pSub->pOrderBy = p->pOrderBy;
      p->pOrderBy = 0;
    }



    for(i=0; i<p->pSrc->nSrc; i++)
{

      struct SrcList_item *pItem = &p->pSrc->a[i];
      if( pItem->pSelect )
{

        NameContext *pNC;
        int nRef = 0;
        const char *zSavedContext = pParse->zAuthContext;






        for(pNC=pOuterNC; pNC; pNC=pNC->pNext) nRef += pNC->nRef;

        if( pItem->zName ) pParse->zAuthContext = pItem->zName;
        sqlite3ResolveSelectNames(pParse, pItem->pSelect, pOuterNC);
        pParse->zAuthContext = zSavedContext;
        if( pParse->nErr || db->mallocFailed ) return 2;

        for(pNC=pOuterNC; pNC; pNC=pNC->pNext) nRef -= pNC->nRef;
        ((void) (0));
        pItem->fg.isCorrelated = (nRef!=0);
      }
    }




    sNC.ncFlags = 0x0001;
    sNC.pSrcList = p->pSrc;
    sNC.pNext = pOuterNC;


    if( sqlite3ResolveExprListNames(&sNC, p->pEList) ) return 2;




    ((void) (0));
    pGroupBy = p->pGroupBy;
    if( pGroupBy || (sNC.ncFlags & 0x0002)!=0 )
{

      ((void) (0));
      p->selFlags |= 0x00008 | (sNC.ncFlags&0x1000);
    }else{
      sNC.ncFlags &= ~0x0001;
    }



    if( p->pHaving && !pGroupBy )
{

      sqlite3ErrorMsg(pParse, "a GROUP BY clause is required before HAVING");
      return 2;
    }
# 86392 "sqlite3.c"
    sNC.pEList = p->pEList;
    if( sqlite3ResolveExprNames(&sNC, p->pHaving) ) return 2;
    if( sqlite3ResolveExprNames(&sNC, p->pWhere) ) return 2;


    for(i=0; i<p->pSrc->nSrc; i++)
{

      struct SrcList_item *pItem = &p->pSrc->a[i];
      if( pItem->fg.isTabFunc
       && sqlite3ResolveExprListNames(&sNC, pItem->u1.pFuncArg)
      )
{

        return 2;
      }
    }




    sNC.pNext = 0;
    sNC.ncFlags |= 0x0001;






    if( p->selFlags & 0x08000 )
{

      Select *pSub = p->pSrc->a[0].pSelect;
      p->pOrderBy = pSub->pOrderBy;
      pSub->pOrderBy = 0;
    }
# 86433 "sqlite3.c"
    if( isCompound<=nCompound
     && resolveOrderGroupBy(&sNC, p, p->pOrderBy, "ORDER")
    )
{

      return 2;
    }
    if( db->mallocFailed )
{

      return 2;
    }




    if( pGroupBy )
{

      struct ExprList_item *pItem;

      if( resolveOrderGroupBy(&sNC, p, pGroupBy, "GROUP") || db->mallocFailed )
{

        return 2;
      }
      for(i=0, pItem=pGroupBy->a; i<pGroupBy->nExpr; i++, pItem++)
{

        if( (((pItem->pExpr)->flags&(0x000002))!=0) )
{

          sqlite3ErrorMsg(pParse, "aggregate functions are not allowed in "
              "the GROUP BY clause");
          return 2;
        }
      }
    }



    if( p->pNext && p->pEList->nExpr!=p->pNext->pEList->nExpr )
{

      sqlite3SelectWrongNumTermsError(pParse, p->pNext);
      return 2;
    }



    p = p->pPrior;
    nCompound++;
  }




  if( isCompound && resolveCompoundOrderBy(pParse, pLeftmost) )
{

    return 2;
  }

  return 1;
}
# 86531 "sqlite3.c"
static int sqlite3ResolveExprNames(
  NameContext *pNC,
  Expr *pExpr
)
{

  u16 savedHasAgg;
  Walker w;

  if( pExpr==0 ) return 0;

  {
    Parse *pParse = pNC->pParse;
    if( sqlite3ExprCheckHeight(pParse, pExpr->nHeight+pNC->pParse->nHeight) )
{

      return 1;
    }
    pParse->nHeight += pExpr->nHeight;
  }

  savedHasAgg = pNC->ncFlags & (0x0002|0x1000);
  pNC->ncFlags &= ~(0x0002|0x1000);
  w.pParse = pNC->pParse;
  w.xExprCallback = resolveExprStep;
  w.xSelectCallback = resolveSelectStep;
  w.xSelectCallback2 = 0;
  w.walkerDepth = 0;
  w.eCode = 0;
  w.u.pNC = pNC;
  sqlite3WalkExpr(&w, pExpr);

  pNC->pParse->nHeight -= pExpr->nHeight;

  if( pNC->nErr>0 || w.pParse->nErr>0 )
{

    (pExpr)->flags|=(0x000008);
  }
  if( pNC->ncFlags & 0x0002 )
{

    (pExpr)->flags|=(0x000002);
  }
  pNC->ncFlags |= savedHasAgg;
  return (((pExpr)->flags&(0x000008))!=0);
}






static int sqlite3ResolveExprListNames(
  NameContext *pNC,
  ExprList *pList
)
{

  int i;
  if( pList )
{

    for(i=0; i<pList->nExpr; i++)
{

      if( sqlite3ResolveExprNames(pNC, pList->a[i].pExpr) ) return 2;
    }
  }
  return 0;
}
# 86601 "sqlite3.c"
static void sqlite3ResolveSelectNames(
  Parse *pParse,
  Select *p,
  NameContext *pOuterNC
)
{

  Walker w;

  ((void) (0));
  memset(&w, 0, sizeof(w));
  w.xExprCallback = resolveExprStep;
  w.xSelectCallback = resolveSelectStep;
  w.pParse = pParse;
  w.u.pNC = pOuterNC;
  sqlite3WalkSelect(&w, p);
}
# 86628 "sqlite3.c"
static void sqlite3ResolveSelfReference(
  Parse *pParse,
  Table *pTab,
  int type,
  Expr *pExpr,
  ExprList *pList
)
{

  SrcList sSrc;
  NameContext sNC;

  ((void) (0));
  memset(&sNC, 0, sizeof(sNC));
  memset(&sSrc, 0, sizeof(sSrc));
  sSrc.nSrc = 1;
  sSrc.a[0].zName = pTab->zName;
  sSrc.a[0].pTab = pTab;
  sSrc.a[0].iCursor = -1;
  sNC.pParse = pParse;
  sNC.pSrcList = &sSrc;
  sNC.ncFlags = type;
  if( sqlite3ResolveExprNames(&sNC, pExpr) ) return;
  if( pList ) sqlite3ResolveExprListNames(&sNC, pList);
}
# 86686 "sqlite3.c"
static char sqlite3ExprAffinity(Expr *pExpr)
{

  int op;
  pExpr = sqlite3ExprSkipCollate(pExpr);
  if( pExpr->flags & 0x000200 ) return 0;
  op = pExpr->op;
  if( op==119 )
{

    ((void) (0));
    return sqlite3ExprAffinity(pExpr->x.pSelect->pEList->a[0].pExpr);
  }

  if( op==38 )
{

    ((void) (0));
    return sqlite3AffinityType(pExpr->u.zToken, 0);
  }

  if( (op==154 || op==152 || op==157)
   && pExpr->pTab!=0
  )
{



    int j = pExpr->iColumn;
    if( j<0 ) return 'D';
    ((void) (0));
    return pExpr->pTab->aCol[j].affinity;
  }
  return pExpr->affinity;
}
# 86722 "sqlite3.c"
static Expr *sqlite3ExprAddCollateToken(
  Parse *pParse,
  Expr *pExpr,
  const Token *pCollName,
  int dequote
)
{

  if( pCollName->n>0 )
{

    Expr *pNew = sqlite3ExprAlloc(pParse->db, 95, pCollName, dequote);
    if( pNew )
{

      pNew->pLeft = pExpr;
      pNew->flags |= 0x000100|0x001000;
      pExpr = pNew;
    }
  }
  return pExpr;
}
static Expr *sqlite3ExprAddCollateString(Parse *pParse, Expr *pExpr, const char *zC)
{

  Token s;
  ((void) (0));
  sqlite3TokenInit(&s, (char*)zC);
  return sqlite3ExprAddCollateToken(pParse, pExpr, &s, 0);
}





static Expr *sqlite3ExprSkipCollate(Expr *pExpr)
{

  while( pExpr && (((pExpr)->flags&(0x001000))!=0) )
{

    if( (((pExpr)->flags&(0x040000))!=0) )
{

      ((void) (0));
      ((void) (0));
      ((void) (0));
      pExpr = pExpr->x.pList->a[0].pExpr;
    }else{
      ((void) (0));
      pExpr = pExpr->pLeft;
    }
  }
  return pExpr;
}
# 86773 "sqlite3.c"
static CollSeq *sqlite3ExprCollSeq(Parse *pParse, Expr *pExpr)
{

  sqlite3 *db = pParse->db;
  CollSeq *pColl = 0;
  Expr *p = pExpr;
  while( p )
{

    int op = p->op;
    if( p->flags & 0x000200 ) break;
    if( op==38 || op==156 )
{

      p = p->pLeft;
      continue;
    }
    if( op==95 || (op==157 && p->op2==95) )
{

      pColl = sqlite3GetCollSeq(pParse, ((db)->enc), 0, p->u.zToken);
{