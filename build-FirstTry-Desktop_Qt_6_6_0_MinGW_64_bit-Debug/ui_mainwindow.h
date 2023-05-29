/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOn;
    QAction *actionOff;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *Player_Widget_2;
    QFormLayout *formLayout_6;
    QFormLayout *formLayout_2;
    QLabel *opponentpointstext;
    QLabel *opponent_points_label;
    QLabel *opponentcardstext;
    QWidget *parentWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *Interaction_Widget;
    QFormLayout *formLayout_4;
    QWidget *Buttons_widget;
    QGridLayout *gridLayout_2;
    QPushButton *hold_button;
    QPushButton *reset_button;
    QLabel *game_result;
    QPushButton *draw_card_button;
    QWidget *Currency_Widget;
    QFormLayout *formLayout_3;
    QLabel *Highscoretext;
    QLabel *highscore_label;
    QLabel *bet_label;
    QLabel *Bettext;
    QLabel *currency_label;
    QLabel *Currencytext;
    QSpacerItem *verticalSpacer_4;
    QWidget *Player_Widget;
    QFormLayout *formLayout_5;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *player_points_label;
    QLabel *playercardstext;
    QWidget *parentWidget;
    QHBoxLayout *horizontalLayout;
    QMenuBar *Sound;
    QMenu *menuSound;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1705, 937);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Tempus Sans ITC")});
        font.setPointSize(36);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow#MainWindow {\n"
" border-image: url(\"C:/Users/qwert/Documents/Qt/FirstTry/images/background.jpg\") 0 0 0 0 stretch stretch;\n"
"}\n"
"\n"
"QMenuBar{\n"
" background-color: rgba(128, 0, 128, 0.7);\n"
"color:#f69232;\n"
"font-family: \"Peralta\";\n"
"}\n"
"\n"
"QMenu{\n"
"background-color: rgba(128, 0, 128, 0.7);\n"
"color:#f69232;\n"
"}\n"
"\n"
"QMenu:hover{\n"
"background-color: #f69232;\n"
"color:white;\n"
"}\n"
"\n"
"QAction{\n"
"background-color: rgba(128, 0, 128, 0.7);\n"
"color:#f69232;\n"
"}\n"
"QAction:hover{\n"
"background-color: #f69232;\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f69232;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: black;\n"
"}\n"
"\n"
"QLabel#game_result {\n"
"	size:40px;\n"
"	border-color:transparent;\n"
"	qproperty-alignment: 'AlignCenter';\n"
"	color: #ede5c5;\n"
"    background-color: rgba(128, 0, 128, 0.7);\n"
"}\n"
"\n"
"QWidget {\n"
"   background-color: transparent;\n"
"}\n"
"\n"
"QWidget#pa"
                        "rentWidget {\n"
"   border: 2px solid purple;\n"
"}\n"
"QWidget#parentWidget_2 {\n"
"   border: 2px solid purple;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #f69232;\n"
"    background-color: rgba(128, 0, 128, 0.3);\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    border: 2px solid rgba(128, 0, 128, 1);\n"
"    border-radius: 15px;\n"
"    color: #f69232;\n"
"    background-color: rgba(128, 0, 128, 0.7);\n"
"    padding: 5px;\n"
"    max-width: 500px;\n"
"    margin: 0 auto;\n"
"}\n"
"\n"
"#Currency_Widget{\n"
"border: 2px solid rgba(128, 0, 128, 0.8);\n"
" border-radius: 15px;\n"
"}\n"
""));
        actionOn = new QAction(MainWindow);
        actionOn->setObjectName("actionOn");
        actionOff = new QAction(MainWindow);
        actionOff->setObjectName("actionOff");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("font: 16pt \"Peralta\";"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Player_Widget_2 = new QWidget(centralwidget);
        Player_Widget_2->setObjectName("Player_Widget_2");
        formLayout_6 = new QFormLayout(Player_Widget_2);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setHorizontalSpacing(0);
        formLayout_2->setVerticalSpacing(0);
        opponentpointstext = new QLabel(Player_Widget_2);
        opponentpointstext->setObjectName("opponentpointstext");
        opponentpointstext->setMargin(7);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, opponentpointstext);

        opponent_points_label = new QLabel(Player_Widget_2);
        opponent_points_label->setObjectName("opponent_points_label");
        opponent_points_label->setMargin(10);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, opponent_points_label);


        formLayout_6->setLayout(0, QFormLayout::LabelRole, formLayout_2);

        opponentcardstext = new QLabel(Player_Widget_2);
        opponentcardstext->setObjectName("opponentcardstext");
        opponentcardstext->setMargin(8);

        formLayout_6->setWidget(1, QFormLayout::LabelRole, opponentcardstext);

        parentWidget_2 = new QWidget(Player_Widget_2);
        parentWidget_2->setObjectName("parentWidget_2");
        parentWidget_2->setMinimumSize(QSize(300, 210));
        parentWidget_2->setMaximumSize(QSize(1950, 200));
        horizontalLayout_2 = new QHBoxLayout(parentWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        formLayout_6->setWidget(2, QFormLayout::SpanningRole, parentWidget_2);


        verticalLayout_3->addWidget(Player_Widget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        Interaction_Widget = new QWidget(centralwidget);
        Interaction_Widget->setObjectName("Interaction_Widget");
        formLayout_4 = new QFormLayout(Interaction_Widget);
        formLayout_4->setObjectName("formLayout_4");
        Buttons_widget = new QWidget(Interaction_Widget);
        Buttons_widget->setObjectName("Buttons_widget");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Buttons_widget->sizePolicy().hasHeightForWidth());
        Buttons_widget->setSizePolicy(sizePolicy1);
        Buttons_widget->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(Buttons_widget);
        gridLayout_2->setObjectName("gridLayout_2");
        hold_button = new QPushButton(Buttons_widget);
        hold_button->setObjectName("hold_button");
        hold_button->setAutoFillBackground(false);

        gridLayout_2->addWidget(hold_button, 1, 0, 1, 1);

        reset_button = new QPushButton(Buttons_widget);
        reset_button->setObjectName("reset_button");
        reset_button->setEnabled(true);
        reset_button->setStyleSheet(QString::fromUtf8(""));
        reset_button->setProperty("Visible", QVariant(false));

        gridLayout_2->addWidget(reset_button, 4, 0, 1, 1);

        game_result = new QLabel(Buttons_widget);
        game_result->setObjectName("game_result");
        sizePolicy1.setHeightForWidth(game_result->sizePolicy().hasHeightForWidth());
        game_result->setSizePolicy(sizePolicy1);
        game_result->setStyleSheet(QString::fromUtf8("font: 20pt \"Peralta\";"));
        game_result->setWordWrap(true);

        gridLayout_2->addWidget(game_result, 2, 0, 1, 1);

        draw_card_button = new QPushButton(Buttons_widget);
        draw_card_button->setObjectName("draw_card_button");

        gridLayout_2->addWidget(draw_card_button, 5, 0, 1, 1);


        formLayout_4->setWidget(0, QFormLayout::FieldRole, Buttons_widget);

        Currency_Widget = new QWidget(Interaction_Widget);
        Currency_Widget->setObjectName("Currency_Widget");
        Currency_Widget->setStyleSheet(QString::fromUtf8("QLabel#currency_label{\n"
"border-radius:15px;\n"
"}\n"
"QLabel#highscore_label{\n"
"border-radius:15px;\n"
"}"));
        formLayout_3 = new QFormLayout(Currency_Widget);
        formLayout_3->setObjectName("formLayout_3");
        Highscoretext = new QLabel(Currency_Widget);
        Highscoretext->setObjectName("Highscoretext");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, Highscoretext);

        highscore_label = new QLabel(Currency_Widget);
        highscore_label->setObjectName("highscore_label");

        formLayout_3->setWidget(4, QFormLayout::FieldRole, highscore_label);

        bet_label = new QLabel(Currency_Widget);
        bet_label->setObjectName("bet_label");

        formLayout_3->setWidget(6, QFormLayout::FieldRole, bet_label);

        Bettext = new QLabel(Currency_Widget);
        Bettext->setObjectName("Bettext");

        formLayout_3->setWidget(6, QFormLayout::LabelRole, Bettext);

        currency_label = new QLabel(Currency_Widget);
        currency_label->setObjectName("currency_label");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, currency_label);

        Currencytext = new QLabel(Currency_Widget);
        Currencytext->setObjectName("Currencytext");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, Currencytext);


        formLayout_4->setWidget(0, QFormLayout::LabelRole, Currency_Widget);


        verticalLayout_3->addWidget(Interaction_Widget);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        Player_Widget = new QWidget(centralwidget);
        Player_Widget->setObjectName("Player_Widget");
        Player_Widget->setStyleSheet(QString::fromUtf8(""));
        formLayout_5 = new QFormLayout(Player_Widget);
        formLayout_5->setObjectName("formLayout_5");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        label = new QLabel(Player_Widget);
        label->setObjectName("label");
        label->setMargin(8);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        player_points_label = new QLabel(Player_Widget);
        player_points_label->setObjectName("player_points_label");
        player_points_label->setMargin(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, player_points_label);


        formLayout_5->setLayout(0, QFormLayout::LabelRole, formLayout);

        playercardstext = new QLabel(Player_Widget);
        playercardstext->setObjectName("playercardstext");
        playercardstext->setMargin(8);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, playercardstext);

        parentWidget = new QWidget(Player_Widget);
        parentWidget->setObjectName("parentWidget");
        parentWidget->setMinimumSize(QSize(300, 210));
        parentWidget->setMaximumSize(QSize(1950, 200));
        horizontalLayout = new QHBoxLayout(parentWidget);
        horizontalLayout->setObjectName("horizontalLayout");

        formLayout_5->setWidget(2, QFormLayout::SpanningRole, parentWidget);


        verticalLayout_3->addWidget(Player_Widget);

        MainWindow->setCentralWidget(centralwidget);
        Sound = new QMenuBar(MainWindow);
        Sound->setObjectName("Sound");
        Sound->setGeometry(QRect(0, 0, 1705, 22));
        QPalette palette;
        QBrush brush(QColor(246, 146, 50, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(246, 146, 50, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        Sound->setPalette(palette);
        menuSound = new QMenu(Sound);
        menuSound->setObjectName("menuSound");
        MainWindow->setMenuBar(Sound);

        Sound->addAction(menuSound->menuAction());
        menuSound->addAction(actionOn);
        menuSound->addAction(actionOff);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Ramses Blackjack", nullptr));
        actionOn->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
        actionOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        opponentpointstext->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Opponent's points:</p></body></html>", nullptr));
        opponent_points_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        opponentcardstext->setText(QCoreApplication::translate("MainWindow", "Opponent's Cards:", nullptr));
        hold_button->setText(QCoreApplication::translate("MainWindow", "Hold", nullptr));
        reset_button->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        game_result->setText(QString());
        draw_card_button->setText(QCoreApplication::translate("MainWindow", "Draw Card", nullptr));
        Highscoretext->setText(QCoreApplication::translate("MainWindow", "Highscore :", nullptr));
        highscore_label->setText(QString());
        bet_label->setText(QString());
        Bettext->setText(QCoreApplication::translate("MainWindow", "Bet :", nullptr));
        currency_label->setText(QString());
        Currencytext->setText(QCoreApplication::translate("MainWindow", "Currency :", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Player's points:</p></body></html>", nullptr));
        player_points_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        playercardstext->setText(QCoreApplication::translate("MainWindow", "Player's Cards:", nullptr));
        menuSound->setTitle(QCoreApplication::translate("MainWindow", "Sound", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
