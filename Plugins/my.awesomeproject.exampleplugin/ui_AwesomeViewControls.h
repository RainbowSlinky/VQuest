/********************************************************************************
** Form generated from reading UI file 'AwesomeViewControls.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AWESOMEVIEWCONTROLS_H
#define UI_AWESOMEVIEWCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AwesomeViewControls
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *AwesomeViewControls)
    {
        if (AwesomeViewControls->objectName().isEmpty())
            AwesomeViewControls->setObjectName(QStringLiteral("AwesomeViewControls"));
        AwesomeViewControls->resize(220, 160);
        verticalLayout = new QVBoxLayout(AwesomeViewControls);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(AwesomeViewControls);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);


        verticalLayout->addWidget(widget);


        retranslateUi(AwesomeViewControls);

        QMetaObject::connectSlotsByName(AwesomeViewControls);
    } // setupUi

    void retranslateUi(QWidget *AwesomeViewControls)
    {
        AwesomeViewControls->setWindowTitle(QApplication::translate("AwesomeViewControls", "Awesome View", 0));
        pushButton->setText(QApplication::translate("AwesomeViewControls", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class AwesomeViewControls: public Ui_AwesomeViewControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AWESOMEVIEWCONTROLS_H
