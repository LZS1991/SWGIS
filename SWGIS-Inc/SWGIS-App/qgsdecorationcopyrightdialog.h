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
#ifndef QGSCOPYRIGHTLABELPLUGINGUI_H
#define QGSCOPYRIGHTLABELPLUGINGUI_H

#include "ui_swgisdecorationcopyrightdialog.h"
#include "swgisappconfig.h"
class QColor;
class QFont;

class QgsDecorationCopyright;

class SWGISAPP_EXPORT QgsDecorationCopyrightDialog : public QDialog, private Ui::DecorationCopyrightDialog
{
    Q_OBJECT

  public:
    QgsDecorationCopyrightDialog( QgsDecorationCopyright& deco, QWidget* parent = nullptr );
    ~QgsDecorationCopyrightDialog();

  private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_buttonBox_helpRequested();
    void on_pbnColorChooser_colorChanged( const QColor& c );
    void apply();

  protected:
    QgsDecorationCopyright& mDeco;
};

#endif
