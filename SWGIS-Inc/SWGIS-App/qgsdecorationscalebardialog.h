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
#ifndef QGSSCALEBARPLUGINGUI_H
#define QGSSCALEBARPLUGINGUI_H

#include "ui_swgisdecorationscalebardialog.h"
#include "swgisappconfig.h"
#include <QDialog>

class QgsDecorationScaleBar;

/**
@author Peter Brewer
*/
class SWGISAPP_EXPORT QgsDecorationScaleBarDialog : public QDialog, private Ui::DecorationScaleBarDialog
{
    Q_OBJECT

  public:
    QgsDecorationScaleBarDialog( QgsDecorationScaleBar& deco, int units, QWidget* parent = nullptr );
    ~QgsDecorationScaleBarDialog();

  private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_buttonBox_helpRequested();
    void apply();

  protected:
    QgsDecorationScaleBar& mDeco;
};

#endif