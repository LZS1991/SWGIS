/********************************************************************************
** Form generated from reading UI file 'stgiswmtsdimensionsbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STGISWMTSDIMENSIONSBASE_H
#define UI_STGISWMTSDIMENSIONSBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_WmtsDimensionsBase
{
public:
    QGridLayout *gridLayout;
    QTableWidget *mDimensions;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WmtsDimensionsBase)
    {
        if (WmtsDimensionsBase->objectName().isEmpty())
            WmtsDimensionsBase->setObjectName(QStringLiteral("WmtsDimensionsBase"));
        WmtsDimensionsBase->resize(709, 319);
        gridLayout = new QGridLayout(WmtsDimensionsBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mDimensions = new QTableWidget(WmtsDimensionsBase);
        if (mDimensions->columnCount() < 5)
            mDimensions->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mDimensions->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mDimensions->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mDimensions->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mDimensions->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mDimensions->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        mDimensions->setObjectName(QStringLiteral("mDimensions"));

        gridLayout->addWidget(mDimensions, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(WmtsDimensionsBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(WmtsDimensionsBase);

        QMetaObject::connectSlotsByName(WmtsDimensionsBase);
    } // setupUi

    void retranslateUi(QDialog *WmtsDimensionsBase)
    {
        WmtsDimensionsBase->setWindowTitle(QApplication::translate("WmtsDimensionsBase", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = mDimensions->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("WmtsDimensionsBase", "Dimension", 0));
        QTableWidgetItem *___qtablewidgetitem1 = mDimensions->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("WmtsDimensionsBase", "Value", 0));
        QTableWidgetItem *___qtablewidgetitem2 = mDimensions->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("WmtsDimensionsBase", "Abstract", 0));
        QTableWidgetItem *___qtablewidgetitem3 = mDimensions->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("WmtsDimensionsBase", "Default", 0));
        QTableWidgetItem *___qtablewidgetitem4 = mDimensions->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("WmtsDimensionsBase", "Value", 0));
    } // retranslateUi

};

namespace Ui {
    class WmtsDimensionsBase: public Ui_WmtsDimensionsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STGISWMTSDIMENSIONSBASE_H
