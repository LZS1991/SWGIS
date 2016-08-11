/***************************************************************************
    qgsdatetimeeditconfig.h
     --------------------------------------
    Date                 : 03.2014
    Copyright            : (C) 2014 Denis Rouzaud
    Email                : denis.rouzaud@gmail.com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSDATETIMEEDITCONFIG_H
#define QGSDATETIMEEDITCONFIG_H

#include "./core/qgseditorconfigwidget.h"
#include "ui_swgisdatetimeeditconfig.h"

/** \class QgsDateTimeEditConfig
 * \note not available in Python bindings
 */

class SWGISGUI_EXPORT QgsDateTimeEditConfig : public QgsEditorConfigWidget, private Ui::DateTimeEditConfig
{
    Q_OBJECT
  public:
    QgsDateTimeEditConfig( QgsVectorLayer* vl, int fieldIdx, QWidget* parent = nullptr );

  private slots:
    void updateDemoWidget();
    void updateFieldFormat( int idx );
    void updateDisplayFormat( const QString& fieldFormat );
    void displayFormatChanged( int idx );
    void showHelp( bool buttonChecked );

    // QgsEditorConfigWidget interface
  public:
    QgsEditorWidgetConfig config() override;
    void setConfig( const QgsEditorWidgetConfig &config ) override;
};

#endif // QGSDATETIMEEDITCONFIG_H