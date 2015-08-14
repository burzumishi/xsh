#   ___________________________________________________________________________
#  //            /                                                            \\
# [|_____________\     *****     *****     *************   *****     *****     |]
# [|   \\._.//   /     ******   ******    *************    *****     *****     |]
# [|   (0...0)   \     ******* *******   *************     *****     *****     |]
# [|    ).:.(    /      *************    ******            *****     *****     |]
# [|    {o o}    \       ***********     **************    ***************     |]
# [|   / ' ' \   /       ***********      **************   ***************     |]
# [|-'- /   \ -`-\      *************             ******   *****     *****     |]
# [|   .VxvxV.   /     ******* *******     *************   *****     *****     |]
# [|_____________\     ******   ******    *************    *****     *****     |]
# [|             /     *****     *****   *************     *****     *****     |]
#  \\____________\____________________________________________________________//
#     |                                                                     |
#     |                      --{ Uni[X] [S]hell }--                         |
#     |_____________________________________________________________________|
#     |                                                                     |
#     |                          -*- Makefile -*-                           |
#     |_____________________________________________________________________|
#    //                                                                     \\
#   [|  XSH 2.0 © 2015 Antonio Cao (@burzumishi)                             |]
#    \\_____________________________________________________________________//

CLEANFILES = xsh.conf xshrc *~

SUBDIRS = conf.d

etcdir = $(sysconfdir)
etc_DATA = xshrc

gshetcdir = $(sysconfdir)/@PACKAGE@
gshetc_DATA = xsh.conf

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

xsh.conf: xsh.conf.in Makefile
	$(do_subst) < $(srcdir)/xsh.conf.in > xsh.conf

xshrc: xshrc.in Makefile
	$(do_subst) < $(srcdir)/xshrc.in > xshrc

all-local: xsh.conf xshrc
