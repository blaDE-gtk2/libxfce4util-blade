/* $Id$ */
/*-
 * Copyright (c) 2003      Olivier Fourdan <fourdan@xfce.org>
 * Copyright (c) 2003-2006 Benedikt Meurer <benny@xfce.org>
 * All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 */

#if !defined(LIBBLADEUTIL_INSIDE_LIBBLADEUTIL_H) && !defined(LIBBLADEUTIL_COMPILATION)
#error "Only <libbladeutil/libbladeutil.h> can be included directly, this file may disappear or change contents"
#endif

#ifndef __XFCE_UTF8_H__
#define __XFCE_UTF8_H__

#include <glib.h>

G_BEGIN_DECLS

gchar *xfce_utf8_remove_controls  (gchar       *str,
                                   gssize       max_len,
                                   const gchar *end);

gchar *xfce_utf8_strndup          (const gchar *src,
                                   gssize       max_len) G_GNUC_MALLOC;

G_END_DECLS

#endif /* !__XFCE_UTF8_H__ */
