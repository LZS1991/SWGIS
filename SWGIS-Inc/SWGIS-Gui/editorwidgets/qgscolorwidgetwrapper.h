/***************************************************************************
    qgscolorwidgetwrapper.h
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

#ifndef QGSCOLORWIDGETWRAPPER_H
#define QGSCOLORWIDGETWRAPPER_H

#include "./core/qgseditorwidgetwrapper.h"

#include "qgscolorbuttonv2.h"


/**
 * Wraps a color widget. Users will be able to choose a color.
 * \note not available in Python bindings
 */

class SWGISGUI_EXPORT  QgsColorWidgetWrapper : public QgsEditorWidgetWrapper
{
    Q_OBJECT
  public:
    explicit QgsColorWidgetWrapper( QgsVectorLayer* vl, int fieldIdx, QWidget* editor = nullptr, QWidget* parent = nullptr );

    // QgsEditorWidgetWrapper interface
  public:
    QVariant value() const override;

  protected:
    QWidget* createWidget( QWidget* parent ) override;
    void initWidget( QWidget* editor ) override;
    bool valid() const override;

  public slots:
    void setValue( const QVariant& value ) override;

  private:
    QgsColorButtonV2* mColorButton;
};

#endif // QGSCOLORWIDGETWRAPPER_H
