dnl autoconf script for kwsIO libs
dnl
dnl   Research carried out within the scope of the Associated International Laboratory: Joint Japanese-French Robotics Laboratory (JRL)
dnl
dnl   Author: Mathieu Poirier LAAS-CNRS
dnl

AC_INIT([kwsIO],[1.0],[openrobots@laas.fr])
AC_PREREQ(2.59)

AM_INIT_AUTOMAKE
AC_PROG_INSTALL
AC_PROG_LIBTOOL

AC_PROG_CXX

dnl -- Kineo ---------------

PKG_CHECK_MODULES(KINEO_CONTROLLER, KineoController)
AC_SUBST(KINEO_CONTROLLER_CFLAGS)
AC_SUBST(KINEO_CONTROLLER_LIBS)

dnl ------ HPP package ------

AC_OUTPUT(Makefile
	src/Makefile
	include/Makefile
	doc/Makefile
	doc/kwsIO.dox
	kwsIO.pc
)
