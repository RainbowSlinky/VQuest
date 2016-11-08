/********************************************************************************
** Form generated from reading UI file 'demoview.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOVIEW_H
#define UI_DEMOVIEW_H

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

class Ui_DemoView
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *DemoView)
    {
        if (DemoView->objectName().isEmpty())
            DemoView->setObjectName(QStringLiteral("DemoView"));
        DemoView->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(DemoView);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(DemoView);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        textEdit = new QTextEdit(DemoView);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(DemoView);

        QMetaObject::connectSlotsByName(DemoView);
    } // setupUi

    void retranslateUi(QWidget *DemoView)
    {
        DemoView->setWindowTitle(QApplication::translate("DemoView", "DemoView", 0));
        pushButton->setText(QApplication::translate("DemoView", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class DemoView: public Ui_DemoView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOVIEW_H
