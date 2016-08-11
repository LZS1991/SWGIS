/***************************************************************************
    qgsrendererv2registry.h
    ---------------------
    begin                : November 2009
    copyright            : (C) 2009 by Martin Dobias
    email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSRENDERERV2REGISTRY_H
#define QGSRENDERERV2REGISTRY_H

#include <QIcon>
#include <QMap>
#include <QStringList>
#include <QDomElement>

#include "qgis.h"

class QgsFeatureRendererV2;
class QgsVectorLayer;
class QgsStyleV2;
class QgsRendererV2Widget;

/**
 Stores metadata about one renderer class.

 @note It's necessary to implement createRenderer() function.
   In C++ you can use QgsRendererV2Metadata convenience class.
 */
class SWGISCORE_EXPORT QgsRendererV2AbstractMetadata
{
  public:
    QgsRendererV2AbstractMetadata( const QString& name, const QString& visibleName, const QIcon& icon = QIcon() )
        : mName( name ), mVisibleName( visibleName ), mIcon( icon ) {}
    virtual ~QgsRendererV2AbstractMetadata() {}

    QString name() const { return mName; }
    QString visibleName() const { return mVisibleName; }

    QIcon icon() const { return mIcon; }
    void setIcon( const QIcon& icon ) { mIcon = icon; }

    /** Return new instance of the renderer given the DOM element. Returns NULL on error.
     * Pure virtual function: must be implemented in derived classes.  */
    virtual QgsFeatureRendererV2* createRenderer( QDomElement& elem ) = 0;
    /** Return new instance of settings widget for the renderer. Returns NULL on error.
     *
     * The \a oldRenderer argument may refer to previously used renderer (or it is null).
     * If not null, it may be used to initialize GUI of the widget from the previous settings.
     * The old renderer does not have to be of the same type as returned by createRenderer().
     * When using \a oldRenderer make sure to make a copy of it - it will be deleted afterwards.
     */
    virtual QgsRendererV2Widget* createRendererWidget( QgsVectorLayer* layer, QgsStyleV2* style, QgsFeatureRendererV2* oldRenderer )
    { Q_UNUSED( layer ); Q_UNUSED( style ); Q_UNUSED( oldRenderer ); return nullptr; }

    virtual QgsFeatureRendererV2* createRendererFromSld( QDomElement& elem, QGis::GeometryType geomType )
    { Q_UNUSED( elem ); Q_UNUSED( geomType ); return nullptr; }

  protected:
    //! name used within QGIS for identification (the same what renderer's type() returns)
    QString mName;
    //! name visible for users (translatable)
    QString mVisibleName;
    //! icon to be shown in the renderer properties dialog
    QIcon mIcon;
};


typedef QgsFeatureRendererV2*( *QgsRendererV2CreateFunc )( QDomElement& );
typedef QgsRendererV2Widget*( *QgsRendererV2WidgetFunc )( QgsVectorLayer*, QgsStyleV2*, QgsFeatureRendererV2* );
typedef QgsFeatureRendererV2*( *QgsRendererV2CreateFromSldFunc )( QDomElement&, QGis::GeometryType geomType );

/**
 Convenience metadata class that uses static functions to create renderer and its widget.
 */
class SWGISCORE_EXPORT QgsRendererV2Metadata : public QgsRendererV2AbstractMetadata
{
  public:

    /** Construct metadata */
    //! @note not available in python bindings
    QgsRendererV2Metadata( const QString& name,
                           const QString& visibleName,
                           QgsRendererV2CreateFunc pfCreate,
                           const QIcon& icon = QIcon(),
                           QgsRendererV2WidgetFunc pfWidget = nullptr )
        : QgsRendererV2AbstractMetadata( name, visibleName, icon )
        , mCreateFunc( pfCreate )
        , mWidgetFunc( pfWidget )
        , mCreateFromSldFunc( nullptr )
    {}

    //! @note not available in python bindings
    QgsRendererV2Metadata( const QString& name,
                           const QString& visibleName,
                           QgsRendererV2CreateFunc pfCreate,
                           QgsRendererV2CreateFromSldFunc pfCreateFromSld,
                           const QIcon& icon = QIcon(),
                           QgsRendererV2WidgetFunc pfWidget = nullptr )
        : QgsRendererV2AbstractMetadata( name, visibleName, icon )
        , mCreateFunc( pfCreate )
        , mWidgetFunc( pfWidget )
        , mCreateFromSldFunc( pfCreateFromSld )
    {}

    virtual ~QgsRendererV2Metadata();

    virtual QgsFeatureRendererV2* createRenderer( QDomElement& elem ) override { return mCreateFunc ? mCreateFunc( elem ) : nullptr; }
    virtual QgsRendererV2Widget* createRendererWidget( QgsVectorLayer* layer, QgsStyleV2* style, QgsFeatureRendererV2* renderer ) override
      { return mWidgetFunc ? mWidgetFunc( layer, style, renderer ) : nullptr; }
    virtual QgsFeatureRendererV2* createRendererFromSld( QDomElement& elem, QGis::GeometryType geomType ) override
      { return mCreateFromSldFunc ? mCreateFromSldFunc( elem, geomType ) : nullptr; }

    //! @note not available in python bindings
    QgsRendererV2CreateFunc createFunction() const { return mCreateFunc; }
    //! @note not available in python bindings
    QgsRendererV2WidgetFunc widgetFunction() const { return mWidgetFunc; }
    //! @note not available in python bindings
    QgsRendererV2CreateFromSldFunc createFromSldFunction() const { return mCreateFromSldFunc; }

    //! @note not available in python bindings
    void setWidgetFunction( QgsRendererV2WidgetFunc f ) { mWidgetFunc = f; }

  protected:
    //! pointer to function that creates an instance of the renderer when loading project / style
    QgsRendererV2CreateFunc mCreateFunc;
    //! pointer to function that creates a widget for configuration of renderer's params
    QgsRendererV2WidgetFunc mWidgetFunc;
    //! pointer to function that creates an instance of the renderer from SLD
    QgsRendererV2CreateFromSldFunc mCreateFromSldFunc;
};

/**
  Registry of renderers.

  This is a singleton, renderers can be added / removed at any time
 */
class SWGISCORE_EXPORT QgsRendererV2Registry
{
  public:

    static QgsRendererV2Registry* instance();

    //! add a renderer to registry. Takes ownership of the metadata object.
    bool addRenderer( QgsRendererV2AbstractMetadata* metadata );

    //! remove renderer from registry
    bool removeRenderer( const QString& rendererName );

    //! get metadata for particular renderer. Returns NULL if not found in registry.
    QgsRendererV2AbstractMetadata* rendererMetadata( const QString& rendererName );

    //! return a list of available renderers
    QStringList renderersList();

  protected:
    //! protected constructor
    QgsRendererV2Registry();
    ~QgsRendererV2Registry();

    QMap<QString, QgsRendererV2AbstractMetadata*> mRenderers;

    //! list to keep order in which renderers have been added
    QStringList mRenderersOrder;

  private:
    QgsRendererV2Registry( const QgsRendererV2Registry& rh );
    QgsRendererV2Registry& operator=( const QgsRendererV2Registry& rh );
};

#endif // QGSRENDERERV2REGISTRY_H
