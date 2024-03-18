dnl # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
dnl #
dnl #              C E D A R
dnl #          S O L U T I O N S       "Software done right."
dnl #           S O F T W A R E
dnl #
dnl # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
dnl #
dnl # Copyright (c) 2000-2004,2007,2013,2014,2020,2024 Kenneth J. Pronovici.
dnl # All rights reserved.
dnl #
dnl # This program is free software; you can redistribute it and/or
dnl # modify it under the terms of the GNU General Public License,
dnl # Version 2, as published by the Free Software Foundation.
dnl #
dnl # This program is distributed in the hope that it will be useful,
dnl # but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl # MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
dnl #
dnl # Copies of the GNU General Public License are available from
dnl # the Free Software Foundation website, http://www.gnu.org/.
dnl #
dnl # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
dnl #
dnl # Author   : Kenneth J. Pronovici <pronovic@ieee.org>
dnl # Language : N/A
dnl # Project  : banner
dnl # Package  : N/A
dnl # Purpose  : Autoconf configure source script.
dnl #
dnl # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

dnl Process this file with autoconf to produce a configure script.

AC_INIT([Banner],[1.3.6])
AC_CONFIG_SRCDIR([banner.c])
AM_INIT_AUTOMAKE

AC_CONFIG_HEADERS(config.h)

AC_SUBST(PACKAGE_NAME)
AC_SUBST(PACKAGE)
AC_SUBST(VERSION)

dnl Checks for programs.
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL

AC_CHECK_HEADERS([stdlib.h string.h ctype.h])

dnl Output these files
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
