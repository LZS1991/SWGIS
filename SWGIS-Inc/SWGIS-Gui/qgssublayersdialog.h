/***************************************************************************
    qgssublayersdialog.h  - dialog for selecting sublayers
    ---------------------
    begin                : January 2009
    copyright            : (C) 2009 by Florian El Ahdab
    email                : felahdab at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSSUBLAYERSDIALOG_H
#define QGSSUBLAYERSDIALOG_H

#include <QDialog>
#include <ui_swgissublayersdialogbase.h>
#include "qgscontexthelp.h"
#include "stgisguiconfig.h"

class SWGISGUI_EXPORT QgsSublayersDialog : public QDialog, private Ui::SublayersDialogBase
{
    Q_OBJECT
  public:

    enum ProviderType
    {
      Ogr,
      Gdal,
      Vsifile
    };

    QgsSublayersDialog( ProviderType providerType, const QString& name, QWidget* parent = nullptr, const Qt::WindowFlags& fl = nullptr );
    ~QgsSublayersDialog();

    void populateLayerTable( const QStringList& theList, const QString& delim = ":" );
    // Returns list of selected layers, if there are more layers with the same name,
    // geometry type is appended separated by semicolon, example: <layer>:<geometryType>
    QStringList selectionNames();
    QList<int> selectionIndexes();

  public slots:
    void on_buttonBox_helpRequested() { QgsContextHelp::run( metaObject()->className() ); }
    int exec();

  protected:
    QString mName;
    QStringList mSelectedSubLayers;
};

#endif
