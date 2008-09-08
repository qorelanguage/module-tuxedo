AUTOMAKE_OPTIONS = foreign

SUBDIRS = src

noinst_HEADERS = src/QC_TuxedoAdapter.h \
	src/QoreTuxedoAdapter.h \
	src/tuxedo_module.h \
	src/minitest.hpp

EXTRA_DIST = COPYING ChangeLog AUTHORS README \
	qore-tuxedo-module.spec \
        docs/qore-style.css \
        docs/img/acrobat_a.gif \
        docs/img/acrobat.gif \
        docs/img/disk.gif \
        docs/img/qbullet-note_a.gif \
        docs/img/qbullet-note.gif \
        docs/img/remote_a.gif \
        docs/img/remote.gif \
        docs/img/scrollup_a.gif \
        docs/img/scrollup.gif \
        docs/img/word.gif \
	docs/tuxedo-module-doc.html

libtool: $(LIBTOOL_DEPS)
	$(SHELL) ./config.status --recheck
