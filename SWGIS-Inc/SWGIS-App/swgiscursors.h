/***************************************************************************
                             qgscursors.h

                             -------------------
    begin                : 2007
    copyright            : (C) 2007 by Gary E. Sherman
    email                : sherman@mrcc.com
***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSCURSORS_H
#define QGSCURSORS_H
#include "stgisguiconfig.h"
/** \ingroup gui
 * Bitmap cursors for map operations.
 */
//也许存在一定问题，LZS2851
extern "C" const char *zoom_in[];
extern "C" const char *zoom_out[];

extern "C" const unsigned char pan_bits[];      // TODO QGIS3: Removeme
extern "C" const unsigned char pan_mask_bits[]; // TODO QGIS3: Removeme

extern "C" const char *capture_point_cursor[];
extern "C" const char *select_cursor[];
extern "C" const char *identify_cursor[];
extern "C" const char *cross_hair_cursor[];
extern "C" const char *sampler_cursor[];

#endif

