# 1 "./common-utils.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "./common-utils.c"
# 14 "./common-utils.c"
# 1 "/home/hyogi/workspace/glusterfs/contrib/libexecinfo/execinfo_compat.h" 1
# 34 "/home/hyogi/workspace/glusterfs/contrib/libexecinfo/execinfo_compat.h"
# 1 "./config.h" 1
# 35 "/home/hyogi/workspace/glusterfs/contrib/libexecinfo/execinfo_compat.h" 2







extern int backtrace(void **, int);
extern char **backtrace_symbols(void *const *, int);
extern void backtrace_symbols_fd(void *const *, int, int);
# 15 "./common-utils.c" 2


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
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
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
# 390 "/usr/include/libio.h" 3 4
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




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




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








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
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

# 412 "/usr/include/stdio.h" 3 4
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
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
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
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));


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

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


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
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 912 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 942 "/usr/include/stdio.h" 3 4

# 18 "./common-utils.c" 2
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



typedef __ino_t ino_t;
# 60 "/usr/include/sys/types.h" 3 4
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
# 146 "/usr/include/sys/types.h" 3 4
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


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


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






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
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
# 513 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 530 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 711 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 751 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 774 "/usr/include/stdlib.h" 3 4
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
# 950 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4

# 19 "./common-utils.c" 2
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


# 123 "/usr/include/string.h" 3 4


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
# 160 "/usr/include/string.h" 2 3 4


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


# 277 "/usr/include/string.h" 3 4



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
# 392 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 422 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 440 "/usr/include/string.h" 3 4
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
# 529 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 552 "/usr/include/string.h" 3 4
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
# 639 "/usr/include/string.h" 3 4

# 20 "./common-utils.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


# 150 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 347 "/usr/include/ctype.h" 3 4

# 21 "./common-utils.c" 2
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
# 58 "/usr/include/errno.h" 3 4

# 22 "./common-utils.c" 2
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 38 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 2 3 4
# 161 "/usr/include/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/limits.h" 2 3 4
# 23 "./common-utils.c" 2
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
# 258 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 270 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 290 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 307 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 337 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 356 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 379 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 420 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
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
# 528 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 546 "/usr/include/unistd.h" 3 4
extern char **__environ;







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
# 601 "/usr/include/unistd.h" 3 4
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
# 703 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 759 "/usr/include/unistd.h" 3 4
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
# 972 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 996 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1019 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1040 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1061 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1084 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1115 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1154 "/usr/include/unistd.h" 3 4

# 24 "./common-utils.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
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

# 223 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 236 "/usr/include/time.h" 3 4



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
# 430 "/usr/include/time.h" 3 4

# 25 "./common-utils.c" 2
# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4


# 50 "/usr/include/locale.h" 3 4



struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 120 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ , __leaf__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ , __leaf__));


# 151 "/usr/include/locale.h" 3 4
extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__ , __leaf__));
# 186 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));








# 26 "./common-utils.c" 2
# 1 "/usr/include/sys/socket.h" 1 3 4
# 24 "/usr/include/sys/socket.h" 3 4


# 1 "/usr/include/sys/uio.h" 1 3 4
# 25 "/usr/include/sys/uio.h" 3 4



# 1 "/usr/include/bits/uio.h" 1 3 4
# 43 "/usr/include/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 29 "/usr/include/sys/uio.h" 2 3 4
# 39 "/usr/include/sys/uio.h" 3 4
extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
  ;
# 50 "/usr/include/sys/uio.h" 3 4
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
  ;
# 65 "/usr/include/sys/uio.h" 3 4
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count,
         __off_t __offset) ;
# 77 "/usr/include/sys/uio.h" 3 4
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count,
   __off_t __offset) ;
# 120 "/usr/include/sys/uio.h" 3 4

# 27 "/usr/include/sys/socket.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 29 "/usr/include/sys/socket.h" 2 3 4
# 38 "/usr/include/sys/socket.h" 3 4
# 1 "/usr/include/bits/socket.h" 1 3 4
# 27 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 28 "/usr/include/bits/socket.h" 2 3 4
# 38 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/include/bits/socket_type.h" 1 3 4
# 24 "/usr/include/bits/socket_type.h" 3 4
enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
# 39 "/usr/include/bits/socket.h" 2 3 4
# 150 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/include/bits/sockaddr.h" 1 3 4
# 28 "/usr/include/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
# 151 "/usr/include/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 166 "/usr/include/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    unsigned long int __ss_align;
    char __ss_padding[(128 - (2 * sizeof (unsigned long int)))];
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
# 276 "/usr/include/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__ , __leaf__));
# 303 "/usr/include/bits/socket.h" 3 4
enum
  {
    SCM_RIGHTS = 0x01





  };
# 349 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/include/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4



# 1 "/usr/include/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 1 "/usr/include/asm/sockios.h" 2 3 4
# 5 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/asm/socket.h" 2 3 4
# 350 "/usr/include/bits/socket.h" 2 3 4
# 383 "/usr/include/bits/socket.h" 3 4
struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 39 "/usr/include/sys/socket.h" 2 3 4




struct osockaddr
  {
    unsigned short int sa_family;
    unsigned char sa_data[14];
  };




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
# 113 "/usr/include/sys/socket.h" 3 4
extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ , __leaf__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ , __leaf__));


extern int bind (int __fd, const struct sockaddr * __addr, socklen_t __len)
     __attribute__ ((__nothrow__ , __leaf__));


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));
# 137 "/usr/include/sys/socket.h" 3 4
extern int connect (int __fd, const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, const struct sockaddr * __addr,
         socklen_t __addr_len);
# 174 "/usr/include/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);
# 202 "/usr/include/sys/socket.h" 3 4
extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
# 219 "/usr/include/sys/socket.h" 3 4
extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ , __leaf__));




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ , __leaf__));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ , __leaf__));
# 243 "/usr/include/sys/socket.h" 3 4
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);
# 261 "/usr/include/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ , __leaf__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__ , __leaf__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ , __leaf__));
# 283 "/usr/include/sys/socket.h" 3 4

# 27 "./common-utils.c" 2
# 1 "/usr/include/sys/wait.h" 1 3 4
# 27 "/usr/include/sys/wait.h" 3 4


# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 102 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 33 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 80 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 24 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 58 "/usr/include/bits/siginfo.h" 3 4
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
     struct
       {
  void *_lower;
  void *_upper;
       } si_addr_bnd;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
# 160 "/usr/include/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};
# 264 "/usr/include/bits/siginfo.h" 3 4
enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 320 "/usr/include/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 81 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 100 "/usr/include/signal.h" 3 4


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 114 "/usr/include/signal.h" 3 4

# 127 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 187 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 207 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 243 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigaction.h" 1 3 4
# 24 "/usr/include/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 244 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
# 301 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 29 "/usr/include/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 121 "/usr/include/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 307 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 317 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

# 1 "/usr/include/bits/sigstack.h" 1 3 4
# 25 "/usr/include/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 49 "/usr/include/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 324 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 22 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 23 "/usr/include/sys/ucontext.h" 2 3 4
# 31 "/usr/include/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;





typedef greg_t gregset_t[23];
# 92 "/usr/include/sys/ucontext.h" 3 4
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 327 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));
# 362 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 30 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));
# 363 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));




# 30 "/usr/include/sys/wait.h" 2 3 4
# 99 "/usr/include/sys/wait.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 113 "/usr/include/sys/wait.h" 3 4
extern __pid_t wait (__WAIT_STATUS __stat_loc);
# 136 "/usr/include/sys/wait.h" 3 4
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
# 146 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 24 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 2 3 4
# 147 "/usr/include/sys/wait.h" 2 3 4
# 159 "/usr/include/sys/wait.h" 3 4
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);





struct rusage;






extern __pid_t wait3 (__WAIT_STATUS __stat_loc, int __options,
        struct rusage * __usage) __attribute__ ((__nothrow__));




extern __pid_t wait4 (__pid_t __pid, __WAIT_STATUS __stat_loc, int __options,
        struct rusage *__usage) __attribute__ ((__nothrow__));




# 28 "./common-utils.c" 2
# 1 "/usr/include/netinet/in.h" 1 3 4
# 22 "/usr/include/netinet/in.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 122 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdint.h" 2 3 4
# 23 "/usr/include/netinet/in.h" 2 3 4







typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };


# 1 "/usr/include/bits/in.h" 1 3 4
# 132 "/usr/include/bits/in.h" 3 4
struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };
# 38 "/usr/include/netinet/in.h" 2 3 4


enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };
# 209 "/usr/include/netinet/in.h" 3 4
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];

 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];

      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
# 237 "/usr/include/netinet/in.h" 3 4
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };




struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };




struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };




struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
# 374 "/usr/include/netinet/in.h" 3 4
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 386 "/usr/include/netinet/in.h" 2 3 4
# 501 "/usr/include/netinet/in.h" 3 4
extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) __attribute__ ((__nothrow__ , __leaf__));


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     __attribute__ ((__nothrow__ , __leaf__));
# 629 "/usr/include/netinet/in.h" 3 4

# 29 "./common-utils.c" 2
# 1 "/usr/include/arpa/inet.h" 1 3 4
# 30 "/usr/include/arpa/inet.h" 3 4




extern in_addr_t inet_addr (const char *__cp) __attribute__ ((__nothrow__ , __leaf__));


extern in_addr_t inet_lnaof (struct in_addr __in) __attribute__ ((__nothrow__ , __leaf__));



extern struct in_addr inet_makeaddr (in_addr_t __net, in_addr_t __host)
     __attribute__ ((__nothrow__ , __leaf__));


extern in_addr_t inet_netof (struct in_addr __in) __attribute__ ((__nothrow__ , __leaf__));



extern in_addr_t inet_network (const char *__cp) __attribute__ ((__nothrow__ , __leaf__));



extern char *inet_ntoa (struct in_addr __in) __attribute__ ((__nothrow__ , __leaf__));




extern int inet_pton (int __af, const char *__restrict __cp,
        void *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern const char *inet_ntop (int __af, const void *__restrict __cp,
         char *__restrict __buf, socklen_t __len)
     __attribute__ ((__nothrow__ , __leaf__));






extern int inet_aton (const char *__cp, struct in_addr *__inp) __attribute__ ((__nothrow__ , __leaf__));



extern char *inet_neta (in_addr_t __net, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern char *inet_net_ntop (int __af, const void *__cp, int __bits,
       char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int inet_net_pton (int __af, const char *__cp,
     void *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern unsigned int inet_nsap_addr (const char *__cp,
        unsigned char *__buf, int __len) __attribute__ ((__nothrow__ , __leaf__));



extern char *inet_nsap_ntoa (int __len, const unsigned char *__cp,
        char *__buf) __attribute__ ((__nothrow__ , __leaf__));



# 30 "./common-utils.c" 2

# 1 "/usr/include/assert.h" 1 3 4
# 64 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 32 "./common-utils.c" 2
# 1 "/usr/include/libgen.h" 1 3 4
# 23 "/usr/include/libgen.h" 3 4



extern char *dirname (char *__path) __attribute__ ((__nothrow__ , __leaf__));







extern char *__xpg_basename (char *__path) __attribute__ ((__nothrow__ , __leaf__));



# 33 "./common-utils.c" 2






# 1 "./compat-errno.h" 1
# 14 "./compat-errno.h"
# 1 "/usr/include/errno.h" 1 3 4
# 15 "./compat-errno.h" 2
# 228 "./compat-errno.h"
int32_t gf_errno_to_error (int32_t op_errno);
int32_t gf_error_to_errno (int32_t error);
# 40 "./common-utils.c" 2
# 1 "./logging.h" 1
# 14 "./logging.h"
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






typedef int __itimer_which_t;




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
# 189 "/usr/include/sys/time.h" 3 4

# 15 "./logging.h" 2


# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stdarg.h" 1 3 4
# 18 "./logging.h" 2
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


# 95 "/usr/include/bits/sched.h" 3 4








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
# 126 "/usr/include/sched.h" 3 4

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
# 271 "/usr/include/pthread.h" 3 4
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
# 429 "/usr/include/pthread.h" 3 4
extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));
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
# 733 "/usr/include/pthread.h" 3 4
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







extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
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

# 19 "./logging.h" 2
# 1 "./list.h" 1
# 15 "./list.h"
struct list_head {
 struct list_head *next;
 struct list_head *prev;
};







static inline void
list_add (struct list_head *new, struct list_head *head)
{
 new->prev = head;
 new->next = head->next;

 new->prev->next = new;
 new->next->prev = new;
}


static inline void
list_add_tail (struct list_head *new, struct list_head *head)
{
 new->next = head;
 new->prev = head->prev;

 new->prev->next = new;
 new->next->prev = new;
}
# 54 "./list.h"
static inline void
list_add_order (struct list_head *new, struct list_head *head,
                int (*compare)(struct list_head *, struct list_head *))
{
        struct list_head *pos = head->prev;

        while ( pos != head ) {
                if (compare(new, pos) >= 0)
                        break;




                pos = pos->prev;
        }

        list_add (new, pos);
}

static inline void
list_del (struct list_head *old)
{
 old->prev->next = old->next;
 old->next->prev = old->prev;

 old->next = (void *)0xbabebabe;
 old->prev = (void *)0xcafecafe;
}


static inline void
list_del_init (struct list_head *old)
{
 old->prev->next = old->next;
 old->next->prev = old->prev;

 old->next = old;
 old->prev = old;
}


static inline void
list_move (struct list_head *list, struct list_head *head)
{
 list_del (list);
 list_add (list, head);
}


static inline void
list_move_tail (struct list_head *list, struct list_head *head)
{
 list_del (list);
 list_add_tail (list, head);
}


static inline int
list_empty (struct list_head *head)
{
 return (head->next == head);
}


static inline void
__list_splice (struct list_head *list, struct list_head *head)
{
 (list->prev)->next = (head->next);
 (head->next)->prev = (list->prev);

 (head)->next = (list->next);
 (list->next)->prev = (head);
}


static inline void
list_splice (struct list_head *list, struct list_head *head)
{
 if (list_empty (list))
  return;

 __list_splice (list, head);
}



static inline void
list_splice_init (struct list_head *list, struct list_head *head)
{
 if (list_empty (list))
  return;

 __list_splice (list, head);
 do { (list)->next = (list)->prev = list; } while (0);
}


static inline void
__list_append (struct list_head *list, struct list_head *head)
{
 (head->prev)->next = (list->next);
        (list->next)->prev = (head->prev);
        (head->prev) = (list->prev);
        (list->prev)->next = head;
}


static inline void
list_append (struct list_head *list, struct list_head *head)
{
 if (list_empty (list))
  return;

 __list_append (list, head);
}



static inline void
list_append_init (struct list_head *list, struct list_head *head)
{
 if (list_empty (list))
  return;

 __list_append (list, head);
 do { (list)->next = (list)->prev = list; } while (0);
}

static inline int
list_is_last (struct list_head *list, struct list_head *head)
{
        return (list->next == head);
}

static inline int
list_is_singular(struct list_head *head)
{
        return !list_empty(head) && (head->next == head->prev);
}
# 201 "./list.h"
static inline void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline void list_replace_init(struct list_head *old,
                                     struct list_head *new)
{
 list_replace(old, new);
 do { (old)->next = (old)->prev = old; } while (0);
}





static inline void list_rotate_left (struct list_head *head)
{
 struct list_head *first;

 if (!list_empty (head)) {
  first = head->next;
  list_move_tail (first, head);
 }
}
# 20 "./logging.h" 2
# 65 "./logging.h"
typedef enum {
        GF_LOG_NONE,
        GF_LOG_EMERG,
        GF_LOG_ALERT,
        GF_LOG_CRITICAL,
        GF_LOG_ERROR,
        GF_LOG_WARNING,
        GF_LOG_NOTICE,
        GF_LOG_INFO,
        GF_LOG_DEBUG,
        GF_LOG_TRACE,
} gf_loglevel_t;


typedef enum {
        gf_logformat_traditional = 0,
        gf_logformat_withmsgid,
        gf_logformat_cee
} gf_log_format_t;


typedef enum {
        gf_logger_glusterlog = 0,
        gf_logger_syslog

} gf_log_logger_t;




typedef struct gf_log_handle_ {
        pthread_mutex_t logfile_mutex;
        uint8_t logrotate;
        uint8_t cmd_history_logrotate;
        gf_loglevel_t loglevel;
        int gf_log_syslog;
        gf_loglevel_t sys_log_level;
        char gf_log_xl_log_set;
        char *filename;
        FILE *logfile;
        FILE *gf_log_logfile;
        char *cmd_log_filename;
        FILE *cmdlogfile;
        gf_log_logger_t logger;
        gf_log_format_t logformat;
        char *ident;
        int log_control_file_found;
        struct list_head lru_queue;
        uint32_t lru_size;
        uint32_t lru_cur_size;
        uint32_t timeout;
        pthread_mutex_t log_buf_lock;
        struct _gf_timer *log_flush_timer;
} gf_log_handle_t;


typedef struct log_buf_ {
        char *msg;
        uint64_t msg_id;
        int errnum;
        struct timeval oldest;
        struct timeval latest;
        char *domain;
        char *file;
        char *function;
        int32_t line;
        gf_loglevel_t level;
        int refcount;
        int graph_id;
        struct list_head msg_list;
} log_buf_t;

void gf_log_globals_init (void *ctx);
int gf_log_init (void *data, const char *filename, const char *ident);

void gf_log_logrotate (int signum);

void gf_log_cleanup (void);


int _gf_msg (const char *domain, const char *file,
             const char *function, int32_t line, gf_loglevel_t level,
             int errnum, int trace, uint64_t msgid, const char *fmt, ...)
             __attribute__ ((__format__ (__printf__, 9, 10)));

void _gf_msg_backtrace_nomem (gf_loglevel_t level, int stacksize);

int _gf_msg_plain (gf_loglevel_t level, const char *fmt, ...)
                   __attribute__ ((__format__ (__printf__, 2, 3)));

int _gf_msg_plain_nomem (gf_loglevel_t level, const char *msg);

int _gf_msg_vplain (gf_loglevel_t level, const char *fmt, va_list ap);

int _gf_msg_nomem (const char *domain, const char *file,
                   const char *function, int line, gf_loglevel_t level,
                   size_t size);

int _gf_log (const char *domain, const char *file,
             const char *function, int32_t line, gf_loglevel_t level,
             const char *fmt, ...)
             __attribute__ ((__format__ (__printf__, 6, 7)));

int _gf_log_callingfn (const char *domain, const char *file,
                       const char *function, int32_t line, gf_loglevel_t level,
                       const char *fmt, ...)
                       __attribute__ ((__format__ (__printf__, 6, 7)));

int _gf_log_eh (const char *function, const char *fmt, ...);
# 278 "./logging.h"
void gf_log_disable_syslog (void);
void gf_log_enable_syslog (void);
gf_loglevel_t gf_log_get_loglevel (void);
void gf_log_set_loglevel (gf_loglevel_t level);
void gf_log_flush (void);
gf_loglevel_t gf_log_get_xl_loglevel (void *xl);
void gf_log_set_xl_loglevel (void *xl, gf_loglevel_t level);

int gf_cmd_log (const char *domain, const char *fmt, ...)
                __attribute__ ((__format__ (__printf__, 2, 3)));

int gf_cmd_log_init (const char *filename);

void set_sys_log_level (gf_loglevel_t level);

int gf_log_fini(void *data);

void
gf_log_set_logger (gf_log_logger_t logger);

void
gf_log_set_logformat (gf_log_format_t format);

void
gf_log_set_log_buf_size (uint32_t buf_size);

void
gf_log_set_log_flush_timeout (uint32_t timeout);

struct _glusterfs_ctx;

void
gf_log_flush_msgs (struct _glusterfs_ctx *ctx);

int
gf_log_inject_timer_event (struct _glusterfs_ctx *ctx);

void
gf_log_disable_suppression_before_exit (struct _glusterfs_ctx *ctx);
# 41 "./common-utils.c" 2
# 1 "./common-utils.h" 1
# 16 "./common-utils.h"
# 1 "/usr/include/netdb.h" 1 3 4
# 32 "/usr/include/netdb.h" 3 4
# 1 "/usr/include/rpc/netdb.h" 1 3 4
# 42 "/usr/include/rpc/netdb.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 43 "/usr/include/rpc/netdb.h" 2 3 4



struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) __attribute__ ((__nothrow__ , __leaf__));
extern void endrpcent (void) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcbyname (const char *__name) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcbynumber (int __number) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcent (void) __attribute__ ((__nothrow__ , __leaf__));


extern int getrpcbyname_r (const char *__name, struct rpcent *__result_buf,
      char *__buffer, size_t __buflen,
      struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
        char *__buffer, size_t __buflen,
        struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
   size_t __buflen, struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));



# 33 "/usr/include/netdb.h" 2 3 4
# 42 "/usr/include/netdb.h" 3 4
# 1 "/usr/include/bits/netdb.h" 1 3 4
# 26 "/usr/include/bits/netdb.h" 3 4
struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};
# 43 "/usr/include/netdb.h" 2 3 4
# 53 "/usr/include/netdb.h" 3 4








extern int *__h_errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 92 "/usr/include/netdb.h" 3 4
extern void herror (const char *__str) __attribute__ ((__nothrow__ , __leaf__));


extern const char *hstrerror (int __err_num) __attribute__ ((__nothrow__ , __leaf__));




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;



};






extern void sethostent (int __stay_open);





extern void endhostent (void);






extern struct hostent *gethostent (void);






extern struct hostent *gethostbyaddr (const void *__addr, __socklen_t __len,
          int __type);





extern struct hostent *gethostbyname (const char *__name);
# 155 "/usr/include/netdb.h" 3 4
extern struct hostent *gethostbyname2 (const char *__name, int __af);
# 167 "/usr/include/netdb.h" 3 4
extern int gethostent_r (struct hostent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct hostent **__restrict __result,
    int *__restrict __h_errnop);

extern int gethostbyaddr_r (const void *__restrict __addr, __socklen_t __len,
       int __type,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname_r (const char *__restrict __name,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname2_r (const char *__restrict __name, int __af,
        struct hostent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct hostent **__restrict __result,
        int *__restrict __h_errnop);
# 198 "/usr/include/netdb.h" 3 4
extern void setnetent (int __stay_open);





extern void endnetent (void);






extern struct netent *getnetent (void);






extern struct netent *getnetbyaddr (uint32_t __net, int __type);





extern struct netent *getnetbyname (const char *__name);
# 237 "/usr/include/netdb.h" 3 4
extern int getnetent_r (struct netent *__restrict __result_buf,
   char *__restrict __buf, size_t __buflen,
   struct netent **__restrict __result,
   int *__restrict __h_errnop);

extern int getnetbyaddr_r (uint32_t __net, int __type,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);

extern int getnetbyname_r (const char *__restrict __name,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);




struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};






extern void setservent (int __stay_open);





extern void endservent (void);






extern struct servent *getservent (void);






extern struct servent *getservbyname (const char *__name, const char *__proto);






extern struct servent *getservbyport (int __port, const char *__proto);
# 308 "/usr/include/netdb.h" 3 4
extern int getservent_r (struct servent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct servent **__restrict __result);

extern int getservbyname_r (const char *__restrict __name,
       const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);

extern int getservbyport_r (int __port, const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};






extern void setprotoent (int __stay_open);





extern void endprotoent (void);






extern struct protoent *getprotoent (void);





extern struct protoent *getprotobyname (const char *__name);





extern struct protoent *getprotobynumber (int __proto);
# 374 "/usr/include/netdb.h" 3 4
extern int getprotoent_r (struct protoent *__restrict __result_buf,
     char *__restrict __buf, size_t __buflen,
     struct protoent **__restrict __result);

extern int getprotobyname_r (const char *__restrict __name,
        struct protoent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct protoent **__restrict __result);

extern int getprotobynumber_r (int __proto,
          struct protoent *__restrict __result_buf,
          char *__restrict __buf, size_t __buflen,
          struct protoent **__restrict __result);
# 395 "/usr/include/netdb.h" 3 4
extern int setnetgrent (const char *__netgroup);







extern void endnetgrent (void);
# 412 "/usr/include/netdb.h" 3 4
extern int getnetgrent (char **__restrict __hostp,
   char **__restrict __userp,
   char **__restrict __domainp);
# 423 "/usr/include/netdb.h" 3 4
extern int innetgr (const char *__netgroup, const char *__host,
      const char *__user, const char *__domain);







extern int getnetgrent_r (char **__restrict __hostp,
     char **__restrict __userp,
     char **__restrict __domainp,
     char *__restrict __buffer, size_t __buflen);
# 451 "/usr/include/netdb.h" 3 4
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
   const char *__restrict __locuser,
   const char *__restrict __remuser,
   const char *__restrict __cmd, int *__restrict __fd2p);
# 463 "/usr/include/netdb.h" 3 4
extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
      const char *__restrict __locuser,
      const char *__restrict __remuser,
      const char *__restrict __cmd, int *__restrict __fd2p,
      sa_family_t __af);
# 479 "/usr/include/netdb.h" 3 4
extern int rexec (char **__restrict __ahost, int __rport,
    const char *__restrict __name,
    const char *__restrict __pass,
    const char *__restrict __cmd, int *__restrict __fd2p);
# 491 "/usr/include/netdb.h" 3 4
extern int rexec_af (char **__restrict __ahost, int __rport,
       const char *__restrict __name,
       const char *__restrict __pass,
       const char *__restrict __cmd, int *__restrict __fd2p,
       sa_family_t __af);
# 505 "/usr/include/netdb.h" 3 4
extern int ruserok (const char *__rhost, int __suser,
      const char *__remuser, const char *__locuser);
# 515 "/usr/include/netdb.h" 3 4
extern int ruserok_af (const char *__rhost, int __suser,
         const char *__remuser, const char *__locuser,
         sa_family_t __af);
# 528 "/usr/include/netdb.h" 3 4
extern int iruserok (uint32_t __raddr, int __suser,
       const char *__remuser, const char *__locuser);
# 539 "/usr/include/netdb.h" 3 4
extern int iruserok_af (const void *__raddr, int __suser,
   const char *__remuser, const char *__locuser,
   sa_family_t __af);
# 551 "/usr/include/netdb.h" 3 4
extern int rresvport (int *__alport);
# 560 "/usr/include/netdb.h" 3 4
extern int rresvport_af (int *__alport, sa_family_t __af);






struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};
# 662 "/usr/include/netdb.h" 3 4
extern int getaddrinfo (const char *__restrict __name,
   const char *__restrict __service,
   const struct addrinfo *__restrict __req,
   struct addrinfo **__restrict __pai);


extern void freeaddrinfo (struct addrinfo *__ai) __attribute__ ((__nothrow__ , __leaf__));


extern const char *gai_strerror (int __ecode) __attribute__ ((__nothrow__ , __leaf__));





extern int getnameinfo (const struct sockaddr *__restrict __sa,
   socklen_t __salen, char *__restrict __host,
   socklen_t __hostlen, char *__restrict __serv,
   socklen_t __servlen, int __flags);
# 713 "/usr/include/netdb.h" 3 4

# 17 "./common-utils.h" 2


# 1 "/usr/include/assert.h" 1 3 4
# 64 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 20 "./common-utils.h" 2

# 1 "/usr/include/openssl/md5.h" 1 3 4
# 62 "/usr/include/openssl/md5.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/openssl/opensslconf.h" 1 3 4
# 10 "/usr/include/openssl/opensslconf.h" 3 4
# 1 "/usr/include/x86_64-pc-linux-gnu/openssl/opensslconf.h" 1 3 4
# 11 "/usr/include/openssl/opensslconf.h" 2 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 63 "/usr/include/openssl/md5.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 64 "/usr/include/openssl/md5.h" 2 3 4
# 100 "/usr/include/openssl/md5.h" 3 4
typedef struct MD5state_st {
    unsigned int A, B, C, D;
    unsigned int Nl, Nh;
    unsigned int data[(64/4)];
    unsigned int num;
} MD5_CTX;




int MD5_Init(MD5_CTX *c);
int MD5_Update(MD5_CTX *c, const void *data, size_t len);
int MD5_Final(unsigned char *md, MD5_CTX *c);
unsigned char *MD5(const unsigned char *d, size_t n, unsigned char *md);
void MD5_Transform(MD5_CTX *c, const unsigned char *b);
# 22 "./common-utils.h" 2



# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/limits.h" 1 3 4
# 26 "./common-utils.h" 2
# 1 "/usr/include/fnmatch.h" 1 3 4
# 56 "/usr/include/fnmatch.h" 3 4
extern int fnmatch (const char *__pattern, const char *__name, int __flags);
# 27 "./common-utils.h" 2

void trap (void);







# 1 "./glusterfs.h" 1
# 20 "./glusterfs.h"
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
# 105 "/usr/include/sys/stat.h" 2 3 4
# 208 "/usr/include/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 237 "/usr/include/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 262 "/usr/include/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 283 "/usr/include/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 320 "/usr/include/sys/stat.h" 3 4
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
# 398 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 441 "/usr/include/sys/stat.h" 3 4
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
# 533 "/usr/include/sys/stat.h" 3 4

# 21 "./glusterfs.h" 2
# 1 "/usr/include/sys/statvfs.h" 1 3 4
# 25 "/usr/include/sys/statvfs.h" 3 4
# 1 "/usr/include/bits/statvfs.h" 1 3 4
# 29 "/usr/include/bits/statvfs.h" 3 4
struct statvfs
  {
    unsigned long int f_bsize;
    unsigned long int f_frsize;

    __fsblkcnt_t f_blocks;
    __fsblkcnt_t f_bfree;
    __fsblkcnt_t f_bavail;
    __fsfilcnt_t f_files;
    __fsfilcnt_t f_ffree;
    __fsfilcnt_t f_favail;
# 48 "/usr/include/bits/statvfs.h" 3 4
    unsigned long int f_fsid;



    unsigned long int f_flag;
    unsigned long int f_namemax;
    int __f_spare[6];
  };
# 80 "/usr/include/bits/statvfs.h" 3 4
enum
{
  ST_RDONLY = 1,

  ST_NOSUID = 2
# 109 "/usr/include/bits/statvfs.h" 3 4
};
# 26 "/usr/include/sys/statvfs.h" 2 3 4
# 47 "/usr/include/sys/statvfs.h" 3 4




extern int statvfs (const char *__restrict __file,
      struct statvfs *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 73 "/usr/include/sys/statvfs.h" 3 4
extern int fstatvfs (int __fildes, struct statvfs *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 88 "/usr/include/sys/statvfs.h" 3 4

# 22 "./glusterfs.h" 2

# 1 "/usr/include/errno.h" 1 3 4
# 24 "./glusterfs.h" 2
# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4

# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/bits/dirent.h" 1 3 4
# 22 "/usr/include/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 162 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 183 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 208 "/usr/include/dirent.h" 3 4
extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 244 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include/stddef.h" 1 3 4
# 245 "/usr/include/dirent.h" 2 3 4
# 254 "/usr/include/dirent.h" 3 4
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 324 "/usr/include/dirent.h" 3 4
extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 352 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
# 401 "/usr/include/dirent.h" 3 4

# 25 "./glusterfs.h" 2

# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 35 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/bits/fcntl.h" 3 4
# 1 "/usr/include/bits/fcntl-linux.h" 1 3 4
# 345 "/usr/include/bits/fcntl-linux.h" 3 4

# 419 "/usr/include/bits/fcntl-linux.h" 3 4

# 61 "/usr/include/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 77 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/bits/stat.h" 1 3 4
# 78 "/usr/include/fcntl.h" 2 3 4
# 169 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 179 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 203 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 225 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 271 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 293 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 315 "/usr/include/fcntl.h" 3 4

# 27 "./glusterfs.h" 2

# 1 "/usr/include/sys/poll.h" 1 3 4
# 25 "/usr/include/sys/poll.h" 3 4
# 1 "/usr/include/bits/poll.h" 1 3 4
# 26 "/usr/include/sys/poll.h" 2 3 4
# 36 "/usr/include/sys/poll.h" 3 4
typedef unsigned long int nfds_t;


struct pollfd
  {
    int fd;
    short int events;
    short int revents;
  };



# 57 "/usr/include/sys/poll.h" 3 4
extern int poll (struct pollfd *__fds, nfds_t __nfds, int __timeout);
# 71 "/usr/include/sys/poll.h" 3 4

# 29 "./glusterfs.h" 2

# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/limits.h" 1 3 4
# 31 "./glusterfs.h" 2



# 1 "./lkowner.h" 1
# 20 "./lkowner.h"
typedef struct gf_lkowner_ {
        int len;
        char data[1024];
} gf_lkowner_t;



static inline void
lkowner_unparse (gf_lkowner_t *lkowner, char *buf, int buf_len)
{
        int i = 0;
        int j = 0;

        for (i = 0; i < lkowner->len; i++) {
                if (i && !(i % 8)) {
                        buf[j] = '-';
                        j++;
                }
                sprintf (&buf[j], "%02hhx", lkowner->data[i]);
                j += 2;
                if (j == buf_len)
                        break;
        }
        if (j < buf_len)
                buf[j] = '\0';
}

static inline void
set_lk_owner_from_ptr (gf_lkowner_t *lkowner, void *data)
{
        int i = 0;
        int j = 0;

        lkowner->len = sizeof (unsigned long);
        for (i = 0, j = 0; i < lkowner->len; i++, j += 8) {
                lkowner->data[i] = (char)((((unsigned long)data) >> j) & 0xff);
        }
}

static inline void
set_lk_owner_from_uint64 (gf_lkowner_t *lkowner, uint64_t data)
{
        int i = 0;
        int j = 0;

        lkowner->len = 8;
        for (i = 0, j = 0; i < lkowner->len; i++, j += 8) {
                lkowner->data[i] = (char)((data >> j) & 0xff);
        }
}


static inline int
is_same_lkowner (gf_lkowner_t *l1, gf_lkowner_t *l2)
{
        return ((l1->len == l2->len) && !memcmp(l1->data, l2->data, l1->len));
}

static inline int
is_lk_owner_null (gf_lkowner_t *lkowner)
{
        int is_null = 1;
        int i = 0;

        if (lkowner == ((void *)0) || lkowner->len == 0)
                goto out;

        for (i = 0; i < lkowner->len; i++) {
                if (lkowner->data[i] != 0) {
                        is_null = 0;
                        break;
                }
        }
out:
        return is_null;
}
# 35 "./glusterfs.h" 2
# 1 "./compat-uuid.h" 1
# 75 "./compat-uuid.h"
# 1 "/home/hyogi/workspace/glusterfs/contrib/uuid/uuid.h" 1
# 45 "/home/hyogi/workspace/glusterfs/contrib/uuid/uuid.h"
typedef unsigned char uuid_t[16];
# 71 "/home/hyogi/workspace/glusterfs/contrib/uuid/uuid.h"
void gf_uuid_clear(uuid_t uu);


int gf_uuid_compare(const uuid_t uu1, const uuid_t uu2);


void gf_uuid_copy(uuid_t dst, const uuid_t src);


void gf_uuid_generate(uuid_t out);
void gf_uuid_generate_random(uuid_t out);
void gf_uuid_generate_time(uuid_t out);


int gf_uuid_is_null(const uuid_t uu);


int gf_uuid_parse(const char *in, uuid_t uu);


void gf_uuid_unparse(const uuid_t uu, char *out);
void gf_uuid_unparse_lower(const uuid_t uu, char *out);
void gf_uuid_unparse_upper(const uuid_t uu, char *out);


time_t gf_uuid_time(const uuid_t uu, struct timeval *ret_tv);
int gf_uuid_type(const uuid_t uu);
int gf_uuid_variant(const uuid_t uu);
# 76 "./compat-uuid.h" 2
# 36 "./glusterfs.h" 2
# 270 "./glusterfs.h"
typedef enum {
        GF_FOP_NULL = 0,
        GF_FOP_STAT,
        GF_FOP_READLINK,
        GF_FOP_MKNOD,
        GF_FOP_MKDIR,
        GF_FOP_UNLINK,
        GF_FOP_RMDIR,
        GF_FOP_SYMLINK,
        GF_FOP_RENAME,
        GF_FOP_LINK,
        GF_FOP_TRUNCATE,
        GF_FOP_OPEN,
        GF_FOP_READ,
        GF_FOP_WRITE,
        GF_FOP_STATFS,
        GF_FOP_FLUSH,
        GF_FOP_FSYNC,
        GF_FOP_SETXATTR,
        GF_FOP_GETXATTR,
        GF_FOP_REMOVEXATTR,
        GF_FOP_OPENDIR,
        GF_FOP_FSYNCDIR,
        GF_FOP_ACCESS,
        GF_FOP_CREATE,
        GF_FOP_FTRUNCATE,
        GF_FOP_FSTAT,
        GF_FOP_LK,
        GF_FOP_LOOKUP,
        GF_FOP_READDIR,
        GF_FOP_INODELK,
        GF_FOP_FINODELK,
        GF_FOP_ENTRYLK,
        GF_FOP_FENTRYLK,
        GF_FOP_XATTROP,
        GF_FOP_FXATTROP,
        GF_FOP_FGETXATTR,
        GF_FOP_FSETXATTR,
        GF_FOP_RCHECKSUM,
        GF_FOP_SETATTR,
        GF_FOP_FSETATTR,
        GF_FOP_READDIRP,
        GF_FOP_FORGET,
        GF_FOP_RELEASE,
        GF_FOP_RELEASEDIR,
        GF_FOP_GETSPEC,
        GF_FOP_FREMOVEXATTR,
 GF_FOP_FALLOCATE,
 GF_FOP_DISCARD,
        GF_FOP_ZEROFILL,
        GF_FOP_IPC,
        GF_FOP_SEEK,
        GF_FOP_MAXVALUE,
} glusterfs_fop_t;

const char *fop_enum_to_pri_string (glusterfs_fop_t fop);
const char *fop_enum_to_string (glusterfs_fop_t fop);

typedef enum {
        GF_MGMT_NULL = 0,
        GF_MGMT_MAXVALUE,
} glusterfs_mgmt_t;

typedef enum {
        GF_OP_TYPE_NULL = 0,
        GF_OP_TYPE_FOP,
        GF_OP_TYPE_MGMT,
        GF_OP_TYPE_MAX,
} gf_op_type_t;


typedef enum {
        GF_LK_GETLK = 0,
        GF_LK_SETLK,
        GF_LK_SETLKW,
        GF_LK_RESLK_LCK,
        GF_LK_RESLK_LCKW,
        GF_LK_RESLK_UNLCK,
        GF_LK_GETLK_FD,
} glusterfs_lk_cmds_t;


typedef enum {
        GF_LK_F_RDLCK = 0,
        GF_LK_F_WRLCK,
        GF_LK_F_UNLCK,
        GF_LK_EOL,
} glusterfs_lk_types_t;

typedef enum {
        F_RESLK_LCK = 200,
        F_RESLK_LCKW,
        F_RESLK_UNLCK,
        F_GETLK_FD,
} glusterfs_lk_recovery_cmds_t;

typedef enum {
        GF_LOCK_POSIX,
        GF_LOCK_INTERNAL
} gf_lk_domain_t;


typedef enum {
        ENTRYLK_LOCK,
        ENTRYLK_UNLOCK,
        ENTRYLK_LOCK_NB
} entrylk_cmd;


typedef enum {
        ENTRYLK_RDLCK,
        ENTRYLK_WRLCK
} entrylk_type;


typedef enum {
        GF_XATTROP_ADD_ARRAY,
        GF_XATTROP_ADD_ARRAY64,
        GF_XATTROP_OR_ARRAY,
        GF_XATTROP_AND_ARRAY,
        GF_XATTROP_GET_AND_SET,
        GF_XATTROP_ADD_ARRAY_WITH_DEFAULT,
        GF_XATTROP_ADD_ARRAY64_WITH_DEFAULT
} gf_xattrop_flags_t;

typedef enum {
        GF_SEEK_DATA,
        GF_SEEK_HOLE
} gf_seek_what_t;
# 408 "./glusterfs.h"
struct _xlator_cmdline_option {
        struct list_head cmd_args;
        char *volume;
        char *key;
        char *value;
};
typedef struct _xlator_cmdline_option xlator_cmdline_option_t;

struct _server_cmdline {
        struct list_head list;
        char *volfile_server;
        char *transport;
        int port;
};
typedef struct _server_cmdline server_cmdline_t;





struct _cmd_args {

        char *volfile_server;
        server_cmdline_t *curr_server;

        struct list_head volfile_servers;
        char *volfile;
        char *log_server;
        gf_loglevel_t log_level;
        char *log_file;
        char *log_ident;
        gf_log_logger_t logger;
        gf_log_format_t log_format;
        uint32_t log_buf_size;
        uint32_t log_flush_timeout;
        int32_t max_connect_attempts;
        char *print_exports;
        char *print_netgroups;

        uint32_t volfile_server_port;
        char *volfile_server_transport;
        uint32_t log_server_port;
        char *pid_file;
        char *sock_file;
        int no_daemon_mode;
        char *run_id;
        int debug_mode;
        int read_only;
        int acl;
        int selinux;
        int capability;
        int enable_ino32;
        int worm;
        int mac_compat;
        int fopen_keep_cache;
        int gid_timeout;
        char gid_timeout_set;
        int aux_gfid_mount;


        int global_timer_wheel;

        struct list_head xlator_options;


 int fuse_direct_io_mode;
 char *use_readdirp;
        int no_root_squash;
        int volfile_check;
        double fuse_entry_timeout;
        double fuse_negative_timeout;
        double fuse_attribute_timeout;
        char *volume_name;
        int fuse_nodev;
        int fuse_nosuid;
        char *dump_fuse;
        pid_t client_pid;
        int client_pid_set;
        unsigned uid_map_root;
        int background_qlen;
        int congestion_threshold;
        char *fuse_mountopts;
        int mem_acct;
        int resolve_gids;


        char *mount_point;
        char *volfile_id;


        int brick_port;
        char *brick_name;
        int brick_port2;


        int secure_mgmt;
};
typedef struct _cmd_args cmd_args_t;


struct _glusterfs_graph {
        struct list_head list;
        char graph_uuid[128];
        struct timeval dob;
        void *first;
        void *top;
        uint32_t leaf_count;
        int xl_count;
        int id;
        int used;

        uint32_t volfile_checksum;
};
typedef struct _glusterfs_graph glusterfs_graph_t;


typedef int32_t (*glusterfsd_mgmt_event_notify_fn_t) (int32_t event, void *data,
                                                      ...);

typedef enum {
        MGMT_SSL_NEVER = 0,
        MGMT_SSL_COPY_IO,
        MGMT_SSL_ALWAYS
} mgmt_ssl_t;

struct tvec_base;

struct _glusterfs_ctx {
        cmd_args_t cmd_args;
        char *process_uuid;
        FILE *pidfp;
        char fin;
        void *timer;
        void *ib;
        struct call_pool *pool;
        void *event_pool;
        void *iobuf_pool;
        void *logbuf_pool;
        pthread_mutex_t lock;
        size_t page_size;
        struct list_head graphs;
        glusterfs_graph_t *active;
        void *master;
        void *mgmt;
        void *listener;
        unsigned char measure_latency;
        pthread_t sigwaiter;
 char *cmdlinestr;
        struct mem_pool *stub_mem_pool;
        unsigned char cleanup_started;
        int graph_id;


        pid_t mnt_pid;
        int process_mode;
        struct syncenv *env;

        struct list_head mempool_list;


        char *statedump_path;

        struct mem_pool *dict_pool;
        struct mem_pool *dict_pair_pool;
        struct mem_pool *dict_data_pool;

        glusterfsd_mgmt_event_notify_fn_t notify;

        gf_log_handle_t log;

        int mem_acct_enable;

        int daemon_pipe[2];

        struct clienttable *clienttable;
# 593 "./glusterfs.h"
        int secure_mgmt;







        mgmt_ssl_t secure_srvr;

        char btbuf[4096];

        pthread_mutex_t notify_lock;
        pthread_cond_t notify_cond;
        int notifying;

        struct tvec_base *timer_wheel;

};
typedef struct _glusterfs_ctx glusterfs_ctx_t;

glusterfs_ctx_t *glusterfs_ctx_new (void);

typedef enum {
        GF_EVENT_PARENT_UP = 1,
        GF_EVENT_POLLIN,
        GF_EVENT_POLLOUT,
        GF_EVENT_POLLERR,
        GF_EVENT_CHILD_UP,
        GF_EVENT_CHILD_DOWN,
        GF_EVENT_CHILD_CONNECTING,
        GF_EVENT_CHILD_MODIFIED,
        GF_EVENT_TRANSPORT_CLEANUP,
        GF_EVENT_TRANSPORT_CONNECTED,
        GF_EVENT_VOLFILE_MODIFIED,
        GF_EVENT_GRAPH_NEW,
        GF_EVENT_TRANSLATOR_INFO,
        GF_EVENT_TRANSLATOR_OP,
        GF_EVENT_AUTH_FAILED,
        GF_EVENT_VOLUME_DEFRAG,
        GF_EVENT_PARENT_DOWN,
        GF_EVENT_VOLUME_BARRIER_OP,
        GF_EVENT_UPCALL,
        GF_EVENT_SOME_CHILD_DOWN,
        GF_EVENT_SCRUB_STATUS,
        GF_EVENT_MAXVAL,
} glusterfs_event_t;

struct gf_flock {
        short l_type;
        short l_whence;
        off_t l_start;
        off_t l_len;
        pid_t l_pid;
        gf_lkowner_t l_owner;
};
# 678 "./glusterfs.h"
int glusterfs_graph_prepare (glusterfs_graph_t *graph, glusterfs_ctx_t *ctx);
int glusterfs_graph_destroy_residual (glusterfs_graph_t *graph);
int glusterfs_graph_deactivate (glusterfs_graph_t *graph);
int glusterfs_graph_destroy (glusterfs_graph_t *graph);
int glusterfs_get_leaf_count (glusterfs_graph_t *graph);
int glusterfs_graph_activate (glusterfs_graph_t *graph, glusterfs_ctx_t *ctx);
glusterfs_graph_t *glusterfs_graph_construct (FILE *fp);
glusterfs_graph_t *glusterfs_graph_new ();
int glusterfs_graph_reconfigure (glusterfs_graph_t *oldgraph,
                                  glusterfs_graph_t *newgraph);
# 37 "./common-utils.h" 2
# 1 "./locking.h" 1
# 40 "./locking.h"
typedef pthread_mutex_t gf_lock_t;
# 38 "./common-utils.h" 2
# 1 "./mem-pool.h" 1
# 17 "./mem-pool.h"
# 1 "./mem-types.h" 1
# 15 "./mem-types.h"
enum gf_common_mem_types_ {
        gf_common_mt_call_stub_t,
        gf_common_mt_dnscache6,
        gf_common_mt_data_pair_t,
        gf_common_mt_data_t,
        gf_common_mt_dict_t,
        gf_common_mt_event_pool,
        gf_common_mt_reg,
        gf_common_mt_pollfd,
        gf_common_mt_epoll_event,
        gf_common_mt_fdentry_t,
        gf_common_mt_fdtable_t,
        gf_common_mt_fd_t,
        gf_common_mt_fd_ctx,
        gf_common_mt_gf_dirent_t,
        gf_common_mt_glusterfs_ctx_t,
        gf_common_mt_dentry_t,
        gf_common_mt_inode_t,
        gf_common_mt_inode_ctx,
        gf_common_mt_list_head,
        gf_common_mt_inode_table_t,
        gf_common_mt_xlator_t,
        gf_common_mt_xlator_list_t,
        gf_common_mt_log_msg,
        gf_common_mt_client_log,
        gf_common_mt_volume_opt_list_t,
        gf_common_mt_gf_hdr_common_t,
        gf_common_mt_call_frame_t,
        gf_common_mt_call_stack_t,
        gf_common_mt_gf_timer_t,
        gf_common_mt_gf_timer_registry_t,
        gf_common_mt_transport,
        gf_common_mt_transport_msg,
        gf_common_mt_auth_handle_t,
        gf_common_mt_iobuf,
        gf_common_mt_iobuf_arena,
        gf_common_mt_iobref,
        gf_common_mt_iobuf_pool,
        gf_common_mt_iovec,
        gf_common_mt_memdup,
        gf_common_mt_asprintf,
        gf_common_mt_strdup,
        gf_common_mt_socket_private_t,
        gf_common_mt_ioq,
        gf_common_mt_transport_t,
        gf_common_mt_socket_local_t,
        gf_common_mt_char,
        gf_common_mt_rbthash_table_t,
        gf_common_mt_rbthash_bucket,
        gf_common_mt_mem_pool,
        gf_common_mt_long,
        gf_common_mt_rpcsvc_auth_list,
        gf_common_mt_rpcsvc_t,
        gf_common_mt_rpcsvc_conn_t,
        gf_common_mt_rpcsvc_program_t,
        gf_common_mt_rpcsvc_listener_t,
        gf_common_mt_rpcsvc_wrapper_t,
        gf_common_mt_rpcsvc_stage_t,
        gf_common_mt_rpcclnt_t,
        gf_common_mt_rpcclnt_savedframe_t,
        gf_common_mt_rpc_trans_t,
        gf_common_mt_rpc_trans_pollin_t,
        gf_common_mt_rpc_trans_handover_t,
        gf_common_mt_rpc_trans_reqinfo_t,
        gf_common_mt_rpc_trans_rsp_t,
        gf_common_mt_glusterfs_graph_t,
        gf_common_mt_rdma_private_t,
        gf_common_mt_rdma_ioq_t,
        gf_common_mt_rpc_transport_t,
        gf_common_mt_rdma_local_t,
        gf_common_mt_rdma_post_t,
        gf_common_mt_qpent,
        gf_common_mt_rdma_device_t,
        gf_common_mt_rdma_context_t,
        gf_common_mt_sge,
        gf_common_mt_rpcclnt_cb_program_t,
        gf_common_mt_libxl_marker_local,
        gf_common_mt_graph_buf,
        gf_common_mt_trie_trie,
        gf_common_mt_trie_data,
        gf_common_mt_trie_node,
        gf_common_mt_trie_buf,
        gf_common_mt_trie_end,
        gf_common_mt_run_argv,
        gf_common_mt_run_logbuf,
        gf_common_mt_fd_lk_ctx_t,
        gf_common_mt_fd_lk_ctx_node_t,
        gf_common_mt_buffer_t,
        gf_common_mt_circular_buffer_t,
        gf_common_mt_eh_t,
        gf_common_mt_store_handle_t,
        gf_common_mt_store_iter_t,
        gf_common_mt_drc_client_t,
        gf_common_mt_drc_globals_t,
        gf_common_mt_drc_rbtree_node_t,
        gf_common_mt_iov_base_t,
        gf_common_mt_groups_t,
        gf_common_mt_cliententry_t,
        gf_common_mt_clienttable_t,
        gf_common_mt_client_t,
        gf_common_mt_client_ctx,
        gf_common_mt_lock_table,
        gf_common_mt_locker,
        gf_common_mt_auxgids,
        gf_common_mt_syncopctx,
        gf_common_mt_iobrefs,
        gf_common_mt_gsync_status_t,
        gf_common_mt_uuid_t,
        gf_common_mt_mgmt_v3_lock_obj_t,
        gf_common_mt_txn_opinfo_obj_t,
 gf_common_mt_strfd_t,
 gf_common_mt_strfd_data_t,
        gf_common_mt_regex_t,
        gf_common_mt_ereg,
        gf_common_mt_wr,
        gf_common_mt_rdma_arena_mr,
        gf_common_mt_dnscache = 115,
        gf_common_mt_dnscache_entry = 116,
        gf_common_mt_parser_t,
        gf_common_quota_meta_t,

        gfdb_mt_time_t,
        gf_mt_sql_cbk_args_t,
        gf_mt_gfdb_query_record_t,
        gf_mt_gfdb_link_info_t,
        gf_mt_gfdb_db_operations_t,
        gf_mt_sql_connection_t,
        gf_mt_sql_conn_node_t,
        gf_mt_db_conn_node_t,
        gf_mt_db_connection_t,
        gfdb_mt_db_record_t,

        gf_common_mt_rbuf_t,
        gf_common_mt_rlist_t,
        gf_common_mt_rvec_t,

        gf_common_mt_nfs_netgroups,
        gf_common_mt_nfs_exports,
        gf_common_mt_gf_brick_spec_t,
        gf_common_mt_gf_timer_entry_t,
        gf_common_mt_int,
        gf_common_mt_pointer,
        gf_common_mt_synctask,
        gf_common_mt_syncstack,
        gf_common_mt_syncenv,
        gf_common_mt_end
};
# 18 "./mem-pool.h" 2

# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/inttypes.h" 3 4

# 20 "./mem-pool.h" 2
# 39 "./mem-pool.h"
struct mem_acct_rec {
 const char *typestr;
        size_t size;
        size_t max_size;
        uint32_t num_allocs;
        uint32_t total_allocs;
        uint32_t max_num_allocs;
        gf_lock_t lock;
};

struct mem_acct {
        uint32_t num_types;






        gf_lock_t lock;
        unsigned int refcnt;
        struct mem_acct_rec rec[0];
};

struct mem_header {
        uint32_t type;
        size_t size;
        struct mem_acct *mem_acct;
        uint32_t magic;
        int padding[8];
};
# 82 "./mem-pool.h"
void *
__gf_calloc (size_t cnt, size_t size, uint32_t type, const char *typestr);

void *
__gf_malloc (size_t size, uint32_t type, const char *typestr);

void *
__gf_realloc (void *ptr, size_t size);

int
gf_vasprintf (char **string_ptr, const char *format, va_list arg);

int
gf_asprintf (char **string_ptr, const char *format, ...);

void
__gf_free (void *ptr);


static inline
void* __gf_default_malloc (size_t size)
{
        void *ptr = ((void *)0);

        ptr = malloc (size);
        if (!ptr)
                do { _gf_msg_nomem ("", "./mem-pool.h", __FUNCTION__, 108, GF_LOG_ALERT, size); } while (0);

        return ptr;
}

static inline
void* __gf_default_calloc (int cnt, size_t size)
{
        void *ptr = ((void *)0);

        ptr = calloc (cnt, size);
        if (!ptr)
                do { _gf_msg_nomem ("", "./mem-pool.h", __FUNCTION__, 120, GF_LOG_ALERT, (cnt * size)); } while (0);

        return ptr;
}

static inline
void* __gf_default_realloc (void *oldptr, size_t size)
{
        void *ptr = ((void *)0);

        ptr = realloc (oldptr, size);
        if (!ptr)
                do { _gf_msg_nomem ("", "./mem-pool.h", __FUNCTION__, 132, GF_LOG_ALERT, size); } while (0);

        return ptr;
}
# 157 "./mem-pool.h"
static inline
char *gf_strndup (const char *src, size_t len)
{
        char *dup_str = ((void *)0);

        if (!src) {
                goto out;
        }

        dup_str = __gf_calloc (1, len + 1, gf_common_mt_strdup, "gf_common_mt_strdup");
        if (!dup_str) {
                goto out;
        }

        memcpy (dup_str, src, len);
out:
        return dup_str;
}

static inline
char * gf_strdup (const char *src)
{

        char *dup_str = ((void *)0);
        size_t len = 0;

        len = strlen (src) + 1;

        dup_str = __gf_calloc (1, len, gf_common_mt_strdup, "gf_common_mt_strdup");

        if (!dup_str)
                return ((void *)0);

        memcpy (dup_str, src, len);

        return dup_str;
}

static inline void *
gf_memdup (const void *src, size_t size)
{
        void *dup_mem = ((void *)0);

        dup_mem = __gf_calloc (1, size, gf_common_mt_strdup, "gf_common_mt_strdup");
        if (!dup_mem)
                goto out;

        memcpy (dup_mem, src, size);

out:
        return dup_mem;
}

struct mem_pool {
        struct list_head list;
        int hot_count;
        int cold_count;
        gf_lock_t lock;
        unsigned long padded_sizeof_type;
        void *pool;
        void *pool_end;
        int real_sizeof_type;
        uint64_t alloc_count;
        uint64_t pool_misses;
        int max_alloc;
        int curr_stdalloc;
        int max_stdalloc;
        char *name;
        struct list_head global_list;
};

struct mem_pool *
mem_pool_new_fn (unsigned long sizeof_type, unsigned long count, char *name);



void mem_put (void *ptr);
void *mem_get (struct mem_pool *pool);
void *mem_get0 (struct mem_pool *pool);

void mem_pool_destroy (struct mem_pool *pool);

void gf_mem_acct_enable_set (void *ctx);
# 39 "./common-utils.h" 2


# 1 "./libglusterfs-messages.h" 1
# 14 "./libglusterfs-messages.h"
# 1 "./glfs-message-id.h" 1
# 15 "./libglusterfs-messages.h" 2
# 42 "./common-utils.h" 2
# 103 "./common-utils.h"
enum _gf_boolean
{
 _gf_false = 0,
 _gf_true = 1
};
# 116 "./common-utils.h"
enum _gf_client_pid
{
        GF_CLIENT_PID_MAX = 0,
        GF_CLIENT_PID_GSYNCD = -1,
        GF_CLIENT_PID_HADOOP = -2,
        GF_CLIENT_PID_DEFRAG = -3,
        GF_CLIENT_PID_NO_ROOT_SQUASH = -4,
        GF_CLIENT_PID_QUOTA_MOUNT = -5,
        GF_CLIENT_PID_SELF_HEALD = -6,
        GF_CLIENT_PID_GLFS_HEAL = -7,
        GF_CLIENT_PID_BITD = -8,
        GF_CLIENT_PID_SCRUB = -9,
        GF_CLIENT_PID_TIER_DEFRAG = -10
};

enum _gf_xlator_ipc_targets {
        GF_IPC_TARGET_CHANGELOG = 0,
        GF_IPC_TARGET_CTR = 1
};

typedef enum _gf_boolean gf_boolean_t;
typedef enum _gf_client_pid gf_client_pid_t;
typedef enum _gf_xlator_ipc_targets _gf_xlator_ipc_targets_t;
# 155 "./common-utils.h"
typedef struct dht_changelog_rename_info {
         uuid_t old_pargfid;
         uuid_t new_pargfid;
         int32_t oldname_len;
         int32_t newname_len;
         char buffer[1];
 } dht_changelog_rename_info_t;


typedef int (*gf_cmp) (void *, void *);

struct _dict;

struct dnscache {
        struct _dict *cache_dict;
        time_t ttl;
};

struct dnscache_entry {
        char *ip;
        char *fqdn;
        time_t timestamp;
};

struct dnscache6 {
        struct addrinfo *first;
        struct addrinfo *next;
};



struct dnscache *gf_dnscache_init (time_t ttl);
struct dnscache_entry *gf_dnscache_entry_init ();
void gf_dnscache_entry_deinit (struct dnscache_entry *entry);
char *gf_rev_dns_lookup_cached (const char *ip, struct dnscache *dnscache);

char *gf_resolve_path_parent (const char *path);

void gf_global_variable_init(void);

int32_t gf_resolve_ip6 (const char *hostname, uint16_t port, int family,
                        void **dnscache, struct addrinfo **addr_info);

void gf_log_dump_graph (FILE *specfp, glusterfs_graph_t *graph);
void gf_print_trace (int32_t signal, glusterfs_ctx_t *ctx);
int gf_set_log_file_path (cmd_args_t *cmd_args);
int gf_set_log_ident (cmd_args_t *cmd_args);
# 360 "./common-utils.h"
union gf_sock_union {
        struct sockaddr_storage storage;
        struct sockaddr_in6 sin6;
        struct sockaddr_in sin;
        struct sockaddr sa;
};
# 386 "./common-utils.h"
static inline void
iov_free (struct iovec *vector, int count)
{
 int i;

 for (i = 0; i < count; i++)
  do { if (vector[i].iov_base != ((void *)0)) { free ((void *)vector[i].iov_base); vector[i].iov_base = (void *)0xeeeeeeee; } } while (0);

 __gf_free (vector);
}


static inline int
iov_length (const struct iovec *vector, int count)
{
 int i = 0;
 size_t size = 0;

 for (i = 0; i < count; i++)
  size += vector[i].iov_len;

 return size;
}


static inline struct iovec *
iov_dup (const struct iovec *vector, int count)
{
 int bytecount = 0;
 int i;
 struct iovec *newvec = ((void *)0);

 bytecount = (count * sizeof (struct iovec));
 newvec = __gf_malloc (bytecount, gf_common_mt_iovec, "gf_common_mt_iovec");
 if (!newvec)
  return ((void *)0);

 for (i = 0; i < count; i++) {
  newvec[i].iov_len = vector[i].iov_len;
  newvec[i].iov_base = vector[i].iov_base;
 }

 return newvec;
}


static inline int
iov_subset (struct iovec *orig, int orig_count,
     off_t src_offset, off_t dst_offset,
     struct iovec *new)
{
 int new_count = 0;
 int i;
 off_t offset = 0;
 size_t start_offset = 0;
 size_t end_offset = 0, origin_iov_len = 0;


 for (i = 0; i < orig_count; i++) {
                origin_iov_len = orig[i].iov_len;

  if ((offset + orig[i].iov_len < src_offset)
      || (offset > dst_offset)) {
   goto not_subset;
  }

  if (!new) {
   goto count_only;
  }

  start_offset = 0;
  end_offset = orig[i].iov_len;

  if (src_offset >= offset) {
   start_offset = (src_offset - offset);
  }

  if (dst_offset <= (offset + orig[i].iov_len)) {
   end_offset = (dst_offset - offset);
  }

  new[new_count].iov_base = orig[i].iov_base + start_offset;
  new[new_count].iov_len = end_offset - start_offset;

 count_only:
  new_count++;

 not_subset:
  offset += origin_iov_len;
 }

 return new_count;
}


static inline void
iov_unload (char *buf, const struct iovec *vector, int count)
{
 int i;
 int copied = 0;

 for (i = 0; i < count; i++) {
  memcpy (buf + copied, vector[i].iov_base, vector[i].iov_len);
  copied += vector[i].iov_len;
 }
}


static inline size_t
iov_load (const struct iovec *vector, int count, char *buf, int size)
{
 size_t left = size;
 size_t cp = 0;
 int ret = 0;
 int i = 0;

 while (left && i < count) {
  cp = ((vector[i].iov_len)<(left)?(vector[i].iov_len):(left));
  if (vector[i].iov_base != buf + (size - left))
   memcpy (vector[i].iov_base, buf + (size - left), cp);
  ret += cp;
  left -= cp;
  if (left)
   i++;
 }

 return ret;
}


static inline size_t
iov_copy (const struct iovec *dst, int dcnt,
   const struct iovec *src, int scnt)
{
 size_t ret = 0;
 size_t left = 0;
 size_t min_i = 0;
 int s_i = 0, s_ii = 0;
 int d_i = 0, d_ii = 0;

 ret = ((iov_length (dst, dcnt))<(iov_length (src, scnt))?(iov_length (dst, dcnt)):(iov_length (src, scnt)));
 left = ret;

 while (left) {
  min_i = ((dst[d_i].iov_len - d_ii)<(src[s_i].iov_len - s_ii)?(dst[d_i].iov_len - d_ii):(src[s_i].iov_len - s_ii));
  memcpy (dst[d_i].iov_base + d_ii, src[s_i].iov_base + s_ii,
   min_i);

  d_ii += min_i;
  if (d_ii == dst[d_i].iov_len) {
   d_ii = 0;
   d_i++;
  }

  s_ii += min_i;
  if (s_ii == src[s_i].iov_len) {
   s_ii = 0;
   s_i++;
  }

  left -= min_i;
 }

 return ret;
}


static inline int
mem_0filled (const char *buf, size_t size)
{
 int i = 0;
 int ret = 0;

 for (i = 0; i < size; i++) {
  ret = buf[i];
  if (ret)
   break;
 }

 return ret;
}


static inline int
iov_0filled (struct iovec *vector, int count)
{
 int i = 0;
 int ret = 0;

 for (i = 0; i < count; i++) {
  ret = mem_0filled (vector[i].iov_base, vector[i].iov_len);
  if (ret)
   break;
 }

 return ret;
}


static inline void *
memdup (const void *ptr, size_t size)
{
 void *newptr = ((void *)0);

 newptr = __gf_malloc (size, gf_common_mt_memdup, "gf_common_mt_memdup");
 if (!newptr)
  return ((void *)0);

 memcpy (newptr, ptr, size);
 return newptr;
}

typedef enum {
        gf_timefmt_default = 0,
        gf_timefmt_FT = 0,
        gf_timefmt_Ymd_T,
        gf_timefmt_bdT,
        gf_timefmt_F_HMS,
 gf_timefmt_dirent,
        gf_timefmt_s,
        gf_timefmt_last
} gf_timefmts;

static inline char *
gf_time_fmt (char *dst, size_t sz_dst, time_t utime, unsigned int fmt)
{
        extern void _gf_timestuff (gf_timefmts *, const char ***, const char ***);
        static gf_timefmts timefmt_last = (gf_timefmts) - 1;
        static const char **fmts;
        static const char **zeros;
        struct tm tm;

        if (timefmt_last == (gf_timefmts) - 1)
                _gf_timestuff (&timefmt_last, &fmts, &zeros);
        if (timefmt_last < fmt) fmt = gf_timefmt_default;
        if (utime && gmtime_r (&utime, &tm) != ((void *)0)) {
                strftime (dst, sz_dst, fmts[fmt], &tm);
        } else {
                strncpy (dst, "N/A", sz_dst);
        }
        return dst;
}

int
mkdir_p (char *path, mode_t mode, gf_boolean_t allow_symlinks);





int
gf_lstat_dir (const char *path, struct stat *stbuf_in);

int32_t gf_roundup_power_of_two (int32_t nr);






int32_t gf_roundup_next_power_of_two (int32_t nr);

char *gf_trim (char *string);
int gf_strsplit (const char *str, const char *delim,
   char ***tokens, int *token_count);
int gf_volume_name_validate (const char *volume_name);

int gf_string2long (const char *str, long *n);
int gf_string2ulong (const char *str, unsigned long *n);
int gf_string2int (const char *str, int *n);
int gf_string2uint (const char *str, unsigned int *n);
int gf_string2double (const char *str, double *n);
int gf_string2longlong (const char *str, long long *n);
int gf_string2ulonglong (const char *str, unsigned long long *n);

int gf_string2int8 (const char *str, int8_t *n);
int gf_string2int16 (const char *str, int16_t *n);
int gf_string2int32 (const char *str, int32_t *n);
int gf_string2int64 (const char *str, int64_t *n);
int gf_string2uint8 (const char *str, uint8_t *n);
int gf_string2uint16 (const char *str, uint16_t *n);
int gf_string2uint32 (const char *str, uint32_t *n);
int gf_string2uint64 (const char *str, uint64_t *n);

int gf_strstr (const char *str, const char *delim, const char *match);

int gf_string2ulong_base10 (const char *str, unsigned long *n);
int gf_string2uint_base10 (const char *str, unsigned int *n);
int gf_string2uint8_base10 (const char *str, uint8_t *n);
int gf_string2uint16_base10 (const char *str, uint16_t *n);
int gf_string2uint32_base10 (const char *str, uint32_t *n);
int gf_string2uint64_base10 (const char *str, uint64_t *n);
int gf_string2bytesize (const char *str, uint64_t *n);
int gf_string2bytesize_size (const char *str, size_t *n);
int gf_string2bytesize_uint64 (const char *str, uint64_t *n);
int gf_string2bytesize_int64 (const char *str, int64_t *n);
int gf_string2percent_or_bytesize (const char *str, double *n,
       gf_boolean_t *is_percent);

int gf_string2boolean (const char *str, gf_boolean_t *b);
int gf_string2percent (const char *str, double *n);
int gf_string2time (const char *str, uint32_t *n);

int gf_lockfd (int fd);
int gf_unlockfd (int fd);

int get_checksum_for_file (int fd, uint32_t *checksum);
int log_base2 (unsigned long x);

int get_checksum_for_path (char *path, uint32_t *checksum);
int get_file_mtime (const char *path, time_t *stamp);
char *gf_resolve_path_parent (const char *path);

char *strtail (char *str, const char *pattern);
void skipwhite (char **s);
char *nwstrtail (char *str, char *pattern);
void skip_word (char **str);

char *get_nth_word (const char *str, int n);

gf_boolean_t mask_match (const uint32_t a, const uint32_t b, const uint32_t m);
gf_boolean_t gf_is_ip_in_net (const char *network, const char *ip_str);
char valid_host_name (char *address, int length);
char valid_ipv4_address (char *address, int length, gf_boolean_t wildcard_acc);
char valid_ipv6_address (char *address, int length, gf_boolean_t wildcard_acc);
char valid_internet_address (char *address, gf_boolean_t wildcard_acc);
gf_boolean_t valid_mount_auth_address (char *address);
gf_boolean_t valid_ipv4_subnetwork (const char *address);
gf_boolean_t gf_sock_union_equal_addr (union gf_sock_union *a,
                                       union gf_sock_union *b);
char *gf_rev_dns_lookup (const char *ip);

char *uuid_utoa (uuid_t uuid);
char *uuid_utoa_r (uuid_t uuid, char *dst);
char *lkowner_utoa (gf_lkowner_t *lkowner);
char *lkowner_utoa_r (gf_lkowner_t *lkowner, char *dst, int len);

void gf_array_insertionsort (void *a, int l, int r, size_t elem_size,
                             gf_cmp cmp);
int gf_is_str_int (const char *value);

char *gf_uint64_2human_readable (uint64_t);
int validate_brick_name (char *brick);
char *get_host_name (char *word, char **host);
char *get_path_name (char *word, char **path);
void gf_path_strip_trailing_slashes (char *path);
uint64_t get_mem_size ();
int gf_strip_whitespace (char *str, int len);
int gf_canonicalize_path (char *path);
char *generate_glusterfs_ctx_id (void);
char *gf_get_reserved_ports();
int gf_process_reserved_ports (gf_boolean_t ports[], uint32_t ceiling);
gf_boolean_t
gf_ports_reserved (char *blocked_port, gf_boolean_t *ports, uint32_t ceiling);
int gf_get_hostname_from_ip (char *client_ip, char **hostname);
gf_boolean_t gf_is_local_addr (char *hostname);
gf_boolean_t gf_is_same_address (char *host1, char *host2);
void md5_wrapper(const unsigned char *data, size_t len, char *md5);
int gf_set_timestamp (const char *src, const char* dest);

int gf_thread_create (pthread_t *thread, const pthread_attr_t *attr,
                      void *(*start_routine)(void *), void *arg);
gf_boolean_t
gf_is_service_running (char *pidfile, int *pid);
int
gf_skip_header_section (int fd, int header_len);

struct iatt;
struct _dict;

gf_boolean_t
dht_is_linkfile (struct iatt *buf, struct _dict *dict);

int
gf_check_log_format (const char *value);

int
gf_check_logger (const char *value);

gf_boolean_t
gf_compare_sockaddr (const struct sockaddr *addr1,
                     const struct sockaddr *addr2);

char *
gf_backtrace_save (char *buf);

void
gf_backtrace_done (char *buf);

gf_loglevel_t
fop_log_level (glusterfs_fop_t fop, int op_errno);

int32_t
gf_build_absolute_path (char *current_path, char *relative_path, char **path);

int
recursive_rmdir (const char *delete_path);

int
gf_get_index_by_elem (char **array, char *elem);

int
glusterfs_is_local_pathinfo (char *pathinfo, gf_boolean_t *local);

int
gf_thread_cleanup_xint (pthread_t thread);

ssize_t
gf_nread (int fd, void *buf, size_t count);

ssize_t
gf_nwrite (int fd, const void *buf, size_t count);

void _mask_cancellation (void);
void _unmask_cancellation (void);
# 42 "./common-utils.c" 2
# 1 "./revision.h" 1
# 43 "./common-utils.c" 2

# 1 "./stack.h" 1
# 19 "./stack.h"
struct _call_stack_t;
typedef struct _call_stack_t call_stack_t;
struct _call_frame_t;
typedef struct _call_frame_t call_frame_t;
struct call_pool;
typedef struct call_pool call_pool_t;



# 1 "./xlator.h" 1
# 18 "./xlator.h"
# 1 "./event-history.h" 1
# 15 "./event-history.h"
# 1 "./circ-buff.h" 1
# 22 "./circ-buff.h"
struct _circular_buffer {
        struct timeval tv;
        void *data;
};

typedef struct _circular_buffer circular_buffer_t;

struct _buffer {
        unsigned int w_index;
        size_t size_buffer;
        gf_boolean_t use_once;




        int used_len;


        circular_buffer_t **cb;
        void (*destroy_buffer_data) (void *data);
        pthread_mutex_t lock;
};

typedef struct _buffer buffer_t;

int
cb_add_entry_buffer (buffer_t *buffer, void *item);

void
cb_buffer_show (buffer_t *buffer);

buffer_t *
cb_buffer_new (size_t buffer_size,gf_boolean_t use_buffer_once,
               void (*destroy_data) (void *data));

void
cb_buffer_destroy (buffer_t *buffer);

void
cb_buffer_dump (buffer_t *buffer, void *data,
                int (fn) (circular_buffer_t *buffer, void *data));
# 16 "./event-history.h" 2

struct event_hist
{
        buffer_t *buffer;
        pthread_mutex_t lock;
};

typedef struct event_hist eh_t;

void
eh_dump (eh_t *event , void *data,
         int (fn) (circular_buffer_t *buffer, void *data));

eh_t *
eh_new (size_t buffer_size, gf_boolean_t use_buffer_once,
        void (*destroy_data) (void *data));

int
eh_save_history (eh_t *history, void *string);

int
eh_destroy (eh_t *history);
# 19 "./xlator.h" 2


# 1 "./dict.h" 1
# 21 "./dict.h"
typedef struct _data data_t;
typedef struct _dict dict_t;
typedef struct _data_pair data_pair_t;
# 63 "./dict.h"
struct _data {
        unsigned char is_static:1;
        unsigned char is_const:1;
        int32_t len;
        char *data;
        int32_t refcount;
        gf_lock_t lock;
};

struct _data_pair {
        struct _data_pair *hash_next;
        struct _data_pair *prev;
        struct _data_pair *next;
        data_t *value;
        char *key;
};

struct _dict {
        unsigned char is_static:1;
        int32_t hash_size;
        int32_t count;
        int32_t refcount;
        data_pair_t **members;
        data_pair_t *members_list;
        char *extra_free;
        char *extra_stdfree;
        gf_lock_t lock;
        data_pair_t *members_internal;
        data_pair_t free_pair;
        gf_boolean_t free_pair_in_use;
};

typedef gf_boolean_t (*dict_match_t) (dict_t *d, char *k, data_t *v,
                                      void *data);

int32_t is_data_equal (data_t *one, data_t *two);
void data_destroy (data_t *data);


int32_t dict_set (dict_t *this, char *key, data_t *value);

int32_t dict_add (dict_t *this, char *key, data_t *value);

data_t *dict_get (dict_t *this, char *key);
void dict_del (dict_t *this, char *key);
int dict_reset (dict_t *dict);

int32_t dict_serialized_length (dict_t *dict);
int32_t dict_serialize (dict_t *dict, char *buf);
int32_t dict_unserialize (char *buf, int32_t size, dict_t **fill);

int32_t dict_allocate_and_serialize (dict_t *this, char **buf, u_int *length);

void dict_destroy (dict_t *dict);
void dict_unref (dict_t *dict);
dict_t *dict_ref (dict_t *dict);
data_t *data_ref (data_t *data);
void data_unref (data_t *data);

int32_t dict_lookup (dict_t *this, char *key, data_t **data);



data_t *int_to_data (int64_t value);
data_t *str_to_data (char *value);
data_t *data_from_dynstr (char *value);
data_t *data_from_dynptr (void *value, int32_t len);
data_t *bin_to_data (void *value, int32_t len);
data_t *static_str_to_data (char *value);
data_t *static_bin_to_data (void *value);

int64_t data_to_int64 (data_t *data);
int32_t data_to_int32 (data_t *data);
int16_t data_to_int16 (data_t *data);
int8_t data_to_int8 (data_t *data);

uint64_t data_to_uint64 (data_t *data);
uint32_t data_to_uint32 (data_t *data);
uint16_t data_to_uint16 (data_t *data);
uint8_t data_to_uint8 (data_t *data);

data_t *data_from_int64 (int64_t value);
data_t *data_from_int32 (int32_t value);
data_t *data_from_int16 (int16_t value);
data_t *data_from_int8 (int8_t value);

data_t *data_from_uint64 (uint64_t value);
data_t *data_from_uint32 (uint32_t value);
data_t *data_from_uint16 (uint16_t value);

char *data_to_str (data_t *data);
void *data_to_bin (data_t *data);
void *data_to_ptr (data_t *data);

data_t *get_new_data ();
data_t * data_copy (data_t *old);
dict_t *get_new_dict_full (int size_hint);
dict_t *get_new_dict ();

int dict_foreach (dict_t *this,
                  int (*fn)(dict_t *this,
                            char *key,
                            data_t *value,
                            void *data),
                  void *data);

int dict_foreach_fnmatch (dict_t *dict, char *pattern,
                          int (*fn)(dict_t *this,
                                    char *key,
                                    data_t *value,
                                    void *data),
                          void *data);

int
dict_foreach_match (dict_t *dict,
             gf_boolean_t (*match)(dict_t *this,
                                char *key,
                                data_t *value,
                                void *mdata),
             void *match_data,
             int (*action)(dict_t *this,
                                char *key,
                                data_t *value,
                                void *adata),
              void *action_data);

int dict_null_foreach_fn (dict_t *d, char *k,
                          data_t *v, void *tmp);
int dict_remove_foreach_fn (dict_t *d, char *k,
                            data_t *v, void *tmp);
dict_t *dict_copy (dict_t *this, dict_t *new);
int dict_keys_join (void *value, int size, dict_t *dict,
                    int (*filter_fn)(char *key));


__attribute__((warn_unused_result)) dict_t *dict_new (void);
dict_t *dict_copy_with_ref (dict_t *this, dict_t *new);

__attribute__((warn_unused_result)) int dict_reset (dict_t *dict);

__attribute__((warn_unused_result)) int dict_get_int8 (dict_t *this, char *key, int8_t *val);
__attribute__((warn_unused_result)) int dict_set_int8 (dict_t *this, char *key, int8_t val);

__attribute__((warn_unused_result)) int dict_get_int16 (dict_t *this, char *key, int16_t *val);
__attribute__((warn_unused_result)) int dict_set_int16 (dict_t *this, char *key, int16_t val);

__attribute__((warn_unused_result)) int dict_get_int32 (dict_t *this, char *key, int32_t *val);
__attribute__((warn_unused_result)) int dict_set_int32 (dict_t *this, char *key, int32_t val);

__attribute__((warn_unused_result)) int dict_get_int64 (dict_t *this, char *key, int64_t *val);
__attribute__((warn_unused_result)) int dict_set_int64 (dict_t *this, char *key, int64_t val);

__attribute__((warn_unused_result)) int dict_get_uint16 (dict_t *this, char *key, uint16_t *val);
__attribute__((warn_unused_result)) int dict_set_uint16 (dict_t *this, char *key, uint16_t val);

__attribute__((warn_unused_result)) int dict_get_uint32 (dict_t *this, char *key, uint32_t *val);
__attribute__((warn_unused_result)) int dict_set_uint32 (dict_t *this, char *key, uint32_t val);

__attribute__((warn_unused_result)) int dict_get_uint64 (dict_t *this, char *key, uint64_t *val);
__attribute__((warn_unused_result)) int dict_set_uint64 (dict_t *this, char *key, uint64_t val);

__attribute__((warn_unused_result)) int dict_get_double (dict_t *this, char *key, double *val);
__attribute__((warn_unused_result)) int dict_set_double (dict_t *this, char *key, double val);

__attribute__((warn_unused_result)) int dict_set_static_ptr (dict_t *this, char *key, void *ptr);
__attribute__((warn_unused_result)) int dict_get_ptr (dict_t *this, char *key, void **ptr);
__attribute__((warn_unused_result)) int dict_get_ptr_and_len (dict_t *this, char *key, void **ptr, int *len);
__attribute__((warn_unused_result)) int dict_set_ptr (dict_t *this, char *key, void *ptr);
__attribute__((warn_unused_result)) int dict_set_dynptr (dict_t *this, char *key, void *ptr, size_t size);

__attribute__((warn_unused_result)) int dict_get_bin (dict_t *this, char *key, void **ptr);
__attribute__((warn_unused_result)) int dict_set_bin (dict_t *this, char *key, void *ptr, size_t size);
__attribute__((warn_unused_result)) int dict_set_static_bin (dict_t *this, char *key, void *ptr, size_t size);

__attribute__((warn_unused_result)) int dict_set_str (dict_t *this, char *key, char *str);
__attribute__((warn_unused_result)) int dict_set_dynstr (dict_t *this, char *key, char *str);
__attribute__((warn_unused_result)) int dict_set_dynstr_with_alloc (dict_t *this, char *key, const char *str);
__attribute__((warn_unused_result)) int dict_add_dynstr_with_alloc (dict_t *this, char *key, char *str);
__attribute__((warn_unused_result)) int dict_get_str (dict_t *this, char *key, char **str);

__attribute__((warn_unused_result)) int dict_get_str_boolean (dict_t *this, char *key, int default_val);
__attribute__((warn_unused_result)) int dict_serialize_value_with_delim (dict_t *this, char *buf, int32_t *serz_len,
                                                    char delimiter);
void
dict_dump_to_statedump (dict_t *dict, char *dict_name, char *domain);

void
dict_dump_to_log (dict_t *dict);

int
dict_dump_to_str (dict_t *dict, char *dump, int dumpsize, char *format);
gf_boolean_t
dict_match_everything (dict_t *d, char *k, data_t *v, void *data);

dict_t *
dict_for_key_value (const char *name, const char *value, size_t size);

gf_boolean_t
are_dicts_equal (dict_t *one, dict_t *two,
                 gf_boolean_t (*match) (dict_t *d, char *k, data_t *v,
                                        void *data),
                 gf_boolean_t (*value_ignore) (char *k));
# 22 "./xlator.h" 2
# 1 "./compat.h" 1
# 14 "./compat.h"
# 1 "./config.h" 1
# 15 "./compat.h" 2
# 391 "./compat.h"
# 1 "/usr/include/argp.h" 1 3 4
# 25 "/usr/include/argp.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 104 "/usr/include/getopt.h" 3 4
struct option
{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 173 "/usr/include/getopt.h" 3 4
extern int getopt_long (int ___argc, char *const *___argv,
   const char *__shortopts,
          const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ , __leaf__));
extern int getopt_long_only (int ___argc, char *const *___argv,
        const char *__shortopts,
               const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ , __leaf__));
# 26 "/usr/include/argp.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/4.9.3/include-fixed/limits.h" 1 3 4
# 27 "/usr/include/argp.h" 2 3 4


# 1 "/usr/include/errno.h" 1 3 4
# 68 "/usr/include/errno.h" 3 4
typedef int error_t;
# 30 "/usr/include/argp.h" 2 3 4
# 79 "/usr/include/argp.h" 3 4
struct argp_option
{


  const char *name;



  int key;



  const char *arg;


  int flags;





  const char *doc;
# 109 "/usr/include/argp.h" 3 4
  int group;
};
# 144 "/usr/include/argp.h" 3 4
struct argp;
struct argp_state;
struct argp_child;


typedef error_t (*argp_parser_t) (int __key, char *__arg,
      struct argp_state *__state);
# 218 "/usr/include/argp.h" 3 4
struct argp
{


  const struct argp_option *options;
# 231 "/usr/include/argp.h" 3 4
  argp_parser_t parser;






  const char *args_doc;




  const char *doc;







  const struct argp_child *children;
# 263 "/usr/include/argp.h" 3 4
  char *(*help_filter) (int __key, const char *__text, void *__input);




  const char *argp_domain;
};
# 284 "/usr/include/argp.h" 3 4
struct argp_child
{

  const struct argp *argp;


  int flags;





  const char *header;







  int group;
};



struct argp_state
{

  const struct argp *root_argp;


  int argc;
  char **argv;


  int next;


  unsigned flags;





  unsigned arg_num;




  int quoted;


  void *input;


  void **child_inputs;


  void *hook;



  char *name;


  FILE *err_stream;
  FILE *out_stream;

  void *pstate;
};
# 406 "/usr/include/argp.h" 3 4
extern error_t argp_parse (const struct argp *__restrict __argp,
      int __argc, char **__restrict __argv,
      unsigned __flags, int *__restrict __arg_index,
      void *__restrict __input);
extern error_t __argp_parse (const struct argp *__restrict __argp,
        int __argc, char **__restrict __argv,
        unsigned __flags, int *__restrict __arg_index,
        void *__restrict __input);







extern const char *argp_program_version;






extern void (*argp_program_version_hook) (FILE *__restrict __stream,
       struct argp_state *__restrict
       __state);






extern const char *argp_program_bug_address;




extern error_t argp_err_exit_status;
# 475 "/usr/include/argp.h" 3 4
extern void argp_help (const struct argp *__restrict __argp,
         FILE *__restrict __stream,
         unsigned __flags, char *__restrict __name);
extern void __argp_help (const struct argp *__restrict __argp,
    FILE *__restrict __stream, unsigned __flags,
    char *__name);
# 492 "/usr/include/argp.h" 3 4
extern void argp_state_help (const struct argp_state *__restrict __state,
        FILE *__restrict __stream,
        unsigned int __flags);
extern void __argp_state_help (const struct argp_state *__restrict __state,
          FILE *__restrict __stream,
          unsigned int __flags);


extern void argp_usage (const struct argp_state *__state);
extern void __argp_usage (const struct argp_state *__state);




extern void argp_error (const struct argp_state *__restrict __state,
   const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern void __argp_error (const struct argp_state *__restrict __state,
     const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 521 "/usr/include/argp.h" 3 4
extern void argp_failure (const struct argp_state *__restrict __state,
     int __status, int __errnum,
     const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 4, 5)));
extern void __argp_failure (const struct argp_state *__restrict __state,
       int __status, int __errnum,
       const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 4, 5)));


extern int _option_is_short (const struct argp_option *__opt) __attribute__ ((__nothrow__ , __leaf__));
extern int __option_is_short (const struct argp_option *__opt) __attribute__ ((__nothrow__ , __leaf__));



extern int _option_is_end (const struct argp_option *__opt) __attribute__ ((__nothrow__ , __leaf__));
extern int __option_is_end (const struct argp_option *__opt) __attribute__ ((__nothrow__ , __leaf__));



extern void *_argp_input (const struct argp *__restrict __argp,
     const struct argp_state *__restrict __state)
     __attribute__ ((__nothrow__ , __leaf__));
extern void *__argp_input (const struct argp *__restrict __argp,
      const struct argp_state *__restrict __state)
     __attribute__ ((__nothrow__ , __leaf__));
# 392 "./compat.h" 2





size_t strnlen(const char *string, size_t maxlen);
# 416 "./compat.h"
static inline int32_t
dirent_size (struct dirent *entry)
{
        int32_t size = -1;
# 433 "./compat.h"
        return size;
}
# 446 "./compat.h"
int gf_mkostemp (char *tmpl, int suffixlen, int flags);
# 492 "./compat.h"
       


int gf_umount_lazy(char *xlname, char *path, int rmdir);
# 23 "./xlator.h" 2

# 1 "./latency.h" 1
# 16 "./latency.h"
typedef struct fop_latency {
        uint64_t min;
        uint64_t max;
 double total;
        double std;
        double mean;
        uint64_t count;
} fop_latency_t;

void
gf_latency_toggle (int signum, glusterfs_ctx_t *ctx);
# 25 "./xlator.h" 2
# 44 "./xlator.h"
struct _xlator;
typedef struct _xlator xlator_t;
struct _dir_entry_t;
typedef struct _dir_entry_t dir_entry_t;
struct _gf_dirent_t;
typedef struct _gf_dirent_t gf_dirent_t;
struct _loc;
typedef struct _loc loc_t;


typedef int32_t (*event_notify_fn_t) (xlator_t *this, int32_t event, void *data,
                                      ...);


# 1 "./gf-dirent.h" 1
# 15 "./gf-dirent.h"
# 1 "./iatt.h" 1
# 22 "./iatt.h"
typedef enum {
        IA_INVAL = 0,
        IA_IFREG,
        IA_IFDIR,
        IA_IFLNK,
        IA_IFBLK,
        IA_IFCHR,
        IA_IFIFO,
        IA_IFSOCK
} ia_type_t;


typedef struct {
        uint8_t suid:1;
        uint8_t sgid:1;
        uint8_t sticky:1;
        struct {
                uint8_t read:1;
                uint8_t write:1;
                uint8_t exec:1;
        } owner, group, other;
} ia_prot_t;


struct iatt {
        uint64_t ia_ino;
        uuid_t ia_gfid;
        uint64_t ia_dev;
        ia_type_t ia_type;
        ia_prot_t ia_prot;
        uint32_t ia_nlink;
        uint32_t ia_uid;
        uint32_t ia_gid;
        uint64_t ia_rdev;
        uint64_t ia_size;
        uint32_t ia_blksize;
        uint64_t ia_blocks;
        uint32_t ia_atime;
        uint32_t ia_atime_nsec;
        uint32_t ia_mtime;
        uint32_t ia_mtime_nsec;
        uint32_t ia_ctime;
        uint32_t ia_ctime_nsec;
};
# 95 "./iatt.h"
static inline uint32_t
ia_major (uint64_t ia_dev)
{
        return (uint32_t) (ia_dev >> 32);
}


static inline uint32_t
ia_minor (uint64_t ia_dev)
{
        return (uint32_t) (ia_dev & 0xffffffff);
}


static inline uint64_t
ia_makedev (uint32_t ia_maj, uint32_t ia_min)
{
        return ((((uint64_t) ia_maj) << 32) | ia_min);
}


static inline ia_prot_t
ia_prot_from_st_mode (mode_t mode)
{
        ia_prot_t ia_prot = {0, };

        if (mode & 04000)
                ia_prot.suid = 1;
        if (mode & 02000)
                ia_prot.sgid = 1;
        if (mode & 01000)
                ia_prot.sticky = 1;

        if (mode & 0400)
                ia_prot.owner.read = 1;
        if (mode & 0200)
                ia_prot.owner.write = 1;
        if (mode & 0100)
                ia_prot.owner.exec = 1;

        if (mode & (0400 >> 3))
                ia_prot.group.read = 1;
        if (mode & (0200 >> 3))
                ia_prot.group.write = 1;
        if (mode & (0100 >> 3))
                ia_prot.group.exec = 1;

        if (mode & ((0400 >> 3) >> 3))
                ia_prot.other.read = 1;
        if (mode & ((0200 >> 3) >> 3))
                ia_prot.other.write = 1;
        if (mode & ((0100 >> 3) >> 3))
                ia_prot.other.exec = 1;

        return ia_prot;
}


static inline ia_type_t
ia_type_from_st_mode (mode_t mode)
{
        ia_type_t type = IA_INVAL;

        if (((((mode)) & 0170000) == (0100000)))
                type = IA_IFREG;
        if (((((mode)) & 0170000) == (0040000)))
                type = IA_IFDIR;
        if (((((mode)) & 0170000) == (0120000)))
                type = IA_IFLNK;
        if (((((mode)) & 0170000) == (0060000)))
                type = IA_IFBLK;
        if (((((mode)) & 0170000) == (0020000)))
                type = IA_IFCHR;
        if (((((mode)) & 0170000) == (0010000)))
                type = IA_IFIFO;
        if (((((mode)) & 0170000) == (0140000)))
                type = IA_IFSOCK;

        return type;
}


static inline mode_t
st_mode_from_ia (ia_prot_t prot, ia_type_t type)
{
        mode_t st_mode = 0;
        uint32_t type_bit = 0;
        uint32_t prot_bit = 0;

        switch (type) {
        case IA_IFREG:
                type_bit = 0100000;
                break;
        case IA_IFDIR:
                type_bit = 0040000;
                break;
        case IA_IFLNK:
                type_bit = 0120000;
                break;
        case IA_IFBLK:
                type_bit = 0060000;
                break;
        case IA_IFCHR:
                type_bit = 0020000;
                break;
        case IA_IFIFO:
                type_bit = 0010000;
                break;
        case IA_IFSOCK:
                type_bit = 0140000;
                break;
        case IA_INVAL:
                break;
        }

        if (prot.suid)
                prot_bit |= 04000;
        if (prot.sgid)
                prot_bit |= 02000;
        if (prot.sticky)
                prot_bit |= 01000;

        if (prot.owner.read)
                prot_bit |= 0400;
        if (prot.owner.write)
                prot_bit |= 0200;
        if (prot.owner.exec)
                prot_bit |= 0100;

        if (prot.group.read)
                prot_bit |= (0400 >> 3);
        if (prot.group.write)
                prot_bit |= (0200 >> 3);
        if (prot.group.exec)
                prot_bit |= (0100 >> 3);

        if (prot.other.read)
                prot_bit |= ((0400 >> 3) >> 3);
        if (prot.other.write)
                prot_bit |= ((0200 >> 3) >> 3);
        if (prot.other.exec)
                prot_bit |= ((0100 >> 3) >> 3);

        st_mode = (type_bit | prot_bit);

        return st_mode;
}


static inline int
iatt_from_stat (struct iatt *iatt, struct stat *stat)
{
        iatt->ia_dev = stat->st_dev;
        iatt->ia_ino = stat->st_ino;

        iatt->ia_type = ia_type_from_st_mode (stat->st_mode);
        iatt->ia_prot = ia_prot_from_st_mode (stat->st_mode);

        iatt->ia_nlink = stat->st_nlink;
        iatt->ia_uid = stat->st_uid;
        iatt->ia_gid = stat->st_gid;

        iatt->ia_rdev = ia_makedev (gnu_dev_major (stat->st_rdev),
                                          gnu_dev_minor (stat->st_rdev));

        iatt->ia_size = stat->st_size;
        iatt->ia_blksize = stat->st_blksize;
        iatt->ia_blocks = stat->st_blocks;
# 273 "./iatt.h"
        {
                uint64_t maxblocks;

                maxblocks = (iatt->ia_size + 511) / 512;

                if (iatt->ia_blocks > maxblocks)
                        iatt->ia_blocks = maxblocks;
        }

        iatt->ia_atime = stat->st_atim.tv_sec;
        iatt->ia_atime_nsec = (0);

        iatt->ia_mtime = stat->st_mtim.tv_sec;
        iatt->ia_mtime_nsec = (0);

        iatt->ia_ctime = stat->st_ctim.tv_sec;
        iatt->ia_ctime_nsec = (0);

        return 0;
}


static inline int
iatt_to_stat (struct iatt *iatt, struct stat *stat)
{
        stat->st_dev = iatt->ia_dev;
        stat->st_ino = iatt->ia_ino;

        stat->st_mode = st_mode_from_ia (iatt->ia_prot, iatt->ia_type);

        stat->st_nlink = iatt->ia_nlink;
        stat->st_uid = iatt->ia_uid;
        stat->st_gid = iatt->ia_gid;

        stat->st_rdev = gnu_dev_makedev (ia_major (iatt->ia_rdev), ia_minor (iatt->ia_rdev))
                                                                ;

        stat->st_size = iatt->ia_size;
        stat->st_blksize = iatt->ia_blksize;
        stat->st_blocks = iatt->ia_blocks;

        stat->st_atim.tv_sec = iatt->ia_atime;
        do { } while (0);;

        stat->st_mtim.tv_sec = iatt->ia_mtime;
        do { } while (0);;

        stat->st_ctim.tv_sec = iatt->ia_ctime;
        do { } while (0);;

        return 0;
}
# 16 "./gf-dirent.h" 2
# 1 "./inode.h" 1
# 22 "./inode.h"
struct _inode_table;
typedef struct _inode_table inode_table_t;

struct _inode;
typedef struct _inode inode_t;

struct _dentry;
typedef struct _dentry dentry_t;


# 1 "./xlator.h" 1
# 33 "./inode.h" 2


# 1 "./fd.h" 1
# 19 "./fd.h"
# 1 "./fd-lk.h" 1
# 14 "./fd-lk.h"
# 1 "./fd.h" 1
# 15 "./fd-lk.h" 2
# 29 "./fd-lk.h"
struct _fd;

struct fd_lk_ctx {
        struct list_head lk_list;
        int ref;
        gf_lock_t lock;
};
typedef struct fd_lk_ctx fd_lk_ctx_t;

struct fd_lk_ctx_node {
        int32_t cmd;
        struct gf_flock user_flock;
        off_t fl_start;
        off_t fl_end;
        short fl_type;
        struct list_head next;
};
typedef struct fd_lk_ctx_node fd_lk_ctx_node_t;

fd_lk_ctx_t *
_fd_lk_ctx_ref (fd_lk_ctx_t *lk_ctx);

fd_lk_ctx_t *
fd_lk_ctx_ref (fd_lk_ctx_t *lk_ctx);

fd_lk_ctx_t *
fd_lk_ctx_try_ref (fd_lk_ctx_t *lk_ctx);

fd_lk_ctx_t *
fd_lk_ctx_create ();

int
fd_lk_insert_and_merge (struct _fd *lk_ctx, int32_t cmd,
                        struct gf_flock *flock);

int
fd_lk_ctx_unref (fd_lk_ctx_t *lk_ctx);

gf_boolean_t
fd_lk_ctx_empty (fd_lk_ctx_t *lk_ctx);
# 20 "./fd.h" 2





struct _inode;
struct _dict;
struct fd_lk_ctx;

struct _fd_ctx {
        union {
                uint64_t key;
                void *xl_key;
        };
        union {
                uint64_t value1;
                void *ptr1;
        };
};

struct _fd {
        uint64_t pid;
 int32_t flags;
        int32_t refcount;
        struct list_head inode_list;
        struct _inode *inode;
        gf_lock_t lock;

 struct _fd_ctx *_ctx;
        int xl_count;
        struct fd_lk_ctx *lk_ctx;
        gf_boolean_t anonymous;


};
typedef struct _fd fd_t;


struct fd_table_entry {
        fd_t *fd;
        int next_free;
};
typedef struct fd_table_entry fdentry_t;


struct _fdtable {
        int refcount;
        uint32_t max_fds;
        pthread_mutex_t lock;
        fdentry_t *fdentries;
        int first_free;
};
typedef struct _fdtable fdtable_t;
# 87 "./fd.h"
void
gf_fd_put (fdtable_t *fdtable, int32_t fd);


fd_t *
gf_fd_fdptr_get (fdtable_t *fdtable, int64_t fd);


fdtable_t *
gf_fd_fdtable_alloc (void);


int
gf_fd_unused_get (fdtable_t *fdtable, fd_t *fdptr);


fdentry_t *
gf_fd_fdtable_get_all_fds (fdtable_t *fdtable, uint32_t *count);


void
gf_fd_fdtable_destroy (fdtable_t *fdtable);


fd_t *
__fd_ref (fd_t *fd);


fd_t *
fd_ref (fd_t *fd);


fd_t *
__fd_unref (fd_t *fd);

void
fd_unref (fd_t *fd);


fd_t *
fd_create (struct _inode *inode, pid_t pid);

fd_t *
fd_create_uint64 (struct _inode *inode, uint64_t pid);

fd_t *
fd_lookup (struct _inode *inode, pid_t pid);

fd_t *
fd_lookup_uint64 (struct _inode *inode, uint64_t pid);

fd_t*
fd_lookup_anonymous (inode_t *inode);

fd_t *
fd_anonymous (inode_t *inode);


gf_boolean_t
fd_is_anonymous (fd_t *fd);


uint8_t
fd_list_empty (struct _inode *inode);


fd_t *
fd_bind (fd_t *fd);


int
fd_ctx_set (fd_t *fd, xlator_t *xlator, uint64_t value);


int
fd_ctx_get (fd_t *fd, xlator_t *xlator, uint64_t *value);


int
fd_ctx_del (fd_t *fd, xlator_t *xlator, uint64_t *value);

int
__fd_ctx_del (fd_t *fd, xlator_t *xlator, uint64_t *value);


int
__fd_ctx_set (fd_t *fd, xlator_t *xlator, uint64_t value);


int
__fd_ctx_get (fd_t *fd, xlator_t *xlator, uint64_t *value);


void
fd_ctx_dump (fd_t *fd, char *prefix);

fdentry_t *
gf_fd_fdtable_copy_all_fds (fdtable_t *fdtable, uint32_t *count);


void
gf_fdptr_put (fdtable_t *fdtable, fd_t *fd);
# 36 "./inode.h" 2

struct _inode_table {
        pthread_mutex_t lock;
        size_t hashsize;
        char *name;
        inode_t *root;
        xlator_t *xl;
        uint32_t lru_limit;
        struct list_head *inode_hash;
        struct list_head *name_hash;
        struct list_head active;
        uint32_t active_size;
        struct list_head lru;

        uint32_t lru_size;
        struct list_head purge;
        uint32_t purge_size;

        struct mem_pool *inode_pool;
        struct mem_pool *dentry_pool;
        struct mem_pool *fd_mem_pool;
        int ctxcount;
};


struct _dentry {
        struct list_head inode_list;
        struct list_head hash;
        inode_t *inode;
        char *name;
        inode_t *parent;
};

struct _inode_ctx {
        union {
                uint64_t key;
                xlator_t *xl_key;
        };

        union {
                uint64_t value1;
                void *ptr1;
        };

        union {
                uint64_t value2;
                void *ptr2;
        };
};

struct _inode {
        inode_table_t *table;
        uuid_t gfid;
        gf_lock_t lock;
        uint64_t nlookup;
        uint32_t fd_count;
        uint32_t ref;
        ia_type_t ia_type;
        struct list_head fd_list;
        struct list_head dentry_list;
        struct list_head hash;
        struct list_head list;

        struct _inode_ctx *_ctx;
};






inode_table_t *
inode_table_new (size_t lru_limit, xlator_t *xl);

void
inode_table_destroy_all (glusterfs_ctx_t *ctx);

void
inode_table_destroy (inode_table_t *inode_table);

inode_t *
inode_new (inode_table_t *table);

inode_t *
inode_link (inode_t *inode, inode_t *parent,
            const char *name, struct iatt *stbuf);

void
inode_unlink (inode_t *inode, inode_t *parent, const char *name);

inode_t *
inode_parent (inode_t *inode, uuid_t pargfid, const char *name);

inode_t *
inode_ref (inode_t *inode);

inode_t *
inode_unref (inode_t *inode);

int
inode_lookup (inode_t *inode);

int
inode_forget (inode_t *inode, uint64_t nlookup);

int
inode_ref_reduce_by_n (inode_t *inode, uint64_t nref);

int
inode_invalidate(inode_t *inode);

int
inode_rename (inode_table_t *table, inode_t *olddir, const char *oldname,
       inode_t *newdir, const char *newname,
       inode_t *inode, struct iatt *stbuf);

dentry_t *
__dentry_grep (inode_table_t *table, inode_t *parent, const char *name);

inode_t *
inode_grep (inode_table_t *table, inode_t *parent, const char *name);

int
inode_grep_for_gfid (inode_table_t *table, inode_t *parent, const char *name,
                     uuid_t gfid, ia_type_t *type);

inode_t *
inode_find (inode_table_t *table, uuid_t gfid);

int
inode_path (inode_t *inode, const char *name, char **bufp);

int
__inode_path (inode_t *inode, const char *name, char **bufp);

inode_t *
inode_from_path (inode_table_t *table, const char *path);

inode_t *
inode_resolve (inode_table_t *table, char *path);



int
inode_ctx_set2 (inode_t *inode, xlator_t *xlator, uint64_t *value1,
                uint64_t *value2);
int
__inode_ctx_set2 (inode_t *inode, xlator_t *xlator, uint64_t *value1,
                  uint64_t *value2);

int
inode_ctx_get2 (inode_t *inode, xlator_t *xlator, uint64_t *value1,
                uint64_t *value2);
int
__inode_ctx_get2 (inode_t *inode, xlator_t *xlator, uint64_t *value1,
                  uint64_t *value2);

int
inode_ctx_del2 (inode_t *inode, xlator_t *xlator, uint64_t *value1,
                uint64_t *value2);

int
inode_ctx_reset2 (inode_t *inode, xlator_t *xlator, uint64_t *value1,
                  uint64_t *value2);



int
inode_ctx_set0 (inode_t *inode, xlator_t *xlator, uint64_t *value1);

int
__inode_ctx_set0 (inode_t *inode, xlator_t *xlator, uint64_t *value1);

int
inode_ctx_get0 (inode_t *inode, xlator_t *xlator, uint64_t *value1);
int
__inode_ctx_get0 (inode_t *inode, xlator_t *xlator, uint64_t *value1);

int
inode_ctx_reset0 (inode_t *inode, xlator_t *xlator, uint64_t *value1);



int
inode_ctx_set1 (inode_t *inode, xlator_t *xlator, uint64_t *value2);

int
__inode_ctx_set1 (inode_t *inode, xlator_t *xlator, uint64_t *value2);

int
inode_ctx_get1 (inode_t *inode, xlator_t *xlator, uint64_t *value2);
int
__inode_ctx_get1 (inode_t *inode, xlator_t *xlator, uint64_t *value2);

int
inode_ctx_reset1 (inode_t *inode, xlator_t *xlator, uint64_t *value2);


static inline int
__inode_ctx_put(inode_t *inode, xlator_t *this, uint64_t v)
{
        return __inode_ctx_set0 (inode, this, &v);
}

static inline int
inode_ctx_put(inode_t *inode, xlator_t *this, uint64_t v)
{
        return inode_ctx_set0 (inode, this, &v);
}
# 258 "./inode.h"
gf_boolean_t
__is_root_gfid (uuid_t gfid);

void
__inode_table_set_lru_limit (inode_table_t *table, uint32_t lru_limit);

void
inode_table_set_lru_limit (inode_table_t *table, uint32_t lru_limit);

void
inode_ctx_merge (fd_t *fd, inode_t *inode, inode_t *linked_inode);

int
inode_is_linked (inode_t *inode);

void
inode_set_need_lookup (inode_t *inode, xlator_t *this);

gf_boolean_t
inode_needs_lookup (inode_t *inode, xlator_t *this);

int
inode_has_dentry (inode_t *inode);
# 17 "./gf-dirent.h" 2



int
gf_deitransform(xlator_t *this, uint64_t y);

int
gf_itransform (xlator_t *this, uint64_t x, uint64_t *y_p, int client_id);

uint64_t
gf_dirent_orig_offset (xlator_t *this, uint64_t offset);


struct _dir_entry_t {
        struct _dir_entry_t *next;
 char *name;
 char *link;
 struct iatt buf;
};


struct _gf_dirent_t {
 union {
  struct list_head list;
  struct {
   struct _gf_dirent_t *next;
   struct _gf_dirent_t *prev;
  };
 };
 uint64_t d_ino;
 uint64_t d_off;
 uint32_t d_len;
 uint32_t d_type;
        struct iatt d_stat;
        dict_t *dict;
        inode_t *inode;
 char d_name[];
};



gf_dirent_t *gf_dirent_for_name (const char *name);
gf_dirent_t *entry_copy (gf_dirent_t *source);
void gf_dirent_entry_free (gf_dirent_t *entry);
void gf_dirent_free (gf_dirent_t *entries);
int gf_link_inodes_from_dirent (xlator_t *this, inode_t *parent,
                                gf_dirent_t *entries);

void
gf_link_inode_from_dirent (xlator_t *this, inode_t *parent, gf_dirent_t *entry);
# 59 "./xlator.h" 2
# 1 "./stack.h" 1
# 60 "./xlator.h" 2
# 1 "./iobuf.h" 1
# 17 "./iobuf.h"
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





# 57 "/usr/include/sys/mman.h" 3 4
extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) __attribute__ ((__nothrow__ , __leaf__));
# 76 "/usr/include/sys/mman.h" 3 4
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
# 144 "/usr/include/sys/mman.h" 3 4
extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);


# 18 "./iobuf.h" 2
# 42 "./iobuf.h"
struct iobuf;




struct iobuf_arena;


struct iobuf_pool;

struct iobuf_init_config {
        size_t pagesize;
        int32_t num_pages;
};

struct iobuf {
        union {
                struct list_head list;
                struct {
                        struct iobuf *next;
                        struct iobuf *prev;
                };
        };
        struct iobuf_arena *iobuf_arena;

        gf_lock_t lock;
        int ref;

        void *ptr;

        void *free_ptr;

};


struct iobuf_arena {
        union {
                struct list_head list;
                struct {
                        struct iobuf_arena *next;
                        struct iobuf_arena *prev;
                };
        };

        struct list_head all_list;
        size_t page_size;
        size_t arena_size;


        size_t page_count;

        struct iobuf_pool *iobuf_pool;

        void *mem_base;
        struct iobuf *iobufs;

        int active_cnt;
        struct iobuf active;

        int passive_cnt;
        struct iobuf passive;

        uint64_t alloc_cnt;
        int max_active;
};


struct iobuf_pool {
        pthread_mutex_t mutex;
        size_t arena_size;

        size_t default_page_size;

        int arena_cnt;
        struct list_head all_arenas;
        struct list_head arenas[32];



        struct list_head filled[32];


        struct list_head purge[32];


        uint64_t request_misses;

        int rdma_device_count;
        struct list_head *mr_list[8];
        void *device[8];
        int (*rdma_registration)(void **, void*);
        int (*rdma_deregistration)(struct list_head**, struct iobuf_arena *);

};


struct iobuf_pool *iobuf_pool_new (void);
void iobuf_pool_destroy (struct iobuf_pool *iobuf_pool);
struct iobuf *iobuf_get (struct iobuf_pool *iobuf_pool);
void iobuf_unref (struct iobuf *iobuf);
struct iobuf *iobuf_ref (struct iobuf *iobuf);
void iobuf_pool_destroy (struct iobuf_pool *iobuf_pool);
void iobuf_to_iovec(struct iobuf *iob, struct iovec *iov);






struct iobref {
        gf_lock_t lock;
        int ref;
        struct iobuf **iobrefs;
 int alloced;
 int used;
};

struct iobref *iobref_new ();
struct iobref *iobref_ref (struct iobref *iobref);
void iobref_unref (struct iobref *iobref);
int iobref_add (struct iobref *iobref, struct iobuf *iobuf);
int iobref_merge (struct iobref *to, struct iobref *from);
void iobref_clear (struct iobref *iobref);

size_t iobuf_size (struct iobuf *iobuf);
size_t iobref_size (struct iobref *iobref);
void iobuf_stats_dump (struct iobuf_pool *iobuf_pool);

struct iobuf *
iobuf_get2 (struct iobuf_pool *iobuf_pool, size_t page_size);
# 61 "./xlator.h" 2


# 1 "./globals.h" 1
# 79 "./globals.h"
xlator_t **__glusterfs_this_location ();
xlator_t *glusterfs_this_get ();
int glusterfs_this_set (xlator_t *);


void *syncopctx_getctx ();
int syncopctx_setctx (void *ctx);


void *synctask_get ();
int synctask_set (void *);


char *glusterfs_uuid_buf_get ();

char *glusterfs_lkowner_buf_get ();


int glusterfs_globals_init (glusterfs_ctx_t *ctx);

extern const char *gf_fop_list[];


int gf_global_mem_acct_enable_get (void);
int gf_global_mem_acct_enable_set (int val);
# 64 "./xlator.h" 2

# 1 "./options.h" 1
# 21 "./options.h"
typedef enum {
        GF_OPTION_TYPE_ANY = 0,
        GF_OPTION_TYPE_STR,
        GF_OPTION_TYPE_INT,
        GF_OPTION_TYPE_SIZET,
        GF_OPTION_TYPE_PERCENT,
        GF_OPTION_TYPE_PERCENT_OR_SIZET,
        GF_OPTION_TYPE_BOOL,
        GF_OPTION_TYPE_XLATOR,
        GF_OPTION_TYPE_PATH,
        GF_OPTION_TYPE_TIME,
        GF_OPTION_TYPE_DOUBLE,
        GF_OPTION_TYPE_INTERNET_ADDRESS,
        GF_OPTION_TYPE_INTERNET_ADDRESS_LIST,
        GF_OPTION_TYPE_PRIORITY_LIST,
        GF_OPTION_TYPE_SIZE_LIST,
        GF_OPTION_TYPE_CLIENT_AUTH_ADDR,
        GF_OPTION_TYPE_MAX,
} volume_option_type_t;

typedef enum {
        GF_OPT_VALIDATE_BOTH = 0,
        GF_OPT_VALIDATE_MIN,
        GF_OPT_VALIDATE_MAX,
} opt_validate_type_t;





typedef struct volume_options {
        char *key[4];

        volume_option_type_t type;
        double min;
        double max;
        char *value[64];


        char *default_value;
        char *description;




        opt_validate_type_t validate;
} volume_option_t;


typedef struct vol_opt_list {
        struct list_head list;
        volume_option_t *given_opt;
} volume_opt_list_t;


int xlator_tree_reconfigure (xlator_t *old_xl, xlator_t *new_xl);
int xlator_validate_rec (xlator_t *xlator, char **op_errstr);
int graph_reconf_validateopt (glusterfs_graph_t *graph, char **op_errstr);
int xlator_option_info_list (volume_opt_list_t *list, char *key,
                             char **def_val, char **descr);




int xlator_options_validate_list (xlator_t *xl, dict_t *options,
                                  volume_opt_list_t *list, char **op_errstr);
int xlator_option_validate (xlator_t *xl, char *key, char *value,
                            volume_option_t *opt, char **op_errstr);
int xlator_options_validate (xlator_t *xl, dict_t *options, char **errstr);
volume_option_t *
xlator_volume_option_get (xlator_t *xl, const char *key);

volume_option_t *
xlator_volume_option_get_list (volume_opt_list_t *vol_list, const char *key);







int xlator_option_init_str (xlator_t *this, dict_t *options, char *key, char * *val_p);;
int xlator_option_init_uint64 (xlator_t *this, dict_t *options, char *key, uint64_t *val_p);;
int xlator_option_init_int64 (xlator_t *this, dict_t *options, char *key, int64_t *val_p);;
int xlator_option_init_uint32 (xlator_t *this, dict_t *options, char *key, uint32_t *val_p);;
int xlator_option_init_int32 (xlator_t *this, dict_t *options, char *key, int32_t *val_p);;
int xlator_option_init_size (xlator_t *this, dict_t *options, char *key, size_t *val_p);;
int xlator_option_init_size_uint64 (xlator_t *this, dict_t *options, char *key, uint64_t *val_p);;
int xlator_option_init_percent (xlator_t *this, dict_t *options, char *key, double *val_p);;
int xlator_option_init_percent_or_size (xlator_t *this, dict_t *options, char *key, double *val_p);;
int xlator_option_init_bool (xlator_t *this, dict_t *options, char *key, gf_boolean_t *val_p);;
int xlator_option_init_xlator (xlator_t *this, dict_t *options, char *key, xlator_t * *val_p);;
int xlator_option_init_path (xlator_t *this, dict_t *options, char *key, char * *val_p);;
int xlator_option_init_double (xlator_t *this, dict_t *options, char *key, double *val_p);;
int xlator_option_init_time (xlator_t *this, dict_t *options, char *key, uint32_t *val_p);;
# 188 "./options.h"
int xlator_option_reconf_str (xlator_t *this, dict_t *options, char *key, char * *val_p);;
int xlator_option_reconf_uint64 (xlator_t *this, dict_t *options, char *key, uint64_t *val_p);;
int xlator_option_reconf_int64 (xlator_t *this, dict_t *options, char *key, int64_t *val_p);;
int xlator_option_reconf_uint32 (xlator_t *this, dict_t *options, char *key, uint32_t *val_p);;
int xlator_option_reconf_int32 (xlator_t *this, dict_t *options, char *key, int32_t *val_p);;
int xlator_option_reconf_size (xlator_t *this, dict_t *options, char *key, size_t *val_p);;
int xlator_option_reconf_size_uint64 (xlator_t *this, dict_t *options, char *key, uint64_t *val_p);;
int xlator_option_reconf_percent (xlator_t *this, dict_t *options, char *key, double *val_p);;
int xlator_option_reconf_percent_or_size (xlator_t *this, dict_t *options, char *key, double *val_p);;
int xlator_option_reconf_bool (xlator_t *this, dict_t *options, char *key, gf_boolean_t *val_p);;
int xlator_option_reconf_xlator (xlator_t *this, dict_t *options, char *key, xlator_t * *val_p);;
int xlator_option_reconf_path (xlator_t *this, dict_t *options, char *key, char * *val_p);;
int xlator_option_reconf_double (xlator_t *this, dict_t *options, char *key, double *val_p);;
int xlator_option_reconf_time (xlator_t *this, dict_t *options, char *key, uint32_t *val_p);;
# 66 "./xlator.h" 2
# 1 "./client_t.h" 1
# 17 "./client_t.h"
struct client_ctx {
        void *ctx_key;
        void *ctx_value;
};

typedef struct _client_t {
        struct {

                gf_lock_t lock;
                unsigned short count;
                struct client_ctx *ctx;
        } scratch_ctx;
        struct {
                gf_lock_t lock;
                volatile int bind;
                volatile int count;
        } ref;
        xlator_t *bound_xl;
        xlator_t *this;
        int tbl_index;
        char *client_uid;
        struct {
                int flavour;
                size_t len;
                char *data;
                char *username;
                char *passwd;
        } auth;
} client_t;



struct client_table_entry {
        client_t *client;
        int next_free;
};
typedef struct client_table_entry cliententry_t;

struct clienttable {
        unsigned int max_clients;
        gf_lock_t lock;
        cliententry_t *cliententries;
        int first_free;
 client_t *local;
};
typedef struct clienttable clienttable_t;
# 74 "./client_t.h"
struct rpcsvc_auth_data;
# 93 "./client_t.h"
client_t *
gf_client_get (xlator_t *this, struct rpcsvc_auth_data *cred, char *client_uid);

void
gf_client_put (client_t *client, gf_boolean_t *detached);

clienttable_t *
gf_clienttable_alloc (void);

void
gf_client_clienttable_destroy (clienttable_t *clienttable);

client_t *
gf_client_ref (client_t *client);

void
gf_client_unref (client_t *client);

int
gf_client_dump_fdtable_to_dict (xlator_t *this, dict_t *dict);

int
gf_client_dump_fdtable (xlator_t *this);

int
gf_client_dump_inodes_to_dict (xlator_t *this, dict_t *dict);

int
gf_client_dump_inodes (xlator_t *this);

int
client_ctx_set (client_t *client, void *key, void *value);

int
client_ctx_get (client_t *client, void *key, void **value);

int
client_ctx_del (client_t *client, void *key, void **value);

void
client_ctx_dump (client_t *client, char *prefix);

int
gf_client_dump_fdtables_to_dict (xlator_t *this, dict_t *dict);

int
gf_client_dump_fdtables (xlator_t *this);

int
gf_client_dump_inodes_to_dict (xlator_t *this, dict_t *dict);

int
gf_client_dump_inodes (xlator_t *this);

int
gf_client_disconnect (client_t *client);
# 67 "./xlator.h" 2


struct _loc {
        const char *path;
        const char *name;
        inode_t *inode;
        inode_t *parent;






        uuid_t gfid;
        uuid_t pargfid;
};


typedef int32_t (*fop_getspec_cbk_t) (call_frame_t *frame,
                                      void *cookie,
                                      xlator_t *this,
                                      int32_t op_ret,
                                      int32_t op_errno,
                                      char *spec_data);

typedef int32_t (*fop_rchecksum_cbk_t) (call_frame_t *frame,
                                        void *cookie,
                                        xlator_t *this,
                                        int32_t op_ret,
                                        int32_t op_errno,
                                        uint32_t weak_checksum,
                                        uint8_t *strong_checksum,
                                        dict_t *xdata);


typedef int32_t (*fop_getspec_t) (call_frame_t *frame,
                                  xlator_t *this,
                                  const char *key,
                                  int32_t flag);

typedef int32_t (*fop_rchecksum_t) (call_frame_t *frame,
                                    xlator_t *this,
                                    fd_t *fd, off_t offset,
                                    int32_t len, dict_t *xdata);


typedef int32_t (*fop_lookup_cbk_t) (call_frame_t *frame,
                                     void *cookie,
                                     xlator_t *this,
                                     int32_t op_ret,
                                     int32_t op_errno,
                                     inode_t *inode,
                                     struct iatt *buf,
                                     dict_t *xdata,
                                     struct iatt *postparent);

typedef int32_t (*fop_stat_cbk_t) (call_frame_t *frame,
                                   void *cookie,
                                   xlator_t *this,
                                   int32_t op_ret,
                                   int32_t op_errno,
                                   struct iatt *buf, dict_t *xdata);

typedef int32_t (*fop_fstat_cbk_t) (call_frame_t *frame,
                                    void *cookie,
                                    xlator_t *this,
                                    int32_t op_ret,
                                    int32_t op_errno,
                                    struct iatt *buf, dict_t *xdata);

typedef int32_t (*fop_truncate_cbk_t) (call_frame_t *frame,
                                       void *cookie,
                                       xlator_t *this,
                                       int32_t op_ret,
                                       int32_t op_errno,
                                       struct iatt *prebuf,
                                       struct iatt *postbuf, dict_t *xdata);

typedef int32_t (*fop_ftruncate_cbk_t) (call_frame_t *frame,
                                        void *cookie,
                                        xlator_t *this,
                                        int32_t op_ret,
                                        int32_t op_errno,
                                        struct iatt *prebuf,
                                        struct iatt *postbuf, dict_t *xdata);

typedef int32_t (*fop_access_cbk_t) (call_frame_t *frame,
                                     void *cookie,
                                     xlator_t *this,
                                     int32_t op_ret,
                                     int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_readlink_cbk_t) (call_frame_t *frame,
                                       void *cookie,
                                       xlator_t *this,
                                       int32_t op_ret,
                                       int32_t op_errno,
                                       const char *path,
                                       struct iatt *buf, dict_t *xdata);

typedef int32_t (*fop_mknod_cbk_t) (call_frame_t *frame,
                                    void *cookie,
                                    xlator_t *this,
                                    int32_t op_ret,
                                    int32_t op_errno,
                                    inode_t *inode,
                                    struct iatt *buf,
                                    struct iatt *preparent,
                                    struct iatt *postparent, dict_t *xdata);

typedef int32_t (*fop_mkdir_cbk_t) (call_frame_t *frame,
                                    void *cookie,
                                    xlator_t *this,
                                    int32_t op_ret,
                                    int32_t op_errno,
                                    inode_t *inode,
                                    struct iatt *buf,
                                    struct iatt *preparent,
                                    struct iatt *postparent, dict_t *xdata);

typedef int32_t (*fop_unlink_cbk_t) (call_frame_t *frame,
                                     void *cookie,
                                     xlator_t *this,
                                     int32_t op_ret,
                                     int32_t op_errno,
                                     struct iatt *preparent,
                                     struct iatt *postparent, dict_t *xdata);

typedef int32_t (*fop_rmdir_cbk_t) (call_frame_t *frame,
                                    void *cookie,
                                    xlator_t *this,
                                    int32_t op_ret,
                                    int32_t op_errno,
                                    struct iatt *preparent,
                                    struct iatt *postparent, dict_t *xdata);

typedef int32_t (*fop_symlink_cbk_t) (call_frame_t *frame,
                                      void *cookie,
                                      xlator_t *this,
                                      int32_t op_ret,
                                      int32_t op_errno,
                                      inode_t *inode,
                                      struct iatt *buf,
                                      struct iatt *preparent,
                                      struct iatt *postparent, dict_t *xdata);

typedef int32_t (*fop_rename_cbk_t) (call_frame_t *frame,
                                     void *cookie,
                                     xlator_t *this,
                                     int32_t op_ret,
                                     int32_t op_errno,
                                     struct iatt *buf,
                                     struct iatt *preoldparent,
                                     struct iatt *postoldparent,
                                     struct iatt *prenewparent,
                                     struct iatt *postnewparent, dict_t *xdata);

typedef int32_t (*fop_link_cbk_t) (call_frame_t *frame,
                                   void *cookie,
                                   xlator_t *this,
                                   int32_t op_ret,
                                   int32_t op_errno,
                                   inode_t *inode,
                                   struct iatt *buf,
                                   struct iatt *preparent,
                                   struct iatt *postparent, dict_t *xdata);

typedef int32_t (*fop_create_cbk_t) (call_frame_t *frame,
                                     void *cookie,
                                     xlator_t *this,
                                     int32_t op_ret,
                                     int32_t op_errno,
                                     fd_t *fd,
                                     inode_t *inode,
                                     struct iatt *buf,
                                     struct iatt *preparent,
                                     struct iatt *postparent, dict_t *xdata);

typedef int32_t (*fop_open_cbk_t) (call_frame_t *frame,
                                   void *cookie,
                                   xlator_t *this,
                                   int32_t op_ret,
                                   int32_t op_errno,
                                   fd_t *fd, dict_t *xdata);

typedef int32_t (*fop_readv_cbk_t) (call_frame_t *frame,
                                    void *cookie,
                                    xlator_t *this,
                                    int32_t op_ret,
                                    int32_t op_errno,
                                    struct iovec *vector,
                                    int32_t count,
                                    struct iatt *stbuf,
                                    struct iobref *iobref, dict_t *xdata);

typedef int32_t (*fop_writev_cbk_t) (call_frame_t *frame,
                                     void *cookie,
                                     xlator_t *this,
                                     int32_t op_ret,
                                     int32_t op_errno,
                                     struct iatt *prebuf,
                                     struct iatt *postbuf, dict_t *xdata);

typedef int32_t (*fop_flush_cbk_t) (call_frame_t *frame,
                                    void *cookie,
                                    xlator_t *this,
                                    int32_t op_ret,
                                    int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_fsync_cbk_t) (call_frame_t *frame,
                                    void *cookie,
                                    xlator_t *this,
                                    int32_t op_ret,
                                    int32_t op_errno,
                                    struct iatt *prebuf,
                                    struct iatt *postbuf, dict_t *xdata);

typedef int32_t (*fop_opendir_cbk_t) (call_frame_t *frame,
                                      void *cookie,
                                      xlator_t *this,
                                      int32_t op_ret,
                                      int32_t op_errno,
                                      fd_t *fd, dict_t *xdata);

typedef int32_t (*fop_fsyncdir_cbk_t) (call_frame_t *frame,
                                       void *cookie,
                                       xlator_t *this,
                                       int32_t op_ret,
                                       int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_statfs_cbk_t) (call_frame_t *frame,
                                     void *cookie,
                                     xlator_t *this,
                                     int32_t op_ret,
                                     int32_t op_errno,
                                     struct statvfs *buf, dict_t *xdata);

typedef int32_t (*fop_setxattr_cbk_t) (call_frame_t *frame,
                                       void *cookie,
                                       xlator_t *this,
                                       int32_t op_ret,
                                       int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_getxattr_cbk_t) (call_frame_t *frame,
                                       void *cookie,
                                       xlator_t *this,
                                       int32_t op_ret,
                                       int32_t op_errno,
                                       dict_t *dict, dict_t *xdata);

typedef int32_t (*fop_fsetxattr_cbk_t) (call_frame_t *frame,
                                        void *cookie,
                                        xlator_t *this,
                                        int32_t op_ret,
                                        int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_fgetxattr_cbk_t) (call_frame_t *frame,
                                        void *cookie,
                                        xlator_t *this,
                                        int32_t op_ret,
                                        int32_t op_errno,
                                        dict_t *dict, dict_t *xdata);

typedef int32_t (*fop_removexattr_cbk_t) (call_frame_t *frame,
                                          void *cookie,
                                          xlator_t *this,
                                          int32_t op_ret,
                                          int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_fremovexattr_cbk_t) (call_frame_t *frame,
                                           void *cookie,
                                           xlator_t *this,
                                           int32_t op_ret,
                                           int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_lk_cbk_t) (call_frame_t *frame,
                                 void *cookie,
                                 xlator_t *this,
                                 int32_t op_ret,
                                 int32_t op_errno,
                                 struct gf_flock *flock, dict_t *xdata);

typedef int32_t (*fop_inodelk_cbk_t) (call_frame_t *frame,
                                      void *cookie,
                                      xlator_t *this,
                                      int32_t op_ret,
                                      int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_finodelk_cbk_t) (call_frame_t *frame,
                                       void *cookie,
                                       xlator_t *this,
                                       int32_t op_ret,
                                       int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_entrylk_cbk_t) (call_frame_t *frame,
                                      void *cookie,
                                      xlator_t *this,
                                      int32_t op_ret,
                                      int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_fentrylk_cbk_t) (call_frame_t *frame,
                                       void *cookie,
                                       xlator_t *this,
                                       int32_t op_ret,
                                       int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_readdir_cbk_t) (call_frame_t *frame,
                                      void *cookie,
                                      xlator_t *this,
                                      int32_t op_ret,
                                      int32_t op_errno,
                                      gf_dirent_t *entries, dict_t *xdata);

typedef int32_t (*fop_readdirp_cbk_t) (call_frame_t *frame,
                                       void *cookie,
                                       xlator_t *this,
                                       int32_t op_ret,
                                       int32_t op_errno,
                                       gf_dirent_t *entries, dict_t *xdata);

typedef int32_t (*fop_xattrop_cbk_t) (call_frame_t *frame,
                                      void *cookie,
                                      xlator_t *this,
                                      int32_t op_ret,
                                      int32_t op_errno,
                                      dict_t *xattr, dict_t *xdata);

typedef int32_t (*fop_fxattrop_cbk_t) (call_frame_t *frame,
                                       void *cookie,
                                       xlator_t *this,
                                       int32_t op_ret,
                                       int32_t op_errno,
                                       dict_t *xattr, dict_t *xdata);


typedef int32_t (*fop_setattr_cbk_t) (call_frame_t *frame,
                                      void *cookie,
                                      xlator_t *this,
                                      int32_t op_ret,
                                      int32_t op_errno,
                                      struct iatt *preop_stbuf,
                                      struct iatt *postop_stbuf, dict_t *xdata);

typedef int32_t (*fop_fsetattr_cbk_t) (call_frame_t *frame,
                                       void *cookie,
                                       xlator_t *this,
                                       int32_t op_ret,
                                       int32_t op_errno,
                                       struct iatt *preop_stbuf,
                                       struct iatt *postop_stbuf, dict_t *xdata);

typedef int32_t (*fop_fallocate_cbk_t) (call_frame_t *frame,
                                        void *cookie,
                                        xlator_t *this,
                                        int32_t op_ret,
                                        int32_t op_errno,
                                        struct iatt *preop_stbuf,
                                        struct iatt *postop_stbuf, dict_t *xdata);

typedef int32_t (*fop_discard_cbk_t) (call_frame_t *frame,
                                      void *cookie,
                                      xlator_t *this,
                                      int32_t op_ret,
                                      int32_t op_errno,
                                      struct iatt *preop_stbuf,
                                      struct iatt *postop_stbuf, dict_t *xdata);

typedef int32_t (*fop_zerofill_cbk_t) (call_frame_t *frame,
                                      void *cookie,
                                      xlator_t *this,
                                      int32_t op_ret,
                                      int32_t op_errno,
                                      struct iatt *preop_stbuf,
                                      struct iatt *postop_stbuf, dict_t *xdata);

typedef int32_t (*fop_ipc_cbk_t) (call_frame_t *frame, void *cookie,
                                 xlator_t *this, int32_t op_ret,
                                 int32_t op_errno, dict_t *xdata);

typedef int32_t (*fop_seek_cbk_t) (call_frame_t *frame, void *cookie,
                                   xlator_t *this, int32_t op_ret,
                                   int32_t op_errno, off_t offset,
                                   dict_t *xdata);

typedef int32_t (*fop_lookup_t) (call_frame_t *frame,
                                 xlator_t *this,
                                 loc_t *loc,
                                 dict_t *xdata);

typedef int32_t (*fop_stat_t) (call_frame_t *frame,
                               xlator_t *this,
                               loc_t *loc, dict_t *xdata);

typedef int32_t (*fop_fstat_t) (call_frame_t *frame,
                                xlator_t *this,
                                fd_t *fd, dict_t *xdata);

typedef int32_t (*fop_truncate_t) (call_frame_t *frame,
                                   xlator_t *this,
                                   loc_t *loc,
                                   off_t offset, dict_t *xdata);

typedef int32_t (*fop_ftruncate_t) (call_frame_t *frame,
                                    xlator_t *this,
                                    fd_t *fd,
                                    off_t offset, dict_t *xdata);

typedef int32_t (*fop_access_t) (call_frame_t *frame,
                                 xlator_t *this,
                                 loc_t *loc,
                                 int32_t mask, dict_t *xdata);

typedef int32_t (*fop_readlink_t) (call_frame_t *frame,
                                   xlator_t *this,
                                   loc_t *loc,
                                   size_t size, dict_t *xdata);

typedef int32_t (*fop_mknod_t) (call_frame_t *frame, xlator_t *this,
                                loc_t *loc, mode_t mode, dev_t rdev,
                                mode_t umask, dict_t *xdata);

typedef int32_t (*fop_mkdir_t) (call_frame_t *frame, xlator_t *this, loc_t *loc,
                                mode_t mode, mode_t umask, dict_t *xdata);

typedef int32_t (*fop_unlink_t) (call_frame_t *frame, xlator_t *this,
                                 loc_t *loc, int xflags, dict_t *xdata);

typedef int32_t (*fop_rmdir_t) (call_frame_t *frame, xlator_t *this,
                                loc_t *loc, int xflags, dict_t *xdata);

typedef int32_t (*fop_symlink_t) (call_frame_t *frame, xlator_t *this,
                                  const char *linkname, loc_t *loc,
                                  mode_t umask, dict_t *xdata);

typedef int32_t (*fop_rename_t) (call_frame_t *frame,
                                 xlator_t *this,
                                 loc_t *oldloc,
                                 loc_t *newloc, dict_t *xdata);

typedef int32_t (*fop_link_t) (call_frame_t *frame,
                               xlator_t *this,
                               loc_t *oldloc,
                               loc_t *newloc, dict_t *xdata);

typedef int32_t (*fop_create_t) (call_frame_t *frame, xlator_t *this,
                                 loc_t *loc, int32_t flags, mode_t mode,
                                 mode_t umask, fd_t *fd, dict_t *xdata);
# 524 "./xlator.h"
typedef int32_t (*fop_open_t) (call_frame_t *frame, xlator_t *this,
                               loc_t *loc, int32_t flags,
                               fd_t *fd, dict_t *xdata);

typedef int32_t (*fop_readv_t) (call_frame_t *frame,
                                xlator_t *this,
                                fd_t *fd,
                                size_t size,
                                off_t offset,
                                uint32_t flags, dict_t *xdata);

typedef int32_t (*fop_writev_t) (call_frame_t *frame,
                                 xlator_t *this,
                                 fd_t *fd,
                                 struct iovec *vector,
                                 int32_t count,
                                 off_t offset,
                                 uint32_t flags,
                                 struct iobref *iobref, dict_t *xdata);

typedef int32_t (*fop_flush_t) (call_frame_t *frame,
                                xlator_t *this,
                                fd_t *fd, dict_t *xdata);

typedef int32_t (*fop_fsync_t) (call_frame_t *frame,
                                xlator_t *this,
                                fd_t *fd,
                                int32_t datasync, dict_t *xdata);

typedef int32_t (*fop_opendir_t) (call_frame_t *frame,
                                  xlator_t *this,
                                  loc_t *loc,
                                  fd_t *fd, dict_t *xdata);

typedef int32_t (*fop_fsyncdir_t) (call_frame_t *frame,
                                   xlator_t *this,
                                   fd_t *fd,
                                   int32_t datasync, dict_t *xdata);

typedef int32_t (*fop_statfs_t) (call_frame_t *frame,
                                 xlator_t *this,
                                 loc_t *loc, dict_t *xdata);

typedef int32_t (*fop_setxattr_t) (call_frame_t *frame,
                                   xlator_t *this,
                                   loc_t *loc,
                                   dict_t *dict,
                                   int32_t flags, dict_t *xdata);

typedef int32_t (*fop_getxattr_t) (call_frame_t *frame,
                                   xlator_t *this,
                                   loc_t *loc,
                                   const char *name, dict_t *xdata);

typedef int32_t (*fop_fsetxattr_t) (call_frame_t *frame,
                                    xlator_t *this,
                                    fd_t *fd,
                                    dict_t *dict,
                                    int32_t flags, dict_t *xdata);

typedef int32_t (*fop_fgetxattr_t) (call_frame_t *frame,
                                    xlator_t *this,
                                    fd_t *fd,
                                    const char *name, dict_t *xdata);

typedef int32_t (*fop_removexattr_t) (call_frame_t *frame,
                                      xlator_t *this,
                                      loc_t *loc,
                                      const char *name, dict_t *xdata);

typedef int32_t (*fop_fremovexattr_t) (call_frame_t *frame,
                                       xlator_t *this,
                                       fd_t *fd,
                                       const char *name, dict_t *xdata);

typedef int32_t (*fop_lk_t) (call_frame_t *frame,
                             xlator_t *this,
                             fd_t *fd,
                             int32_t cmd,
                             struct gf_flock *flock, dict_t *xdata);

typedef int32_t (*fop_inodelk_t) (call_frame_t *frame,
                                  xlator_t *this,
                                  const char *volume,
                                  loc_t *loc,
                                  int32_t cmd,
                                  struct gf_flock *flock, dict_t *xdata);

typedef int32_t (*fop_finodelk_t) (call_frame_t *frame,
                                   xlator_t *this,
                                   const char *volume,
                                   fd_t *fd,
                                   int32_t cmd,
                                   struct gf_flock *flock, dict_t *xdata);

typedef int32_t (*fop_entrylk_t) (call_frame_t *frame,
                                  xlator_t *this,
                                  const char *volume, loc_t *loc,
                                  const char *__xpg_basename, entrylk_cmd cmd,
                                  entrylk_type type, dict_t *xdata);

typedef int32_t (*fop_fentrylk_t) (call_frame_t *frame,
                                   xlator_t *this,
                                   const char *volume, fd_t *fd,
                                   const char *__xpg_basename, entrylk_cmd cmd,
                                   entrylk_type type, dict_t *xdata);

typedef int32_t (*fop_readdir_t) (call_frame_t *frame,
                                  xlator_t *this,
                                  fd_t *fd,
                                  size_t size,
                                  off_t offset, dict_t *xdata);

typedef int32_t (*fop_readdirp_t) (call_frame_t *frame,
                                   xlator_t *this,
                                   fd_t *fd,
                                   size_t size,
                                   off_t offset,
                                   dict_t *xdata);

typedef int32_t (*fop_xattrop_t) (call_frame_t *frame,
                                  xlator_t *this,
                                  loc_t *loc,
                                  gf_xattrop_flags_t optype,
                                  dict_t *xattr, dict_t *xdata);

typedef int32_t (*fop_fxattrop_t) (call_frame_t *frame,
                                   xlator_t *this,
                                   fd_t *fd,
                                   gf_xattrop_flags_t optype,
                                   dict_t *xattr, dict_t *xdata);

typedef int32_t (*fop_setattr_t) (call_frame_t *frame,
                                  xlator_t *this,
                                  loc_t *loc,
                                  struct iatt *stbuf,
                                  int32_t valid, dict_t *xdata);

typedef int32_t (*fop_fsetattr_t) (call_frame_t *frame,
                                   xlator_t *this,
                                   fd_t *fd,
                                   struct iatt *stbuf,
                                   int32_t valid, dict_t *xdata);

typedef int32_t (*fop_fallocate_t) (call_frame_t *frame,
                                    xlator_t *this,
                                    fd_t *fd,
        int32_t keep_size,
        off_t offset,
        size_t len,
                                    dict_t *xdata);

typedef int32_t (*fop_discard_t) (call_frame_t *frame,
                                  xlator_t *this,
                                  fd_t *fd,
      off_t offset,
      size_t len,
                                  dict_t *xdata);

typedef int32_t (*fop_zerofill_t) (call_frame_t *frame,
                                  xlator_t *this,
                                  fd_t *fd,
                                  off_t offset,
                                  off_t len,
                                  dict_t *xdata);

typedef int32_t (*fop_ipc_t) (call_frame_t *frame, xlator_t *this, int32_t op,
                              dict_t *xdata);

typedef int32_t (*fop_seek_t) (call_frame_t *frame, xlator_t *this, fd_t *fd,
                               off_t offset, gf_seek_what_t what,
                               dict_t *xdata);

struct xlator_fops {
        fop_lookup_t lookup;
        fop_stat_t stat;
        fop_fstat_t fstat;
        fop_truncate_t truncate;
        fop_ftruncate_t ftruncate;
        fop_access_t access;
        fop_readlink_t readlink;
        fop_mknod_t mknod;
        fop_mkdir_t mkdir;
        fop_unlink_t unlink;
        fop_rmdir_t rmdir;
        fop_symlink_t symlink;
        fop_rename_t rename;
        fop_link_t link;
        fop_create_t create;
        fop_open_t open;
        fop_readv_t readv;
        fop_writev_t writev;
        fop_flush_t flush;
        fop_fsync_t fsync;
        fop_opendir_t opendir;
        fop_readdir_t readdir;
        fop_readdirp_t readdirp;
        fop_fsyncdir_t fsyncdir;
        fop_statfs_t statfs;
        fop_setxattr_t setxattr;
        fop_getxattr_t getxattr;
        fop_fsetxattr_t fsetxattr;
        fop_fgetxattr_t fgetxattr;
        fop_removexattr_t removexattr;
        fop_fremovexattr_t fremovexattr;
        fop_lk_t lk;
        fop_inodelk_t inodelk;
        fop_finodelk_t finodelk;
        fop_entrylk_t entrylk;
        fop_fentrylk_t fentrylk;
        fop_rchecksum_t rchecksum;
        fop_xattrop_t xattrop;
        fop_fxattrop_t fxattrop;
        fop_setattr_t setattr;
        fop_fsetattr_t fsetattr;
        fop_getspec_t getspec;
 fop_fallocate_t fallocate;
 fop_discard_t discard;
        fop_zerofill_t zerofill;
        fop_ipc_t ipc;
        fop_seek_t seek;


        fop_lookup_cbk_t lookup_cbk;
        fop_stat_cbk_t stat_cbk;
        fop_fstat_cbk_t fstat_cbk;
        fop_truncate_cbk_t truncate_cbk;
        fop_ftruncate_cbk_t ftruncate_cbk;
        fop_access_cbk_t access_cbk;
        fop_readlink_cbk_t readlink_cbk;
        fop_mknod_cbk_t mknod_cbk;
        fop_mkdir_cbk_t mkdir_cbk;
        fop_unlink_cbk_t unlink_cbk;
        fop_rmdir_cbk_t rmdir_cbk;
        fop_symlink_cbk_t symlink_cbk;
        fop_rename_cbk_t rename_cbk;
        fop_link_cbk_t link_cbk;
        fop_create_cbk_t create_cbk;
        fop_open_cbk_t open_cbk;
        fop_readv_cbk_t readv_cbk;
        fop_writev_cbk_t writev_cbk;
        fop_flush_cbk_t flush_cbk;
        fop_fsync_cbk_t fsync_cbk;
        fop_opendir_cbk_t opendir_cbk;
        fop_readdir_cbk_t readdir_cbk;
        fop_readdirp_cbk_t readdirp_cbk;
        fop_fsyncdir_cbk_t fsyncdir_cbk;
        fop_statfs_cbk_t statfs_cbk;
        fop_setxattr_cbk_t setxattr_cbk;
        fop_getxattr_cbk_t getxattr_cbk;
        fop_fsetxattr_cbk_t fsetxattr_cbk;
        fop_fgetxattr_cbk_t fgetxattr_cbk;
        fop_removexattr_cbk_t removexattr_cbk;
        fop_fremovexattr_cbk_t fremovexattr_cbk;
        fop_lk_cbk_t lk_cbk;
        fop_inodelk_cbk_t inodelk_cbk;
        fop_finodelk_cbk_t finodelk_cbk;
        fop_entrylk_cbk_t entrylk_cbk;
        fop_fentrylk_cbk_t fentrylk_cbk;
        fop_rchecksum_cbk_t rchecksum_cbk;
        fop_xattrop_cbk_t xattrop_cbk;
        fop_fxattrop_cbk_t fxattrop_cbk;
        fop_setattr_cbk_t setattr_cbk;
        fop_fsetattr_cbk_t fsetattr_cbk;
        fop_getspec_cbk_t getspec_cbk;
 fop_fallocate_cbk_t fallocate_cbk;
 fop_discard_cbk_t discard_cbk;
        fop_zerofill_cbk_t zerofill_cbk;
        fop_ipc_cbk_t ipc_cbk;
        fop_seek_cbk_t seek_cbk;
};

typedef int32_t (*cbk_forget_t) (xlator_t *this,
                                 inode_t *inode);

typedef int32_t (*cbk_release_t) (xlator_t *this,
                                  fd_t *fd);

typedef int32_t (*cbk_invalidate_t)(xlator_t *this, inode_t *inode);

typedef int32_t (*cbk_client_t)(xlator_t *this, client_t *client);

typedef void (*cbk_ictxmerge_t) (xlator_t *this, fd_t *fd,
                                 inode_t *inode, inode_t *linked_inode);

struct xlator_cbks {
        cbk_forget_t forget;
        cbk_release_t release;
        cbk_release_t releasedir;
 cbk_invalidate_t invalidate;
        cbk_client_t client_destroy;
        cbk_client_t client_disconnect;
        cbk_ictxmerge_t ictxmerge;
};

typedef int32_t (*dumpop_priv_t) (xlator_t *this);

typedef int32_t (*dumpop_inode_t) (xlator_t *this);

typedef int32_t (*dumpop_fd_t) (xlator_t *this);

typedef int32_t (*dumpop_inodectx_t) (xlator_t *this, inode_t *ino);

typedef int32_t (*dumpop_fdctx_t) (xlator_t *this, fd_t *fd);

typedef int32_t (*dumpop_priv_to_dict_t) (xlator_t *this, dict_t *dict);

typedef int32_t (*dumpop_inode_to_dict_t) (xlator_t *this, dict_t *dict);

typedef int32_t (*dumpop_fd_to_dict_t) (xlator_t *this, dict_t *dict);

typedef int32_t (*dumpop_inodectx_to_dict_t) (xlator_t *this, inode_t *ino,
                                              dict_t *dict);

typedef int32_t (*dumpop_fdctx_to_dict_t) (xlator_t *this, fd_t *fd,
                                           dict_t *dict);

typedef int32_t (*dumpop_eh_t) (xlator_t *this);

struct xlator_dumpops {
        dumpop_priv_t priv;
        dumpop_inode_t inode;
        dumpop_fd_t fd;
        dumpop_inodectx_t inodectx;
        dumpop_fdctx_t fdctx;
        dumpop_priv_to_dict_t priv_to_dict;
        dumpop_inode_to_dict_t inode_to_dict;
        dumpop_fd_to_dict_t fd_to_dict;
        dumpop_inodectx_to_dict_t inodectx_to_dict;
        dumpop_fdctx_to_dict_t fdctx_to_dict;
        dumpop_eh_t history;
};

typedef struct xlator_list {
        xlator_t *xlator;
        struct xlator_list *next;
} xlator_list_t;


struct _xlator {

        char *name;
        char *type;
        char *instance_name;
        xlator_t *next;
        xlator_t *prev;
        xlator_list_t *parents;
        xlator_list_t *children;
        dict_t *options;


        void *dlhandle;
        struct xlator_fops *fops;
        struct xlator_cbks *cbks;
        struct xlator_dumpops *dumpops;
        struct list_head volume_options;

        void (*fini) (xlator_t *this);
        int32_t (*init) (xlator_t *this);
        int32_t (*reconfigure) (xlator_t *this, dict_t *options);
 int32_t (*mem_acct_init) (xlator_t *this);
 event_notify_fn_t notify;

        gf_loglevel_t loglevel;


        fop_latency_t latencies[GF_FOP_MAXVALUE];


        eh_t *history;
        glusterfs_ctx_t *ctx;
        glusterfs_graph_t *graph;
        inode_table_t *itable;
        char init_succeeded;
        void *private;
        struct mem_acct *mem_acct;
        uint64_t winds;
        char switched;


        struct mem_pool *local_pool;
        gf_boolean_t is_autoloaded;
};

typedef struct {
        int32_t (*init) (xlator_t *this);
        void (*fini) (xlator_t *this);
        int32_t (*reconfigure) (xlator_t *this,
                                                dict_t *options);
        event_notify_fn_t notify;
} class_methods_t;
# 930 "./xlator.h"
int32_t xlator_set_type_virtual (xlator_t *xl, const char *type);

int32_t xlator_set_type (xlator_t *xl, const char *type);

int32_t xlator_dynload (xlator_t *xl);

xlator_t *file_to_xlator_tree (glusterfs_ctx_t *ctx,
                               FILE *fp);

int xlator_notify (xlator_t *this, int32_t event, void *data, ...);
int xlator_init (xlator_t *this);
int xlator_destroy (xlator_t *xl);

int32_t xlator_tree_init (xlator_t *xl);
int32_t xlator_tree_free_members (xlator_t *xl);
int32_t xlator_tree_free_memacct (xlator_t *xl);

void xlator_tree_fini (xlator_t *xl);

void xlator_foreach (xlator_t *this,
                     void (*fn) (xlator_t *each,
                                 void *data),
                     void *data);

void xlator_foreach_depth_first (xlator_t *this,
     void (*fn) (xlator_t *each,
          void *data),
     void *data);

xlator_t *xlator_search_by_name (xlator_t *any, const char *name);

void
xlator_set_inode_lru_limit (xlator_t *this, void *data);

void inode_destroy_notify (inode_t *inode, const char *xlname);

int loc_copy (loc_t *dst, loc_t *src);
int loc_copy_overload_parent (loc_t *dst,
                              loc_t *src, inode_t *parent);

void loc_wipe (loc_t *loc);
int loc_path (loc_t *loc, const char *bname);
void loc_gfid (loc_t *loc, uuid_t gfid);
char* loc_gfid_utoa (loc_t *loc);
gf_boolean_t loc_is_root (loc_t *loc);
int32_t loc_build_child (loc_t *child, loc_t *parent, char *name);
int xlator_mem_acct_init (xlator_t *xl, int num_types);
int is_gf_log_command (xlator_t *trans, const char *name, char *value);
int glusterd_check_log_level (const char *value);
int xlator_volopt_dynload (char *xlator_type, void **dl_handle,
                           volume_opt_list_t *vol_opt_handle);
enum gf_hdsk_event_notify_op {
        GF_EN_DEFRAG_STATUS,
        GF_EN_MAX,
};
gf_boolean_t
is_graph_topology_equal (glusterfs_graph_t *graph1, glusterfs_graph_t *graph2);
int
glusterfs_volfile_reconfigure (int oldvollen, FILE *newvolfile_fp,
                               glusterfs_ctx_t *ctx, const char *oldvolfile);

int
loc_touchup (loc_t *loc, const char *name);

int
glusterfs_leaf_position(xlator_t *tgt);

int
glusterfs_reachable_leaves(xlator_t *base, dict_t *leaves);

int
xlator_subvolume_count (xlator_t *this);
# 29 "./stack.h" 2
# 39 "./stack.h"
typedef int32_t (*ret_fn_t) (call_frame_t *frame,
                             call_frame_t *prev_frame,
                             xlator_t *this,
                             int32_t op_ret,
                             int32_t op_errno,
                             ...);

struct call_pool {
        union {
                struct list_head all_frames;
                struct {
                        call_stack_t *next_call;
                        call_stack_t *prev_call;
                } all_stacks;
        };
        int64_t cnt;
        gf_lock_t lock;
        struct mem_pool *frame_mem_pool;
        struct mem_pool *stack_mem_pool;
};

struct _call_frame_t {
        call_stack_t *root;
        call_frame_t *parent;
        struct list_head frames;
        void *local;
        xlator_t *this;
        ret_fn_t ret;
        int32_t ref_count;
        gf_lock_t lock;
        void *cookie;
        gf_boolean_t complete;

        glusterfs_fop_t op;
        struct timeval begin;
        struct timeval end;
        const char *wind_from;
        const char *wind_to;
        const char *unwind_from;
        const char *unwind_to;
};



struct _call_stack_t {
        union {
                struct list_head all_frames;
                struct {
                        call_stack_t *next_call;
                        call_stack_t *prev_call;
                };
        };
        call_pool_t *pool;
        gf_lock_t stack_lock;
        client_t *client;
        uint64_t unique;
        void *state;
        uid_t uid;
        gid_t gid;
        pid_t pid;
        char identifier[UNIX_PATH_MAX];
        uint16_t ngrps;
        uint32_t groups_small[128];
 uint32_t *groups_large;
 uint32_t *groups;
        gf_lkowner_t lk_owner;
        glusterfs_ctx_t *ctx;

        struct list_head myframes;


        int32_t op;
        int8_t type;
        struct timeval tv;
};
# 126 "./stack.h"
struct xlator_fops;

void
gf_latency_begin (call_frame_t *frame, void *fn);

void
gf_latency_end (call_frame_t *frame);

static inline void
FRAME_DESTROY (call_frame_t *frame)
{
        void *local = ((void *)0);

        list_del_init (&frame->frames);
        if (frame->local) {
                local = frame->local;
                frame->local = ((void *)0);

        }

        pthread_mutex_destroy (&frame->lock);
        mem_put (frame);

        if (local)
                mem_put (local);
}


static inline void
STACK_DESTROY (call_stack_t *stack)
{
        void *local = ((void *)0);
        call_frame_t *frame = ((void *)0);
        call_frame_t *tmp = ((void *)0);

        pthread_mutex_lock (&stack->pool->lock);
        {
                list_del_init (&stack->all_frames);
                stack->pool->cnt--;
        }
        pthread_mutex_unlock (&stack->pool->lock);

        pthread_mutex_destroy (&stack->stack_lock);

        for (frame = ((typeof(*frame) *)((char *)((&stack->myframes)->next)-(unsigned long)(&((typeof(*frame) *)0)->frames))), tmp = ((typeof(*frame) *)((char *)(frame->frames.next)-(unsigned long)(&((typeof(*frame) *)0)->frames))); &frame->frames != (&stack->myframes); frame = tmp, tmp = ((typeof(*tmp) *)((char *)(tmp->frames.next)-(unsigned long)(&((typeof(*tmp) *)0)->frames)))) {
                FRAME_DESTROY (frame);
        }

 __gf_free (stack->groups_large);

        mem_put (stack);

        if (local)
                mem_put (local);
}

static inline void
STACK_RESET (call_stack_t *stack)
{
        void *local = ((void *)0);
        call_frame_t *frame = ((void *)0);
        call_frame_t *tmp = ((void *)0);
        call_frame_t *last = ((void *)0);
        struct list_head toreset = {0};

        do { (&toreset)->next = (&toreset)->prev = &toreset; } while (0);





        pthread_mutex_lock (&stack->pool->lock);
        {
                last = ((call_frame_t *)((char *)((&stack->myframes)->prev)-(unsigned long)(&((call_frame_t *)0)->frames)));
                list_del_init (&last->frames);
                list_splice_init (&stack->myframes, &toreset);
                list_add (&last->frames, &stack->myframes);
        }
        pthread_mutex_unlock (&stack->pool->lock);

        for (frame = ((typeof(*frame) *)((char *)((&toreset)->next)-(unsigned long)(&((typeof(*frame) *)0)->frames))), tmp = ((typeof(*frame) *)((char *)(frame->frames.next)-(unsigned long)(&((typeof(*frame) *)0)->frames))); &frame->frames != (&toreset); frame = tmp, tmp = ((typeof(*tmp) *)((char *)(tmp->frames.next)-(unsigned long)(&((typeof(*tmp) *)0)->frames)))) {
                FRAME_DESTROY (frame);
        }

        if (local)
                mem_put (local);
}
# 378 "./stack.h"
static inline int
call_stack_alloc_groups (call_stack_t *stack, int ngrps)
{
 if (ngrps <= 128) {
  stack->groups = stack->groups_small;
 } else {
  stack->groups_large = __gf_calloc (sizeof (gid_t), ngrps, gf_common_mt_groups_t, "gf_common_mt_groups_t")
                             ;
  if (!stack->groups_large)
   return -1;
  stack->groups = stack->groups_large;
 }

 stack->ngrps = ngrps;

 return 0;
}

static inline
int call_frames_count (call_stack_t *call_stack)
{
        call_frame_t *pos;
        int32_t count = 0;

        if (!call_stack)
                return count;

        for (pos = ((typeof(*pos) *)((char *)((&call_stack->myframes)->next)-(unsigned long)(&((typeof(*pos) *)0)->frames))); &pos->frames != (&call_stack->myframes); pos = ((typeof(*pos) *)((char *)(pos->frames.next)-(unsigned long)(&((typeof(*pos) *)0)->frames))))
                count++;

        return count;
}

static inline call_frame_t *
copy_frame (call_frame_t *frame)
{
        call_stack_t *newstack = ((void *)0);
        call_stack_t *oldstack = ((void *)0);
        call_frame_t *newframe = ((void *)0);

        if (!frame) {
                return ((void *)0);
        }

        newstack = mem_get0 (frame->root->pool->stack_mem_pool);
        if (newstack == ((void *)0)) {
                return ((void *)0);
        }

        do { (&newstack->myframes)->next = (&newstack->myframes)->prev = &newstack->myframes; } while (0);

        newframe = mem_get0 (frame->root->pool->frame_mem_pool);
        if (!newframe) {
                mem_put (newstack);
                return ((void *)0);
        }

        newframe->this = frame->this;
        newframe->root = newstack;
        do { (&newframe->frames)->next = (&newframe->frames)->prev = &newframe->frames; } while (0);
        list_add (&newframe->frames, &newstack->myframes);

        oldstack = frame->root;

        newstack->uid = oldstack->uid;
        newstack->gid = oldstack->gid;
        newstack->pid = oldstack->pid;
        newstack->ngrps = oldstack->ngrps;
        newstack->op = oldstack->op;
        newstack->type = oldstack->type;
 if (call_stack_alloc_groups (newstack, oldstack->ngrps) != 0) {
  mem_put (newstack);
  return ((void *)0);
 }
        memcpy (newstack->groups, oldstack->groups,
                sizeof (gid_t) * oldstack->ngrps);
        newstack->unique = oldstack->unique;
        newstack->pool = oldstack->pool;
        newstack->lk_owner = oldstack->lk_owner;
        newstack->ctx = oldstack->ctx;

        if (newstack->ctx->measure_latency) {
                if (gettimeofday (&newstack->tv, ((void *)0)) == -1)
                        do { _gf_msg ("stack",

 "./stack.h"
# 461 "./stack.h"
                        , __FUNCTION__,

 463
# 461 "./stack.h"
                        , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 175), "gettimeofday () failed."); } while (0)

                                                          ;
                memcpy (&newframe->begin, &newstack->tv,
                        sizeof (newstack->tv));
        }

        pthread_mutex_init (&newframe->lock, 0);
        pthread_mutex_init (&newstack->stack_lock, 0);

        pthread_mutex_lock (&oldstack->pool->lock);
        {
                list_add (&newstack->all_frames, &oldstack->all_frames);
                newstack->pool->cnt++;
        }
        pthread_mutex_unlock (&oldstack->pool->lock);

        return newframe;
}

void gf_proc_dump_pending_frames(call_pool_t *call_pool);
void gf_proc_dump_pending_frames_to_dict (call_pool_t *call_pool,
                                          dict_t *dict);
call_frame_t *create_frame (xlator_t *xl, call_pool_t *pool);
gf_boolean_t __is_fuse_call (call_frame_t *frame);
# 45 "./common-utils.c" 2


# 1 "./syscall.h" 1
# 53 "./syscall.h"
int
sys_lstat (const char *path, struct stat *buf);

int
sys_stat (const char *path, struct stat *buf);

int
sys_fstat (int fd, struct stat *buf);

int
sys_fstatat (int dirfd, const char *pathname, struct stat *buf,
             int flags);
int
sys_openat (int dirfd, const char *pathname, int flags, ...);

DIR *sys_opendir (const char *name);

struct dirent *
sys_readdir (DIR *dir);

ssize_t
sys_readlink (const char *path, char *buf, size_t bufsiz);

int
sys_closedir (DIR *dir);

int
sys_mknod (const char *pathname, mode_t mode, dev_t dev);

int
sys_mkdir (const char *pathname, mode_t mode);

int
sys_mkdirat (int dirfd, const char *pathname, mode_t mode);

int
sys_unlink (const char *pathname);

int
sys_rmdir (const char *pathname);

int
sys_symlink (const char *oldpath, const char *newpath);

int
sys_rename (const char *oldpath, const char *newpath);

int
sys_link (const char *oldpath, const char *newpath);

int
sys_chmod (const char *path, mode_t mode);

int
sys_fchmod (int fd, mode_t mode);

int
sys_chown (const char *path, uid_t owner, gid_t group);

int
sys_fchown (int fd, uid_t owner, gid_t group);

int
sys_lchown (const char *path, uid_t owner, gid_t group);

int
sys_truncate (const char *path, off_t length);

int
sys_ftruncate (int fd, off_t length);

int
sys_utimes (const char *filename, const struct timeval times[2]);

int
sys_creat (const char *pathname, mode_t mode);

ssize_t
sys_readv (int fd, const struct iovec *iov, int iovcnt);

ssize_t
sys_writev (int fd, const struct iovec *iov, int iovcnt);

ssize_t
sys_read (int fd, void *buf, size_t count);

ssize_t
sys_write (int fd, const void *buf, size_t count);

off_t
sys_lseek (int fd, off_t offset, int whence);

int
sys_statvfs (const char *path, struct statvfs *buf);

int
sys_close (int fd);

int
sys_fsync (int fd);

int
sys_fdatasync (int fd);

void
gf_add_prefix(const char *ns, const char *key, char **newkey);

void
gf_remove_prefix(const char *ns, const char *key, char **newkey);

int
sys_lsetxattr (const char *path, const char *name, const void *value,
               size_t size, int flags);

ssize_t
sys_llistxattr (const char *path, char *list, size_t size);

ssize_t
sys_lgetxattr (const char *path, const char *name, void *value, size_t size);

ssize_t
sys_fgetxattr (int filedes, const char *name, void *value, size_t size);

int
sys_fsetxattr (int filedes, const char *name, const void *value,
               size_t size, int flags);

ssize_t
sys_flistxattr (int filedes, char *list, size_t size);

int
sys_lremovexattr (const char *path, const char *name);

int
sys_fremovexattr (int filedes, const char *name);

int
sys_access (const char *pathname, int mode);

int
sys_ftruncate (int fd, off_t length);

int
sys_fallocate(int fd, int mode, off_t offset, off_t len);

ssize_t
sys_preadv (int fd, const struct iovec *iov, int iovcnt, off_t offset);

ssize_t
sys_pwritev (int fd, const struct iovec *iov, int iovcnt, off_t offset);

ssize_t
sys_pread(int fd, void *buf, size_t count, off_t offset);

ssize_t
sys_pwrite(int fd, const void *buf, size_t count, off_t offset);
# 48 "./common-utils.c" 2
# 1 "/usr/include/ifaddrs.h" 1 3 4
# 25 "/usr/include/ifaddrs.h" 3 4




struct ifaddrs
{
  struct ifaddrs *ifa_next;

  char *ifa_name;
  unsigned int ifa_flags;

  struct sockaddr *ifa_addr;
  struct sockaddr *ifa_netmask;
  union
  {




    struct sockaddr *ifu_broadaddr;
    struct sockaddr *ifu_dstaddr;
  } ifa_ifu;
# 56 "/usr/include/ifaddrs.h" 3 4
  void *ifa_data;
};
# 66 "/usr/include/ifaddrs.h" 3 4
extern int getifaddrs (struct ifaddrs **__ifap) __attribute__ ((__nothrow__ , __leaf__));


extern void freeifaddrs (struct ifaddrs *__ifa) __attribute__ ((__nothrow__ , __leaf__));


# 49 "./common-utils.c" 2






typedef int32_t (*rw_op_t)(int32_t fd, char *buf, int32_t size);
typedef int32_t (*rwv_op_t)(int32_t fd, const struct iovec *buf, int32_t size);

void
md5_wrapper(const unsigned char *data, size_t len, char *md5)
{
        unsigned short i = 0;
        unsigned short lim = 16*2+1;
        unsigned char scratch[16] = {0,};
        MD5(data, len, scratch);
        for (; i < 16; i++)
                snprintf(md5 + i * 2, lim-i*2, "%02x", scratch[i]);
}



int
mkdir_p (char *path, mode_t mode, gf_boolean_t allow_symlinks)
{
        int i = 0;
        int ret = -1;
        char dir[4096] = {0,};
        struct stat stbuf = {0,};

        strncpy (dir, path, (4096 - 1));
        dir[4096 - 1] = '\0';

        i = (dir[0] == '/')? 1: 0;
        do {
                if (path[i] != '/' && path[i] != '\0')
                        continue;

                dir[i] = '\0';
                ret = sys_mkdir (dir, mode);
                if (ret && (*__errno_location ()) != 17) {
                        do { _gf_msg ("",
 "./common-utils.c"
# 90 "./common-utils.c"
                        , __FUNCTION__,
 91
# 90 "./common-utils.c"
                        , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 10), "Failed due to reason"); } while (0)
                                                       ;
                        goto out;
                }

                if (ret && (*__errno_location ()) == 17 && !allow_symlinks) {
                        ret = sys_lstat (dir, &stbuf);
                        if (ret)
                                goto out;

                        if (((((stbuf.st_mode)) & 0170000) == (0120000))) {
                                ret = -1;
                                do { _gf_msg ("",

 "./common-utils.c"
# 102 "./common-utils.c"
                                , __FUNCTION__,

 104
# 102 "./common-utils.c"
                                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 73), "%s is a " "symlink", dir); } while (0)

                                                       ;
                                goto out;
                        }
                }
                dir[i] = '/';

        } while (path[i++] != '\0');

        ret = sys_stat (dir, &stbuf);
        if (ret || !((((stbuf.st_mode)) & 0170000) == (0040000))) {
                if (ret == 0)
                        (*__errno_location ()) = 0;
                ret = -1;
                do { _gf_msg ("",

 "./common-utils.c"
# 117 "./common-utils.c"
                , __FUNCTION__,

 119
# 117 "./common-utils.c"
                , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 10), "Failed" " to create directory, possibly some of the components" " were not directories"); } while (0)

                                                ;
                goto out;
        }

        ret = 0;
out:

        return ret;
}

int
gf_lstat_dir (const char *path, struct stat *stbuf_in)
{
        int ret = -1;
        struct stat stbuf = {0,};

        if (path == ((void *)0)) {
                (*__errno_location ()) = 22;
                goto out;
        }

        ret = sys_lstat (path, &stbuf);
        if (ret)
                goto out;

        if (!((((stbuf.st_mode)) & 0170000) == (0040000))) {
                (*__errno_location ()) = 20;
                ret = -1;
                goto out;
        }
        ret = 0;

out:
        if (!ret && stbuf_in)
                *stbuf_in = stbuf;

        return ret;
}

int
log_base2 (unsigned long x)
{
        int val = 0;

        while (x > 1) {
                x /= 2;
                val++;
        }

        return val;
}
# 179 "./common-utils.c"
char *
gf_rev_dns_lookup (const char *ip)
{
        char *fqdn = ((void *)0);
        int ret = 0;
        struct sockaddr_in sa = {0};
        char host_addr[256] = {0, };

        do { if (!ip) { (*__errno_location ()) = 22; do { _gf_msg ("resolver", "./common-utils.c", __FUNCTION__, 187, GF_LOG_ERROR, (*__errno_location ()), 1, (100000 + 1000 + 172), "invalid argument: " "ip"); } while (0); goto out; } } while (0);

        sa.sin_family = 2;
        inet_pton (2, ip, &sa.sin_addr);
        ret = getnameinfo ((struct sockaddr *)&sa, sizeof (sa), host_addr,
                          sizeof (host_addr), ((void *)0), 0, 0);

        if (ret != 0) {
                do { _gf_msg ("resolver",

 "./common-utils.c"
# 195 "./common-utils.c"
                , __FUNCTION__,

 197
# 195 "./common-utils.c"
                , GF_LOG_INFO, (*__errno_location ()), 0, (100000 + 1000 + 74), "could not resolve " "hostname for %s", ip); } while (0)

                                              ;
                goto out;
        }


        fqdn = gf_strdup (host_addr);

out:
       return fqdn;
}







char *
gf_resolve_path_parent (const char *path)
{
        char *parent = ((void *)0);
        char *tmp = ((void *)0);
        char *pathc = ((void *)0);

        do { if (!path) { (*__errno_location ()) = 22; do { _gf_msg ((*__glusterfs_this_location())->name, "./common-utils.c", __FUNCTION__, 221, GF_LOG_ERROR, (*__errno_location ()), 1, (100000 + 1000 + 172), "invalid argument: " "path"); } while (0); goto out; } } while (0);

        if (strlen (path) <= 0) {
                do { _gf_msg ((*__glusterfs_this_location())->name,

 "./common-utils.c"
# 224 "./common-utils.c"
                , __FUNCTION__,

 226
# 224 "./common-utils.c"
                , GF_LOG_DEBUG, 0, 1, (100000 + 1000 + 169), "invalid string for 'path'"); } while (0)

                                                              ;
                goto out;
        }


        pathc = (__extension__ ({ __const char *__old = (path); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }));
        if (!pathc) {
                goto out;
        }


        tmp = dirname (pathc);
        if (strcmp (tmp, "/") == 0)
                goto out;

        parent = gf_strdup (tmp);
out:
        return parent;
}

int32_t
gf_resolve_ip6 (const char *hostname,
                uint16_t port,
                int family,
                void **dnscache,
                struct addrinfo **addr_info)
{
        int32_t ret = 0;
        struct addrinfo hints;
        struct dnscache6 *cache = ((void *)0);
        char service[32], host[1025];

        if (!hostname) {
                do { _gf_msg ("resolver",
 "./common-utils.c"
# 259 "./common-utils.c"
                , __FUNCTION__,
 260
# 259 "./common-utils.c"
                , GF_LOG_WARNING, 0, 1, (100000 + 1000 + 151), "hostname is NULL"); } while (0)
                                                                           ;
                return -1;
        }

        if (!*dnscache) {
                *dnscache = __gf_calloc (1, sizeof (struct dnscache6), gf_common_mt_dnscache6, "gf_common_mt_dnscache6")
                                                              ;
                if (!*dnscache)
                        return -1;
        }

        cache = *dnscache;
        if (cache->first && !cache->next) {
                freeaddrinfo(cache->first);
                cache->first = cache->next = ((void *)0);
                do { _gf_msg ("resolver", "./common-utils.c", __FUNCTION__, 275, GF_LOG_TRACE, 0, 0, 0, "flushing DNS cache"); } while (0);
        }

        if (!cache->first) {
                char *port_str = ((void *)0);
                do { _gf_msg ("resolver",
 "./common-utils.c"
# 280 "./common-utils.c"
                , __FUNCTION__,
 281
# 280 "./common-utils.c"
                , GF_LOG_TRACE, 0, 0, 0, "DNS cache not present, freshly " "probing hostname: %s", hostname); } while (0)
                                                               ;

                memset(&hints, 0, sizeof(hints));
                hints.ai_family = family;
                hints.ai_socktype = SOCK_STREAM;

                ret = gf_asprintf (&port_str, "%d", port);
                if (-1 == ret) {
                        return -1;
                }
                if ((ret = getaddrinfo(hostname, port_str, &hints, &cache->first)) != 0) {
                        do { _gf_msg ("resolver",

 "./common-utils.c"
# 292 "./common-utils.c"
                        , __FUNCTION__,

 294
# 292 "./common-utils.c"
                        , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 75), "getaddrinfo failed" " (%s)", gai_strerror (ret)); } while (0)

                                                            ;

                        __gf_free (*dnscache);
                        *dnscache = ((void *)0);
                        __gf_free (port_str);
                        return -1;
                }
                __gf_free (port_str);

                cache->next = cache->first;
        }

        if (cache->next) {
                ret = getnameinfo((struct sockaddr *)cache->next->ai_addr,
                                  cache->next->ai_addrlen,
                                  host, sizeof (host),
                                  service, sizeof (service),
                                  1);
                if (ret != 0) {
                        do { _gf_msg ("resolver",

 "./common-utils.c"
# 313 "./common-utils.c"
                        , __FUNCTION__,

 315
# 313 "./common-utils.c"
                        , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 76), "getnameinfo failed" " (%s)", gai_strerror (ret)); } while (0)

                                                            ;
                        goto err;
                }

                do { _gf_msg ("resolver",

 "./common-utils.c"
# 319 "./common-utils.c"
                , __FUNCTION__,

 321
# 319 "./common-utils.c"
                , GF_LOG_DEBUG, 0, 0, 0, "returning ip-%s (port-%s) for " "hostname: %s and port: %d", host, service, hostname, port); } while (0)

                                             ;

                *addr_info = cache->next;
        }

        if (cache->next)
                cache->next = cache->next->ai_next;
        if (cache->next) {
                ret = getnameinfo((struct sockaddr *)cache->next->ai_addr,
                                  cache->next->ai_addrlen,
                                  host, sizeof (host),
                                  service, sizeof (service),
                                  1);
                if (ret != 0) {
                        do { _gf_msg ("resolver",

 "./common-utils.c"
# 335 "./common-utils.c"
                        , __FUNCTION__,

 337
# 335 "./common-utils.c"
                        , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 76), "getnameinfo failed" " (%s)", gai_strerror (ret)); } while (0)

                                                            ;
                        goto err;
                }

                do { _gf_msg ("resolver",
 "./common-utils.c"
# 341 "./common-utils.c"
                , __FUNCTION__,
 342
# 341 "./common-utils.c"
                , GF_LOG_DEBUG, 0, 0, 0, "next DNS query will return: " "ip-%s port-%s", host, service); } while (0)
                                                             ;
        }

        return 0;

err:
        freeaddrinfo (cache->first);
        cache->first = cache->next = ((void *)0);
        __gf_free (cache);
        *dnscache = ((void *)0);
        return -1;
}
# 363 "./common-utils.c"
struct dnscache *
gf_dnscache_init (time_t ttl)
{
        struct dnscache *cache = __gf_malloc (sizeof (*cache), gf_common_mt_dnscache, "gf_common_mt_dnscache")
                                                                  ;
        cache->cache_dict = ((void *)0);
        cache->ttl = ttl;
        return cache;
}







struct dnscache_entry *
gf_dnscache_entry_init ()
{
        struct dnscache_entry *entry = __gf_calloc (1, sizeof (*entry), gf_common_mt_dnscache_entry, "gf_common_mt_dnscache_entry")
                                                                             ;
        return entry;
}






void
gf_dnscache_entry_deinit (struct dnscache_entry *entry)
{
        __gf_free (entry->ip);
        __gf_free (entry->fqdn);
        __gf_free (entry);
}
# 408 "./common-utils.c"
char *
gf_rev_dns_lookup_cached (const char *ip, struct dnscache *dnscache)
{
        char *fqdn = ((void *)0);
        int ret = 0;
        dict_t *cache = ((void *)0);
        data_t *entrydata = ((void *)0);
        struct dnscache_entry *dnsentry = ((void *)0);
        gf_boolean_t from_cache = _gf_false;

        if (!dnscache)
                goto out;

        if (!dnscache->cache_dict) {
                dnscache->cache_dict = dict_new ();
                if (!dnscache->cache_dict) {
                        goto out;
                }
        }
        cache = dnscache->cache_dict;


        entrydata = dict_get (cache, (char *)ip);
        if (entrydata) {
                dnsentry = (struct dnscache_entry *)entrydata->data;

                if (time (((void *)0)) - dnsentry->timestamp > dnscache->ttl) {
                        gf_dnscache_entry_deinit (dnsentry);
                        entrydata->data = ((void *)0);





                        dict_del (cache, (char *)ip);
                } else {

                        fqdn = dnsentry->fqdn;
                        from_cache = _gf_true;
                        goto out;
                }
        }


        ret = gf_get_hostname_from_ip ((char *)ip, &fqdn);
        if (ret != 0)
                goto out;

        if (!fqdn) {
                do { do { if (0) printf ("Allocation failed for the host address"); } while (0); _gf_log_callingfn ("resolver",
 "./common-utils.c"
# 457 "./common-utils.c"
                , __FUNCTION__,
 458
# 457 "./common-utils.c"
                , GF_LOG_CRITICAL, "Allocation failed for the host address"); } while (0)
                                                                           ;
                goto out;
        }

        from_cache = _gf_false;
out:

        if (fqdn && !from_cache) {
                struct dnscache_entry *entry = gf_dnscache_entry_init ();

                if (!entry) {
                        goto out;
                }
                entry->fqdn = fqdn;
                entry->ip = gf_strdup (ip);
                if (!ip) {
                        gf_dnscache_entry_deinit (entry);
                        goto out;
                }
                entry->timestamp = time (((void *)0));

                entrydata = bin_to_data (entry, sizeof (*entry));
                dict_set (cache, (char *)ip, entrydata);
        }
        return fqdn;
}

struct xldump {
 int lineno;
};


static int nprintf (struct xldump *dump, const char *fmt, ...)
                    __attribute__ ((__format__ (__printf__, 2, 3)));
static int
nprintf (struct xldump *dump, const char *fmt, ...)
{
        va_list ap;
        char *msg = ((void *)0);
        char header[32];
        int ret = 0;

        ret = snprintf (header, 32, "%3d:", ++dump->lineno);
        if (ret < 0)
                goto out;

        __builtin_va_start(ap,fmt);
        ret = vasprintf (&msg, fmt, ap);
        __builtin_va_end(ap);
        if (-1 == ret)
                goto out;




        do { _gf_msg_plain (GF_LOG_WARNING, "%s %s", header, msg); } while (0);

out:
        do { if (msg != ((void *)0)) { free ((void *)msg); msg = (void *)0xeeeeeeee; } } while (0);
        return 0;
}


static int
xldump_options (dict_t *this, char *key, data_t *value, void *d)
{
 nprintf (d, "    option %s %s", key, value->data);
 return 0;
}


static void
xldump_subvolumes (xlator_t *this, void *d)
{
 xlator_list_t *subv = ((void *)0);
 int len = 0;
 char *subvstr = ((void *)0);

 subv = this->children;
 if (!this->children)
  return;

 for (subv = this->children; subv; subv = subv->next)
  len += (strlen (subv->xlator->name) + 1);

 subvstr = __gf_calloc (1, len, gf_common_mt_strdup, "gf_common_mt_strdup");

 len = 0;
 for (subv = this->children; subv; subv= subv->next)
  len += sprintf (subvstr + len, "%s%s", subv->xlator->name,
    subv->next ? " " : "");

 nprintf (d, "    subvolumes %s", subvstr);

 __gf_free (subvstr);
}


static void
xldump (xlator_t *each, void *d)
{
 nprintf (d, "volume %s", each->name);
 nprintf (d, "    type %s", each->type);
 dict_foreach (each->options, xldump_options, d);

 xldump_subvolumes (each, d);

 nprintf (d, "end-volume");
 nprintf (d, " ");
}


void
gf_log_dump_graph (FILE *specfp, glusterfs_graph_t *graph)
{
 struct xldump xld = {0, };

        do { _gf_msg_plain (GF_LOG_WARNING, "Final graph:"); } while (0);
        do { _gf_msg_plain (GF_LOG_WARNING, "+---------------------------------------" "---------------------------------------+"); } while (0)

                                                                 ;

 xlator_foreach_depth_first (graph->top, xldump, &xld);

        do { _gf_msg_plain (GF_LOG_WARNING, "+---------------------------------------" "---------------------------------------+"); } while (0)

                                                                 ;
}

static void
gf_dump_config_flags ()
{
        do { _gf_msg_plain_nomem (GF_LOG_ALERT, "configuration details:"); } while (0);
# 676 "./common-utils.c"
        return;
}


void
gf_print_trace (int32_t signum, glusterfs_ctx_t *ctx)
{
        char msg[1024] = {0,};
        char timestr[64] = {0,};
        call_stack_t *stack = ((void *)0);
# 694 "./common-utils.c"
        gf_log_flush();

        gf_log_disable_suppression_before_exit (ctx);


        do { _gf_msg_plain_nomem (GF_LOG_ALERT, "pending frames:"); } while (0);
        {

                for (stack = ((typeof(*stack) *)((char *)((&ctx->pool->all_frames)->next)-(unsigned long)(&((typeof(*stack) *)0)->all_frames))); &stack->all_frames != (&ctx->pool->all_frames); stack = ((typeof(*stack) *)((char *)(stack->all_frames.next)-(unsigned long)(&((typeof(*stack) *)0)->all_frames))))
                                                 {
                        if (stack->type == GF_OP_TYPE_FOP)
                                sprintf (msg,"frame : type(%d) op(%s)",
                                         stack->type,
                                         gf_fop_list[stack->op]);
                        else
                                sprintf (msg,"frame : type(%d) op(%d)",
                                         stack->type,
                                         stack->op);

                        do { _gf_msg_plain_nomem (GF_LOG_ALERT, msg); } while (0);
                }
        }

        sprintf (msg, "patchset: %s", "git://git.gluster.com/glusterfs.git");
        do { _gf_msg_plain_nomem (GF_LOG_ALERT, msg); } while (0);

        sprintf (msg, "signal received: %d", signum);
        do { _gf_msg_plain_nomem (GF_LOG_ALERT, msg); } while (0);
        {


                gf_time_fmt (timestr, sizeof timestr, time (((void *)0)),
                             gf_timefmt_FT);
                do { _gf_msg_plain_nomem (GF_LOG_ALERT, "time of crash: "); } while (0);
                do { _gf_msg_plain_nomem (GF_LOG_ALERT, timestr); } while (0);
        }

        gf_dump_config_flags ();
        do { _gf_msg_backtrace_nomem (GF_LOG_ALERT, 200); } while (0);
        sprintf (msg, "---------");
        do { _gf_msg_plain_nomem (GF_LOG_ALERT, msg); } while (0);


        signal (signum, ((__sighandler_t) 0));
        raise (signum);
}

void
trap (void)
{

}

char *
gf_trim (char *string)
{
        register char *s, *t;

        if (string == ((void *)0)) {
                return ((void *)0);
        }

        for (s = string; ((*__ctype_b_loc ())[(int) ((*s))] & (unsigned short int) _ISspace); s++)
                ;

        if (*s == 0)
                return s;

        t = s + strlen (s) - 1;
        while (t > s && ((*__ctype_b_loc ())[(int) ((*t))] & (unsigned short int) _ISspace))
                t--;
        *++t = '\0';

        return s;
}

int
gf_strsplit (const char *str, const char *delim,
             char ***tokens, int *token_count)
{
        char *_running = ((void *)0);
        char *running = ((void *)0);
        char *token = ((void *)0);
        char **token_list = ((void *)0);
        int count = 0;
        int i = 0;
        int j = 0;

        if (str == ((void *)0) || delim == ((void *)0) || tokens == ((void *)0) || token_count == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 783 "./common-utils.c"
                , __FUNCTION__,
 784
# 783 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                return -1;
        }

        _running = gf_strdup (str);
        if (_running == ((void *)0))
                return -1;

        running = _running;

        while ((token = strsep (&running, delim)) != ((void *)0)) {
                if (token[0] != '\0')
                        count++;
        }
        __gf_free (_running);

        _running = gf_strdup (str);
        if (_running == ((void *)0))
                return -1;

        running = _running;

        if ((token_list = __gf_calloc (count, sizeof (char *), gf_common_mt_char, "gf_common_mt_char")
                                                       ) == ((void *)0)) {
                __gf_free (_running);
                return -1;
        }

        while ((token = strsep (&running, delim)) != ((void *)0)) {
                if (token[0] == '\0')
                        continue;

                token_list[i] = gf_strdup (token);
                if (token_list[i] == ((void *)0))
                        goto free_exit;
                i++;
        }

        __gf_free (_running);

        *tokens = token_list;
        *token_count = count;
        return 0;

free_exit:
        __gf_free (_running);
        for (j = 0; j < i; j++)
                __gf_free (token_list[j]);

        __gf_free (token_list);
        return -1;
}

int
gf_strstr (const char *str, const char *delim, const char *match)
{
        char *tmp = ((void *)0);
        char *save_ptr = ((void *)0);
        char *tmp_str = ((void *)0);

        int ret = 0;

        tmp_str = strdup (str);

        if (str == ((void *)0) || delim == ((void *)0) || match == ((void *)0) || tmp_str == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 849 "./common-utils.c"
                , __FUNCTION__,
 850
# 849 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                ret = -1;
                goto out;
        }


        tmp = strtok_r (tmp_str, delim, &save_ptr);

        while (tmp) {
                ret = strcmp (tmp, match);

                if (ret == 0)
                        break;

                tmp = strtok_r (((void *)0), delim, &save_ptr);
        }

out:
        free (tmp_str);

        return ret;

}

int
gf_volume_name_validate (const char *volume_name)
{
        const char *vname = ((void *)0);

        if (volume_name == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 880 "./common-utils.c"
                , __FUNCTION__,
 881
# 880 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                return -1;
        }

        if (!((*__ctype_b_loc ())[(int) ((volume_name[0]))] & (unsigned short int) _ISalpha))
                return 1;

        for (vname = &volume_name[1]; *vname != '\0'; vname++) {
                if (!(((*__ctype_b_loc ())[(int) ((*vname))] & (unsigned short int) _ISalnum) || *vname == '_'))
                        return 1;
        }

        return 0;
}


int
gf_string2time (const char *str, uint32_t *n)
{
        unsigned long value = 0;
        char *tail = ((void *)0);
        int old_errno = 0;
        const char *s = ((void *)0);

        if (str == ((void *)0) || n == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 906 "./common-utils.c"
                , __FUNCTION__,
 907
# 906 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                (*__errno_location ()) = 22;
                return -1;
        }

        for (s = str; *s != '\0'; s++) {
                if (((*__ctype_b_loc ())[(int) ((*s))] & (unsigned short int) _ISspace))
                        continue;
                if (*s == '-')
                        return -1;
                break;
        }

        old_errno = (*__errno_location ());
        (*__errno_location ()) = 0;
        value = strtol (str, &tail, 0);
        if (str == tail)
                (*__errno_location ()) = 22;

        if ((*__errno_location ()) == 34 || (*__errno_location ()) == 22)
                return -1;

        if ((*__errno_location ()) == 0)
                (*__errno_location ()) = old_errno;

        if (((tail[0] == '\0') ||
              ((tail[0] == 's') && (tail[1] == '\0')) ||
              ((tail[0] == 's') && (tail[1] == 'e') &&
        (tail[2] == 'c') && (tail[3] == '\0'))))
               goto out;

        else if (((tail[0] == 'm') && (tail[1] == '\0')) ||
                 ((tail[0] == 'm') && (tail[1] == 'i') &&
                  (tail[2] == 'n') && (tail[3] == '\0'))) {
                value = value * 60;
                goto out;
        }

        else if (((tail[0] == 'h') && (tail[1] == '\0')) ||
                 ((tail[0] == 'h') && (tail[1] == 'r') &&
          (tail[2] == '\0'))) {
                value = value * (60*60);
                goto out;
        }

        else if (((tail[0] == 'd') && (tail[1] == '\0')) ||
                 ((tail[0] == 'd') && (tail[1] == 'a') &&
          (tail[2] == 'y') && (tail[3] == 's') &&
                 (tail[4] == '\0'))) {
                value = value * (24*60*60);
                goto out;
        }

        else if (((tail[0] == 'w') && (tail[1] == '\0')) ||
                 ((tail[0] == 'w') && (tail[1] == 'k') &&
          (tail[2] == '\0'))) {
                value = value * (7*24*60*60);
                goto out;
        } else {
                return -1;
        }

out:
        *n = value;

        return 0;
}

int
gf_string2percent (const char *str, double *n)
{
        double value = 0;
        char *tail = ((void *)0);
        int old_errno = 0;
        const char *s = ((void *)0);

        if (str == ((void *)0) || n == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 984 "./common-utils.c"
                , __FUNCTION__,
 985
# 984 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                (*__errno_location ()) = 22;
                return -1;
        }

        for (s = str; *s != '\0'; s++) {
                if (((*__ctype_b_loc ())[(int) ((*s))] & (unsigned short int) _ISspace))
                        continue;
                if (*s == '-')
                        return -1;
                break;
        }

        old_errno = (*__errno_location ());
        (*__errno_location ()) = 0;
        value = strtod (str, &tail);
        if (str == tail)
                (*__errno_location ()) = 22;

        if ((*__errno_location ()) == 34 || (*__errno_location ()) == 22)
                return -1;

        if ((*__errno_location ()) == 0)
                (*__errno_location ()) = old_errno;

        if (!((tail[0] == '\0') ||
              ((tail[0] == '%') && (tail[1] == '\0'))))
                return -1;

        *n = value;

        return 0;
}


static int
_gf_string2long (const char *str, long *n, int base)
{
        long value = 0;
        char *tail = ((void *)0);
        int old_errno = 0;

        if (str == ((void *)0) || n == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 1028 "./common-utils.c"
                , __FUNCTION__,
 1029
# 1028 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                (*__errno_location ()) = 22;
                return -1;
        }

        old_errno = (*__errno_location ());
        (*__errno_location ()) = 0;
        value = strtol (str, &tail, base);
        if (str == tail)
                (*__errno_location ()) = 22;

        if ((*__errno_location ()) == 34 || (*__errno_location ()) == 22)
                return -1;

        if ((*__errno_location ()) == 0)
                (*__errno_location ()) = old_errno;

        if (tail[0] != '\0')
                return -1;

        *n = value;

        return 0;
}

static int
_gf_string2ulong (const char *str, unsigned long *n, int base)
{
        unsigned long value = 0;
        char *tail = ((void *)0);
        int old_errno = 0;
        const char *s = ((void *)0);

        if (str == ((void *)0) || n == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 1063 "./common-utils.c"
                , __FUNCTION__,
 1064
# 1063 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                (*__errno_location ()) = 22;
                return -1;
        }

        for (s = str; *s != '\0'; s++) {
                if (((*__ctype_b_loc ())[(int) ((*s))] & (unsigned short int) _ISspace))
                        continue;
                if (*s == '-')
                        return -1;
                break;
        }

        old_errno = (*__errno_location ());
        (*__errno_location ()) = 0;
        value = strtoul (str, &tail, base);
        if (str == tail)
                (*__errno_location ()) = 22;

        if ((*__errno_location ()) == 34 || (*__errno_location ()) == 22)
                return -1;

        if ((*__errno_location ()) == 0)
                (*__errno_location ()) = old_errno;

        if (tail[0] != '\0')
                return -1;

        *n = value;

        return 0;
}

static int
_gf_string2uint (const char *str, unsigned int *n, int base)
{
        unsigned long value = 0;
        char *tail = ((void *)0);
        int old_errno = 0;
        const char *s = ((void *)0);

        if (str == ((void *)0) || n == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 1106 "./common-utils.c"
                , __FUNCTION__,
 1107
# 1106 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                (*__errno_location ()) = 22;
                return -1;
        }

        for (s = str; *s != '\0'; s++) {
                if (((*__ctype_b_loc ())[(int) ((*s))] & (unsigned short int) _ISspace))
                        continue;
                if (*s == '-')
                        return -1;
                break;
        }

        old_errno = (*__errno_location ());
        (*__errno_location ()) = 0;
        value = strtoul (str, &tail, base);
        if (str == tail)
                (*__errno_location ()) = 22;

        if ((*__errno_location ()) == 34 || (*__errno_location ()) == 22)
                return -1;

        if ((*__errno_location ()) == 0)
                (*__errno_location ()) = old_errno;

        if (tail[0] != '\0')
                return -1;

        *n = (unsigned int)value;

        return 0;
}

static int
_gf_string2double (const char *str, double *n)
{
        double value = 0.0;
        char *tail = ((void *)0);
        int old_errno = 0;

        if (str == ((void *)0) || n == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 1148 "./common-utils.c"
                , __FUNCTION__,
 1149
# 1148 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                (*__errno_location ()) = 22;
                return -1;
        }

        old_errno = (*__errno_location ());
        (*__errno_location ()) = 0;
        value = strtod (str, &tail);
        if (str == tail)
                (*__errno_location ()) = 22;

        if ((*__errno_location ()) == 34 || (*__errno_location ()) == 22)
                return -1;

        if ((*__errno_location ()) == 0)
                (*__errno_location ()) = old_errno;

        if (tail[0] != '\0')
                return -1;

        *n = value;

        return 0;
}

static int
_gf_string2longlong (const char *str, long long *n, int base)
{
        long long value = 0;
        char *tail = ((void *)0);
        int old_errno = 0;

        if (str == ((void *)0) || n == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 1182 "./common-utils.c"
                , __FUNCTION__,
 1183
# 1182 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                (*__errno_location ()) = 22;
                return -1;
        }

        old_errno = (*__errno_location ());
        (*__errno_location ()) = 0;
        value = strtoll (str, &tail, base);
        if (str == tail)
                (*__errno_location ()) = 22;

        if ((*__errno_location ()) == 34 || (*__errno_location ()) == 22)
                return -1;

        if ((*__errno_location ()) == 0)
                (*__errno_location ()) = old_errno;

        if (tail[0] != '\0')
                return -1;

        *n = value;

        return 0;
}

static int
_gf_string2ulonglong (const char *str, unsigned long long *n, int base)
{
        unsigned long long value = 0;
        char *tail = ((void *)0);
        int old_errno = 0;
        const char *s = ((void *)0);

        if (str == ((void *)0) || n == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 1217 "./common-utils.c"
                , __FUNCTION__,
 1218
# 1217 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                (*__errno_location ()) = 22;
                return -1;
        }

        for (s = str; *s != '\0'; s++) {
                if (((*__ctype_b_loc ())[(int) ((*s))] & (unsigned short int) _ISspace))
                        continue;
                if (*s == '-')
                        return -1;
                break;
        }

        old_errno = (*__errno_location ());
        (*__errno_location ()) = 0;
        value = strtoull (str, &tail, base);
        if (str == tail)
                (*__errno_location ()) = 22;

        if ((*__errno_location ()) == 34 || (*__errno_location ()) == 22)
                return -1;

        if ((*__errno_location ()) == 0)
                (*__errno_location ()) = old_errno;

        if (tail[0] != '\0')
                return -1;

        *n = value;

        return 0;
}

int
gf_string2long (const char *str, long *n)
{
        return _gf_string2long (str, n, 0);
}

int
gf_string2ulong (const char *str, unsigned long *n)
{
        return _gf_string2ulong (str, n, 0);
}

int
gf_string2int (const char *str, int *n)
{
        long l = 0;
        int ret = 0;

        ret = _gf_string2long (str, &l, 0);

        *n = l;
        return ret;
}

int
gf_string2uint (const char *str, unsigned int *n)
{
        return _gf_string2uint (str, n, 0);
}

int
gf_string2double (const char *str, double *n)
{
        return _gf_string2double (str, n);
}

int
gf_string2longlong (const char *str, long long *n)
{
        return _gf_string2longlong (str, n, 0);
}

int
gf_string2ulonglong (const char *str, unsigned long long *n)
{
        return _gf_string2ulonglong (str, n, 0);
}

int
gf_string2int8 (const char *str, int8_t *n)
{
        long l = 0L;
        int rv = 0;

        rv = _gf_string2long (str, &l, 0);
        if (rv != 0)
                return rv;

        if ((l >= (-128)) && (l <= (127))) {
                *n = (int8_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2int16 (const char *str, int16_t *n)
{
        long l = 0L;
        int rv = 0;

        rv = _gf_string2long (str, &l, 0);
        if (rv != 0)
                return rv;

        if ((l >= (-32767-1)) && (l <= (32767))) {
                *n = (int16_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2int32 (const char *str, int32_t *n)
{
        long l = 0L;
        int rv = 0;

        rv = _gf_string2long (str, &l, 0);
        if (rv != 0)
                return rv;

        if ((l >= (-2147483647-1)) && (l <= (2147483647))) {
                *n = (int32_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2int64 (const char *str, int64_t *n)
{
        long long l = 0LL;
        int rv = 0;

        rv = _gf_string2longlong (str, &l, 0);
        if (rv != 0)
                return rv;

        if ((l >= (-9223372036854775807L -1)) && (l <= (9223372036854775807L))) {
                *n = (int64_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2uint8 (const char *str, uint8_t *n)
{
        unsigned long l = 0L;
        int rv = 0;

        rv = _gf_string2ulong (str, &l, 0);
        if (rv != 0)
                return rv;

        if (l <= (255)) {
                *n = (uint8_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2uint16 (const char *str, uint16_t *n)
{
        unsigned long l = 0L;
        int rv = 0;

        rv = _gf_string2ulong (str, &l, 0);
        if (rv != 0)
                return rv;

        if (l <= (65535)) {
                *n = (uint16_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2uint32 (const char *str, uint32_t *n)
{
        unsigned long l = 0L;
        int rv = 0;

        rv = _gf_string2ulong (str, &l, 0);
        if (rv != 0)
                return rv;

 if (l <= (4294967295U)) {
                *n = (uint32_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2uint64 (const char *str, uint64_t *n)
{
        unsigned long long l = 0ULL;
        int rv = 0;

        rv = _gf_string2ulonglong (str, &l, 0);
        if (rv != 0)
                return rv;

        if (l <= (18446744073709551615UL)) {
                *n = (uint64_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2ulong_base10 (const char *str, unsigned long *n)
{
        return _gf_string2ulong (str, n, 10);
}

int
gf_string2uint_base10 (const char *str, unsigned int *n)
{
        return _gf_string2uint (str, n, 10);
}

int
gf_string2uint8_base10 (const char *str, uint8_t *n)
{
        unsigned long l = 0L;
        int rv = 0;

        rv = _gf_string2ulong (str, &l, 10);
        if (rv != 0)
                return rv;

        if (l <= (255)) {
                *n = (uint8_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2uint16_base10 (const char *str, uint16_t *n)
{
        unsigned long l = 0L;
        int rv = 0;

        rv = _gf_string2ulong (str, &l, 10);
        if (rv != 0)
                return rv;

        if (l <= (65535)) {
                *n = (uint16_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2uint32_base10 (const char *str, uint32_t *n)
{
        unsigned long l = 0L;
        int rv = 0;

        rv = _gf_string2ulong (str, &l, 10);
        if (rv != 0)
                return rv;

        if (l <= (4294967295U)) {
                *n = (uint32_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

int
gf_string2uint64_base10 (const char *str, uint64_t *n)
{
        unsigned long long l = 0ULL;
        int rv = 0;

        rv = _gf_string2ulonglong (str, &l, 10);
        if (rv != 0)
                return rv;

        if (l <= (18446744073709551615UL)) {
                *n = (uint64_t) l;
                return 0;
        }

        (*__errno_location ()) = 34;
        return -1;
}

char *
gf_uint64_2human_readable (uint64_t n)
{
        int ret = 0;
        char *str = ((void *)0);

        if (n >= 1125899906842624ULL) {
                ret = gf_asprintf (&str, "%.1lfPB", ((double) n)/1125899906842624ULL);
                if (ret < 0)
                        goto err;
        } else if (n >= 1099511627776ULL) {
                ret = gf_asprintf (&str, "%.1lfTB", ((double) n)/1099511627776ULL);
                if (ret < 0)
                        goto err;
        } else if (n >= 1073741824ULL) {
                ret = gf_asprintf (&str, "%.1lfGB", ((double) n)/1073741824ULL);
                if (ret < 0)
                        goto err;
        } else if (n >= 1048576ULL) {
                ret = gf_asprintf (&str, "%.1lfMB", ((double) n)/1048576ULL);
                if (ret < 0)
                        goto err;
        } else if (n >= 1024ULL) {
                ret = gf_asprintf (&str, "%.1lfKB", ((double) n)/1024ULL);
                if (ret < 0)
                        goto err;
        } else {
                ret = gf_asprintf (&str, "%luBytes", n);
                if (ret < 0)
                        goto err;
        }
        return str;
err:
        return ((void *)0);
}

int
gf_string2bytesize_range (const char *str, uint64_t *n, uint64_t umax)
{
        double value = 0.0;
        int64_t int_value = 0;
        uint64_t unit = 0;
        int64_t max = 0;
        char *tail = ((void *)0);
        int old_errno = 0;
        const char *s = ((void *)0);
        gf_boolean_t fraction = _gf_false;

        if (str == ((void *)0) || n == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 1588 "./common-utils.c"
                , __FUNCTION__,
 1589
# 1588 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                (*__errno_location ()) = 22;
                return -1;
        }

        max = umax & 0x7fffffffffffffffLL;

        for (s = str; *s != '\0'; s++) {
                if (((*__ctype_b_loc ())[(int) ((*s))] & (unsigned short int) _ISspace))
                        continue;
                if (*s == '-')
                        return -1;
                break;
        }

        if (strrchr (str, '.'))
                fraction = _gf_true;

        old_errno = (*__errno_location ());
        (*__errno_location ()) = 0;
        if (fraction)
                value = strtod (str, &tail);
        else
                int_value = strtoll (str, &tail, 10);

        if (str == tail)
                (*__errno_location ()) = 22;

        if ((*__errno_location ()) == 34 || (*__errno_location ()) == 22)
                return -1;

        if ((*__errno_location ()) == 0)
                (*__errno_location ()) = old_errno;

        if (tail[0] != '\0')
        {
                if (strcasecmp (tail, "KB") == 0)
                        unit = 1024ULL;
                else if (strcasecmp (tail, "MB") == 0)
                        unit = 1048576ULL;
                else if (strcasecmp (tail, "GB") == 0)
                        unit = 1073741824ULL;
                else if (strcasecmp (tail, "TB") == 0)
                        unit = 1099511627776ULL;
                else if (strcasecmp (tail, "PB") == 0)
                        unit = 1125899906842624ULL;
                else if (strcasecmp (tail, "B") != 0)
                        return -1;

                if (unit > 0) {
                        if (fraction)
                                value *= unit;
                        else
                                int_value *= unit;
                }
        }

        if (fraction) {
                if ((max - value) < 0) {
                        (*__errno_location ()) = 34;
                        return -1;
                }
                *n = (uint64_t) value;
        } else {
                if ((max - int_value) < 0) {
                        (*__errno_location ()) = 34;
                        return -1;
                }
                *n = int_value;
        }

        return 0;
}

int
gf_string2bytesize_size (const char *str, size_t *n)
{
        uint64_t u64;
        size_t max = (size_t) - 1;
        int val = gf_string2bytesize_range (str, &u64, max);
        *n = (size_t) u64;
        return val;
}

int
gf_string2bytesize (const char *str, uint64_t *n)
{
        return gf_string2bytesize_range(str, n, (18446744073709551615UL));
}

int
gf_string2bytesize_uint64 (const char *str, uint64_t *n)
{
        return gf_string2bytesize_range(str, n, (18446744073709551615UL));
}

int
gf_string2bytesize_int64 (const char *str, int64_t *n)
{
        uint64_t u64 = 0;
        int ret = 0;

        ret = gf_string2bytesize_range(str, &u64, (9223372036854775807L));
        *n = (int64_t) u64;
        return ret;
}

int
gf_string2percent_or_bytesize (const char *str, double *n,
          gf_boolean_t *is_percent)
{
        double value = 0ULL;
        char *tail = ((void *)0);
        int old_errno = 0;
        const char *s = ((void *)0);

        if (str == ((void *)0) || n == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 1706 "./common-utils.c"
                , __FUNCTION__,
 1707
# 1706 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                (*__errno_location ()) = 22;
                return -1;
        }

        for (s = str; *s != '\0'; s++) {
                if (((*__ctype_b_loc ())[(int) ((*s))] & (unsigned short int) _ISspace))
                        continue;
                if (*s == '-')
                        return -1;
                break;
        }

        old_errno = (*__errno_location ());
        (*__errno_location ()) = 0;
        value = strtod (str, &tail);
        if (str == tail)
                (*__errno_location ()) = 22;

        if ((*__errno_location ()) == 34 || (*__errno_location ()) == 22)
                return -1;

        if ((*__errno_location ()) == 0)
                (*__errno_location ()) = old_errno;


        if (tail[0] != '\0') {
                if (strcasecmp (tail, "KB") == 0)
                        value *= 1024ULL;
                else if (strcasecmp (tail, "MB") == 0)
                        value *= 1048576ULL;
                else if (strcasecmp (tail, "GB") == 0)
                        value *= 1073741824ULL;
                else if (strcasecmp (tail, "TB") == 0)
                        value *= 1099511627776ULL;
                else if (strcasecmp (tail, "PB") == 0)
                        value *= 1125899906842624ULL;
  else if (strcasecmp (tail, "%") == 0)
   *is_percent = _gf_true;
                else
                        return -1;
        }


        if (((18446744073709551615UL) - value) < 0) {
                (*__errno_location ()) = 34;
                return -1;
        }

        *n = value;

        return 0;
}

int64_t
gf_str_to_long_long (const char *number)
{
        int64_t unit = 1;
        int64_t ret = 0;
        char *endptr = ((void *)0) ;
        if (!number)
                return 0;

        ret = strtoll (number, &endptr, 0);

        if (endptr) {
                switch (*endptr) {
                case 'G':
                case 'g':
                        if ((* (endptr + 1) == 'B') ||(* (endptr + 1) == 'b'))
                                unit = 1024 * 1024 * 1024;
                        break;
                case 'M':
                case 'm':
                        if ((* (endptr + 1) == 'B') ||(* (endptr + 1) == 'b'))
                                unit = 1024 * 1024;
                        break;
                case 'K':
                case 'k':
                        if ((* (endptr + 1) == 'B') ||(* (endptr + 1) == 'b'))
                                unit = 1024;
                        break;
                case '%':
                        unit = 1;
                        break;
                default:
                        unit = 1;
                        break;
                }
        }
        return ret * unit;
}

int
gf_string2boolean (const char *str, gf_boolean_t *b)
{
        if (str == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 1804 "./common-utils.c"
                , __FUNCTION__,
 1805
# 1804 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                return -1;
        }

        if ((strcasecmp (str, "1") == 0) ||
            (strcasecmp (str, "on") == 0) ||
            (strcasecmp (str, "yes") == 0) ||
            (strcasecmp (str, "true") == 0) ||
            (strcasecmp (str, "enable") == 0)) {
                *b = _gf_true;
                return 0;
        }

        if ((strcasecmp (str, "0") == 0) ||
            (strcasecmp (str, "off") == 0) ||
            (strcasecmp (str, "no") == 0) ||
            (strcasecmp (str, "false") == 0) ||
            (strcasecmp (str, "disable") == 0)) {
                *b = _gf_false;
                return 0;
        }

        return -1;
}


int
gf_lockfd (int fd)
{
        struct gf_flock fl;

        fl.l_type = 1;
        fl.l_whence = 0;
        fl.l_start = 0;
        fl.l_len = 0;

        return fcntl (fd, 6, &fl);
}


int
gf_unlockfd (int fd)
{
        struct gf_flock fl;

        fl.l_type = 2;
        fl.l_whence = 0;
        fl.l_start = 0;
        fl.l_len = 0;

        return fcntl (fd, 6, &fl);
}

static void
compute_checksum (char *buf, size_t size, uint32_t *checksum)
{
        int ret = -1;
        char *checksum_buf = ((void *)0);

        checksum_buf = (char *)(checksum);

        if (!(*checksum)) {
                checksum_buf [0] = 0xba;
                checksum_buf [1] = 0xbe;
                checksum_buf [2] = 0xb0;
                checksum_buf [3] = 0x0b;
        }

        for (ret = 0; ret < (size - 4); ret += 4) {
                checksum_buf[0] ^= (buf[ret]);
                checksum_buf[1] ^= (buf[ret + 1] << 1) ;
                checksum_buf[2] ^= (buf[ret + 2] << 2);
                checksum_buf[3] ^= (buf[ret + 3] << 3);
        }

        for (ret = 0; ret <= (size % 4); ret++) {
                checksum_buf[ret] ^= (buf[(size - 4) + ret] << ret);
        }

        return;
}



int
get_checksum_for_file (int fd, uint32_t *checksum)
{
        int ret = -1;
        char buf[1024] = {0,};


        sys_lseek (fd, 0L, 0);
        do {
                ret = sys_read (fd, &buf, 1024);
                if (ret > 0)
                        compute_checksum (buf, 1024,
                                          checksum);
        } while (ret > 0);


        sys_lseek (fd, 0L, 0);

        return ret;
}


int
get_checksum_for_path (char *path, uint32_t *checksum)
{
        int ret = -1;
        int fd = -1;

        do { if (!(path)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 1917, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "path"); } while (0); } } while (0);
        do { if (!(checksum)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 1918, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "checksum"); } while (0); } } while (0);

        fd = open (path, 02);

        if (fd == -1) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 1923 "./common-utils.c"
                , __FUNCTION__,
 1924
# 1923 "./common-utils.c"
                , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 77), "Unable to open %s", path); } while (0)
                                                  ;
                goto out;
        }

        ret = get_checksum_for_file (fd, checksum);

out:
        if (fd != -1)
                sys_close (fd);

        return ret;
}
# 1946 "./common-utils.c"
int
get_file_mtime (const char *path, time_t *stamp)
{
        struct stat f_stat = {0};
        int ret = -22;

        do { if (!path) { (*__errno_location ()) = 22; do { _gf_msg ((*__glusterfs_this_location())->name, "./common-utils.c", __FUNCTION__, 1952, GF_LOG_ERROR, (*__errno_location ()), 1, (100000 + 1000 + 172), "invalid argument: " "path"); } while (0); goto out; } } while (0);
        do { if (!stamp) { (*__errno_location ()) = 22; do { _gf_msg ((*__glusterfs_this_location())->name, "./common-utils.c", __FUNCTION__, 1953, GF_LOG_ERROR, (*__errno_location ()), 1, (100000 + 1000 + 172), "invalid argument: " "stamp"); } while (0); goto out; } } while (0);

        ret = sys_stat (path, &f_stat);
        if (ret < 0) {
                do { _gf_msg ((*__glusterfs_this_location())->name,

 "./common-utils.c"
# 1957 "./common-utils.c"
                , __FUNCTION__,

 1959
# 1957 "./common-utils.c"
                , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 13), "failed to stat %s", path); } while (0)

                             ;
                goto out;
        }


        *stamp = f_stat.st_mtim.tv_sec;
out:
        return ret;
}
# 1981 "./common-utils.c"
gf_boolean_t
gf_is_ip_in_net (const char *network, const char *ip_str)
{
        unsigned long ip_buf = 0;
        unsigned long net_ip_buf = 0;
        unsigned long subnet_mask = 0;
        int ret = -22;
        char *slash = ((void *)0);
        char *net_ip = ((void *)0);
        char *subnet = ((void *)0);
        char *net_str = ((void *)0);
        int family = 2;
        gf_boolean_t result = _gf_false;

        do { if (!(network)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 1995, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "network"); } while (0); } } while (0);
        do { if (!(ip_str)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 1996, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "ip_str"); } while (0); } } while (0);

        if (strchr (network, ':'))
                family = 10;
        else if (strchr (network, '.'))
                family = 2;
        else {
                family = -1;
                goto out;
        }

        net_str = (__extension__ ({ __const char *__old = (network); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }));
        slash = strchr (net_str, '/');
        if (!slash)
                goto out;
        *slash = '\0';

        subnet = slash + 1;
        net_ip = net_str;


        ret = inet_pton (family, ip_str, &ip_buf);
        if (ret < 0)
                do { _gf_msg ("common-utils",
 "./common-utils.c"
# 2019 "./common-utils.c"
                , __FUNCTION__,
 2020
# 2019 "./common-utils.c"
                , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 78), "inet_pton() failed"); } while (0)
                                                                      ;


        ret = inet_pton (family, net_ip, &net_ip_buf);
        if (ret < 0) {
                do { _gf_msg ("common-utils",
 "./common-utils.c"
# 2025 "./common-utils.c"
                , __FUNCTION__,
 2026
# 2025 "./common-utils.c"
                , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 78), "inet_pton() failed"); } while (0)
                                                                      ;
                goto out;
        }


        subnet_mask = (1 << atoi (subnet)) - 1;

        result = ((ip_buf & subnet_mask) == (net_ip_buf & subnet_mask));
out:
        return result;
}

char *
strtail (char *str, const char *pattern)
{
        int i = 0;

        for (i = 0; str[i] == pattern[i] && str[i]; i++);

        if (pattern[i] == '\0')
                return str + i;

        return ((void *)0);
}

void
skipwhite (char **s)
{
        while (((*__ctype_b_loc ())[(int) ((**s))] & (unsigned short int) _ISspace))
                (*s)++;
}

char *
nwstrtail (char *str, char *pattern)
{
        for (;;) {
                skipwhite (&str);
                skipwhite (&pattern);

                if (*str != *pattern || !*str)
                        break;

                str++;
                pattern++;
        }

        return *pattern ? ((void *)0) : str;
}

void
skipword (char **s)
{
        if (!*s)
                return;

        skipwhite (s);

        while (!((*__ctype_b_loc ())[(int) ((**s))] & (unsigned short int) _ISspace))
                (*s)++;
}

char *
get_nth_word (const char *str, int n)
{
        char buf[4096] = {0};
        char *start = ((void *)0);
        char *word = ((void *)0);
        int i = 0;
        int word_len = 0;
        const char *end = ((void *)0);

        if (!str)
                goto out;

        snprintf (buf, sizeof (buf), "%s", str);
        start = buf;

        for (i = 0; i < n-1; i++)
                skipword (&start);

        skipwhite (&start);
        end = strpbrk ((const char *)start, " \t\n\0");

        if (!end)
                goto out;

        word_len = labs (end - start);

        word = __gf_calloc (1, word_len + 1, gf_common_mt_strdup, "gf_common_mt_strdup");
        if (!word)
                goto out;

        strncpy (word, start, word_len);
        *(word + word_len) = '\0';
 out:
        return word;
}




char
valid_host_name (char *address, int length)
{
        int i = 0;
        int str_len = 0;
        char ret = 1;
        char *dup_addr = ((void *)0);
        char *temp_str = ((void *)0);
        char *save_ptr = ((void *)0);

        if ((length > 255) || (length < 1)) {
                ret = 0;
                goto out;
        }

        dup_addr = gf_strdup (address);
        if (!dup_addr) {
                ret = 0;
                goto out;
        }

        if (!((*__ctype_b_loc ())[(int) ((dup_addr[length - 1]))] & (unsigned short int) _ISalnum) && (dup_addr[length - 1] != '*')) {
                ret = 0;
                goto out;
        }




        if (strstr (dup_addr, "..")) {
                ret = 0;
                goto out;
        }


        temp_str = strtok_r (dup_addr, ".", &save_ptr);
        do {
                str_len = strlen (temp_str);

                if (!((*__ctype_b_loc ())[(int) ((temp_str[0]))] & (unsigned short int) _ISalnum) ||
                    !((*__ctype_b_loc ())[(int) ((temp_str[str_len-1]))] & (unsigned short int) _ISalnum)) {
                        ret = 0;
                        goto out;
                }
                for (i = 1; i < str_len; i++) {
                        if (!((*__ctype_b_loc ())[(int) ((temp_str[i]))] & (unsigned short int) _ISalnum) && (temp_str[i] != '-')) {
                                ret = 0;
                                goto out;
                        }
                }
        } while ((temp_str = strtok_r (((void *)0), ".", &save_ptr)));

out:
        __gf_free (dup_addr);
        return ret;
}



char
valid_ipv4_address (char *address, int length, gf_boolean_t wildcard_acc)
{
        int octets = 0;
        int value = 0;
        char *tmp = ((void *)0), *ptr = ((void *)0), *prev = ((void *)0), *endptr = ((void *)0);
        char ret = 1;
        int is_wildcard = 0;

        tmp = gf_strdup (address);






        if (length <= 0 ||
            (strstr (address, "..")) ||
            (!((*__ctype_b_loc ())[(int) ((tmp[length - 1]))] & (unsigned short int) _ISdigit) && (tmp[length - 1] != '*'))) {
                ret = 0;
                goto out;
        }

        prev = tmp;
        prev = strtok_r (tmp, ".", &ptr);

        while (prev != ((void *)0)) {
                octets++;
                if (wildcard_acc && !strcmp (prev, "*")) {
                        is_wildcard = 1;
                } else {
                        value = strtol (prev, &endptr, 10);
                        if ((value > 255) || (value < 0) ||
                            (endptr != ((void *)0) && *endptr != '\0')) {
                                ret = 0;
                                goto out;
                        }
                }
                prev = strtok_r (((void *)0), ".", &ptr);
        }

        if ((octets > 4) || (octets < 4 && !is_wildcard)) {
                ret = 0;
        }

out:
        __gf_free (tmp);
        return ret;
}
# 2246 "./common-utils.c"
gf_boolean_t
valid_ipv4_subnetwork (const char *address)
{
        char *slash = ((void *)0);
        char *paddr = ((void *)0);
        char *endptr = ((void *)0);
        long prefixlen = -1;
        gf_boolean_t retv = _gf_true;

        if (address == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 2256 "./common-utils.c"
                , __FUNCTION__,
 2257
# 2256 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                return _gf_false;
        }

        paddr = gf_strdup (address);
        if (paddr == ((void *)0))
                return _gf_false;





        slash = strchr(paddr, '/');
        if ((slash == ((void *)0)) || (slash[1] == '\0')) {
                do { _gf_msg ((*__glusterfs_this_location())->name,

 "./common-utils.c"
# 2271 "./common-utils.c"
                , __FUNCTION__,

 2273
# 2271 "./common-utils.c"
                , GF_LOG_WARNING, 0, 1, (100000 + 1000 + 152), "Invalid IPv4 " "subnetwork format"); } while (0)

                                                      ;
                retv = _gf_false;
                goto out;
        }

        *slash = '\0';
        retv = valid_ipv4_address (paddr, strlen(paddr), _gf_false);
        if (retv == _gf_false) {
                do { _gf_msg ((*__glusterfs_this_location())->name,

 "./common-utils.c"
# 2281 "./common-utils.c"
                , __FUNCTION__,

 2283
# 2281 "./common-utils.c"
                , GF_LOG_WARNING, 0, 1, (100000 + 1000 + 152), "Invalid IPv4 subnetwork address"); } while (0)

                                                                    ;
                goto out;
        }

        prefixlen = strtol (slash + 1, &endptr, 10);
        if (((*__errno_location ()) != 0) || (*endptr != '\0') ||
            (prefixlen < 0) || (prefixlen > 32)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,

 "./common-utils.c"
# 2290 "./common-utils.c"
                , __FUNCTION__,

 2292
# 2290 "./common-utils.c"
                , GF_LOG_WARNING, 0, 1, (100000 + 1000 + 152), "Invalid IPv4 subnetwork mask"); } while (0)

                                                                 ;
                retv = _gf_false;
                goto out;
        }

        retv = _gf_true;
out:
        __gf_free (paddr);
        return retv;
}

char
valid_ipv6_address (char *address, int length, gf_boolean_t wildcard_acc)
{
        int hex_numbers = 0;
        int value = 0;
        int i = 0;
        char *tmp = ((void *)0), *ptr = ((void *)0), *prev = ((void *)0), *endptr = ((void *)0);
        char ret = 1;
        int is_wildcard = 0;
        int is_compressed = 0;

        tmp = gf_strdup (address);


        endptr = strchr(tmp, '%');
        if (endptr) {
                *endptr = '\0';
                length = strlen(tmp);
                endptr = ((void *)0);
        }


        if (length <= 0 || tmp[length - 1] == ':') {
                ret = 0;
                goto out;
        }
        for (i = 0; i < (length - 1) ; i++) {
                if (tmp[i] == ':' && tmp[i + 1] == ':') {
                        if (is_compressed == 0)
                                is_compressed = 1;
                        else {
                                ret = 0;
                                goto out;
                        }
                }
        }

        prev = strtok_r (tmp, ":", &ptr);

        while (prev != ((void *)0)) {
                hex_numbers++;
                if (wildcard_acc && !strcmp (prev, "*")) {
                        is_wildcard = 1;
                } else {
                        value = strtol (prev, &endptr, 16);
                        if ((value > 0xffff) || (value < 0)
                        || (endptr != ((void *)0) && *endptr != '\0')) {
                                ret = 0;
                                goto out;
                        }
                }
                prev = strtok_r (((void *)0), ":", &ptr);
        }

        if ((hex_numbers > 8) || (hex_numbers < 8 && !is_wildcard
            && !is_compressed)) {
                ret = 0;
        }

out:
        __gf_free (tmp);
        return ret;
}

char
valid_internet_address (char *address, gf_boolean_t wildcard_acc)
{
        char ret = 0;
        int length = 0;

        if (address == ((void *)0)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 2374 "./common-utils.c"
                , __FUNCTION__,
 2375
# 2374 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                goto out;
        }

        length = strlen (address);
        if (length == 0)
                goto out;

        if (valid_ipv4_address (address, length, wildcard_acc)
            || valid_ipv6_address (address, length, wildcard_acc)
            || valid_host_name (address, length))
                ret = 1;

out:
        return ret;
}
# 2407 "./common-utils.c"
gf_boolean_t
valid_mount_auth_address (char *address)
{
        int length = 0;
        char *cp = ((void *)0);


        if ((address == ((void *)0)) || (address[0] == '\0')){
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 2415 "./common-utils.c"
                , __FUNCTION__,
 2416
# 2415 "./common-utils.c"
                , GF_LOG_WARNING, 22, 1, (100000 + 1000 + 172), "argument invalid"); } while (0)
                                                                         ;
                return _gf_false;
        }


        if (strcmp(address, "*") == 0)
                return _gf_true;

        for (cp = address; *cp; cp++) {

                if (*cp == '*' || *cp == '?' || *cp == '[') {
                        return _gf_true;
                }






                if (*cp == '/') {
                        return valid_ipv4_subnetwork (address);
                }
        }


        length = strlen (address);
        if ((valid_ipv4_address (address, length, _gf_false)) ||
            (valid_ipv6_address (address, length, _gf_false)) ||
            (valid_host_name (address, length))) {
                return _gf_true;
        }

        return _gf_false;
}
# 2458 "./common-utils.c"
gf_boolean_t
gf_sock_union_equal_addr (union gf_sock_union *a,
                          union gf_sock_union *b)
{
        if (!a || !b) {
                do { _gf_msg ("common-utils",
 "./common-utils.c"
# 2463 "./common-utils.c"
                , __FUNCTION__,
 2464
# 2463 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 2), "Invalid arguments to gf_sock_union_equal_addr"); } while (0)
                                                                        ;
                return _gf_false;
        }

        if (a->storage.ss_family != b->storage.ss_family)
                return _gf_false;

        switch (a->storage.ss_family) {
        case 2:
                if (a->sin.sin_addr.s_addr == b->sin.sin_addr.s_addr)
                        return _gf_true;
                else
                        return _gf_false;

        case 10:
                if (memcmp ((void *)(&a->sin6.sin6_addr),
                            (void *)(&b->sin6.sin6_addr),
                            sizeof (a->sin6.sin6_addr)))
                        return _gf_false;
                else
                        return _gf_true;

        default:
                do { _gf_msg ("common-utils",
 "./common-utils.c"
# 2487 "./common-utils.c"
                , __FUNCTION__,
 2488
# 2487 "./common-utils.c"
                , GF_LOG_DEBUG, 0, 0, 0, "Unsupported/invalid address " "family"); } while (0)
                                       ;
                break;
        }

        return _gf_false;
}
# 2505 "./common-utils.c"
gf_boolean_t
mask_match(const uint32_t a, const uint32_t b, const uint32_t m)
{
        return (((a ^ b) & m) == 0);
}



char *
uuid_utoa (uuid_t uuid)
{
        char *uuid_buffer = glusterfs_uuid_buf_get ();
        gf_uuid_unparse (uuid, uuid_buffer);
        return uuid_buffer;
}


char *
uuid_utoa_r (uuid_t uuid, char *dst)
{
        if(!dst)
                return ((void *)0);
        gf_uuid_unparse (uuid, dst);
        return dst;
}


char *
lkowner_utoa (gf_lkowner_t *lkowner)
{
        char *lkowner_buffer = glusterfs_lkowner_buf_get ();
        lkowner_unparse (lkowner, lkowner_buffer, ((1024 * 2) + (1024 / 8)));
        return lkowner_buffer;
}


char *
lkowner_utoa_r (gf_lkowner_t *lkowner, char *dst, int len)
{
        if(!dst)
                return ((void *)0);
        lkowner_unparse (lkowner, dst, len);
        return dst;
}

void* gf_array_elem (void *a, int index, size_t elem_size)
{
        uint8_t* ptr = a;
        return (void*)(ptr + index * elem_size);
}

void
gf_elem_swap (void *x, void *y, size_t l) {
        uint8_t *a = x, *b = y, c;
        while(l--) {
                c = *a;
                *a++ = *b;
                *b++ = c;
        }
}

void
gf_array_insertionsort (void *A, int l, int r, size_t elem_size,
                        gf_cmp cmp)
{
        int i = l;
        int N = r+1;
        void *Temp = ((void *)0);
        int j = 0;

        for(i = l; i < N; i++) {
                Temp = gf_array_elem (A, i, elem_size);
                j = i - 1;
                while (j >= 0 && (cmp (Temp, gf_array_elem (A, j, elem_size))
                      < 0)) {
                        gf_elem_swap (Temp, gf_array_elem (A, j, elem_size),
                                      elem_size);
                        Temp = gf_array_elem (A, j, elem_size);
                        j = j-1;
                }
        }
}

int
gf_is_str_int (const char *value)
{
        int flag = 0;
        char *str = ((void *)0);
        char *fptr = ((void *)0);

        do { if (!value) { (*__errno_location ()) = 22; do { _gf_msg ((*__glusterfs_this_location())->name, "./common-utils.c", __FUNCTION__, 2595, GF_LOG_ERROR, (*__errno_location ()), 1, (100000 + 1000 + 172), "invalid argument: " "value"); } while (0); goto out; } } while (0);

        str = gf_strdup (value);
        if (!str)
                goto out;

        fptr = str;

        while (*str) {
                if (!((*__ctype_b_loc ())[(int) ((*str))] & (unsigned short int) _ISdigit)) {
                        flag = 1;
                        goto out;
                }
                str++;
        }

out:
        __gf_free (fptr);

        return flag;
}





int32_t
gf_roundup_power_of_two (int32_t nr)
{
        int32_t result = 1;

        if (nr < 0) {
                do { _gf_msg ("common-utils",
 "./common-utils.c"
# 2627 "./common-utils.c"
                , __FUNCTION__,
 2628
# 2627 "./common-utils.c"
                , GF_LOG_WARNING, 0, 0, (100000 + 1000 + 79), "negative number passed"); } while (0)
                                                                             ;
                result = -1;
                goto out;
        }

        while (result < nr)
                result *= 2;

out:
        return result;
}






int32_t
gf_roundup_next_power_of_two (int32_t nr)
{
        int32_t result = 1;

        if (nr < 0) {
                do { _gf_msg ("common-utils",
 "./common-utils.c"
# 2651 "./common-utils.c"
                , __FUNCTION__,
 2652
# 2651 "./common-utils.c"
                , GF_LOG_WARNING, 0, 0, (100000 + 1000 + 79), "negative number passed"); } while (0)
                                                                             ;
                result = -1;
                goto out;
        }

        while (result <= nr)
                result *= 2;

out:
        return result;
}

int
validate_brick_name (char *brick)
{
        char *delimiter = ((void *)0);
        int ret = 0;
        delimiter = strrchr (brick, ':');
        if (!delimiter || delimiter == brick
            || *(delimiter+1) != '/')
                ret = -1;

        return ret;
}

char *
get_host_name (char *word, char **host)
{
        char *delimiter = ((void *)0);
        delimiter = strrchr (word, ':');
        if (delimiter)
                *delimiter = '\0';
        else
                return ((void *)0);
        *host = word;
        return *host;
}


char *
get_path_name (char *word, char **path)
{
        char *delimiter = ((void *)0);
        delimiter = strchr (word, '/');
        if (!delimiter)
                return ((void *)0);
        *path = delimiter;
        return *path;
}

void
gf_path_strip_trailing_slashes (char *path)
{
        int i = 0;
        int len = 0;

        if (!path)
                return;

        len = strlen (path);
        for (i = len - 1; i > 0; i--) {
                if (path[i] != '/')
                        break;
 }

        if (i < (len -1))
                path [i+1] = '\0';

        return;
}

uint64_t
get_mem_size ()
{
        uint64_t memsize = -1;
# 2746 "./common-utils.c"
 return memsize;
}




int
gf_strip_whitespace (char *str, int len)
{
        int i = 0;
        int new_len = 0;
        char *new_str = ((void *)0);

        do { if (!(str)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 2759, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "str"); } while (0); } } while (0);

        new_str = __gf_calloc (1, len + 1, gf_common_mt_char, "gf_common_mt_char");
        if (new_str == ((void *)0))
                return -1;

        for (i = 0; i < len; i++) {
                if (!((*__ctype_b_loc ())[(int) ((str[i]))] & (unsigned short int) _ISspace))
                        new_str[new_len++] = str[i];
        }
        new_str[new_len] = '\0';

        if (new_len != len) {
                memset (str, 0, len);
                strncpy (str, new_str, new_len);
        }

        __gf_free (new_str);
        return new_len;
}

int
gf_canonicalize_path (char *path)
{
        int ret = -1;
        int path_len = 0;
        int dir_path_len = 0;
        char *tmppath = ((void *)0);
        char *dir = ((void *)0);
        char *tmpstr = ((void *)0);

        if (!path || *path != '/')
                goto out;

        if (!strcmp (path, "/"))
                return 0;

        tmppath = gf_strdup (path);
        if (!tmppath)
                goto out;


        bzero (path, strlen(path));
        path[0] = '/';
        dir = strtok_r(tmppath, "/", &tmpstr);

        while (dir) {
                dir_path_len = strlen(dir);
                strncpy ((path + path_len + 1), dir, dir_path_len);
                path_len += dir_path_len + 1;
                dir = strtok_r (((void *)0), "/", &tmpstr);
                if (dir)
                        strncpy ((path + path_len), "/", 1);
        }
        path[path_len] = '\0';
        ret = 0;

 out:
        if (ret)
                do { _gf_msg ("common-utils",
 "./common-utils.c"
# 2818 "./common-utils.c"
                , __FUNCTION__,
 2819
# 2818 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 77), "Path manipulation failed"); } while (0)
                                                   ;

        __gf_free (tmppath);

        return ret;
}

static const char *__gf_timefmts[] = {
        "%F %T",
        "%Y/%m/%d-%T",
        "%b %d %T",
        "%F %H%M%S",
 "%Y-%m-%d-%T",
        "%s",
};

static const char *__gf_zerotimes[] = {
        "0000-00-00 00:00:00",
        "0000/00/00-00:00:00",
        "xxx 00 00:00:00",
        "0000-00-00 000000",
 "0000-00-00-00:00:00",
        "0",
};

void
_gf_timestuff (gf_timefmts *fmt, const char ***fmts, const char ***zeros)
{
        *fmt = gf_timefmt_last;
        *fmts = __gf_timefmts;
        *zeros = __gf_zerotimes;
}


char *
generate_glusterfs_ctx_id (void)
{
        char tmp_str[1024] = {0,};
        char hostname[256] = {0,};
        struct timeval tv = {0,};
        char now_str[32];

        if (gettimeofday (&tv, ((void *)0)) == -1) {
                do { _gf_msg ("glusterfsd",

 "./common-utils.c"
# 2862 "./common-utils.c"
                , __FUNCTION__,

 2864
# 2862 "./common-utils.c"
                , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 175), "gettimeofday: " "failed"); } while (0)

                                 ;
        }

        if (gethostname (hostname, 256) == -1) {
                do { _gf_msg ("glusterfsd",
 "./common-utils.c"
# 2868 "./common-utils.c"
                , __FUNCTION__,
 2869
# 2868 "./common-utils.c"
                , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 80), "gethostname: failed"); } while (0)
                                                                         ;
        }

        gf_time_fmt (now_str, sizeof now_str, tv.tv_sec, gf_timefmt_Ymd_T);
        snprintf (tmp_str, sizeof tmp_str, "%s-%d-%s:%"



                  "ld",

                  hostname, getpid(), now_str, tv.tv_usec);

        return gf_strdup (tmp_str);
}

char *
gf_get_reserved_ports ()
{
        char *ports_info = ((void *)0);
# 2921 "./common-utils.c"
        return ports_info;
}

int
gf_process_reserved_ports (gf_boolean_t *ports, uint32_t ceiling)
{
        int ret = -1;
# 2954 "./common-utils.c"
        return ret;
}

gf_boolean_t
gf_ports_reserved (char *blocked_port, gf_boolean_t *ports, uint32_t ceiling)
{
        gf_boolean_t result = _gf_false;
        char *range_port = ((void *)0);
        int16_t tmp_port1 = -1;
        int16_t tmp_port2 = -1;

        if (strstr (blocked_port, "-") == ((void *)0)) {

                if (blocked_port[strlen(blocked_port) -1] == '\n')
                        blocked_port[strlen(blocked_port) -1] = '\0';
                if (gf_string2int16 (blocked_port, &tmp_port1) == 0) {
                        if (tmp_port1 > ceiling
                            || tmp_port1 < 0) {
                                do { _gf_msg ("glusterfs-socket",

 "./common-utils.c"
# 2972 "./common-utils.c"
                                , __FUNCTION__,

 2974
# 2972 "./common-utils.c"
                                , GF_LOG_WARNING, 0, 0, (100000 + 1000 + 82), "invalid port %d", tmp_port1); } while (0)

                                                  ;
                                result = _gf_true;
                                goto out;
                        } else {
                                do { _gf_msg ("glusterfs",
 "./common-utils.c"
# 2978 "./common-utils.c"
                                , __FUNCTION__,
 2979
# 2978 "./common-utils.c"
                                , GF_LOG_DEBUG, 0, 0, 0, "blocking port " "%d", tmp_port1); } while (0)
                                                              ;
                                ports[tmp_port1] = _gf_true;
                        }
                } else {
                        do { _gf_msg ("glusterfs-socket",

 "./common-utils.c"
# 2983 "./common-utils.c"
                        , __FUNCTION__,

 2985
# 2983 "./common-utils.c"
                        , GF_LOG_WARNING, 0, 0, (100000 + 1000 + 82), "%s is not a valid port " "identifier", blocked_port); } while (0)

                                                           ;
                        result = _gf_true;
                        goto out;
                }
        } else {
                range_port = strtok (blocked_port, "-");
                if (!range_port){
                        result = _gf_true;
                        goto out;
                }
                if (gf_string2int16 (range_port, &tmp_port1) == 0) {
                        if (tmp_port1 > ceiling)
                                tmp_port1 = ceiling;
                        if (tmp_port1 < 0)
                                tmp_port1 = 0;
                }
                range_port = strtok (((void *)0), "-");
                if (!range_port) {
                        result = _gf_true;
                        goto out;
                }

                if (range_port[strlen(range_port) -1] == '\n')
                        range_port[strlen(range_port) - 1] = '\0';
                if (gf_string2int16 (range_port, &tmp_port2) == 0) {
                        if (tmp_port2 > ceiling)
                                tmp_port2 = ceiling;
                        if (tmp_port2 < 0)
                                tmp_port2 = 0;
                }
                do { _gf_msg ("glusterfs",
 "./common-utils.c"
# 3015 "./common-utils.c"
                , __FUNCTION__,
 3016
# 3015 "./common-utils.c"
                , GF_LOG_DEBUG, 0, 0, 0, "lower: %d, higher: %d", tmp_port1, tmp_port2); } while (0)
                                                   ;
                for (; tmp_port1 <= tmp_port2; tmp_port1++)
                        ports[tmp_port1] = _gf_true;
        }

out:
        return result;
}





int
gf_get_hostname_from_ip (char *client_ip, char **hostname)
{
        int ret = -1;
        struct sockaddr *client_sockaddr = ((void *)0);
        struct sockaddr_in client_sock_in = {0};
        struct sockaddr_in6 client_sock_in6 = {0};
        char client_hostname[1025] = {0};
        char *client_ip_copy = ((void *)0);
        char *tmp = ((void *)0);
        char *ip = ((void *)0);




        if (valid_ipv4_address (client_ip, strlen (client_ip), 0) == _gf_false) {

                client_ip_copy = gf_strdup (client_ip);
                if (!client_ip_copy)
                        goto out;

                ip = strtok_r (client_ip_copy, ":", &tmp);
        } else {
                ip = client_ip;
        }

        if (valid_ipv4_address (ip, strlen (ip), 0) == _gf_true) {
                client_sockaddr = (struct sockaddr *)&client_sock_in;
                client_sock_in.sin_family = 2;
                ret = inet_pton (2, ip,
                                 (void *)&client_sock_in.sin_addr.s_addr);

        } else if (valid_ipv6_address (ip, strlen (ip), 0) == _gf_true) {
                client_sockaddr = (struct sockaddr *) &client_sock_in6;

                client_sock_in6.sin6_family = 10;
                ret = inet_pton (10, ip,
                                 (void *)&client_sock_in6.sin6_addr);
        } else {
                goto out;
        }

        if (ret != 1) {
                ret = -1;
                goto out;
        }

        ret = getnameinfo (client_sockaddr,
                           sizeof (*client_sockaddr),
                           client_hostname, sizeof (client_hostname),
                           ((void *)0), 0, 0);
        if (ret) {
                do { _gf_msg ("common-utils",

 "./common-utils.c"
# 3081 "./common-utils.c"
                , __FUNCTION__,

 3083
# 3081 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 76), "Could not lookup hostname " "of %s : %s", client_ip, gai_strerror (ret)); } while (0)

                                                                    ;
                ret = -1;
                goto out;
        }

        *hostname = gf_strdup ((char *)client_hostname);
 out:
        if (client_ip_copy)
                __gf_free (client_ip_copy);

        return ret;
}

gf_boolean_t
gf_interface_search (char *ip)
{
        int32_t ret = -1;
        gf_boolean_t found = _gf_false;
        struct ifaddrs *ifaddr, *ifa;
        int family;
        char host[1025];
        xlator_t *this = ((void *)0);
        char *pct = ((void *)0);

        this = (*__glusterfs_this_location());

        ret = getifaddrs (&ifaddr);

        if (ret != 0) {
                do { _gf_msg (this->name,
 "./common-utils.c"
# 3112 "./common-utils.c"
                , __FUNCTION__,
 3113
# 3112 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 101), "getifaddrs() failed: %s\n", gai_strerror(ret)); } while (0)
                                                                       ;
                goto out;
        }

        for (ifa = ifaddr; ifa != ((void *)0); ifa = ifa->ifa_next) {
                if (!ifa->ifa_addr) {





                        continue;
                }
                family = ifa->ifa_addr->sa_family;

                if (family != 2 && family != 10)
                        continue;

                ret = getnameinfo (ifa->ifa_addr,
                        (family == 2) ? sizeof(struct sockaddr_in) :
                                              sizeof(struct sockaddr_in6),
                        host, 1025, ((void *)0), 0, 1);

                if (ret != 0) {
                        do { _gf_msg (this->name,

 "./common-utils.c"
# 3137 "./common-utils.c"
                        , __FUNCTION__,

 3139
# 3137 "./common-utils.c"
                        , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 76), "getnameinfo() " "failed: %s\n", gai_strerror(ret)); } while (0)

                                                                  ;
                        goto out;
                }







                pct = index(host,'%');
                if (pct) {
                        *pct = '\0';
                }

                if (strncmp (ip, host, 1025) == 0) {
                        do { _gf_msg (this->name,
 "./common-utils.c"
# 3155 "./common-utils.c"
                        , __FUNCTION__,
 3156
# 3155 "./common-utils.c"
                        , GF_LOG_DEBUG, 0, 0, 0, "%s is local address at " "interface %s", ip, ifa->ifa_name); } while (0)
                                                                        ;
                        found = _gf_true;
                        goto out;
                }
        }
out:
        if(ifaddr)
                freeifaddrs (ifaddr);
        return found;
}

char *
get_ip_from_addrinfo (struct addrinfo *addr, char **ip)
{
        char buf[64];
        void *in_addr = ((void *)0);
        struct sockaddr_in *s4 = ((void *)0);
        struct sockaddr_in6 *s6 = ((void *)0);

        switch (addr->ai_family)
        {
                case 2:
                        s4 = (struct sockaddr_in *)addr->ai_addr;
                        in_addr = &s4->sin_addr;
                        break;

                case 10:
                        s6 = (struct sockaddr_in6 *)addr->ai_addr;
                        in_addr = &s6->sin6_addr;
                        break;

                default:
                        do { _gf_msg ("glusterd",
 "./common-utils.c"
# 3188 "./common-utils.c"
                        , __FUNCTION__,
 3189
# 3188 "./common-utils.c"
                        , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 83), "Invalid family"); } while (0)
                                                                        ;
                        return ((void *)0);
        }

        if (!inet_ntop(addr->ai_family, in_addr, buf, sizeof(buf))) {
                do { _gf_msg ("glusterd",
 "./common-utils.c"
# 3194 "./common-utils.c"
                , __FUNCTION__,
 3195
# 3194 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 84), "String conversion failed"); } while (0)
                                                   ;
                return ((void *)0);
        }

        *ip = gf_strdup (buf);
        return *ip;
}

gf_boolean_t
gf_is_loopback_localhost (const struct sockaddr *sa, char *hostname)
{
        do { if (!(sa)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3206, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "sa"); } while (0); } } while (0);

        gf_boolean_t is_local = _gf_false;
        const struct in_addr *addr4 = ((void *)0);
        const struct in6_addr *addr6 = ((void *)0);
        uint8_t *ap = ((void *)0);
        struct in6_addr loopbackaddr6 = { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } };

        switch (sa->sa_family) {
                case 2:
                        addr4 = &(((struct sockaddr_in *)sa)->sin_addr);
                        ap = (uint8_t*)&addr4->s_addr;
                        if (ap[0] == 127)
                                is_local = _gf_true;
                        break;

                case 10:
                        addr6 = &(((struct sockaddr_in6 *)sa)->sin6_addr);
                        if (memcmp (addr6, &loopbackaddr6,
                                    sizeof (loopbackaddr6)) == 0)
                                is_local = _gf_true;
                        break;

                default:
                        if (hostname)
                                do { _gf_msg ("glusterd",


 "./common-utils.c"
# 3231 "./common-utils.c"
                                , __FUNCTION__,


 3234
# 3231 "./common-utils.c"
                                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 83), "unknown " "address family %d for %s", sa->sa_family, hostname); } while (0)


                                                                ;
                        break;
        }

        return is_local;
}

gf_boolean_t
gf_is_local_addr (char *hostname)
{
        int32_t ret = -1;
        struct addrinfo *result = ((void *)0);
        struct addrinfo *res = ((void *)0);
        gf_boolean_t found = _gf_false;
        char *ip = ((void *)0);
        xlator_t *this = ((void *)0);
        struct addrinfo hints;

        this = (*__glusterfs_this_location());

        memset (&hints, 0, sizeof (hints));




        hints.ai_family = 0;

        ret = getaddrinfo (hostname, ((void *)0), &hints, &result);

        if (ret != 0) {
                do { _gf_msg (this->name,
 "./common-utils.c"
# 3264 "./common-utils.c"
                , __FUNCTION__,
 3265
# 3264 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 75), "error in getaddrinfo: %s\n", gai_strerror(ret)); } while (0)
                                                                        ;
                goto out;
        }

        for (res = result; res != ((void *)0); res = res->ai_next) {
                do { _gf_msg (this->name,
 "./common-utils.c"
# 3270 "./common-utils.c"
                , __FUNCTION__,
 3271
# 3270 "./common-utils.c"
                , GF_LOG_DEBUG, 0, 0, 0, "%s ", get_ip_from_addrinfo (res, &ip)); } while (0)
                                                              ;

                found = gf_is_loopback_localhost (res->ai_addr, hostname)
                        || gf_interface_search (ip);
                if (found) {
                        __gf_free (ip);
                        goto out;
                }
                __gf_free (ip);
        }

out:
        if (result)
                freeaddrinfo (result);

        if (!found)
                do { _gf_msg (this->name, "./common-utils.c", __FUNCTION__, 3287, GF_LOG_DEBUG, 0, 0, 0, "%s is not local", hostname); } while (0);

        return found;
}

gf_boolean_t
gf_is_same_address (char *name1, char *name2)
{
        struct addrinfo *addr1 = ((void *)0);
        struct addrinfo *addr2 = ((void *)0);
        struct addrinfo *p = ((void *)0);
        struct addrinfo *q = ((void *)0);
        gf_boolean_t ret = _gf_false;
        int gai_err = 0;
        struct addrinfo hints;

        memset (&hints, 0, sizeof (hints));
        hints.ai_family = 0;

        gai_err = getaddrinfo(name1, ((void *)0), &hints, &addr1);
        if (gai_err != 0) {
                do { _gf_msg (name1,
 "./common-utils.c"
# 3308 "./common-utils.c"
                , __FUNCTION__,
 3309
# 3308 "./common-utils.c"
                , GF_LOG_WARNING, 0, 0, (100000 + 1000 + 75), "error in getaddrinfo: %s\n", gai_strerror(gai_err)); } while (0)
                                                                            ;
                goto out;
        }

        gai_err = getaddrinfo(name2, ((void *)0), &hints, &addr2);
        if (gai_err != 0) {
                do { _gf_msg (name2,
 "./common-utils.c"
# 3315 "./common-utils.c"
                , __FUNCTION__,
 3316
# 3315 "./common-utils.c"
                , GF_LOG_WARNING, 0, 0, (100000 + 1000 + 75), "error in getaddrinfo: %s\n", gai_strerror(gai_err)); } while (0)
                                                                            ;
                goto out;
        }

        for (p = addr1; p; p = p->ai_next) {
                for (q = addr2; q; q = q->ai_next) {
                        if (p->ai_addrlen != q->ai_addrlen) {
                                continue;
                        }
                        if (memcmp(p->ai_addr,q->ai_addr,p->ai_addrlen)) {
                                continue;
                        }
                        ret = _gf_true;
                        goto out;
                }
        }

out:
        if (addr1) {
                freeaddrinfo(addr1);
        }
        if (addr2) {
                freeaddrinfo(addr2);
        }
        return ret;

}


int
gf_set_log_file_path (cmd_args_t *cmd_args)
{
        int i = 0;
        int j = 0;
        int ret = 0;
        char tmp_str[1024] = {0,};

        if (!cmd_args)
                goto done;

        if (cmd_args->mount_point) {
                j = 0;
                i = 0;
                if (cmd_args->mount_point[0] == '/')
                        i = 1;
                for (; i < strlen (cmd_args->mount_point); i++,j++) {
                        tmp_str[j] = cmd_args->mount_point[i];
                        if (cmd_args->mount_point[i] == '/')
                                tmp_str[j] = '-';
                }

                ret = gf_asprintf (&cmd_args->log_file,
                                   DATADIR "/log/glusterfs" "/%s.log",
                                   tmp_str);
                if (ret > 0)
                        ret = 0;
                goto done;
        }

        if (cmd_args->volfile) {
                j = 0;
                i = 0;
                if (cmd_args->volfile[0] == '/')
                        i = 1;
                for (; i < strlen (cmd_args->volfile); i++,j++) {
                        tmp_str[j] = cmd_args->volfile[i];
                        if (cmd_args->volfile[i] == '/')
                                tmp_str[j] = '-';
                }
                ret = gf_asprintf (&cmd_args->log_file,
                                   DATADIR "/log/glusterfs" "/%s.log",
                                   tmp_str);
                if (ret > 0)
                        ret = 0;
                goto done;
        }

        if (cmd_args->volfile_server) {

                ret = gf_asprintf (&cmd_args->log_file,
                                   DATADIR "/log/glusterfs" "/%s-%s-%d.log",
                                   cmd_args->volfile_server,
                                   cmd_args->volfile_id, getpid());
                if (ret > 0)
                        ret = 0;
        }
done:
        return ret;
}

int
gf_set_log_ident (cmd_args_t *cmd_args)
{
        int ret = 0;
        char *ptr = ((void *)0);

        if (cmd_args->log_file == ((void *)0)) {

                return 0;
        }




        if (((void *)0) != (ptr = strrchr (cmd_args->log_file, '/'))) {
                ret = gf_asprintf (&cmd_args->log_ident, "%s", ptr + 1);
        } else {
                ret = gf_asprintf (&cmd_args->log_ident, "%s",
                                   cmd_args->log_file);
        }

        if (ret > 0)
                ret = 0;
        else
                return ret;


        if (((void *)0) != (ptr = strrchr (cmd_args->log_ident, '.'))) {
                if (strcmp (ptr, ".log") == 0) {
                        ptr[0] = '\0';
                }
        }

        return ret;
}

int
gf_thread_cleanup_xint (pthread_t thread)
{
        int ret = 0;
        void *res = ((void *)0);

        ret = pthread_cancel (thread);
        if (ret != 0)
                goto error_return;

        ret = pthread_join (thread, &res);
        if (ret != 0)
                goto error_return;

        if (res != ((void *) -1))
                goto error_return;

        ret = 0;

 error_return:
        return ret;
}

int
gf_thread_create (pthread_t *thread, const pthread_attr_t *attr,
                  void *(*start_routine)(void *), void *arg)
{
        sigset_t set, old;
        int ret;

        sigemptyset (&set);

        sigfillset (&set);
        sigdelset (&set, 11);
        sigdelset (&set, 7);
        sigdelset (&set, 4);
        sigdelset (&set, 31);
        sigdelset (&set, 8);
        sigdelset (&set, 6);

        pthread_sigmask (0, &set, &old);

        ret = pthread_create (thread, attr, start_routine, arg);

        pthread_sigmask (2, &old, ((void *)0));

        return ret;
}

int
gf_skip_header_section (int fd, int header_len)
{
        int ret = -1;

        ret = sys_lseek (fd, header_len, 0);
        if (ret == (off_t) -1) {
                do { _gf_msg ("",
 "./common-utils.c"
# 3498 "./common-utils.c"
                , __FUNCTION__,
 3499
# 3498 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 85), "Failed to skip header section"); } while (0)
                                                        ;
        } else {
                ret = 0;
        }

        return ret;
}

gf_boolean_t
gf_is_service_running (char *pidfile, int *pid)
{
        FILE *file = ((void *)0);
        gf_boolean_t running = _gf_false;
        int ret = 0;
        int fno = 0;

        file = fopen (pidfile, "r+");
        if (!file)
                goto out;

        fno = fileno (file);
        ret = lockf (fno, 3, 0);
        if (ret == -1)
                running = _gf_true;
        if (!pid)
                goto out;

        ret = fscanf (file, "%d", pid);
        if (ret <= 0) {
                do { _gf_msg ("",
 "./common-utils.c"
# 3528 "./common-utils.c"
                , __FUNCTION__,
 3529
# 3528 "./common-utils.c"
                , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 12), "Unable to read pidfile: %s", pidfile); } while (0)
                                                              ;
                *pid = -1;
        }

out:
        if (file)
                fclose (file);
        return running;
}

static int
dht_is_linkfile_key (dict_t *this, char *key, data_t *value, void *data)
{
        gf_boolean_t *linkfile_key_found = ((void *)0);

        if (!data)
                goto out;

        linkfile_key_found = data;

        *linkfile_key_found = _gf_true;
out:
        return 0;
}


gf_boolean_t
dht_is_linkfile (struct iatt *buf, dict_t *dict)
{
        gf_boolean_t linkfile_key_found = _gf_false;

        if (!((st_mode_from_ia ((buf)->ia_prot, (buf)->ia_type) & ~0170000) == (01000)))
                return _gf_false;

        dict_foreach_fnmatch (dict, "*.""linkto", dht_is_linkfile_key,
                              &linkfile_key_found);

        return linkfile_key_found;
}

int
gf_check_log_format (const char *value)
{
        int log_format = -1;

        if (!strcasecmp (value, "no-msg-id"))
                log_format = gf_logformat_traditional;
        else if (!strcasecmp (value, "with-msg-id"))
                log_format = gf_logformat_withmsgid;

        if (log_format == -1)
                do { _gf_msg ((*__glusterfs_this_location())->name,

 "./common-utils.c"
# 3580 "./common-utils.c"
                , __FUNCTION__,

 3582
# 3580 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 86), "Invalid log-format. possible values are " "no-msg-id" "|" "with-msg-id"); } while (0)

                                                                              ;

        return log_format;
}

int
gf_check_logger (const char *value)
{
        int logger = -1;

        if (!strcasecmp (value, "gluster-log"))
                logger = gf_logger_glusterlog;
        else if (!strcasecmp (value, "syslog"))
                logger = gf_logger_syslog;

        if (logger == -1)
                do { _gf_msg ((*__glusterfs_this_location())->name,

 "./common-utils.c"
# 3598 "./common-utils.c"
                , __FUNCTION__,

 3600
# 3598 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 86), "Invalid logger. possible values are " "gluster-log" "|" "syslog"); } while (0)

                                                                   ;

        return logger;
}







gf_boolean_t
gf_compare_sockaddr (const struct sockaddr *addr1,
                     const struct sockaddr *addr2)
{
        do { if (!(addr1 != ((void *)0))) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3615, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "addr1 != NULL"); } while (0); } } while (0);
        do { if (!(addr2 != ((void *)0))) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3616, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "addr2 != NULL"); } while (0); } } while (0);



        if (addr1->sa_family != addr2->sa_family)
                return _gf_false;


        if (2 == addr1->sa_family) {
                if (((struct sockaddr_in *)addr1)->sin_addr.s_addr ==
                       ((struct sockaddr_in *)addr2)->sin_addr.s_addr)
                        return _gf_true;

        } else if (10 == addr1->sa_family) {
                if (memcmp ((char *)&((struct sockaddr_in6 *)addr1)->sin6_addr,
                            (char *)&((struct sockaddr_in6 *)addr2)->sin6_addr,
                            sizeof (struct in6_addr)) == 0)
                        return _gf_true;
        }
        return _gf_false;
}






int
gf_set_timestamp (const char *src, const char* dest)
{
        struct stat sb = {0, };
        struct timeval new_time[2] = {{0, },{0,}};
        int ret = 0;
        xlator_t *this = ((void *)0);

        this = (*__glusterfs_this_location());
        do { if (!(this)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3652, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "this"); } while (0); } } while (0);
        do { if (!(src)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3653, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "src"); } while (0); } } while (0);
        do { if (!(dest)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3654, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "dest"); } while (0); } } while (0);

        ret = sys_stat (src, &sb);
        if (ret) {
                do { _gf_msg (this->name,
 "./common-utils.c"
# 3658 "./common-utils.c"
                , __FUNCTION__,
 3659
# 3658 "./common-utils.c"
                , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 13), "stat on %s", src); } while (0)
                                                                   ;
                goto out;
        }
        new_time[0].tv_sec = sb.st_atim.tv_sec;
        new_time[0].tv_usec = (0)/1000;

        new_time[1].tv_sec = sb.st_mtim.tv_sec;
        new_time[1].tv_usec = (0)/1000;





        ret = sys_utimes (dest, new_time);
        if (ret) {
                do { _gf_msg (this->name,
 "./common-utils.c"
# 3674 "./common-utils.c"
                , __FUNCTION__,
 3675
# 3674 "./common-utils.c"
                , GF_LOG_ERROR, (*__errno_location ()), 0, (100000 + 1000 + 87), "utimes on %s", dest); } while (0)
                                             ;
        }
out:
        return ret;
}

static void
gf_backtrace_end (char *buf, size_t frames)
{
        size_t pos = 0;

        if (!buf)
                return;

        pos = strlen (buf);

        frames = ((frames)<(4096 - pos -1)?(frames):(4096 - pos -1));

        if (frames <= 0)
                return;

        memset (buf+pos, ')', frames);
        buf[pos+frames] = '\0';
}


static int
gf_backtrace_append (char *buf, size_t pos, char *framestr)
{
        if (pos >= 4096)
                return -1;
        return snprintf (buf+pos, 4096 -pos, "(--> %s ", framestr);
}

static int
gf_backtrace_fillframes (char *buf)
{
        void *array[7];
        size_t frames = 0;
        FILE *fp = ((void *)0);
        char callingfn[7 -2][1024] = {{0},};
        int ret = -1;
        int fd = -1;
        size_t idx = 0;
        size_t pos = 0;
        size_t inc = 0;
        char tmpl[32] = "/tmp/btXXXXXX";

        frames = backtrace (array, 7);
        if (!frames)
                return -1;

        fd = gf_mkostemp (tmpl, 0, 02);
        if (fd == -1)
                return -1;




        backtrace_symbols_fd (&array[2], frames-2, fd);

        fp = fdopen (fd, "r");
        if (!fp) {
                sys_close (fd);
                ret = -1;
                goto out;
        }

        ret = fseek (fp, 0L, 0);
        if (ret)
                goto out;

        pos = 0;
        for (idx = 0; idx < frames - 2; idx++) {
                ret = fscanf (fp, "%s", callingfn[idx]);
                if (ret == (-1))
                        break;
                inc = gf_backtrace_append (buf, pos, callingfn[idx]);
                if (inc == -1)
                        break;
                pos += inc;
        }
        gf_backtrace_end (buf, idx);

out:
        if (fp)
                fclose (fp);

        sys_unlink (tmpl);

        return (idx > 0)? 0: -1;

}
# 3776 "./common-utils.c"
char *
gf_backtrace_save (char *buf)
{
        char *bt = ((void *)0);

        if (!buf) {
                bt = (*__glusterfs_this_location())->ctx->btbuf;
                do { if (!(bt)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3783, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "bt"); } while (0); } } while (0);

        } else {
                bt = buf;

        }

        if ((0 == gf_backtrace_fillframes (bt)))
                return bt;

        do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 3793 "./common-utils.c"
        , __FUNCTION__,
 3794
# 3793 "./common-utils.c"
        , GF_LOG_WARNING, 0, 0, (100000 + 1000 + 88), "Failed to save the backtrace."); } while (0)
                                                ;
        return ((void *)0);
}

gf_loglevel_t
fop_log_level (glusterfs_fop_t fop, int op_errno)
{

        if (op_errno == 2 || op_errno == 116)
                return GF_LOG_DEBUG;

        if ((fop == GF_FOP_ENTRYLK) ||
            (fop == GF_FOP_FENTRYLK) ||
            (fop == GF_FOP_FINODELK) ||
            (fop == GF_FOP_INODELK) ||
            (fop == GF_FOP_LK)) {




                if (op_errno == 11 || op_errno == 38)
                        return GF_LOG_DEBUG;
        }

        if ((fop == GF_FOP_GETXATTR) ||
            (fop == GF_FOP_FGETXATTR)) {
                if (op_errno == 95 || op_errno == 61)
                        return GF_LOG_DEBUG;
        }

        if ((fop == GF_FOP_SETXATTR) ||
            (fop == GF_FOP_FSETXATTR) ||
            (fop == GF_FOP_REMOVEXATTR) ||
            (fop == GF_FOP_FREMOVEXATTR)) {
                if (op_errno == 95)
                        return GF_LOG_DEBUG;
        }

        if (fop == GF_FOP_MKNOD || fop == GF_FOP_MKDIR)
                if (op_errno == 17)
                        return GF_LOG_DEBUG;

        return GF_LOG_ERROR;
}
# 3853 "./common-utils.c"
int32_t
gf_build_absolute_path (char *current_path, char *relative_path, char **path)
{
        char *absolute_path = ((void *)0);
        char *token = ((void *)0);
        char *component = ((void *)0);
        char *saveptr = ((void *)0);
        char *end = ((void *)0);
        int ret = 0;
        size_t relativepath_len = 0;
        size_t currentpath_len = 0;
        size_t max_absolutepath_len = 0;

        do { if (!(current_path)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3866, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "current_path"); } while (0); } } while (0);
        do { if (!(relative_path)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3867, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "relative_path"); } while (0); } } while (0);
        do { if (!(path)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3868, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "path"); } while (0); } } while (0);

        if (!path || !current_path || !relative_path) {
                ret = -14;
                goto err;
        }




        currentpath_len = strlen (current_path);
        if (current_path[0] != '/' || (currentpath_len > 4096)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 3880 "./common-utils.c"
                , __FUNCTION__,
 3881
# 3880 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 2), "Wrong value for current path %s", current_path); } while (0)
                                                                        ;
                ret = -22;
                goto err;
        }

        relativepath_len = strlen (relative_path);
        if (relative_path[0] == '/' || (relativepath_len > 4096)) {
                do { _gf_msg ((*__glusterfs_this_location())->name,
 "./common-utils.c"
# 3888 "./common-utils.c"
                , __FUNCTION__,
 3889
# 3888 "./common-utils.c"
                , GF_LOG_ERROR, 0, 0, (100000 + 1000 + 2), "Wrong value for relative path %s", relative_path); } while (0)
                                                                          ;
                ret = -22;
                goto err;
        }


        max_absolutepath_len = currentpath_len + relativepath_len + 2;

        absolute_path = __gf_calloc (1, max_absolutepath_len, gf_common_mt_char, "gf_common_mt_char");
        if (!absolute_path) {
                ret = -12;
                goto err;
        }
        absolute_path[0] = '\0';




        if (strcmp (current_path, "/") != 0) {
                strcpy (absolute_path, current_path);


                gf_path_strip_trailing_slashes (absolute_path);
        }


        component = gf_strdup (relative_path);
        if (!component) {
                ret = -12;
                goto err;
        }
# 3930 "./common-utils.c"
        for (token = strtok_r (component, "/", &saveptr),
             end = strchr (absolute_path, '\0'); token;
             token = strtok_r (((void *)0), "/", &saveptr)) {
                if (strcmp (token, ".") == 0)
                        continue;

                else if (strcmp (token, "..") == 0) {

                        if (absolute_path[0] == '\0') {
                                ret = -13;
                                goto err;
                         }

                         end = strrchr (absolute_path, '/');
                         *end = '\0';
                } else {
                        ret = snprintf (end, max_absolutepath_len -
                                        strlen (absolute_path), "/%s", token);
                        end = strchr (absolute_path , '\0');
                }
        }

        if (strlen (absolute_path) > 4096) {
                ret = -22;
                goto err;
        }
        *path = gf_strdup (absolute_path);

err:
        if (component)
                __gf_free (component);
        if (absolute_path)
                __gf_free (absolute_path);
        return ret;
}
# 3973 "./common-utils.c"
int
recursive_rmdir (const char *delete_path)
{
        int ret = -1;
        char path[4096] = {0,};
        struct stat st = {0,};
        DIR *dir = ((void *)0);
        struct dirent *entry = ((void *)0);
        xlator_t *this = ((void *)0);

        this = (*__glusterfs_this_location());
        do { if (!(this)) { do { _gf_msg ("", "./common-utils.c", __FUNCTION__, 3984, GF_LOG_ERROR, 0, 1, (100000 + 1000 + 150), "Assertion failed: " "this"); } while (0); } } while (0);
        do { if (!delete_path) { (*__errno_location ()) = 22; do { _gf_msg (this->name, "./common-utils.c", __FUNCTION__, 3985, GF_LOG_ERROR, (*__errno_location ()), 1, (100000 + 1000 + 172), "invalid argument: " "delete_path"); } while (0); goto out; } } while (0);

        dir = sys_opendir (delete_path);
        if (!dir) {
                do { _gf_msg (this->name,
 "./common-utils.c"
# 3989 "./common-utils.c"
                , __FUNCTION__,
 3990
# 3989 "./common-utils.c"
                , GF_LOG_DEBUG, 0, 0, 0, "Failed to open directory %s. " "Reason : %s", delete_path, strerror ((*__errno_location ()))); } while (0)
                                                                           ;
                ret = 0;
                goto out;
        }

        do { entry = ((void *)0); if (dir) { entry = sys_readdir (dir); while (entry && (!strcmp (entry->d_name, ".") || !fnmatch ("*.tmp", entry->d_name, 0) || !strcmp (entry->d_name, ".."))) { entry = sys_readdir (dir); } } } while (0);
        while (entry) {
                snprintf (path, 4096, "%s/%s", delete_path, entry->d_name);
                ret = sys_lstat (path, &st);
                if (ret == -1) {
                        do { _gf_msg (this->name,
 "./common-utils.c"
# 4000 "./common-utils.c"
                        , __FUNCTION__,
 4001
# 4000 "./common-utils.c"
                        , GF_LOG_DEBUG, 0, 0, 0, "Failed to stat entry %s :" " %s", path, strerror ((*__errno_location ()))); } while (0)
                                                                    ;
                        goto out;
                }

                if (((((st.st_mode)) & 0170000) == (0040000)))
                        ret = recursive_rmdir (path);
                else
                        ret = sys_unlink (path);

                if (ret) {
                        do { _gf_msg (this->name,
 "./common-utils.c"
# 4011 "./common-utils.c"
                        , __FUNCTION__,
 4012
# 4011 "./common-utils.c"
                        , GF_LOG_DEBUG, 0, 0, 0, " Failed to remove %s. " "Reason : %s", path, strerror ((*__errno_location ()))); } while (0)
                                                                            ;
                }

                do { _gf_msg (this->name,
 "./common-utils.c"
# 4015 "./common-utils.c"
                , __FUNCTION__,
 4016
# 4015 "./common-utils.c"
                , GF_LOG_DEBUG, 0, 0, 0, "%s %s", ret ? "Failed to remove" : "Removed", entry->d_name); } while (0)
                                                                            ;

                do { entry = ((void *)0); if (dir) { entry = sys_readdir (dir); while (entry && (!strcmp (entry->d_name, ".") || !fnmatch ("*.tmp", entry->d_name, 0) || !strcmp (entry->d_name, ".."))) { entry = sys_readdir (dir); } } } while (0);
        }

        ret = sys_closedir (dir);
        if (ret) {
                do { _gf_msg (this->name,
 "./common-utils.c"
# 4023 "./common-utils.c"
                , __FUNCTION__,
 4024
# 4023 "./common-utils.c"
                , GF_LOG_DEBUG, 0, 0, 0, "Failed to close dir %s. Reason :" " %s", delete_path, strerror ((*__errno_location ()))); } while (0)
                                                                   ;
        }

        ret = sys_rmdir (delete_path);
        if (ret) {
                do { _gf_msg (this->name,
 "./common-utils.c"
# 4029 "./common-utils.c"
                , __FUNCTION__,
 4030
# 4029 "./common-utils.c"
                , GF_LOG_DEBUG, 0, 0, 0, "Failed to rmdir: %s,err: %s", delete_path, strerror ((*__errno_location ()))); } while (0)
                                                            ;
        }

out:
        return ret;
}






int
gf_get_index_by_elem (char **array, char *elem)
{
        int i = 0;

        for (i = 0; array[i]; i++) {
                if (strcmp (elem, array[i]) == 0)
                        return i;
        }

        return -1;
}

static int
get_pathinfo_host (char *pathinfo, char *hostname, size_t size)
{
        char *start = ((void *)0);
        char *end = ((void *)0);
        int ret = -1;
        int i = 0;

        if (!pathinfo)
                goto out;

        start = strchr (pathinfo, ':');
        if (!start)
                goto out;

        end = strrchr (pathinfo, ':');
        if (start == end)
                goto out;

        memset (hostname, 0, size);
        i = 0;
        while (++start != end)
                hostname[i++] = *start;
        ret = 0;
out:
        return ret;
}


int
glusterfs_is_local_pathinfo (char *pathinfo, gf_boolean_t *is_local)
{
        int ret = 0;
        char pathinfohost[1024] = {0};
        char localhost[1024] = {0};

        *is_local = _gf_false;
        ret = get_pathinfo_host (pathinfo, pathinfohost, sizeof (pathinfohost));
        if (ret)
                goto out;

        ret = gethostname (localhost, sizeof (localhost));
        if (ret)
                goto out;

        if (!strcmp (localhost, pathinfohost))
                *is_local = _gf_true;
out:
        return ret;
}

ssize_t
gf_nread (int fd, void *buf, size_t count)
{
        ssize_t ret = 0;
        ssize_t read_bytes = 0;

        for (read_bytes = 0; read_bytes < count; read_bytes += ret) {
                ret = sys_read (fd, buf + read_bytes, count - read_bytes);
                if (ret == 0) {
                        break;
                } else if (ret < 0) {
                        if ((*__errno_location ()) == 4)
                                ret = 0;
                        else
                                goto out;
                }
        }

        ret = read_bytes;
out:
        return ret;
}

ssize_t
gf_nwrite (int fd, const void *buf, size_t count)
{
        ssize_t ret = 0;
        ssize_t written = 0;

        for (written = 0; written != count; written += ret) {
                ret = sys_write (fd, buf + written, count - written);
                if (ret < 0) {
                        if ((*__errno_location ()) == 4)
                                ret = 0;
                        else
                                goto out;
                }
        }

        ret = written;
out:
        return ret;
}

void
_mask_cancellation (void)
{
        (void) pthread_setcancelstate (PTHREAD_CANCEL_DISABLE, ((void *)0));
}

void
_unmask_cancellation (void)
{
        (void) pthread_setcancelstate (PTHREAD_CANCEL_ENABLE, ((void *)0));
}


const char *
fop_enum_to_pri_string (glusterfs_fop_t fop)
{
        switch (fop) {
        case GF_FOP_OPEN:
        case GF_FOP_STAT:
        case GF_FOP_FSTAT:
        case GF_FOP_LOOKUP:
        case GF_FOP_ACCESS:
        case GF_FOP_READLINK:
        case GF_FOP_OPENDIR:
        case GF_FOP_STATFS:
        case GF_FOP_READDIR:
        case GF_FOP_READDIRP:
                return "HIGH";

        case GF_FOP_CREATE:
        case GF_FOP_FLUSH:
        case GF_FOP_LK:
        case GF_FOP_INODELK:
        case GF_FOP_FINODELK:
        case GF_FOP_ENTRYLK:
        case GF_FOP_FENTRYLK:
        case GF_FOP_UNLINK:
        case GF_FOP_SETATTR:
        case GF_FOP_FSETATTR:
        case GF_FOP_MKNOD:
        case GF_FOP_MKDIR:
        case GF_FOP_RMDIR:
        case GF_FOP_SYMLINK:
        case GF_FOP_RENAME:
        case GF_FOP_LINK:
        case GF_FOP_SETXATTR:
        case GF_FOP_GETXATTR:
        case GF_FOP_FGETXATTR:
        case GF_FOP_FSETXATTR:
        case GF_FOP_REMOVEXATTR:
        case GF_FOP_FREMOVEXATTR:
        case GF_FOP_IPC:
                return "NORMAL";

        case GF_FOP_READ:
        case GF_FOP_WRITE:
        case GF_FOP_FSYNC:
        case GF_FOP_TRUNCATE:
        case GF_FOP_FTRUNCATE:
        case GF_FOP_FSYNCDIR:
        case GF_FOP_XATTROP:
        case GF_FOP_FXATTROP:
        case GF_FOP_RCHECKSUM:
        case GF_FOP_ZEROFILL:
        case GF_FOP_FALLOCATE:
        case GF_FOP_SEEK:
                return "LOW";

        case GF_FOP_NULL:
        case GF_FOP_FORGET:
        case GF_FOP_RELEASE:
        case GF_FOP_RELEASEDIR:
        case GF_FOP_GETSPEC:
        case GF_FOP_MAXVALUE:
        case GF_FOP_DISCARD:
                return "LEAST";
        }
        return "UNKNOWN";
}

const char *
fop_enum_to_string (glusterfs_fop_t fop)
{
        static const char *const str_map[] = {
                "NULL",
                "STAT",
                "READLINK",
                "MKNOD",
                "MKDIR",
                "UNLINK",
                "RMDIR",
                "SYMLINK",
                "RENAME",
                "LINK",
                "TRUNCATE",
                "OPEN",
                "READ",
                "WRITE",
                "STATFS",
                "FLUSH",
                "FSYNC",
                "SETXATTR",
                "GETXATTR",
                "REMOVEXATTR",
                "OPENDIR",
                "FSYNCDIR",
                "ACCESS",
                "CREATE",
                "FTRUNCATE",
                "FSTAT",
                "LK",
                "LOOKUP",
                "READDIR",
                "INODELK",
                "FINODELK",
                "ENTRYLK",
                "FENTRYLK",
                "XATTROP",
                "FXATTROP",
                "FGETXATTR",
                "FSETXATTR",
                "RCHECKSUM",
                "SETATTR",
                "FSETATTR",
                "READDIRP",
                "FORGET",
                "RELEASE",
                "RELEASEDIR",
                "GETSPEC",
                "FREMOVEXATTR",
                "FALLOCATE",
                "DISCARD",
                "ZEROFILL",
                "IPC",
                "MAXVALUE"};
        if (fop <= GF_FOP_MAXVALUE)
                return str_map[fop];

        return "UNKNOWNFOP";
}
