/* libplatform/config.h.  Generated from config.h.in by configure.  */
/* libplatform/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* libtool defines DLL_EXPORT for windows dll
   builds, but we use MP4V2_EXPORTS instead. */
#ifdef DLL_EXPORT
# define MP4V2_EXPORTS
#else
# define MP4V2_USE_STATIC_LIB
#endif

/* Define to 1 if LFS should be activated */
/* #undef NEED_LFS_ACTIVATION */

/* Name of package */
#define PACKAGE "mp4v2"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "support@mp4v2.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "MP4v2"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "MP4v2 2.1.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "mp4v2"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://mp4v2.org"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.1.2"

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "2.1.2"
