/* include/config.h.  Generated from config.h.in by configure.  */
/* include/config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef	CONFIG_H
#define	CONFIG_H	1


/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `index' function. */
#define HAVE_INDEX 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <libutil.h> header file. */
#define HAVE_LIBUTIL_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <malloc.h> header file. */
/* #undef HAVE_MALLOC_H */

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `openpty' function. */
#define HAVE_OPENPTY 1

/* "define this if your o/s has /dev/ptmx" */
/* #undef HAVE_PTMX */

/* "define this for OSF/1 ptmx" */
/* #undef HAVE_PTMX_OSF */

/* Define to 1 if you have the `ptsname' function. */
/* #undef HAVE_PTSNAME */

/* Define to 1 if you have the <pty.h> header file. */
/* #undef HAVE_PTY_H */

/* Define to 1 if you have the `rindex' function. */
#define HAVE_RINDEX 1

/* Define to 1 if you have the <siginfo.h> header file. */
/* #undef HAVE_SIGINFO_H */

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if cpp supports the ANSI # stringizing operator. */
#define HAVE_STRINGIZE 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <stropts.h> header file. */
/* #undef HAVE_STROPTS_H */

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strrtok' function. */
/* #undef HAVE_STRRTOK */

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtok' function. */
#define HAVE_STRTOK 1

/* Define to 1 if you have the <sysexits.h> header file. */
#define HAVE_SYSEXITS_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define to 1 if you have the <wait.h> header file. */
/* #undef HAVE_WAIT_H */

/* Name of package */
#define PACKAGE "rancid"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "rancid@shrubbery.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "rancid"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "rancid 3.5.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "rancid"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.5.1"

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "3.5.1"

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */



/* damned linux... */
#ifdef LINUX
# define _GNU_SOURCE
#endif

#ifndef __P
# if STDC_HEADERS
#  define __P(a)	a
# else
#  define __P(a)	()
# endif
#endif

#if HAVE_STDLIB_H
# include <stdlib.h>
#endif

#if HAVE_UNISTD_H
# include <unistd.h>
# include <sys/types.h>
#elif HAVE_SYS_TYPES_H
# include <sys/types.h>
#endif

#if HAVE_ERRNO_H
# include <errno.h>
#endif
extern int		errno;

#if HAVE_STRING_H
# include <string.h>
#endif
#if HAVE_STRINGS_H
# include <strings.h>
#endif

#if ! HAVE_STRERROR
# define strerror(n)	sys_errlist[n];
#endif

#if HAVE_WAIT_H
# include <wait.h>
#elif HAVE_SYS_WAIT_H
# include <sys/wait.h>
#endif
#ifndef WEXITSTATUS
# define WEXITSTATUS(stat_val) ((unsigned)(stat_val) >> 8)
#endif
#ifndef WIFEXITED
# define WIFEXITED(stat_val) (((stat_val) & 255) == 0)
#endif

#if HAVE_SYSEXITS_H
# include <sysexits.h>
#else
					/* missing sysexits.h */
# define EX_OK		0
# define EX_USAGE	64		/* command line usage error */
# define EX_NOINPUT	66		/* cannot open input */
# define EX_TEMPFAIL	75		/* temp failure */
# define EX_OSERR	71		/* system error */
# define EX_CANTCREAT	73		/* can't create (user) output file */
# define EX_IOERR	74		/* input/output error */
# define EX_CONFIG	78		/* configuration error */
#endif

#endif	/* CONFIG_H */

