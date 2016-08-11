/********************************************************************************
** Form generated from reading UI file 'swgisnewhttpconnection.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWGISNEWHTTPCONNECTION_H
#define UI_SWGISNEWHTTPCONNECTION_H

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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SWGISNewHttpConnection
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout1;
    QTabWidget *tabAuth;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *txtUserName;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *txtPassword;
    QSpacerItem *verticalSpacer;
    QLineEdit *txtName;
    QLabel *lblDpiMode;
    QLabel *TextLabel1;
    QLabel *TextLabel1_2;
    QLineEdit *txtUrl;
    QComboBox *cmbDpiMode;
    QLabel *lblReferer;
    QLineEdit *txtReferer;
    QCheckBox *cbxSmoothPixmapTransform;
    QCheckBox *cbxInvertAxisOrientation;
    QCheckBox *cbxIgnoreAxisOrientation;
    QCheckBox *cbxIgnoreGetMapURI;
    QCheckBox *cbxIgnoreGetFeatureInfoURI;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SWGISNewHttpConnection)
    {
        if (SWGISNewHttpConnection->objectName().isEmpty())
            SWGISNewHttpConnection->setObjectName(QStringLiteral("SWGISNewHttpConnection"));
        SWGISNewHttpConnection->resize(897, 540);
        gridLayout = new QGridLayout(SWGISNewHttpConnection);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mGroupBox = new QGroupBox(SWGISNewHttpConnection);
        mGroupBox->setObjectName(QStringLiteral("mGroupBox"));
        gridLayout1 = new QGridLayout(mGroupBox);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        tabAuth = new QTabWidget(mGroupBox);
        tabAuth->setObjectName(QStringLiteral("tabAuth"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabAuth->sizePolicy().hasHeightForWidth());
        tabAuth->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        txtUserName = new QLineEdit(tab);
        txtUserName->setObjectName(QStringLiteral("txtUserName"));

        gridLayout_3->addWidget(txtUserName, 1, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setTextFormat(Qt::PlainText);
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 0, 0, 1, 2);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        txtPassword = new QLineEdit(tab);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(txtPassword, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 1, 1, 1);

        tabAuth->addTab(tab, QString());

        gridLayout1->addWidget(tabAuth, 4, 0, 1, 2);

        txtName = new QLineEdit(mGroupBox);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setMinimumSize(QSize(0, 0));
        txtName->setFrame(true);

        gridLayout1->addWidget(txtName, 0, 1, 1, 1);

        lblDpiMode = new QLabel(mGroupBox);
        lblDpiMode->setObjectName(QStringLiteral("lblDpiMode"));

        gridLayout1->addWidget(lblDpiMode, 7, 0, 1, 1);

        TextLabel1 = new QLabel(mGroupBox);
        TextLabel1->setObjectName(QStringLiteral("TextLabel1"));
        TextLabel1->setMargin(5);

        gridLayout1->addWidget(TextLabel1, 1, 0, 1, 1);

        TextLabel1_2 = new QLabel(mGroupBox);
        TextLabel1_2->setObjectName(QStringLiteral("TextLabel1_2"));
        TextLabel1_2->setWordWrap(true);
        TextLabel1_2->setMargin(5);

        gridLayout1->addWidget(TextLabel1_2, 0, 0, 1, 1);

        txtUrl = new QLineEdit(mGroupBox);
        txtUrl->setObjectName(QStringLiteral("txtUrl"));

        gridLayout1->addWidget(txtUrl, 1, 1, 1, 1);

        cmbDpiMode = new QComboBox(mGroupBox);
        cmbDpiMode->setObjectName(QStringLiteral("cmbDpiMode"));

        gridLayout1->addWidget(cmbDpiMode, 7, 1, 1, 1);

        lblReferer = new QLabel(mGroupBox);
        lblReferer->setObjectName(QStringLiteral("lblReferer"));

        gridLayout1->addWidget(lblReferer, 6, 0, 1, 1);

        txtReferer = new QLineEdit(mGroupBox);
        txtReferer->setObjectName(QStringLiteral("txtReferer"));

        gridLayout1->addWidget(txtReferer, 6, 1, 1, 1);

        cbxSmoothPixmapTransform = new QCheckBox(mGroupBox);
        cbxSmoothPixmapTransform->setObjectName(QStringLiteral("cbxSmoothPixmapTransform"));

        gridLayout1->addWidget(cbxSmoothPixmapTransform, 15, 0, 1, 2);

        cbxInvertAxisOrientation = new QCheckBox(mGroupBox);
        cbxInvertAxisOrientation->setObjectName(QStringLiteral("cbxInvertAxisOrientation"));

        gridLayout1->addWidget(cbxInvertAxisOrientation, 14, 0, 1, 2);

        cbxIgnoreAxisOrientation = new QCheckBox(mGroupBox);
        cbxIgnoreAxisOrientation->setObjectName(QStringLiteral("cbxIgnoreAxisOrientation"));

        gridLayout1->addWidget(cbxIgnoreAxisOrientation, 13, 0, 1, 2);

        cbxIgnoreGetMapURI = new QCheckBox(mGroupBox);
        cbxIgnoreGetMapURI->setObjectName(QStringLiteral("cbxIgnoreGetMapURI"));

        gridLayout1->addWidget(cbxIgnoreGetMapURI, 11, 0, 1, 2);

        cbxIgnoreGetFeatureInfoURI = new QCheckBox(mGroupBox);
        cbxIgnoreGetFeatureInfoURI->setObjectName(QStringLiteral("cbxIgnoreGetFeatureInfoURI"));

        gridLayout1->addWidget(cbxIgnoreGetFeatureInfoURI, 12, 0, 1, 2);


        gridLayout->addWidget(mGroupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SWGISNewHttpConnection);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(txtUserName);
        label_3->setBuddy(txtPassword);
        lblDpiMode->setBuddy(cmbDpiMode);
        TextLabel1->setBuddy(txtUrl);
        TextLabel1_2->setBuddy(txtName);
        lblReferer->setBuddy(txtReferer);
#endif // QT_NO_SHORTCUT

        retranslateUi(SWGISNewHttpConnection);

        tabAuth->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SWGISNewHttpConnection);
    } // setupUi

    void retranslateUi(QDialog *SWGISNewHttpConnection)
    {
        SWGISNewHttpConnection->setWindowTitle(QApplication::translate("SWGISNewHttpConnection", "Dialog", 0));
        mGroupBox->setTitle(QApplication::translate("SWGISNewHttpConnection", "Connection details", 0));
        label_2->setText(QApplication::translate("SWGISNewHttpConnection", "&User name", 0));
        label->setText(QApplication::translate("SWGISNewHttpConnection", "If the service requires basic authentication, enter a user name and optional password", 0));
        label_3->setText(QApplication::translate("SWGISNewHttpConnection", "Password", 0));
        tabAuth->setTabText(tabAuth->indexOf(tab), QApplication::translate("SWGISNewHttpConnection", "Authentication", 0));
#ifndef QT_NO_TOOLTIP
        txtName->setToolTip(QApplication::translate("SWGISNewHttpConnection", "Name of the new connection", 0));
#endif // QT_NO_TOOLTIP
        lblDpiMode->setText(QApplication::translate("SWGISNewHttpConnection", "DPI-Mode", 0));
        TextLabel1->setText(QApplication::translate("SWGISNewHttpConnection", "URL", 0));
        TextLabel1_2->setText(QApplication::translate("SWGISNewHttpConnection", "Name", 0));
#ifndef QT_NO_TOOLTIP
        txtUrl->setToolTip(QApplication::translate("SWGISNewHttpConnection", "HTTP address of the Web Map Server", 0));
#endif // QT_NO_TOOLTIP
        lblReferer->setText(QApplication::translate("SWGISNewHttpConnection", "Referer", 0));
        cbxSmoothPixmapTransform->setText(QApplication::translate("SWGISNewHttpConnection", "Smooth pixmap transform", 0));
        cbxInvertAxisOrientation->setText(QApplication::translate("SWGISNewHttpConnection", "Invert axis orientation", 0));
        cbxIgnoreAxisOrientation->setText(QApplication::translate("SWGISNewHttpConnection", "Ignore axis orientation (WMS 1.3/WMTS)", 0));
        cbxIgnoreGetMapURI->setText(QApplication::translate("SWGISNewHttpConnection", "Ignore GetMap/GetTile URI reported in capabilities", 0));
        cbxIgnoreGetFeatureInfoURI->setText(QApplication::translate("SWGISNewHttpConnection", "Ignore GetFeatureInfo URI reported in capabilities", 0));
    } // retranslateUi

};

namespace Ui {
    class SWGISNewHttpConnection: public Ui_SWGISNewHttpConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWGISNEWHTTPCONNECTION_H
