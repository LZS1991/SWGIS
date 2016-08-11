/***************************************************************************
    qgsvectorrandomcolorrampv2dialog.h
    ---------------------
    begin                : December 2009
    copyright            : (C) 2009 by Martin Dobias
    email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSVECTORRANDOMCOLORRAMPV2DIALOG_H
#define QGSVECTORRANDOMCOLORRAMPV2DIALOG_H

#include <QDialog>

#include "ui_swgisvectorrandomcolorrampv2dialogbase.h"
#include "stgisguiconfig.h"
class QgsVectorRandomColorRampV2;

class SWGISGUI_EXPORT QgsVectorRandomColorRampV2Dialog : public QDialog, private Ui::VectorRandomColorRampV2DialogBase
{
    Q_OBJECT

  public:
    QgsVectorRandomColorRampV2Dialog( QgsVectorRandomColorRampV2* ramp, QWidget* parent = nullptr );

  public slots:
    void setCount( int val );
    void setHue1( int val );
    void setHue2( int val );
    void setSat1( int val );
    void setSat2( int val );
    void setVal1( int val );
    void setVal2( int val );

  protected:

    void updatePreview();

    QgsVectorRandomColorRampV2* mRamp;
};

#endif
