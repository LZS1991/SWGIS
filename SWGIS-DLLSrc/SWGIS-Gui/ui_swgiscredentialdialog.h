/********************************************************************************
** Form generated from reading UI file 'swgiscredentialdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWGISCREDENTIALDIALOG_H
#define UI_SWGISCREDENTIALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CredentialDialog
{
public:
    QFormLayout *formLayout;
    QDialogButtonBox *buttonBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLabel *labelRealm;
    QLabel *label;
    QLineEdit *leUsername;
    QLabel *label_2;
    QLineEdit *lePassword;
    QLabel *labelMessage;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblPasswordTitle;
    QGridLayout *gridLayout;
    QLineEdit *leMasterPass;
    QCheckBox *chkMasterPassShow;
    QLineEdit *leMasterPassVerify;
    QLabel *lblDontForget;
    QLabel *lblSavedForSession;
    QGroupBox *grpbxPassAttempts;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkbxEraseAuthDb;

    void setupUi(QDialog *CredentialDialog)
    {
        if (CredentialDialog->objectName().isEmpty())
            CredentialDialog->setObjectName(QStringLiteral("CredentialDialog"));
        CredentialDialog->resize(277, 289);
        formLayout = new QFormLayout(CredentialDialog);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        buttonBox = new QDialogButtonBox(CredentialDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(3, QFormLayout::SpanningRole, buttonBox);

        stackedWidget = new QStackedWidget(CredentialDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        formLayout_2 = new QFormLayout(page);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        labelRealm = new QLabel(page);
        labelRealm->setObjectName(QStringLiteral("labelRealm"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelRealm);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        leUsername = new QLineEdit(page);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leUsername);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        lePassword = new QLineEdit(page);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lePassword);

        labelMessage = new QLabel(page);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, labelMessage);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblPasswordTitle = new QLabel(page_2);
        lblPasswordTitle->setObjectName(QStringLiteral("lblPasswordTitle"));
        lblPasswordTitle->setStyleSheet(QStringLiteral("QLabel{ font-weight: bold; }s"));

        verticalLayout->addWidget(lblPasswordTitle);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        leMasterPass = new QLineEdit(page_2);
        leMasterPass->setObjectName(QStringLiteral("leMasterPass"));
        leMasterPass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(leMasterPass, 0, 0, 1, 1);

        chkMasterPassShow = new QCheckBox(page_2);
        chkMasterPassShow->setObjectName(QStringLiteral("chkMasterPassShow"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chkMasterPassShow->sizePolicy().hasHeightForWidth());
        chkMasterPassShow->setSizePolicy(sizePolicy);

        gridLayout->addWidget(chkMasterPassShow, 0, 1, 1, 1);

        leMasterPassVerify = new QLineEdit(page_2);
        leMasterPassVerify->setObjectName(QStringLiteral("leMasterPassVerify"));
        leMasterPassVerify->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(leMasterPassVerify, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        lblDontForget = new QLabel(page_2);
        lblDontForget->setObjectName(QStringLiteral("lblDontForget"));
        lblDontForget->setStyleSheet(QLatin1String("QLabel {\n"
"color: rgb(128, 128, 128);\n"
"font-weight: bold;\n"
"}"));
        lblDontForget->setWordWrap(true);

        verticalLayout->addWidget(lblDontForget);

        lblSavedForSession = new QLabel(page_2);
        lblSavedForSession->setObjectName(QStringLiteral("lblSavedForSession"));
        lblSavedForSession->setStyleSheet(QLatin1String("QLabel {\n"
"color: rgb(128, 128, 128);\n"
"font-style: italic;\n"
"}"));
        lblSavedForSession->setWordWrap(true);

        verticalLayout->addWidget(lblSavedForSession);

        grpbxPassAttempts = new QGroupBox(page_2);
        grpbxPassAttempts->setObjectName(QStringLiteral("grpbxPassAttempts"));
        verticalLayout_2 = new QVBoxLayout(grpbxPassAttempts);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        chkbxEraseAuthDb = new QCheckBox(grpbxPassAttempts);
        chkbxEraseAuthDb->setObjectName(QStringLiteral("chkbxEraseAuthDb"));

        verticalLayout_2->addWidget(chkbxEraseAuthDb);


        verticalLayout->addWidget(grpbxPassAttempts);

        stackedWidget->addWidget(page_2);

        formLayout->setWidget(1, QFormLayout::SpanningRole, stackedWidget);


        retranslateUi(CredentialDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CredentialDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CredentialDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CredentialDialog);
    } // setupUi

    void retranslateUi(QDialog *CredentialDialog)
    {
        CredentialDialog->setWindowTitle(QApplication::translate("CredentialDialog", "Enter Credentials", 0));
        label_3->setText(QApplication::translate("CredentialDialog", "Realm", 0));
        labelRealm->setText(QApplication::translate("CredentialDialog", "TextLabel", 0));
        label->setText(QApplication::translate("CredentialDialog", "Username", 0));
        label_2->setText(QApplication::translate("CredentialDialog", "Password", 0));
        labelMessage->setText(QApplication::translate("CredentialDialog", "TextLabel", 0));
        lblPasswordTitle->setText(QString());
        chkMasterPassShow->setText(QApplication::translate("CredentialDialog", "Show", 0));
        leMasterPassVerify->setPlaceholderText(QApplication::translate("CredentialDialog", "Verify password", 0));
        lblDontForget->setText(QApplication::translate("CredentialDialog", "Do not forget it:  NOT retrievable!", 0));
        lblSavedForSession->setText(QApplication::translate("CredentialDialog", "Saved for session, until app is quit.", 0));
        grpbxPassAttempts->setTitle(QApplication::translate("CredentialDialog", "Password attempts: #", 0));
        chkbxEraseAuthDb->setText(QApplication::translate("CredentialDialog", "Erase authentication database?", 0));
    } // retranslateUi

};

namespace Ui {
    class CredentialDialog: public Ui_CredentialDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWGISCREDENTIALDIALOG_H
