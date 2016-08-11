/***************************************************************************
    qgsdashspacedialog.h
    ---------------------
    begin                : January 2010
    copyright            : (C) 2010 by Marco Hugentobler
    email                : marco at hugis dot net
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSDASHSPACEDIALOG_H
#define QGSDASHSPACEDIALOG_H

#include "ui_swgisdashspacedialogbase.h"
#include "stgisguiconfig.h"
/** A dialog to enter a custom dash space pattern for lines*/
class SWGISGUI_EXPORT QgsDashSpaceDialog: public QDialog, private Ui::DashSpaceDialogBase
{
    Q_OBJECT
  public:
    QgsDashSpaceDialog( const QVector<qreal>& v, QWidget * parent = nullptr, const Qt::WindowFlags& f = nullptr );
    ~QgsDashSpaceDialog();

    QVector<qreal> dashDotVector() const;

  private slots:
    void on_mAddButton_clicked();
    void on_mRemoveButton_clicked();
};

#endif // QGSDASHSPACEDIALOG_H
