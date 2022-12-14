#ifndef EMC2_CONFIG_H
#define EMC2_CONFIG_H
/* LINELEN is used throughout for buffer sizes, length of file name strings,
                                                     etc. Lets just have one instead of a multitude of defines all the same. */
#define LINELEN 255
/* Used in a number of places for sprintf() buffers. */
#define BUFFERLEN 80

#define MM_PER_INCH 25.4
#define INCH_PER_MM (1.0/25.4)

/* Directory for binaries */
#define EMC2_BIN_DIR "/home/user/hal-core-2.0/bin"

/* Directory for configuration files */
#define EMC2_CONFIG_DIR ""

/* Default nml file */
#define EMC2_DEFAULT_NMLFILE ""

/* Default nml file */
#define EMC2_DEFAULT_TOOLTABLE ""

/* Directory for help files */
#define EMC2_HELP_DIR ""

/* Prefix or RIP directory */
#define EMC2_HOME "/home/user/hal-core-2.0"

/* Directory for images */
#define EMC2_IMAGE_DIR "/home/user/hal-core-2.0"

/* Directory for tcl translation files */
#define EMC2_LANG_DIR ""

/* Directory for nc files */
#define EMC2_NCFILES_DIR ""

/* Directory for po/mo translation files */
#define EMC2_PO_DIR ""

/* Directory of realtime system */
#define EMC2_RTLIB_DIR "/home/user/hal-core-2.0/rtlib"

/* Directory for tcl scripts */
#define EMC2_TCL_DIR ""

/* define if the Boost::Python headers and library are available */
#define HAVE_BOOST_PYTHON 1

/* Define to 1 if clock_nanosleep is available (in -lc or -lrt) */
#define HAVE_CLOCK_NANOSLEEP 1

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define to 1 if you have the <GL/glu.h> header file. */
#define HAVE_GL_GLU_H 1

/* Define to 1 if you have the <GL/gl.h> header file. */
#define HAVE_GL_GL_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the GL library (-lGL). */
#define HAVE_LIBGL 1

/* Define to 1 if you have the intl library (-lintl). */
/* #undef HAVE_LIBINTL */

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* define if the libmodbus3 headers and library are available */
#define HAVE_LIBMODBUS3 yes

/* Define to 1 if you have the tirpc library (-ltirpc). */
/* #undef HAVE_LIBTIRPC */

/* define if the libusb-1.0 headers and library are available */
#define HAVE_LIBUSB10 yes

/* Define to 1 if you have the Xinerama library (-lXinerama). */
#define HAVE_LIBXINERAMA 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if getopt has the BSD optreset extension */
/* #undef HAVE_OPTRESET */

/* Define to 1 if you have the readline library (-lreadline) and required
                                                     headers */
#define HAVE_READLINE /**/

/* Define to 1 if you have the <readline/history.h> header file. */
#define HAVE_READLINE_HISTORY_H 1

/* Define to 1 if you have the <readline/readline.h> header file. */
#define HAVE_READLINE_READLINE_H 1

/* Define to 1 if you have the semtimedop function. */
#define HAVE_SEMTIMEDOP 1

/* Define to 1 if you have the setlocale function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/io.h> header file. */
#define HAVE_SYS_IO_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <tcl.h> header file. */
/* #undef HAVE_TCL_H */

/* Define to 1 if you have the <tk.h> header file. */
/* #undef HAVE_TK_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <X11/extensions/Xinerama.h> header file. */
#define HAVE_X11_EXTENSIONS_XINERAMA_H 1

/* Define to 1 if you have the <X11/Xmu/Xmu.h> header file. */
#define HAVE_X11_XMU_XMU_H 1

/* Define to 1 if linux/hidraw.h is usable and defines HIDIOCGRAWINFO */
#define HIDRAW_H_USABLE /**/

/* Define to the library that dlopen comes from, if it is not a part of libc
                                                     */
#define LIBDL 

/* Extension for realtime modules */
#define MODULE_EXT ".so"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "emc-developers@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "hal-core"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "hal-core.2.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "halcore"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.0"

/* Realtime system is userspace */
#define RTAPI_USPACE /**/

/* Directory of the installed realtime system */
#define RTDIR "/home/user/hal-core-2.0/rtlib"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE
#endif

#endif

