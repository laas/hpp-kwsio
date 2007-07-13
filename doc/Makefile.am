# Research carried out within the scope of the Associated
# International Laboratory: Joint Japanese-French Robotics Laboratory
# (JRL)
#
# Author: Florent Lamiraux
#

kwsIOdir = $(datadir)/doc/kwsIO

EXTRA_DIST = \
	footer.html \
	header.html \
	kwsIO.css


install: html-doc
	mkdir -p $(kwsIOdir)
	$(INSTALL_DATA) html/* $(kwsIOdir)
	mkdir -p $(datadir)/doc/doxytag
	$(INSTALL_DATA) kwsIO.doxytag $(datadir)/doc/doxytag

html-doc: kwsIO.dox
	doxygen $<
