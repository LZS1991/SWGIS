/***************************************************************************
                         qgsattributetypedialog.h  -  description
                             -------------------
    begin                : June 2009
    copyright            : (C) 2009 by Richard Kostecky
    email                : csf.kostej@gmail.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSATTRIBUTETYPEDIALOG_H
#define QGSATTRIBUTETYPEDIALOG_H

#include "ui_swgisattributetypeedit.h"

#include "qgsvectorlayer.h"
#include "qgseditorconfigwidget.h"
#include "swgisappconfig.h"
class QDialog;
class QLayout;
class QgsField;

class SWGISAPP_EXPORT QgsAttributeTypeDialog: public QDialog, private Ui::AttributeTypeDialog
{
    Q_OBJECT

  public:
    QgsAttributeTypeDialog( QgsVectorLayer *vl, int fieldIdx );
    ~QgsAttributeTypeDialog();

    /**
     * Setting index, which page should be selected
     * @param index of page to be selected
     * @param editTypeInt type of edit type which was selected before save
     */
    void setIndex( int index, QgsVectorLayer::EditType type );

    /**
     * Setting page which is to be selected
     * @param index index of page which was selected
     */
    void setPage( int index );

    /**
     * Getter to get selected edit type
     * @return selected edit type
     */
    QgsVectorLayer::EditType type();

    const QString editorWidgetV2Type();

    const QString editorWidgetV2Text();

    void setWidgetV2Type( const QString& type );

    const QgsEditorWidgetConfig editorWidgetV2Config();

    void setWidgetV2Config( const QgsEditorWidgetConfig& config );

    /**
     * Setter for checkbox to label on top
     * @param bool onTop
     */
    void setLabelOnTop( bool onTop );

    /**
     * Getter for checkbox for label on top of field
     */
    bool labelOnTop() const;

    /**
     * Setter for checkbox for editable state of field
     */
    void setFieldEditable( bool editable );

    /**
     * Getter for checkbox for editable state of field
     */
    bool fieldEditable() const;

    /**
     * Setter for checkbox for not null
     */
    void setNotNull( bool notNull );

    /**
     * Getter for checkbox for not null
     */
    bool notNull() const;

    /*
     * Setter for constraint expression description
     * @param desc the expression description
     * @note added in QGIS 2.16
     **/
    void setExpressionDescription( const QString &desc );

    /*
     * Getter for constraint expression description
     * @return the expression description
     * @note added in QGIS 2.16
     **/
    QString expressionDescription();

    /**
     * Getter for the constraint expression
     * @note added in QGIS 2.16
     */
    QString expression() const;

    /**
     * Setter for the constraint expression
     * @note added in QGIS 2.16
     */
    void setExpression( const QString &str );

  private slots:
    /**
     * Slot to handle change of index in combobox to select correct page
     * @param index index of value in combobox
     */
    void on_selectionListWidget_currentRowChanged( int index );

  private:
    QgsVectorLayer *mLayer;
    int mFieldIdx;

    QgsEditorWidgetConfig mWidgetV2Config;

    //! Cached configuration dialog (lazy loaded)
    QMap< QString, QgsEditorConfigWidget* > mEditorConfigWidgets;
};

#endif
