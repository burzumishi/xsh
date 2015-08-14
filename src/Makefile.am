#!@ENV@ make -f

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

CC = gcc
CPP = cpp
CXX = g++

ARCH = `uname -m`

localedir = $(datadir)/locale
DEFS = -DLOCALEDIR=\"$(localedir)\" @DEFS@

CLEANFILES = *~ *.o *.lo *.la *.a *.so xsh.h \
xsh$(EXEEXT) stamp-h1

# Build binaries #

# bin/xsh #
bin_PROGRAMS = xsh$(EXEEXT)

# Build Shared libraries #

# lib/libxsh-*.la (static libs) #
noinst_LTLIBRARIES = \
libxsh.la libxsh-i18n.la 

# libxsh #

libxsh_la_CXXFLAGS = -Wl,-rpath
libxsh_la_CFLAGS = -Wl,-rpath
libxsh_la_LDFLAGS = -Wl,-rpath $(LTLIBINTL)

libxsh_la_SOURCES = libxsh.c

# libxsh-i18n #

libxsh_i18n_la_CXXFLAGS = -Wl,-rpath
libxsh_i18n_la_CFLAGS = -Wl,-rpath
libxsh_i18n_la_LDFLAGS = -Wl,-rpath $(LTLIBINTL)

libxsh_i18n_la_SOURCES = libxsh-i18n.c

# bin/xsh #

xsh_CXXFLAGS = -Wl,-rpath
xsh_CFLAGS = -Wl,-rpath
xsh_LDFLAGS = -Wl,-rpath $(LTLIBINTL)

xsh_SOURCES = xsh.c

xsh_LDADD = \
libxsh.la \
libxsh-i18n.la

# Source Code Headers #

include_HEADERS = \
xsh.h libxsh.h libxsh-i18n.h gettext.h 

