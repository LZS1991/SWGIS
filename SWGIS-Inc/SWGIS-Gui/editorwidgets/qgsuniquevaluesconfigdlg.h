/***************************************************************************
    qgsuniquevaluesconfigdlg.h
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

#ifndef QGSUNIQUEVALUESCONFIGDLG_H
#define QGSUNIQUEVALUESCONFIGDLG_H

#include "ui_swgisuniquevaluesconfigdlgbase.h"

#include "./core/qgseditorconfigwidget.h"

/** \class QgsUniqueValuesConfigDlg
 * \note not available in Python bindings
 */

class SWGISGUI_EXPORT QgsUniqueValuesConfigDlg : public QgsEditorConfigWidget, private Ui::UniqueValuesConfigDlgBase
{
    Q_OBJECT

  public:
    explicit QgsUniqueValuesConfigDlg( QgsVectorLayer* vl, int fieldIdx, QWidget *parent = nullptr );

    // QgsEditorConfigWidget interface
  public:
    QgsEditorWidgetConfig config() override;
    void setConfig( const QgsEditorWidgetConfig& config ) override;
};

#endif // QGSUNIQUEVALUESCONFIGDLG_H