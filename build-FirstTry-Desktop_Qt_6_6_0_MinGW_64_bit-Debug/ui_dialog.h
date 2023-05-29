/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_3;
    QPushButton *set_bet;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *bet_value;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->setWindowModality(Qt::ApplicationModal);
        Dialog->resize(670, 350);
        Dialog->setMinimumSize(QSize(670, 350));
        Dialog->setMaximumSize(QSize(670, 350));
        Dialog->setStyleSheet(QString::fromUtf8("Dialog#Dialog {\n"
"    border-image: url(\"C:/Users/qwert/Documents/Qt/FirstTry/images/bet.png\") 0 0 0 0 stretch stretch\n"
"}\n"
"\n"
"#label_3\n"
"{\n"
"color:#ede5c5;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:transparent;\n"
"border: 2px solid #ffc523;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#8c3848;\n"
"}"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 80, 401, 51));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        label_3->setFont(font);
        set_bet = new QPushButton(Dialog);
        set_bet->setObjectName("set_bet");
        set_bet->setGeometry(QRect(240, 200, 171, 61));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 140, 491, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMinimum(5);
        horizontalSlider->setMaximum(150);
        horizontalSlider->setValue(5);
        horizontalSlider->setSliderPosition(5);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(260, 140, 169, 81));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bet_value = new QLabel(layoutWidget1);
        bet_value->setObjectName("bet_value");

        gridLayout->addWidget(bet_value, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Choose Bet", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "RAMSES BLACKJACK", nullptr));
        set_bet->setText(QCoreApplication::translate("Dialog", "Enter", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Place a bet:", nullptr));
        bet_value->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Bet Value:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
