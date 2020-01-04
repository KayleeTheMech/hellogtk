AC_PREREQ([2.68])
AC_INIT([hellogtk], [0.01], [kaylee@posteo.de])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([1.11 -Wall -Werror dist-bzip2])

AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_INSTALL
AM_PATH_GTK_3_0([3.22.13],,AC_MSG_ERROR([Gtk+ 3 or higher required.],))
AC_CONFIG_SRCDIR([src])
AC_CONFIG_HEADERS([src/config.h])
AC_CONFIG_FILES([
    Makefile 
    src/Makefile
    tests/Makefile
])
AC_OUTPUT
