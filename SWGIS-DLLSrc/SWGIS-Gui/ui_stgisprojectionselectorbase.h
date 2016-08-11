/********************************************************************************
** Form generated from reading UI file 'stgisprojectionselectorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STGISPROJECTIONSELECTORBASE_H
#define UI_STGISPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_ProjectionSelectorBase
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *teSelected;
    QSplitter *splitter;
    QTreeWidget *lstRecent;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cbxHideDeprecated;
    QTreeWidget *lstCoordinateSystems;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QgsFilterLineEdit *leSearch;
    QLabel *label_3;
    QTextEdit *teProjection;

    void setupUi(QWidget *ProjectionSelectorBase)
    {
        if (ProjectionSelectorBase->objectName().isEmpty())
            ProjectionSelectorBase->setObjectName(QStringLiteral("ProjectionSelectorBase"));
        ProjectionSelectorBase->resize(538, 635);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProjectionSelectorBase->sizePolicy().hasHeightForWidth());
        ProjectionSelectorBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        ProjectionSelectorBase->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(ProjectionSelectorBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(ProjectionSelectorBase);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        teSelected = new QLineEdit(ProjectionSelectorBase);
        teSelected->setObjectName(QStringLiteral("teSelected"));
        teSelected->setReadOnly(true);

        horizontalLayout_2->addWidget(teSelected);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        splitter = new QSplitter(ProjectionSelectorBase);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(true);
        lstRecent = new QTreeWidget(splitter);
        lstRecent->setObjectName(QStringLiteral("lstRecent"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lstRecent->sizePolicy().hasHeightForWidth());
        lstRecent->setSizePolicy(sizePolicy1);
        lstRecent->setMinimumSize(QSize(0, 105));
        lstRecent->setMaximumSize(QSize(16777215, 200));
        lstRecent->setAlternatingRowColors(true);
        lstRecent->setRootIsDecorated(false);
        lstRecent->setUniformRowHeights(true);
        lstRecent->setColumnCount(3);
        splitter->addWidget(lstRecent);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cbxHideDeprecated = new QCheckBox(layoutWidget);
        cbxHideDeprecated->setObjectName(QStringLiteral("cbxHideDeprecated"));
        QFont font1;
        font1.setPointSize(9);
        cbxHideDeprecated->setFont(font1);

        horizontalLayout_3->addWidget(cbxHideDeprecated);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        lstCoordinateSystems = new QTreeWidget(layoutWidget);
        lstCoordinateSystems->setObjectName(QStringLiteral("lstCoordinateSystems"));
        lstCoordinateSystems->setAlternatingRowColors(true);
        lstCoordinateSystems->setUniformRowHeights(true);
        lstCoordinateSystems->setColumnCount(3);

        gridLayout->addWidget(lstCoordinateSystems, 1, 0, 1, 1);

        splitter->addWidget(layoutWidget);

        gridLayout_2->addWidget(splitter, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(ProjectionSelectorBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        leSearch = new QgsFilterLineEdit(ProjectionSelectorBase);
        leSearch->setObjectName(QStringLiteral("leSearch"));

        horizontalLayout->addWidget(leSearch);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        label_3 = new QLabel(ProjectionSelectorBase);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        teProjection = new QTextEdit(ProjectionSelectorBase);
        teProjection->setObjectName(QStringLiteral("teProjection"));
        teProjection->setMinimumSize(QSize(0, 40));
        teProjection->setMaximumSize(QSize(16777215, 90));
        teProjection->setBaseSize(QSize(0, 40));
        teProjection->setAutoFormatting(QTextEdit::AutoBulletList);
        teProjection->setReadOnly(true);

        gridLayout_2->addWidget(teProjection, 6, 0, 1, 1);

        QWidget::setTabOrder(leSearch, lstRecent);
        QWidget::setTabOrder(lstRecent, cbxHideDeprecated);
        QWidget::setTabOrder(cbxHideDeprecated, lstCoordinateSystems);
        QWidget::setTabOrder(lstCoordinateSystems, teSelected);
        QWidget::setTabOrder(teSelected, teProjection);

        retranslateUi(ProjectionSelectorBase);

        QMetaObject::connectSlotsByName(ProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QWidget *ProjectionSelectorBase)
    {
        ProjectionSelectorBase->setWindowTitle(QApplication::translate("ProjectionSelectorBase", "Coordinate Reference System Selector", 0));
        label->setText(QApplication::translate("ProjectionSelectorBase", "Selected CRS:", 0));
        QTreeWidgetItem *___qtreewidgetitem = lstRecent->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("ProjectionSelectorBase", "ID", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("ProjectionSelectorBase", "Authority ID", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("ProjectionSelectorBase", "Coordinate Reference System", 0));
        label_4->setText(QApplication::translate("ProjectionSelectorBase", "Coordinate reference systems of the world", 0));
        cbxHideDeprecated->setText(QApplication::translate("ProjectionSelectorBase", "Hide deprecated CRSs", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = lstCoordinateSystems->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("ProjectionSelectorBase", "ID", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("ProjectionSelectorBase", "Authority ID", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("ProjectionSelectorBase", "Coordinate Reference System", 0));
        label_5->setText(QApplication::translate("ProjectionSelectorBase", "Filter", 0));
        label_3->setText(QApplication::translate("ProjectionSelectorBase", "Recently used coordinate reference systems", 0));
    } // retranslateUi

};

namespace Ui {
    class ProjectionSelectorBase: public Ui_ProjectionSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STGISPROJECTIONSELECTORBASE_H
