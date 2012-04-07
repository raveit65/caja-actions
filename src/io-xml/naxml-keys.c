/*
 * Caja Actions
 * A Caja extension which offers configurable context menu actions.
 *
 * Copyright (C) 2005 The MATE Foundation
 * Copyright (C) 2006, 2007, 2008 Frederic Ruaudel and others (see AUTHORS)
 * Copyright (C) 2009, 2010 Pierre Wieser and others (see AUTHORS)
 *
 * This Program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This Program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this Library; see the file COPYING.  If not,
 * write to the Free Software Foundation, Inc., 59 Temple Place,
 * Suite 330, Boston, MA 02111-1307, USA.
 *
 * Authors:
 *   Frederic Ruaudel <grumz@grumz.net>
 *   Rodrigo Moya <rodrigo@mate-db.org>
 *   Pierre Wieser <pwieser@trychlos.org>
 *   ... and many others (see AUTHORS)
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "naxml-keys.h"

NAXMLKeyStr naxml_schema_key_schema_str [] = {
		{ NAXML_KEY_SCHEMA_NODE_KEY,             TRUE,  TRUE, FALSE },
		{ NAXML_KEY_SCHEMA_NODE_APPLYTO,         TRUE,  TRUE, FALSE },
		{ NAXML_KEY_SCHEMA_NODE_OWNER,           TRUE, FALSE, FALSE },
		{ NAXML_KEY_SCHEMA_NODE_TYPE,            TRUE,  TRUE, FALSE },
		{ NAXML_KEY_SCHEMA_NODE_LISTTYPE,        TRUE,  TRUE, FALSE },
		{ NAXML_KEY_SCHEMA_NODE_LOCALE,          TRUE,  TRUE, FALSE },
		{ NAXML_KEY_SCHEMA_NODE_DEFAULT,         TRUE,  TRUE, FALSE },
		{ NULL }
};

NAXMLKeyStr naxml_schema_key_locale_str [] = {
		{ NAXML_KEY_SCHEMA_NODE_LOCALE_DEFAULT,  TRUE,  TRUE, FALSE },
		{ NAXML_KEY_SCHEMA_NODE_LOCALE_SHORT,    TRUE, FALSE, FALSE },
		{ NAXML_KEY_SCHEMA_NODE_LOCALE_LONG,     TRUE, FALSE, FALSE },
		{ NULL }
};

NAXMLKeyStr naxml_dump_key_entry_str [] = {
		{ NAXML_KEY_DUMP_NODE_KEY,               TRUE,  TRUE, FALSE },
		{ NAXML_KEY_DUMP_NODE_VALUE,             TRUE,  TRUE, FALSE },
		{ NULL }
};