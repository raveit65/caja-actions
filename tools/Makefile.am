# Caja-Actions
# A Caja extension which offers configurable context menu actions.
#
# Copyright (C) 2005 The GNOME Foundation
# Copyright (C) 2006-2008 Frederic Ruaudel and others (see AUTHORS)
# Copyright (C) 2009-2012 Pierre Wieser and others (see AUTHORS)
# Copyright (C) 2012-2017 Wolfgang Ulbrich and others (see AUTHORS)
#
# Caja-Actions is free software; you can redistribute it and/or
# modify it under the terms of the GNU General  Public  License  as
# published by the Free Software Foundation; either  version  2  of
# the License, or (at your option) any later version.
#
# Caja-Actions is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even  the  implied  warranty  of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See  the  GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public  License
# along with Caja-Actions; see the file  COPYING.  If  not,  see
# <http://www.gnu.org/licenses/>.
#
# Authors:
#   Frederic Ruaudel <grumz@grumz.net>
#   Rodrigo Moya <rodrigo@mate-db.org>
#   Pierre Wieser <pwieser@trychlos.org>
#   ... and many others (see AUTHORS)

noinst_PROGRAMS = \
	check-header												\
	$(NULL)

AM_CPPFLAGS += \
	-I $(top_srcdir)											\
	-I $(top_srcdir)/src										\
	$(CAJA_ACTIONS_CFLAGS)									\
	$(NULL)

check_header_SOURCES = \
	check-header.c												\
	$(NULL)

check_header_LDADD = \
	$(top_builddir)/src/core/libna-core.la						\
	$(CAJA_ACTIONS_LIBS)									\
	$(NULL)

# this is just a fake code to have the make behave well
check-header.c:
	[ -s $@ ] || echo "int main( int argc, char **argv ){ return 0; }" > $@
