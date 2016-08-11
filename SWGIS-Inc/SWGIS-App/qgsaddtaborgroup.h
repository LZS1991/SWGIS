/***************************************************************************
                          qgsaddtaborgroup.h
        Add a tab or a group for the tab and group display of fields
                             -------------------
    begin                : 2012-07-30
    copyright            : (C) 2012 by Denis Rouzaud
    email                : denis dot rouzaud at gmail dot com
***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSADDTABORGROUP
#define QGSADDTABORGROUP

#include "ui_swgisaddtaborgroupbase.h"
#include "qgisgui.h"
#include "swgisappconfig.h"
class QTreeWidgetItem;
class QgsVectorLayer;

class SWGISAPP_EXPORT QgsAddTabOrGroup : public QDialog, private Ui::AddTabOrGroupBase
{
    Q_OBJECT

  public:
    typedef QPair<QString, QTreeWidgetItem*> TabPair;

  public:
    QgsAddTabOrGroup( QgsVectorLayer *lyr, const QList<TabPair>& tabList, QWidget *parent = nullptr );
    ~QgsAddTabOrGroup();

    QString name();

    QTreeWidgetItem* tab();

    bool tabButtonIsChecked();

  public slots:
    void on_mGroupButton_toggled( bool checked );
    void on_mTabButton_toggled( bool checked );

  protected:
    QgsVectorLayer *mLayer;
    QList< TabPair > mTabs;
};

#endif