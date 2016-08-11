/***************************************************************************
 *   Copyright (C) 2003 by Tim Sutton                                      *
 *   tim@linfiniti.com                                                     *
 *                                                                         *
 *   This is a plugin generated from the QGIS plugin template              *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/
#ifndef QGSNORTHARROWPLUGINGUI_H
#define QGSNORTHARROWPLUGINGUI_H

#include "ui_swgisdecorationnortharrowdialog.h"
#include "swgisappconfig.h"
class QgsDecorationNorthArrow;

class SWGISAPP_EXPORT QgsDecorationNorthArrowDialog : public QDialog, private Ui::DecorationNorthArrowDialog
{
    Q_OBJECT

  public:
    QgsDecorationNorthArrowDialog( QgsDecorationNorthArrow& deco, QWidget* parent = nullptr );
    ~QgsDecorationNorthArrowDialog();

  private:
    void rotatePixmap( int theRotationInt );
    void resizeEvent( QResizeEvent * ) override; //overloads qwidget

  private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_buttonBox_helpRequested();
    void on_spinAngle_valueChanged( int theInt );
    void on_sliderRotation_valueChanged( int theInt );
    void apply();

  protected:
    QgsDecorationNorthArrow& mDeco;
};

#endif
