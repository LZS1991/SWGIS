/********************************************************************************
** Form generated from reading UI file 'stgistilescalewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STGISTILESCALEWIDGET_H
#define UI_STGISTILESCALEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STGISTileScaleWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSlider *mSlider;

    void setupUi(QWidget *STGISTileScaleWidget)
    {
        if (STGISTileScaleWidget->objectName().isEmpty())
            STGISTileScaleWidget->setObjectName(QStringLiteral("STGISTileScaleWidget"));
        STGISTileScaleWidget->resize(142, 388);
        horizontalLayout = new QHBoxLayout(STGISTileScaleWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mSlider = new QSlider(STGISTileScaleWidget);
        mSlider->setObjectName(QStringLiteral("mSlider"));
        mSlider->setOrientation(Qt::Vertical);
        mSlider->setTickPosition(QSlider::TicksBelow);

        horizontalLayout->addWidget(mSlider);


        retranslateUi(STGISTileScaleWidget);

        QMetaObject::connectSlotsByName(STGISTileScaleWidget);
    } // setupUi

    void retranslateUi(QWidget *STGISTileScaleWidget)
    {
        STGISTileScaleWidget->setWindowTitle(QApplication::translate("STGISTileScaleWidget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class STGISTileScaleWidget: public Ui_STGISTileScaleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STGISTILESCALEWIDGET_H
