AUTOMAKE_OPTIONS = foreign

SUBDIRS = src

noinst_HEADERS = src/QC_TuxedoAdapter.h \
	src/QoreTuxedoAdapter.h
	src/tuxedo_module.h

EXTRA_DIST = COPYING ChangeLog AUTHORS README \
	qore-tuxedo-module.spec docs/tuxedo-module-doc.html

libtool: $(LIBTOOL_DEPS)
	$(SHELL) ./config.status --recheck
