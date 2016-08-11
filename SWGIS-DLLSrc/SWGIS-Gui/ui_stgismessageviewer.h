/********************************************************************************
** Form generated from reading UI file 'stgismessageviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STGISMESSAGEVIEWER_H
#define UI_STGISMESSAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_MessageViewer
{
public:
    QGridLayout *gridLayout;
    QTextEdit *txtMessage;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MessageViewer)
    {
        if (MessageViewer->objectName().isEmpty())
            MessageViewer->setObjectName(QStringLiteral("MessageViewer"));
        MessageViewer->resize(509, 261);
        gridLayout = new QGridLayout(MessageViewer);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtMessage = new QTextEdit(MessageViewer);
        txtMessage->setObjectName(QStringLiteral("txtMessage"));
        txtMessage->setLineWidth(2);
        txtMessage->setAutoFormatting(QTextEdit::AutoNone);
        txtMessage->setReadOnly(true);

        gridLayout->addWidget(txtMessage, 0, 0, 1, 1);

        checkBox = new QCheckBox(MessageViewer);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MessageViewer);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(MessageViewer);

        QMetaObject::connectSlotsByName(MessageViewer);
    } // setupUi

    void retranslateUi(QDialog *MessageViewer)
    {
        MessageViewer->setWindowTitle(QApplication::translate("MessageViewer", "Dialog", 0));
        checkBox->setText(QApplication::translate("MessageViewer", "Don't show this message again", 0));
    } // retranslateUi

};

namespace Ui {
    class MessageViewer: public Ui_MessageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STGISMESSAGEVIEWER_H
