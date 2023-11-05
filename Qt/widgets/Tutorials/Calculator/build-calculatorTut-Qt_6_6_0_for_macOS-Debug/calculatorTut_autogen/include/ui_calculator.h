/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button0;
    QPushButton *Button8;
    QPushButton *Button1;
    QPushButton *ButtonDiv;
    QPushButton *Button3;
    QPushButton *ButtonSign;
    QPushButton *ButtonDec;
    QPushButton *ButtonSqrt;
    QPushButton *Button7;
    QPushButton *Button4;
    QPushButton *Button2;
    QPushButton *Button9;
    QPushButton *ButtonMult;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *ButtonAdd;
    QPushButton *ButtonEqu;
    QLineEdit *Display;
    QPushButton *ButtonSub;
    QPushButton *ButtonAC;
    QPushButton *ButtonSqu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(307, 271);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");

        gridLayout->addWidget(Button0, 5, 1, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        ButtonDiv = new QPushButton(centralwidget);
        ButtonDiv->setObjectName("ButtonDiv");
        ButtonDiv->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(ButtonDiv, 2, 3, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        ButtonSign = new QPushButton(centralwidget);
        ButtonSign->setObjectName("ButtonSign");

        gridLayout->addWidget(ButtonSign, 5, 0, 1, 1);

        ButtonDec = new QPushButton(centralwidget);
        ButtonDec->setObjectName("ButtonDec");
        ButtonDec->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(ButtonDec, 5, 2, 1, 1);

        ButtonSqrt = new QPushButton(centralwidget);
        ButtonSqrt->setObjectName("ButtonSqrt");
        ButtonSqrt->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(ButtonSqrt, 4, 4, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        ButtonMult = new QPushButton(centralwidget);
        ButtonMult->setObjectName("ButtonMult");
        ButtonMult->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(ButtonMult, 3, 3, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        ButtonAdd = new QPushButton(centralwidget);
        ButtonAdd->setObjectName("ButtonAdd");
        ButtonAdd->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(ButtonAdd, 4, 3, 1, 1);

        ButtonEqu = new QPushButton(centralwidget);
        ButtonEqu->setObjectName("ButtonEqu");
        ButtonEqu->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(ButtonEqu, 5, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Display, 0, 0, 1, 6);

        ButtonSub = new QPushButton(centralwidget);
        ButtonSub->setObjectName("ButtonSub");
        ButtonSub->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(ButtonSub, 5, 3, 1, 1);

        ButtonAC = new QPushButton(centralwidget);
        ButtonAC->setObjectName("ButtonAC");

        gridLayout->addWidget(ButtonAC, 2, 4, 1, 1);

        ButtonSqu = new QPushButton(centralwidget);
        ButtonSqu->setObjectName("ButtonSqu");
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        ButtonSqu->setFont(font);
        ButtonSqu->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(ButtonSqu, 3, 4, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 307, 22));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        ButtonDiv->setText(QCoreApplication::translate("Calculator", "\303\267", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        ButtonSign->setText(QCoreApplication::translate("Calculator", "\302\261", nullptr));
        ButtonDec->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        ButtonSqrt->setText(QCoreApplication::translate("Calculator", "\342\210\232", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        ButtonMult->setText(QCoreApplication::translate("Calculator", "\303\227", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        ButtonAdd->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        ButtonEqu->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Display->setText(QString());
        ButtonSub->setText(QCoreApplication::translate("Calculator", "\342\210\222", nullptr));
        ButtonAC->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        ButtonSqu->setText(QCoreApplication::translate("Calculator", "x^2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
