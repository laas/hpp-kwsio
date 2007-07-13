# Research carried out within the scope of the Associated
# International Laboratory: Joint Japanese-French Robotics Laboratory
# (JRL)
#
# Author: Mathieu POIRIER
#

SUBDIRS = \
	src 	\
	doc	\
	include 

kwsPlusdir = $(libdir)/pkgconfig
kwsPlus_DATA = kwsIO.pc

install-data-hook: documentation

documentation:
	cd doc; $(MAKE) install
