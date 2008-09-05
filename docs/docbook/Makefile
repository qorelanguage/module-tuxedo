
SOURCES=bookinfo.docbook tuxedo-module.docbook

all: tuxedo-module-doc.html

tuxedo-module-doc.html: $(SOURCES)
	#docbook2html -u module.docbook
	xsltproc -o $@ driver.xsl module.docbook

