/***************************************************************************
    qgswmscapabilities.h
    ---------------------
    begin                : January 2014
    copyright            : (C) 2014 by Martin Dobias
    email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSWMSCAPABILITIES_H
#define QGSWMSCAPABILITIES_H

#include <QHash>
#include <QMap>
#include <QNetworkRequest>
#include <QStringList>
#include <QVector>

//#include "qgsauthmanager.h"
#include "raster/qgsraster.h"
#include "qgsrectangle.h"
#include "wmsproviderconfig.h"
class QNetworkReply;

/*
 * The following structs reflect the WMS XML schema,
 * as illustrated in Appendix E of the Web Map Service standard, version 1.3, 2004-08-02.
 */

/** OnlineResource Attribute structure */
// TODO: Fill to WMS specifications
struct QgsWmsOnlineResourceAttribute
{
  QString xlinkHref;
};

/** Get Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsGetProperty
{
  QgsWmsOnlineResourceAttribute onlineResource;
};

/** Post Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsPostProperty
{
  QgsWmsOnlineResourceAttribute onlineResource;
};

/** HTTP Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsHttpProperty
{
  QgsWmsGetProperty    get;
  QgsWmsPostProperty   post;  // can be null
};

/** DCP Type Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsDcpTypeProperty
{
  QgsWmsHttpProperty http;
};

/** Operation Type structure (for GetMap and GetFeatureInfo) */
// TODO: Fill to WMS specifications
struct QgsWmsOperationType
{
  QStringList                      format;
  QVector<QgsWmsDcpTypeProperty>   dcpType;
  QStringList                      allowedEncodings;
};

/** Request Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsRequestProperty
{
  // QgsWmsGetCapabilitiesProperty   ...
  // -- don't include since if we can get the capabilities,
  //    we already know what's in this part.
  QgsWmsOperationType     getMap;
  QgsWmsOperationType     getFeatureInfo;
  QgsWmsOperationType     getTile;
  QgsWmsOperationType     getLegendGraphic;
};

/** Exception Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsExceptionProperty
{
  QStringList        format;   // text formats supported.
};

/** Primary Contact Person Property structure */
struct QgsWmsContactPersonPrimaryProperty
{
  QString            contactPerson;
  QString            contactOrganization;
};

/** Contact Address Property structure */
struct QgsWmsContactAddressProperty
{
  QString            addressType;
  QString            address;
  QString            city;
  QString            stateOrProvince;
  QString            postCode;
  QString            country;
};

/** Contact Information Property structure */
struct QgsWmsContactInformationProperty
{
  QgsWmsContactPersonPrimaryProperty contactPersonPrimary;
  QString                            contactPosition;
  QgsWmsContactAddressProperty       contactAddress;
  QString                            contactVoiceTelephone;
  QString                            contactFacsimileTelephone;
  QString                            contactElectronicMailAddress;
};

/** Service Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsServiceProperty
{
  QString                            title;
  QString                            abstract;
  QStringList                        keywordList;
  QgsWmsOnlineResourceAttribute      onlineResource;
  QgsWmsContactInformationProperty   contactInformation;
  QString                            fees;
  QString                            accessConstraints;
  uint                               layerLimit;
  uint                               maxWidth;
  uint                               maxHeight;
};

/** Bounding Box Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsBoundingBoxProperty
{
  QString   crs;
  QgsRectangle   box;    // consumes minx, miny, maxx, maxy.
};

/** Dimension Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsDimensionProperty
{
  QString   name;
  QString   units;
  QString   unitSymbol;
  QString   defaultValue;   // plain "default" is a reserved word
  bool      multipleValues;
  bool      nearestValue;
  bool      current;
};

/** Logo URL Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsLogoUrlProperty
{
  QString                         format;
  QgsWmsOnlineResourceAttribute   onlineResource;

  int                             width;
  int                             height;
};

/** Attribution Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsAttributionProperty
{
  QString                         title;
  QgsWmsOnlineResourceAttribute   onlineResource;
  QgsWmsLogoUrlProperty           logoUrl;
};

/** Legend URL Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsLegendUrlProperty
{
  QString                         format;
  QgsWmsOnlineResourceAttribute   onlineResource;

  int                             width;
  int                             height;
};

/** StyleSheet URL Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsStyleSheetUrlProperty
{
  QString                         format;
  QgsWmsOnlineResourceAttribute   onlineResource;
};

/** Style URL Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsStyleUrlProperty
{
  QString                         format;
  QgsWmsOnlineResourceAttribute   onlineResource;
};

/** Style Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsStyleProperty
{
  QString                           name;
  QString                           title;
  QString                           abstract;
  QVector<QgsWmsLegendUrlProperty>  legendUrl;
  QgsWmsStyleSheetUrlProperty       styleSheetUrl;
  QgsWmsStyleUrlProperty            styleUrl;
};

/** Authority URL Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsAuthorityUrlProperty
{
  QgsWmsOnlineResourceAttribute   onlineResource;
  QString                         name;             // XML "NMTOKEN" type
};

/** Identifier Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsIdentifierProperty
{
  QString   authority;
};

/** Metadata URL Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsMetadataUrlProperty
{
  QString                         format;
  QgsWmsOnlineResourceAttribute   onlineResource;
  QString                         type;             // XML "NMTOKEN" type
};

/** Data List URL Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsDataListUrlProperty
{
  QString                         format;
  QgsWmsOnlineResourceAttribute   onlineResource;
};

/** Feature List URL Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsFeatureListUrlProperty
{
  QString                         format;
  QgsWmsOnlineResourceAttribute   onlineResource;
};

/** Layer Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsLayerProperty
{
  // WMS layer properties
  int                                     orderId;
  QString                                 name;
  QString                                 title;
  QString                                 abstract;
  QStringList                             keywordList;
  QStringList                             crs;        // coord ref sys
  QgsRectangle                            ex_GeographicBoundingBox;
  QVector<QgsWmsBoundingBoxProperty>      boundingBoxes;
  QVector<QgsWmsDimensionProperty>        dimension;
  QgsWmsAttributionProperty               attribution;
  QVector<QgsWmsAuthorityUrlProperty>     authorityUrl;
  QVector<QgsWmsIdentifierProperty>       identifier;
  QVector<QgsWmsMetadataUrlProperty>      metadataUrl;
  QVector<QgsWmsDataListUrlProperty>      dataListUrl;
  QVector<QgsWmsFeatureListUrlProperty>   featureListUrl;
  QVector<QgsWmsStyleProperty>            style;
  double                                  minimumScaleDenominator;
  double                                  maximumScaleDenominator;
  QVector<QgsWmsLayerProperty>            layer;      // nested layers

  // WMS layer attributes
  bool               queryable;
  int                cascaded;
  bool               opaque;
  bool               noSubsets;
  int                fixedWidth;
  int                fixedHeight;
};

struct QgsWmtsTheme
{
  QString identifier;
  QString title, abstract;
  QStringList keywords;
  QgsWmtsTheme *subTheme;
  QStringList layerRefs;

  QgsWmtsTheme() : subTheme( nullptr ) {}
  ~QgsWmtsTheme() { delete subTheme; }
};

struct QgsWmtsTileMatrix
{
  QString identifier;
  QString title, abstract;
  QStringList keywords;
  double scaleDenom;
  QgsPoint topLeft;
  int tileWidth;
  int tileHeight;
  int matrixWidth;
  int matrixHeight;
};

struct QgsWmtsTileMatrixSet
{
  QString identifier;
  QString title, abstract;
  QStringList keywords;
  QString crs;
  QString wkScaleSet;
  QMap<double, QgsWmtsTileMatrix> tileMatrices;
};

enum QgsTileMode { WMTS, WMSC };

struct QgsWmtsTileMatrixLimits
{
  QString tileMatrix;
  int minTileRow, maxTileRow;
  int minTileCol, maxTileCol;
};

struct QgsWmtsTileMatrixSetLink
{
  QString tileMatrixSet;
  QHash<QString, QgsWmtsTileMatrixLimits> limits;
};

struct QgsWmtsLegendURL
{
  QString format;
  double minScale, maxScale;
  QString href;
  int width, height;
};

struct QgsWmtsStyle
{
  QString identifier;
  QString title, abstract;
  QStringList keywords;
  bool isDefault;
  QList<QgsWmtsLegendURL> legendURLs;
};

struct QgsWmtsDimension
{
  QString identifier;
  QString title, abstract;
  QStringList keywords;
  QString UOM;
  QString unitSymbol;
  QString defaultValue;
  bool current;
  QStringList values;
};

struct QgsWmtsTileLayer
{
  enum QgsTileMode tileMode;
  QString identifier;
  QString title, abstract;
  QStringList keywords;
  QVector<QgsWmsBoundingBoxProperty> boundingBoxes;
  QStringList formats;
  QStringList infoFormats;
  QString defaultStyle;
  QHash<QString, QgsWmtsDimension> dimensions;
  QHash<QString, QgsWmtsStyle> styles;
  QHash<QString, QgsWmtsTileMatrixSetLink> setLinks;

  QHash<QString, QString> getTileURLs;
  QHash<QString, QString> getFeatureInfoURLs;
};

/** Capability Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsCapabilityProperty
{
  QgsWmsRequestProperty                request;
  QgsWmsExceptionProperty              exception;

  // Top level layer should normally be present max once
  // <element name="Capability">
  //    <element ref="wms:Layer" minOccurs="0"/>  - default maxOccurs=1
  // but there are a few non conformant capabilities around (#13762)
  QList<QgsWmsLayerProperty>           layers;

  QList<QgsWmtsTileLayer>              tileLayers;
  QHash<QString, QgsWmtsTileMatrixSet> tileMatrixSets;
};

/** Capabilities Property structure */
// TODO: Fill to WMS specifications
struct QgsWmsCapabilitiesProperty
{
  QgsWmsServiceProperty         service;
  QgsWmsCapabilityProperty      capability;
  QString                       version;
};

/** Formats supported by QImageReader */
struct QgsWmsSupportedFormat
{
  QString format;
  QString label;
};

enum QgsWmsTileAttribute
{
  TileReqNo = QNetworkRequest::User + 0,
  TileIndex = QNetworkRequest::User + 1,
  TileRect  = QNetworkRequest::User + 2,
  TileRetry = QNetworkRequest::User + 3,
};

enum QgsWmsDpiMode
{
  dpiNone = 0,
  dpiQGIS = 1,
  dpiUMN = 2,
  dpiGeoServer = 4,
  dpiAll = dpiQGIS | dpiUMN | dpiGeoServer,
};



struct QgsWmsParserSettings
{
  QgsWmsParserSettings( bool ignAxis = false, bool invAxis = false )
      : ignoreAxisOrientation( ignAxis )
      , invertAxisOrientation( invAxis )
  {}
  bool ignoreAxisOrientation;
  bool invertAxisOrientation;
};

struct QgsWmsAuthorization
{
  QgsWmsAuthorization( const QString& userName = QString(), const QString& password = QString(), const QString& referer = QString(), const QString& authcfg = QString() )
      : mUserName( userName )
      , mPassword( password )
      , mReferer( referer )
      , mAuthCfg( authcfg )
  {}

//  bool setAuthorization( QNetworkRequest &request ) const
//  {
//    if ( !mAuthCfg.isEmpty() )
//    {
//      return QgsAuthManager::instance()->updateNetworkRequest( request, mAuthCfg );
//    }
//    else if ( !mUserName.isNull() || !mPassword.isNull() )
//    {
//      request.setRawHeader( "Authorization", "Basic " + QString( "%1:%2" ).arg( mUserName, mPassword ).toLatin1()().toBase64() );
//    }

//    if ( !mReferer.isNull() )
//    {
//      request.setRawHeader( "Referer", QString( "%1" ).arg( mReferer ).toLatin1()() );
//    }
//    return true;
//  }

  //! Username for basic http authentication
  QString mUserName;

  //! Password for basic http authentication
  QString mPassword;

  //! Referer for http requests
  QString mReferer;

  //! Authentication configuration ID
  QString mAuthCfg;
};


/** URI that gets passed to provider */
class QgsWmsSettings
{
  public:

    bool parseUri( const QString& uriString );

    QString baseUrl() const { return mBaseUrl; }
    QgsWmsAuthorization authorization() const { return mAuth; }

    QgsWmsParserSettings parserSettings() const { return mParserSettings; }

  protected:
    QgsWmsParserSettings    mParserSettings;

    //! layer is tiled, tile layer and active matrix set
    bool                    mTiled;
    QHash<QString, QString>  mTileDimensionValues;
    QString                 mTileMatrixSetId;

    /**
     * Maximum width and height of getmap requests
     */
    int mMaxWidth;
    int mMaxHeight;

    //! Data source URI of the WMS for this layer
    QString mHttpUri;

    //! URL part of URI (httpuri)
    QString mBaseUrl;

    QgsWmsAuthorization mAuth;

    bool mIgnoreGetMapUrl;
    bool mIgnoreGetFeatureInfoUrl;
    bool mSmoothPixmapTransform;
    enum QgsWmsDpiMode mDpiMode;

    /**
     * Active sublayers managed by this provider in a draw function, in order from bottom to top
     * (some may not be visible in a draw function, cf. activeSubLayerVisibility)
     */
    QStringList mActiveSubLayers;
    QStringList mActiveSubStyles;

    /**
     * Visibility status of the given active sublayer
     */
    QMap<QString, bool> mActiveSubLayerVisibility;

    //! FEATURE_COUNT for GetFeatureInfo
    int mFeatureCount;

    /**
     * MIME type of the image encoding used from the WMS server
     */
    QString mImageMimeType;

    QString mCrsId;

    bool mEnableContextualLegend;

    friend class QgsWmsProvider;
};


/** Keeps information about capabilities of particular URI */
class QgsWmsCapabilities
{
  public:
    QgsWmsCapabilities();

    bool isValid() const { return mValid; }

    bool parseResponse( const QByteArray& response, const QgsWmsParserSettings& settings );

    QString lastError() const { return mError; }
    QString lastErrorFormat() const { return mErrorFormat; }

    QgsWmsCapabilitiesProperty capabilitiesProperty() { return mCapabilities; }

    /**
     * \brief   Returns a list of the supported layers of the WMS server
     *
     * \retval The list of layers will be placed here.
     *
     * \todo Document this better
     */
    QVector<QgsWmsLayerProperty> supportedLayers() const { return mLayersSupported; }

    //! get raster image encodings supported by the WMS, expressed as MIME types
    QStringList supportedImageEncodings() const { return mCapabilities.capability.request.getMap.format; }

    /**
     * \brief   Returns a map for the hierarchy of layers
     */
    void layerParents( QMap<int, int> &parents, QMap<int, QStringList> &parentNames ) const { parents = mLayerParents; parentNames = mLayerParentNames; }

    /**
     * \brief   Returns a list of the supported tile layers of the WMS server
     *
     * \retval The list of tile sets will be placed here.
     */
    QList<QgsWmtsTileLayer> supportedTileLayers() const { return mTileLayersSupported; }

    /**
     * \brief   Returns a list of the available tile matrix sets
     */
    QHash<QString, QgsWmtsTileMatrixSet> supportedTileMatrixSets() const { return mTileMatrixSets; }

    /** Find out whether to invert axis orientation when parsing/writing coordinates */
    bool shouldInvertAxisOrientation( const QString& ogcCrs );

    /** Find out identify capabilities */
    int identifyCapabilities() const;

  protected:
    bool parseCapabilitiesDom( QByteArray const &xml, QgsWmsCapabilitiesProperty& capabilitiesProperty );

    void parseService( QDomElement const & e, QgsWmsServiceProperty& serviceProperty );
    void parseOnlineResource( QDomElement const & e, QgsWmsOnlineResourceAttribute& onlineResourceAttribute );
    void parseKeywordList( QDomElement  const & e, QStringList& keywordListProperty );
    void parseContactInformation( QDomElement const & e, QgsWmsContactInformationProperty& contactInformationProperty );
    void parseContactPersonPrimary( QDomElement const & e, QgsWmsContactPersonPrimaryProperty& contactPersonPrimaryProperty );
    void parseContactAddress( QDomElement const & e, QgsWmsContactAddressProperty& contactAddressProperty );

    void parseCapability( QDomElement const & e, QgsWmsCapabilityProperty& capabilityProperty );
    void parseRequest( QDomElement const & e, QgsWmsRequestProperty& requestProperty );
    void parseLegendUrl( QDomElement const &e, QgsWmsLegendUrlProperty &legendUrlProperty );
    void parseLayer( QDomElement const & e, QgsWmsLayerProperty& layerProperty, QgsWmsLayerProperty *parentProperty = nullptr );
    void parseStyle( QDomElement const & e, QgsWmsStyleProperty& styleProperty );

    void parseOperationType( QDomElement const & e, QgsWmsOperationType& operationType );
    void parseDcpType( QDomElement const & e, QgsWmsDcpTypeProperty& dcpType );
    void parseHttp( QDomElement const & e, QgsWmsHttpProperty& httpProperty );
    void parseGet( QDomElement const & e, QgsWmsGetProperty& getProperty );
    void parsePost( QDomElement const & e, QgsWmsPostProperty& postProperty );

    void parseTileSetProfile( QDomElement const &e );
    void parseWMTSContents( QDomElement const &e );
    void parseKeywords( const QDomNode &e, QStringList &keywords );
    void parseTheme( const QDomElement &e, QgsWmtsTheme &t );

    QString nodeAttribute( const QDomElement &e, const QString& name, const QString& defValue = QString::null );

    /**
     * In case no bounding box is present in WMTS capabilities, try to estimate it from tile matrix sets.
     * Returns true if the detection went fine.
     */
    bool detectTileLayerBoundingBox( QgsWmtsTileLayer& l );

  protected:
    bool mValid;

    QString mError;
    QString mErrorCaption;
    QString mErrorFormat;

    QgsWmsParserSettings mParserSettings;

    //! number of layers and parents
    int mLayerCount;
    QMap<int, int> mLayerParents;
    QMap<int, QStringList> mLayerParentNames;

    /**
     * WMS "queryable" per layer
     * Used in determining if the Identify map tool can be useful on the rendered WMS map layer.
     */
    QMap<QString, bool> mQueryableForLayer;

    /**
     * layers hosted by the WMS
     */
    QVector<QgsWmsLayerProperty> mLayersSupported;

    /**
     * tilesets hosted by the WMTS
     */
    QList<QgsWmtsTileLayer> mTileLayersSupported;

    /**
     * themes hosted by the WMTS
     */
    QList<QgsWmtsTheme> mTileThemes;

    /**
     * Parsed capabilities of the WMS
     */
    QgsWmsCapabilitiesProperty mCapabilities;

    //! Formats supported by server and provider
    QMap<QgsRaster::IdentifyFormat, QString> mIdentifyFormats;


    /**
     * tile matrix sets hosted by the WMS
     */
    QHash<QString, QgsWmtsTileMatrixSet> mTileMatrixSets;

    //temporarily caches invert axis setting for each crs
    QHash<QString, bool> mCrsInvertAxis;

    friend class QgsWmsProvider;
};



/** Class that handles download of capabilities.
 */
class SWGISWMSPROVIDER_EXPORT QgsWmsCapabilitiesDownload : public QObject
{
    Q_OBJECT

  public:
    explicit QgsWmsCapabilitiesDownload( bool forceRefresh, QObject* parent = nullptr );

    QgsWmsCapabilitiesDownload( const QString& baseUrl, const QgsWmsAuthorization& auth, bool forceRefresh, QObject* parent = nullptr );

    virtual ~QgsWmsCapabilitiesDownload();

    bool downloadCapabilities();

    bool downloadCapabilities( const QString& baseUrl, const QgsWmsAuthorization& auth );

    QString lastError() const { return mError; }

    QByteArray response() const { return mHttpCapabilitiesResponse; }

    //! Abort network request immediately
    void abort();

  signals:
    /** \brief emit a signal to be caught by qgisapp and display a msg on status bar */
    void statusChanged( QString const &  theStatusQString );

    /** \brief emit a signal once the download is finished */
    void downloadFinished();

  protected slots:
    void capabilitiesReplyFinished();
    void capabilitiesReplyProgress( qint64, qint64 );

  protected:
    //! URL part of URI (httpuri)
    QString mBaseUrl;

    QgsWmsAuthorization mAuth;

    /** The reply to the capabilities request */
    QNetworkReply *mCapabilitiesReply;

    /** The error message associated with the last WMS error. */
    QString mError;

    /** The mime type of the message */
    QString mErrorFormat;

    /** Capabilities of the WMS (raw) */
    QByteArray mHttpCapabilitiesResponse;

    bool mIsAborted;
    bool mForceRefresh;
};



#endif // QGSWMSCAPABILITIES_H
