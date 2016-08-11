/***************************************************************************
    qgsphotoconfigdlg.h
     --------------------------------------
    Date                 : 5.1.2014
    Copyright            : (C) 2014 Matthias Kuhn
    Email                : matthias at opengis dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSPHOTOCONFIGDLG_H
#define QGSPHOTOCONFIGDLG_H

#include "ui_swgisphotoconfigdlgbase.h"

#include "./core/qgseditorconfigwidget.h"

/** \class QgsPhotoConfigDlg
 * \note not available in Python bindings
 */

class SWGISGUI_EXPORT QgsPhotoConfigDlg : public QgsEditorConfigWidget, private Ui::PhotoConfigDlgBase
{
    Q_OBJECT

  public:
    explicit QgsPhotoConfigDlg( QgsVectorLayer* vl, int fieldIdx, QWidget *parent = nullptr );

    // QgsEditorConfigWidget interface
  public:
    QgsEditorWidgetConfig config() override;
    void setConfig( const QgsEditorWidgetConfig& config ) override;
};

#endif // QGSPHOTOCONFIGDLG_H
