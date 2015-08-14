CLEANFILES = log.conf editor.conf env.conf *~

confddir = $(sysconfdir)/@PACKAGE@/conf.d
confd_DATA = editor.conf log.conf env.conf

do_subst = sed -e 's,[@]sharedstatedir[@],$(sharedstatedir),g' \
		-e 's,[@]localstatedir[@],$(localstatedir),g' \
		-e 's,[@]sysconfdir[@],$(sysconfdir),g' \
		-e 's,[@]prefix[@],$(prefix),g' \
		-e 's,[@]bindir[@],$(bindir),g' \
		-e 's,[@]sbindir[@],$(sbindir),g' \
		-e 's,[@]libdir[@],$(libdir),g' \
		-e 's,[@]mandir[@],$(mandir),g' \
		-e 's,[@]PERL[@],$(PERL),g' \
		-e 's,[@]ENV[@],$(ENV),g' \
		-e 's,[@]BASH[@],$(BASH),g' \
		-e 's,[@]PACKAGE[@],$(PACKAGE),g' \
		-e 's,[@]VERSION[@],$(VERSION),g' \
		-e 's,[@]DESCRIPTION[@],$(DESCRIPTION),g'

log.conf: log.conf.in Makefile
	$(do_subst) < $(srcdir)/log.conf.in > log.conf;

editor.conf: editor.conf.in Makefile
	$(do_subst) < $(srcdir)/editor.conf.in > editor.conf;

env.conf: env.conf.in Makefile
	$(do_subst) < $(srcdir)/env.conf.in > env.conf;

all-local: log.conf editor.conf env.conf
