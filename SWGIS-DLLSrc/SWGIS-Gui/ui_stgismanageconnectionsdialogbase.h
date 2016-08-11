/********************************************************************************
** Form generated from reading UI file 'stgismanageconnectionsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STGISMANAGECONNECTIONSDIALOGBASE_H
#define UI_STGISMANAGECONNECTIONSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageConnectionsDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QListWidget *listConnections;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ManageConnectionsDialogBase)
    {
        if (ManageConnectionsDialogBase->objectName().isEmpty())
            ManageConnectionsDialogBase->setObjectName(QStringLiteral("ManageConnectionsDialogBase"));
        ManageConnectionsDialogBase->resize(568, 498);
        gridLayout_2 = new QGridLayout(ManageConnectionsDialogBase);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ManageConnectionsDialogBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        listConnections = new QListWidget(ManageConnectionsDialogBase);
        listConnections->setObjectName(QStringLiteral("listConnections"));
        listConnections->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listConnections->setAlternatingRowColors(true);
        listConnections->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(listConnections, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ManageConnectionsDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ManageConnectionsDialogBase);

        QMetaObject::connectSlotsByName(ManageConnectionsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *ManageConnectionsDialogBase)
    {
        ManageConnectionsDialogBase->setWindowTitle(QApplication::translate("ManageConnectionsDialogBase", "Dialog", 0));
        label->setText(QApplication::translate("ManageConnectionsDialogBase", "Select connections to export", 0));
    } // retranslateUi

};

namespace Ui {
    class ManageConnectionsDialogBase: public Ui_ManageConnectionsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STGISMANAGECONNECTIONSDIALOGBASE_H
