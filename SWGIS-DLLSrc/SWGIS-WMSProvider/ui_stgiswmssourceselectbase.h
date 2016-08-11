/********************************************************************************
** Form generated from reading UI file 'stgiswmssourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STGISWMSSOURCESELECTBASE_H
#define UI_STGISWMSSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WMSSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabServers;
    QWidget *tabLayers;
    QGridLayout *gridLayout;
    QComboBox *cmbConnections;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAddDefault;
    QTreeWidget *lstLayers;
    QGroupBox *btnGrpImageEncoding;
    QPushButton *btnSave;
    QPushButton *btnLoad;
    QGroupBox *gbCRS;
    QGridLayout *gridLayout1;
    QLabel *labelCoordRefSys;
    QPushButton *btnChangeSpatialRefSys;
    QLineEdit *mTileWidth;
    QLabel *label_2;
    QLineEdit *mTileHeight;
    QLabel *label_3;
    QLineEdit *mFeatureCount;
    QCheckBox *mContextualLegendCheckbox;
    QWidget *tabLayerOrder;
    QGridLayout *_2;
    QPushButton *mLayerUpButton;
    QPushButton *mLayerDownButton;
    QSpacerItem *spacerItem;
    QTreeWidget *mLayerOrderTreeWidget;
    QWidget *tabTilesets;
    QGridLayout *gridLayout_3;
    QTableWidget *lstTilesets;
    QWidget *tabServerSearch;
    QGridLayout *_3;
    QLineEdit *leSearchTerm;
    QPushButton *btnSearch;
    QTableWidget *tableWidgetWMSList;
    QPushButton *btnAddWMS;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leLayerName;
    QDialogButtonBox *buttonBox;
    QLabel *labelStatus;

    void setupUi(QDialog *WMSSourceSelectBase)
    {
        if (WMSSourceSelectBase->objectName().isEmpty())
            WMSSourceSelectBase->setObjectName(QStringLiteral("WMSSourceSelectBase"));
        WMSSourceSelectBase->resize(1122, 672);
        gridLayout_2 = new QGridLayout(WMSSourceSelectBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabServers = new QTabWidget(WMSSourceSelectBase);
        tabServers->setObjectName(QStringLiteral("tabServers"));
        tabServers->setEnabled(true);
        tabLayers = new QWidget();
        tabLayers->setObjectName(QStringLiteral("tabLayers"));
        gridLayout = new QGridLayout(tabLayers);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cmbConnections = new QComboBox(tabLayers);
        cmbConnections->setObjectName(QStringLiteral("cmbConnections"));

        gridLayout->addWidget(cmbConnections, 0, 0, 1, 12);

        btnConnect = new QPushButton(tabLayers);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        btnConnect->setEnabled(false);

        gridLayout->addWidget(btnConnect, 1, 0, 1, 2);

        btnNew = new QPushButton(tabLayers);
        btnNew->setObjectName(QStringLiteral("btnNew"));

        gridLayout->addWidget(btnNew, 1, 2, 1, 2);

        btnEdit = new QPushButton(tabLayers);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));
        btnEdit->setEnabled(false);

        gridLayout->addWidget(btnEdit, 1, 4, 1, 1);

        btnDelete = new QPushButton(tabLayers);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setEnabled(false);

        gridLayout->addWidget(btnDelete, 1, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 7, 1, 1);

        btnAddDefault = new QPushButton(tabLayers);
        btnAddDefault->setObjectName(QStringLiteral("btnAddDefault"));

        gridLayout->addWidget(btnAddDefault, 1, 11, 1, 1);

        lstLayers = new QTreeWidget(tabLayers);
        lstLayers->setObjectName(QStringLiteral("lstLayers"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lstLayers->sizePolicy().hasHeightForWidth());
        lstLayers->setSizePolicy(sizePolicy);
        lstLayers->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lstLayers->setAllColumnsShowFocus(true);

        gridLayout->addWidget(lstLayers, 2, 0, 1, 12);

        btnGrpImageEncoding = new QGroupBox(tabLayers);
        btnGrpImageEncoding->setObjectName(QStringLiteral("btnGrpImageEncoding"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnGrpImageEncoding->sizePolicy().hasHeightForWidth());
        btnGrpImageEncoding->setSizePolicy(sizePolicy1);
        btnGrpImageEncoding->setMinimumSize(QSize(16, 64));

        gridLayout->addWidget(btnGrpImageEncoding, 3, 0, 1, 12);

        btnSave = new QPushButton(tabLayers);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        gridLayout->addWidget(btnSave, 1, 9, 1, 1);

        btnLoad = new QPushButton(tabLayers);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));

        gridLayout->addWidget(btnLoad, 1, 8, 1, 1);

        gbCRS = new QGroupBox(tabLayers);
        gbCRS->setObjectName(QStringLiteral("gbCRS"));
        gridLayout1 = new QGridLayout(gbCRS);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        labelCoordRefSys = new QLabel(gbCRS);
        labelCoordRefSys->setObjectName(QStringLiteral("labelCoordRefSys"));

        gridLayout1->addWidget(labelCoordRefSys, 3, 0, 1, 2);

        btnChangeSpatialRefSys = new QPushButton(gbCRS);
        btnChangeSpatialRefSys->setObjectName(QStringLiteral("btnChangeSpatialRefSys"));
        btnChangeSpatialRefSys->setEnabled(false);

        gridLayout1->addWidget(btnChangeSpatialRefSys, 3, 2, 1, 1);

        mTileWidth = new QLineEdit(gbCRS);
        mTileWidth->setObjectName(QStringLiteral("mTileWidth"));

        gridLayout1->addWidget(mTileWidth, 1, 1, 1, 1);

        label_2 = new QLabel(gbCRS);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        mTileHeight = new QLineEdit(gbCRS);
        mTileHeight->setObjectName(QStringLiteral("mTileHeight"));

        gridLayout1->addWidget(mTileHeight, 1, 2, 1, 1);

        label_3 = new QLabel(gbCRS);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 2);

        mFeatureCount = new QLineEdit(gbCRS);
        mFeatureCount->setObjectName(QStringLiteral("mFeatureCount"));

        gridLayout1->addWidget(mFeatureCount, 2, 2, 1, 1);

        mContextualLegendCheckbox = new QCheckBox(gbCRS);
        mContextualLegendCheckbox->setObjectName(QStringLiteral("mContextualLegendCheckbox"));

        gridLayout1->addWidget(mContextualLegendCheckbox, 4, 0, 1, 1);


        gridLayout->addWidget(gbCRS, 4, 0, 1, 12);

        tabServers->addTab(tabLayers, QString());
        tabLayerOrder = new QWidget();
        tabLayerOrder->setObjectName(QStringLiteral("tabLayerOrder"));
        _2 = new QGridLayout(tabLayerOrder);
        _2->setObjectName(QStringLiteral("_2"));
        mLayerUpButton = new QPushButton(tabLayerOrder);
        mLayerUpButton->setObjectName(QStringLiteral("mLayerUpButton"));

        _2->addWidget(mLayerUpButton, 0, 0, 1, 1);

        mLayerDownButton = new QPushButton(tabLayerOrder);
        mLayerDownButton->setObjectName(QStringLiteral("mLayerDownButton"));

        _2->addWidget(mLayerDownButton, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(391, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem, 0, 2, 1, 1);

        mLayerOrderTreeWidget = new QTreeWidget(tabLayerOrder);
        mLayerOrderTreeWidget->setObjectName(QStringLiteral("mLayerOrderTreeWidget"));
        mLayerOrderTreeWidget->setColumnCount(3);

        _2->addWidget(mLayerOrderTreeWidget, 1, 0, 1, 3);

        tabServers->addTab(tabLayerOrder, QString());
        tabTilesets = new QWidget();
        tabTilesets->setObjectName(QStringLiteral("tabTilesets"));
        gridLayout_3 = new QGridLayout(tabTilesets);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lstTilesets = new QTableWidget(tabTilesets);
        if (lstTilesets->columnCount() < 6)
            lstTilesets->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        lstTilesets->setObjectName(QStringLiteral("lstTilesets"));
        lstTilesets->setAlternatingRowColors(true);
        lstTilesets->setSelectionMode(QAbstractItemView::SingleSelection);
        lstTilesets->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstTilesets->setCornerButtonEnabled(false);
        lstTilesets->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(lstTilesets, 0, 0, 1, 1);

        tabServers->addTab(tabTilesets, QString());
        tabServerSearch = new QWidget();
        tabServerSearch->setObjectName(QStringLiteral("tabServerSearch"));
        _3 = new QGridLayout(tabServerSearch);
        _3->setObjectName(QStringLiteral("_3"));
        leSearchTerm = new QLineEdit(tabServerSearch);
        leSearchTerm->setObjectName(QStringLiteral("leSearchTerm"));

        _3->addWidget(leSearchTerm, 0, 0, 1, 1);

        btnSearch = new QPushButton(tabServerSearch);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));
        btnSearch->setDefault(true);

        _3->addWidget(btnSearch, 0, 1, 1, 1);

        tableWidgetWMSList = new QTableWidget(tabServerSearch);
        if (tableWidgetWMSList->columnCount() < 3)
            tableWidgetWMSList->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetWMSList->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetWMSList->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetWMSList->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableWidgetWMSList->setObjectName(QStringLiteral("tableWidgetWMSList"));
        tableWidgetWMSList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetWMSList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetWMSList->setCornerButtonEnabled(false);
        tableWidgetWMSList->verticalHeader()->setVisible(false);

        _3->addWidget(tableWidgetWMSList, 1, 0, 1, 2);

        btnAddWMS = new QPushButton(tabServerSearch);
        btnAddWMS->setObjectName(QStringLiteral("btnAddWMS"));

        _3->addWidget(btnAddWMS, 2, 0, 1, 2);

        tabServers->addTab(tabServerSearch, QString());

        gridLayout_2->addWidget(tabServers, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(WMSSourceSelectBase);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leLayerName = new QLineEdit(WMSSourceSelectBase);
        leLayerName->setObjectName(QStringLiteral("leLayerName"));

        horizontalLayout->addWidget(leLayerName);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(WMSSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        labelStatus = new QLabel(WMSSourceSelectBase);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelStatus->sizePolicy().hasHeightForWidth());
        labelStatus->setSizePolicy(sizePolicy2);
        labelStatus->setWordWrap(false);

        gridLayout_2->addWidget(labelStatus, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelCoordRefSys->setBuddy(btnChangeSpatialRefSys);
        label_2->setBuddy(mTileWidth);
        label_3->setBuddy(mFeatureCount);
        label->setBuddy(leLayerName);
#endif // QT_NO_SHORTCUT

        retranslateUi(WMSSourceSelectBase);

        tabServers->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WMSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *WMSSourceSelectBase)
    {
        WMSSourceSelectBase->setWindowTitle(QApplication::translate("WMSSourceSelectBase", "Dialog", 0));
        btnConnect->setText(QApplication::translate("WMSSourceSelectBase", "C&onnect", 0));
        btnNew->setText(QApplication::translate("WMSSourceSelectBase", "&New", 0));
        btnEdit->setText(QApplication::translate("WMSSourceSelectBase", "Edit", 0));
        btnDelete->setText(QApplication::translate("WMSSourceSelectBase", "Delete", 0));
#ifndef QT_NO_STATUSTIP
        btnAddDefault->setStatusTip(QApplication::translate("WMSSourceSelectBase", "Adds a few example WMS servers", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        btnAddDefault->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        btnAddDefault->setText(QApplication::translate("WMSSourceSelectBase", "Add default servers", 0));
        QTreeWidgetItem *___qtreewidgetitem = lstLayers->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("WMSSourceSelectBase", "Abstract", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("WMSSourceSelectBase", "Title", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("WMSSourceSelectBase", "Name", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("WMSSourceSelectBase", "ID", 0));
        btnGrpImageEncoding->setTitle(QApplication::translate("WMSSourceSelectBase", "Image encoding", 0));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("WMSSourceSelectBase", "Save connections to file", 0));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("WMSSourceSelectBase", "Save", 0));
#ifndef QT_NO_TOOLTIP
        btnLoad->setToolTip(QApplication::translate("WMSSourceSelectBase", "Load connections from file", 0));
#endif // QT_NO_TOOLTIP
        btnLoad->setText(QApplication::translate("WMSSourceSelectBase", "Load", 0));
        gbCRS->setTitle(QApplication::translate("WMSSourceSelectBase", "Options", 0));
        labelCoordRefSys->setText(QApplication::translate("WMSSourceSelectBase", "Coordinate Reference System", 0));
        btnChangeSpatialRefSys->setText(QApplication::translate("WMSSourceSelectBase", "Change...", 0));
        label_2->setText(QApplication::translate("WMSSourceSelectBase", "Tile size", 0));
        label_3->setText(QApplication::translate("WMSSourceSelectBase", "Feature limit for GetFeatureInfo", 0));
        mFeatureCount->setText(QApplication::translate("WMSSourceSelectBase", "10", 0));
        mContextualLegendCheckbox->setText(QApplication::translate("WMSSourceSelectBase", "Use contextual WMS Legend", 0));
        tabServers->setTabText(tabServers->indexOf(tabLayers), QApplication::translate("WMSSourceSelectBase", "Layers", 0));
#ifndef QT_NO_TOOLTIP
        mLayerUpButton->setToolTip(QApplication::translate("WMSSourceSelectBase", "Move selected layer UP", 0));
#endif // QT_NO_TOOLTIP
        mLayerUpButton->setText(QApplication::translate("WMSSourceSelectBase", "Up", 0));
#ifndef QT_NO_TOOLTIP
        mLayerDownButton->setToolTip(QApplication::translate("WMSSourceSelectBase", "Move selected layer DOWN", 0));
#endif // QT_NO_TOOLTIP
        mLayerDownButton->setText(QApplication::translate("WMSSourceSelectBase", "Down", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = mLayerOrderTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("WMSSourceSelectBase", "Title", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("WMSSourceSelectBase", "Style", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("WMSSourceSelectBase", "Layer", 0));
        tabServers->setTabText(tabServers->indexOf(tabLayerOrder), QApplication::translate("WMSSourceSelectBase", "Layer Order", 0));
        QTableWidgetItem *___qtablewidgetitem = lstTilesets->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("WMSSourceSelectBase", "Layer", 0));
        QTableWidgetItem *___qtablewidgetitem1 = lstTilesets->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("WMSSourceSelectBase", "Format", 0));
        QTableWidgetItem *___qtablewidgetitem2 = lstTilesets->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("WMSSourceSelectBase", "Title", 0));
        QTableWidgetItem *___qtablewidgetitem3 = lstTilesets->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("WMSSourceSelectBase", "Style", 0));
        QTableWidgetItem *___qtablewidgetitem4 = lstTilesets->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("WMSSourceSelectBase", "Tileset", 0));
        QTableWidgetItem *___qtablewidgetitem5 = lstTilesets->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("WMSSourceSelectBase", "CRS", 0));
        tabServers->setTabText(tabServers->indexOf(tabTilesets), QApplication::translate("WMSSourceSelectBase", "Tilesets", 0));
        btnSearch->setText(QApplication::translate("WMSSourceSelectBase", "Search", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetWMSList->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("WMSSourceSelectBase", "Title", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetWMSList->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("WMSSourceSelectBase", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetWMSList->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("WMSSourceSelectBase", "URL", 0));
        btnAddWMS->setText(QApplication::translate("WMSSourceSelectBase", "Add selected row to WMS list", 0));
        tabServers->setTabText(tabServers->indexOf(tabServerSearch), QApplication::translate("WMSSourceSelectBase", "Server Search", 0));
        label->setText(QApplication::translate("WMSSourceSelectBase", "Layer name", 0));
        labelStatus->setText(QApplication::translate("WMSSourceSelectBase", "Ready", 0));
    } // retranslateUi

};

namespace Ui {
    class WMSSourceSelectBase: public Ui_WMSSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STGISWMSSOURCESELECTBASE_H
