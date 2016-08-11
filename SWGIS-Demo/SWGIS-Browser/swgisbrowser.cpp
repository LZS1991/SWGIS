#include "swgisbrowser.h"
#include "ui_swgisbrowser.h"
#include "qgsapplication.h"
#include "qgsdataitem.h"
#include "qgsbrowsermodel.h"
//#include "qgsencodingfiledialog.h"
#include "qgsgenericprojectionselector.h"
#include "qgslogger.h"
#include "qgsconditionalstyle.h"
#include "qgsmaplayerregistry.h"
#include "qgsproviderregistry.h"
#include "qgsvectorlayercache.h"
#include "./raster/qgsrasterlayer.h"
//#include "qgsnewvectorlayerdialog.h"
//#include "qgsattributetablemodel.h"
//#include "qgsattributetablefiltermodel.h"
#include "qgscredentialdialog.h"

#include <QSettings>
#include <QMessageBox>
#include <QKeyEvent>
#include <QMetaObject>

SWGISBrowser::SWGISBrowser(QWidget *parent, const Qt::WindowFlags& flags)
    : QMainWindow(parent)
    , m_DirtyAttributes(true)
    , m_DirtyMetadata(true)
    , m_DirtyPreview(true)
    , m_ParamWidget(nullptr)
    , ui(new Ui::SWGISBrowser)

{
    ui->setupUi(this);

    ui->tabWidget->setTabEnabled(ui->tabWidget->indexOf(ui->paramTab),false);
    ui->tabWidget->setTabEnabled(ui->tabWidget->indexOf(ui->metaDataTab),false);
    ui->tabWidget->setTabEnabled(ui->tabWidget->indexOf(ui->PreviewTab),false);
    ui->tabWidget->setTabEnabled(ui->tabWidget->indexOf(ui->attributesTab),false);

    this->m_Model = new QgsBrowserModel(ui->treeView);
    ui->treeView->setModel(this->m_Model);

    connect(ui->treeView, SIGNAL(clicked(const QModelIndex&)), this, SLOT(itemClicked(const QModelIndex&)));
    ui->treeView->setExpandsOnDoubleClick(false);
    connect(ui->treeView, SIGNAL(doubleClicked(const QModelIndex&)), this, SLOT(itemDoubleClicked(const QModelIndex&)));
    connect(ui->treeView, SIGNAL(expanded( const QModelIndex&)), this, SLOT(itemExpanded(const QModelIndex&)));
    connect(ui->tabWidget, SIGNAL(currentChanged( int )), this, SLOT(tabChanged()));
//    connect( mActionNewVectorLayer, SIGNAL( triggered() ), this, SLOT( newVectorLayer() ) );
    connect( ui->stopRenderingButton, SIGNAL( clicked() ), this, SLOT( stopRendering() ) );

    ui->mapCanvas->setCanvasColor(Qt::white);
    new QgsCredentialDialog(this);
}

SWGISBrowser::~SWGISBrowser()
{
    delete ui;
}

void SWGISBrowser::expandPath(const QString &path)
{
    QModelIndex idx = this->m_Model->findPath(path);
    if(idx.isValid())
    {
        ui->treeView->expand(idx);
        ui->treeView->scrollTo(idx, QAbstractItemView::PositionAtTop);
    }
}

void SWGISBrowser::setLayer(QgsVectorLayer *vLayer)
{
//    attributeTable->setModel( nullptr );

//    if ( mAttributeTableFilterModel )
//    {
//      // Cleanup
//      delete mAttributeTableFilterModel;
//      mAttributeTableFilterModel = nullptr;
//    }

    if(vLayer)
    {
        QSettings settings;
        int cacheSize = qMax( 1, settings.value( "/qgis/attributeTableRowCache", "10000" ).toInt() );
        QgsVectorLayerCache *layerCache = new QgsVectorLayerCache(vLayer, cacheSize, this);
        layerCache->setCacheGeometry(false);
    }
}

void SWGISBrowser::itemClicked(const QModelIndex &index)
{
    this->m_Index = index;
    QgsDataItem *item = this->m_Model->dataItem(index);
    if(!item)
        return;

    bool paramEnable = false;
    bool metaEnable = false;
    bool previewEnable = false;
    bool attributesEnable = false;

    this->m_DirtyAttributes = true;
    this->m_DirtyMetadata = true;
    this->m_DirtyPreview = true;

    this->setLayer(nullptr);

    QList<QgsMapCanvasLayer> noLayers;
    ui->mapCanvas->setLayerSet(noLayers);
    ui->metaTextBrowser->clear();
    if(this->m_ParamWidget)
    {
        ui->paramLayout->removeWidget(this->m_ParamWidget);
        this->m_ParamWidget->hide();
        delete this->m_ParamWidget;
        this->m_ParamWidget = nullptr;
    }

    QgsMapLayerRegistry::instance()->removeAllMapLayers();
    this->m_Layer = nullptr;

    this->m_ParamWidget = item->paramWidget();
    if(this->m_ParamWidget)
    {
        ui->paramLayout->addWidget(this->m_ParamWidget);
        this->m_ParamWidget->show();
        paramEnable = true;
    }

    QgsLayerItem *layerItem = qobject_cast<QgsLayerItem*> (this->m_Model->dataItem(index));
    if(layerItem)
    {
        bool res = this->layerClicked(layerItem);
        if(res)
        {
            metaEnable = true;
            previewEnable = true;
            if(this->m_Layer->type() == QgsMapLayer::VectorLayer)
                attributesEnable = true;
        }
    }
    else
        ui->action_Set_Projection->setEnabled(false);

    this->updateCurrentTab();

    int selected = -1;
    if(this->m_LastTab.contains(item->metaObject()->className()))
        selected = this->m_LastTab[item->metaObject()->className()];

    ui->tabWidget->setTabEnabled(ui->tabWidget->indexOf(ui->paramTab),paramEnable);
    ui->tabWidget->setTabEnabled(ui->tabWidget->indexOf(ui->metaDataTab),metaEnable);
    ui->tabWidget->setTabEnabled(ui->tabWidget->indexOf(ui->PreviewTab),previewEnable);
    ui->tabWidget->setTabEnabled(ui->tabWidget->indexOf(ui->attributesTab),attributesEnable);

    if(selected > 0)
    {
        QgsDebugMsg(QString(" set tab %1 %2").arg(item->metaObject()->className()).arg(item->name()));
        ui->tabWidget->setCurrentIndex(selected);
    }

    QgsDebugMsg( QString( "clicked: %1 %2 %3" ).arg( index.row() ).arg( index.column() ).arg( item->name() ) );

}

void SWGISBrowser::itemDoubleClicked(const QModelIndex &index)
{
    QgsDataItem *item = this->m_Model->dataItem(index);
    if(!item)
    {
        int a = 10;
        return;
    }

    QgsDebugMsg(QString("%1 %2 %3").arg(index.row()).arg(index.column()).arg(item->name()));
}

void SWGISBrowser::saveWindowState()
{
    QSettings settings;
    settings.setValue( "/Windows/Browser/state", saveState() );
    settings.setValue( "/Windows/Browser/geometry", saveGeometry() );
    settings.setValue( "/Windows/Browser/sizes/0", ui->splitter->sizes().at( 0 ) );
    settings.setValue( "/Windows/Browser/sizes/1", ui->splitter->sizes().at( 1 ) );
}

void SWGISBrowser::restoreWindowState()
{
    QSettings settings;
    if ( !restoreState( settings.value( "/Windows/Browser/state" ).toByteArray() ) )
    {
        QgsDebugMsg( "restore of UI state failed" );
    }
    if ( !restoreGeometry( settings.value( "/Windows/Browser/geometry" ).toByteArray() ) )
    {
        QgsDebugMsg( "restore of UI geometry failed" );
    }
    int size0 = settings.value( "/Windows/Browser/sizes/0" ).toInt();
    if ( size0 > 0 )
    {

        QList<int> sizes;
        sizes << size0;
        sizes << settings.value( "/Windows/Browser/sizes/1" ).toInt();
        QgsDebugMsg( QString( "set splitter sizes to %1 %2" ).arg( sizes[0] ).arg( sizes[1] ) );
        ui->splitter->setSizes( sizes );
    }
}

void SWGISBrowser::tabChanged()
{
    this->updateCurrentTab();
    // Store last selected tab for selected data item
    if (this->m_Index.isValid())
    {
        QgsDataItem *item = this->m_Model->dataItem(this->m_Index);
        if (!item)
            return;

        QgsDebugMsg( QString( "save last tab %1 : %2" ).arg(item->metaObject()->className()).arg(ui->tabWidget->currentIndex()));
        this->m_LastTab[item->metaObject()->className()] = ui->tabWidget->currentIndex();
    }
}

void SWGISBrowser::updateCurrentTab()
{
    Tab currentTab = this->activeTab();
    if(currentTab == Metadata && this->m_DirtyMetadata)
    {
        if(this->m_Layer && this->m_Layer->isValid())
        {
            QString myStyle = QgsApplication::reportStyleSheet();
            ui->metaTextBrowser->document()->setDefaultStyleSheet(myStyle);
            ui->metaTextBrowser->setHtml(this->m_Layer->metadata());
        }
        else
            ui->metaTextBrowser->setHtml(QString());

        this->m_DirtyMetadata = false;
    }

    if(currentTab == Preview && this->m_DirtyPreview)
    {
        if (this->m_Layer && this->m_Layer->isValid())
        {
            // Create preview: add to map canvas
            QList<QgsMapCanvasLayer> layers;
            layers << QgsMapCanvasLayer( this->m_Layer );
            ui->mapCanvas->setLayerSet( layers );
            QgsRectangle fullExtent = this->m_Layer->extent();
            fullExtent.scale( 1.05 ); // add some border
            ui->mapCanvas->setExtent( fullExtent );
            ui->mapCanvas->refresh();

            QgsRasterLayer *rlayer = qobject_cast<QgsRasterLayer *>(this->m_Layer);
            if (rlayer)
            {
                connect(rlayer->dataProvider(), SIGNAL(dataChanged()), rlayer, SLOT(triggerRepaint()));
                connect(rlayer->dataProvider(), SIGNAL(dataChanged()), ui->mapCanvas, SLOT(refresh()));
            }
        }
        this->m_DirtyPreview = false;
    }

    if (currentTab == Attributes && this->m_DirtyAttributes)
    {
        if (this->m_Layer  && this->m_Layer->isValid() && this->m_Layer->type() == QgsMapLayer::VectorLayer)
        {
            QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer*>(this->m_Layer);
            QApplication::setOverrideCursor(Qt::WaitCursor);
            this->setLayer(vlayer);
            QApplication::restoreOverrideCursor();
        }
        else
        {
            this->setLayer(nullptr);
        }
        this->m_DirtyAttributes = false;
    }
}

void SWGISBrowser::stopRendering()
{
    QgsDebugMsg("Entered");
    if(ui->mapCanvas)
        ui->mapCanvas->stopRendering();
}

void SWGISBrowser::refresh(const QModelIndex &index)
{
    //这个是做什么用的？
    if(index.isValid())
    {
        QgsDataItem *item = m_Model->dataItem(index);
        if(item)
            qDebug() << "path = " + item->path();
        else
            qDebug() << "invalid item";
    }

    this->m_Model->refresh(index);

    for(int i = 0; i < this->m_Model->rowCount(index); i++)
    {
        QModelIndex idx = this->m_Model->index(i, 0, index);
        if(ui->treeView->isExpanded(idx) || !this->m_Model->hasChildren(idx))
            this->refresh(idx);
    }
}

void SWGISBrowser::keyPressEvent(QKeyEvent *e)
{
    QgsDebugMsg(tr("Entered"));
    if(e->key() == Qt::Key_Escape)
        stopRendering();
    else
        e->ignore();
}

void SWGISBrowser::keyReleaseEvent(QKeyEvent *e)
{
    QgsDebugMsg(tr("Entered"));
    if(ui->treeView->hasFocus() && (e->key() == Qt::Key_Up || e->key() == Qt::Key_Down))
        this->itemClicked(ui->treeView->selectionModel()->currentIndex());
    else
        e->ignore();
}

bool SWGISBrowser::layerClicked(QgsLayerItem *item)
{
    if(!item)
        return false;

    ui->action_Set_Projection->setEnabled(item->capabilities2().testFlag(QgsLayerItem::SetCrs));

    QString uri = item->uri();
    if(!uri.isEmpty())
    {
        QgsMapLayer::LayerType type = item->mapLayerType();
        QString providerKey = item->providerKey();

        QgsDebugMsg( providerKey + " : " + uri );
        if ( type == QgsMapLayer::VectorLayer )
        {
            this->m_Layer = new QgsVectorLayer( uri, QString(), providerKey );
        }
        if ( type == QgsMapLayer::RasterLayer )
        {
            this->m_Layer = new QgsRasterLayer( uri, "", providerKey );
        }
    }

    if(!this->m_Layer || !this->m_Layer->isValid())
    {
        qDebug() << "No Layer";
        return false;
    }

    QgsDebugMsg("Layer created");

    QgsMapLayerRegistry::instance()->addMapLayers(QList<QgsMapLayer*>() << this->m_Layer);

    return true;
}

SWGISBrowser::Tab SWGISBrowser::activeTab()
{
    QWidget* currentWidget = ui->tabWidget->currentWidget();
    if(currentWidget == ui->metaDataTab)
        return Metadata;
    if(currentWidget == ui->PreviewTab)
        return Preview;
}

void SWGISBrowser::on_action_Manage_WMS_Connection_triggered()
{
    QDialog *wmsDialog = dynamic_cast<QDialog*>(QgsProviderRegistry::instance()->selectWidget(QString("wms")));
    if(!wmsDialog)
    {
        QMessageBox::warning(this, tr("WMS"), tr("Cannot get WMS select dialog from provider!"));
        return;
    }

    wmsDialog->exec();
    delete wmsDialog;
    this->refresh();
}

void SWGISBrowser::on_action_Refresh_triggered()
{
    QgsDebugMsg("Entered");
    this->refresh();
}
