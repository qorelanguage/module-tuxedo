if COND_SINGLE_COMPILATION_UNIT
TUXEDO_SOURCES =  single-compilation-unit.cc
else
TUXEDO_SOURCES =  tuxedo.cc \
  QC_TuxedoAdapter.cc \
  QoreTuxedoAdapter.cc 
endif

lib_LTLIBRARIES = tuxedo.la
tuxedo_la_SOURCES = $(TUXEDO_SOURCES)
tuxedo_la_LDFLAGS = -module -avoid-version ${TUXEDO_LIBS} 

INCLUDES = -I$(top_srcdir)/include $(TUXEDO_INCLUDES) 

AM_CPPFLAGS = $(QORE_CPPFLAGS)
AM_CXXFLAGS = $(TUXEDO_CPPFLAGS) ${PTHREAD_CFLAGS}

if COND_PROFILE
AM_CXXFLAGS += -g -pg
else
if COND_DEBUG
AM_CXXFLAGS += -g
endif
endif

install-exec-hook:
	mv $(DESTDIR)$(libdir)/tuxedo.$(MODULE_SUFFIX) $(DESTDIR)$(libdir)/tuxedo-api-$(MODULE_API).qmod
	rm -f $(DESTDIR)$(libdir)/tuxedo.la

