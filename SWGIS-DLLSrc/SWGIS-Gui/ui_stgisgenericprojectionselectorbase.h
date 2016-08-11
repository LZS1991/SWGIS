/********************************************************************************
** Form generated from reading UI file 'stgisgenericprojectionselectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STGISGENERICPROJECTIONSELECTORBASE_H
#define UI_STGISGENERICPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include "qgsprojectionselector.h"

QT_BEGIN_NAMESPACE

class Ui_GenericProjectionSelectorBase
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QgsProjectionSelector *projectionSelector;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *GenericProjectionSelectorBase)
    {
        if (GenericProjectionSelectorBase->objectName().isEmpty())
            GenericProjectionSelectorBase->setObjectName(QStringLiteral("GenericProjectionSelectorBase"));
        GenericProjectionSelectorBase->resize(508, 670);
        gridLayout = new QGridLayout(GenericProjectionSelectorBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(GenericProjectionSelectorBase);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 160));
        textEdit->setFocusPolicy(Qt::NoFocus);
        textEdit->setAcceptDrops(false);
        textEdit->setLineWidth(2);
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        projectionSelector = new QgsProjectionSelector(GenericProjectionSelectorBase);
        projectionSelector->setObjectName(QStringLiteral("projectionSelector"));

        gridLayout->addWidget(projectionSelector, 1, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(GenericProjectionSelectorBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);
        mButtonBox->setCenterButtons(false);

        gridLayout->addWidget(mButtonBox, 2, 0, 1, 1);


        retranslateUi(GenericProjectionSelectorBase);

        QMetaObject::connectSlotsByName(GenericProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QDialog *GenericProjectionSelectorBase)
    {
        GenericProjectionSelectorBase->setWindowTitle(QApplication::translate("GenericProjectionSelectorBase", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class GenericProjectionSelectorBase: public Ui_GenericProjectionSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STGISGENERICPROJECTIONSELECTORBASE_H
