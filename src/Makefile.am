# Research carried out within the scope of the Associated
# International Laboratory: Joint Japanese-French Robotics Laboratory
# (JRL)
#
# Author: Mathieu Poirier
#

lib_LTLIBRARIES = libkwsIO.la
libkwsIO_la_SOURCES = \
	kwsioMat.cpp \
	kwsioConfig.cpp \
	kwsioPath.cpp \
	kwsioDevice.cpp 

libkwsIO_la_CPPFLAGS = -I$(srcdir)/../include @KINEO_CONTROLLER_CFLAGS@
libkwsIO_la_LDFLAGS = \
	@KINEO_CONTROLLER_LIBS@ 	\
	-release ${PACKAGE_VERSION}
