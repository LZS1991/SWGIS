/********************************************************************************
** Form generated from reading UI file 'stgisdatumtransformdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STGISDATUMTRANSFORMDIALOGBASE_H
#define UI_STGISDATUMTRANSFORMDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_DatumTransformDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *mLabelLayer;
    QLabel *label;
    QLabel *mLabelSrcCrs;
    QLabel *label_2;
    QLabel *mLabelDstCrs;
    QTreeWidget *mDatumTransformTreeWidget;
    QLabel *mLabelSrcDescription;
    QLabel *mLabelDstDescription;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mRememberSelectionCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mHideDeprecatedCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DatumTransformDialogBase)
    {
        if (DatumTransformDialogBase->objectName().isEmpty())
            DatumTransformDialogBase->setObjectName(QStringLiteral("DatumTransformDialogBase"));
        DatumTransformDialogBase->resize(761, 536);
        gridLayout = new QGridLayout(DatumTransformDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(DatumTransformDialogBase);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mLabelLayer = new QLabel(DatumTransformDialogBase);
        mLabelLayer->setObjectName(QStringLiteral("mLabelLayer"));
        mLabelLayer->setText(QStringLiteral("layer name"));

        gridLayout->addWidget(mLabelLayer, 0, 1, 1, 1);

        label = new QLabel(DatumTransformDialogBase);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mLabelSrcCrs = new QLabel(DatumTransformDialogBase);
        mLabelSrcCrs->setObjectName(QStringLiteral("mLabelSrcCrs"));
        mLabelSrcCrs->setText(QStringLiteral("Source CRS"));

        gridLayout->addWidget(mLabelSrcCrs, 1, 1, 1, 1);

        label_2 = new QLabel(DatumTransformDialogBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mLabelDstCrs = new QLabel(DatumTransformDialogBase);
        mLabelDstCrs->setObjectName(QStringLiteral("mLabelDstCrs"));
        mLabelDstCrs->setText(QStringLiteral("Destination CRS"));

        gridLayout->addWidget(mLabelDstCrs, 2, 1, 1, 1);

        mDatumTransformTreeWidget = new QTreeWidget(DatumTransformDialogBase);
        mDatumTransformTreeWidget->headerItem()->setText(2, QString());
        mDatumTransformTreeWidget->setObjectName(QStringLiteral("mDatumTransformTreeWidget"));

        gridLayout->addWidget(mDatumTransformTreeWidget, 3, 0, 1, 2);

        mLabelSrcDescription = new QLabel(DatumTransformDialogBase);
        mLabelSrcDescription->setObjectName(QStringLiteral("mLabelSrcDescription"));
        mLabelSrcDescription->setText(QStringLiteral("Description"));
        mLabelSrcDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mLabelSrcDescription->setWordWrap(true);

        gridLayout->addWidget(mLabelSrcDescription, 4, 0, 1, 1);

        mLabelDstDescription = new QLabel(DatumTransformDialogBase);
        mLabelDstDescription->setObjectName(QStringLiteral("mLabelDstDescription"));
        mLabelDstDescription->setText(QStringLiteral("Description"));
        mLabelDstDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mLabelDstDescription->setWordWrap(true);

        gridLayout->addWidget(mLabelDstDescription, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mRememberSelectionCheckBox = new QCheckBox(DatumTransformDialogBase);
        mRememberSelectionCheckBox->setObjectName(QStringLiteral("mRememberSelectionCheckBox"));

        horizontalLayout->addWidget(mRememberSelectionCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mHideDeprecatedCheckBox = new QCheckBox(DatumTransformDialogBase);
        mHideDeprecatedCheckBox->setObjectName(QStringLiteral("mHideDeprecatedCheckBox"));

        horizontalLayout->addWidget(mHideDeprecatedCheckBox);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 2);

        buttonBox = new QDialogButtonBox(DatumTransformDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);


        retranslateUi(DatumTransformDialogBase);

        QMetaObject::connectSlotsByName(DatumTransformDialogBase);
    } // setupUi

    void retranslateUi(QDialog *DatumTransformDialogBase)
    {
        DatumTransformDialogBase->setWindowTitle(QApplication::translate("DatumTransformDialogBase", "Dialog", 0));
        label_3->setText(QApplication::translate("DatumTransformDialogBase", "Layer", 0));
        label->setText(QApplication::translate("DatumTransformDialogBase", "Source CRS", 0));
        label_2->setText(QApplication::translate("DatumTransformDialogBase", "Destination CRS", 0));
        QTreeWidgetItem *___qtreewidgetitem = mDatumTransformTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("DatumTransformDialogBase", "dst transform", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("DatumTransformDialogBase", "src transform", 0));
        mRememberSelectionCheckBox->setText(QApplication::translate("DatumTransformDialogBase", "Remember selection", 0));
        mHideDeprecatedCheckBox->setText(QApplication::translate("DatumTransformDialogBase", "Hide deprecated", 0));
    } // retranslateUi

};

namespace Ui {
    class DatumTransformDialogBase: public Ui_DatumTransformDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STGISDATUMTRANSFORMDIALOGBASE_H
