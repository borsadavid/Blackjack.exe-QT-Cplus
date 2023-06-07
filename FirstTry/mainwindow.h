#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qlayout.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMainWindow>
#include <QString>
#include <QSoundEffect>
#include <QtWidgets>
#include <QThread>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QProcess>
#include <QTimer>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <utility>
using namespace std;

extern int game_bet; //initialized globally for complete access everywhere
extern bool bet_chosen;

class PlayerProgress
{
protected:
    int highscore;
    int currency;
    Ui::MainWindow* ui;
    QSoundEffect* soundEffect;
public:
    PlayerProgress(Ui::MainWindow* ui, QSoundEffect* soundEffect) : ui(ui), soundEffect(soundEffect)
    {
        QFile currencyFile(QDir::currentPath() + "/Progress/Currency.txt");
        QFile highscoreFile(QDir::currentPath() + "/Progress/Highscore.txt");

        currency = currencyFile.open(QIODevice::ReadOnly | QIODevice::Text) ? QTextStream(&currencyFile).readLine().toInt() : 0;
        highscore = highscoreFile.open(QIODevice::ReadOnly | QIODevice::Text) ? QTextStream(&highscoreFile).readLine().toInt() : 0;

        if (currency < 5)
            currency = 30;

        currencyFile.close();
        highscoreFile.close();
    }

    void set_progress(bool win)
    {   //make some buttons visible while others not
        ui->game_result->setVisible(true);
        ui->reset_button->setVisible(true);
        ui->hold_button->setVisible(false);
        ui->draw_card_button->setVisible(false);
        ui->centralwidget->adjustSize();

        if (win)
        {
            ui->game_result->setText("You Win!");
            ui->game_result->show(); //show result on screen (Win/Loss)

            currency += game_bet;
            QSoundEffect* win_sound = new QSoundEffect;
            win_sound->setSource(QUrl("qrc:/Sounds/win.wav"));
            win_sound->play(); //play win sound
        }
        else
        {
            ui->game_result->setText("You Lost!");
            ui->game_result->show();

            currency -= game_bet;
            QSoundEffect* loose_sound = new QSoundEffect;
            loose_sound->setSource(QUrl("qrc:/Sounds/loose.wav"));
            loose_sound->play(); //play loose sound
        }

        // update highscore file if currency is greater than highscore
        if (currency > highscore)
        {
            highscore = currency;
            ui->highscore_label->setText(QString::number(highscore));
        }

        QFile currencyFile(QDir::currentPath() + "/Progress/Currency.txt");
        if (currencyFile.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&currencyFile);
            out << currency;
            ui->currency_label->setText(QString::number(currency));
            currencyFile.close();
        }

        QFile highscoreFile(QDir::currentPath() + "/Progress/Highscore.txt");
        if (highscoreFile.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&highscoreFile);
            out << highscore;
            highscoreFile.close();
        }
    }

};

class Logic : public PlayerProgress
{
protected:
    int player_points=0,opponent_points=0;
public:

    Logic(Ui::MainWindow* ui, QSoundEffect* soundEffect) : PlayerProgress(ui, soundEffect) {}

    bool check_for_end()
    {
        if (player_points == 21)
        {
            set_progress(true);
            return true;
        }
        if (player_points>21)
        {
            set_progress(false);
            return true;
        }
        else if (opponent_points>21)
        {
            set_progress(true);
            return true;
        //win
        }
        else if (opponent_points > player_points)
        {
            set_progress(false);
            return true;
        //loss
        }
        else
        {
            return false;
        }
    }

};

class Deck : public Logic
{
protected:
    string colors[4] = {"Hearts", "Diamonds", "Clubs", "Spades"}; //cards colors
    string ranks[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    int colorIndex,rankIndex;
    int usedCards_player[4][13] = {{0}}; //variable for drawn cards
    int usedCards_opponent[4][13] = {{0}};
    vector<std::pair<int, int>> cards_vector; //vector that eliminates drawn cards
    bool hold=false;
    int random;
    //Ui::MainWindow* ui;
public:
    Deck(Ui::MainWindow* ui, QSoundEffect* soundEffect) : Logic(ui, soundEffect) //initialize in constructor the vector with all values of possible pairs
    {                                   //pairs of colors / rank (ex: (0,0) , (0,1) , ... (3,11) , (3,12) )
        for (int i = 0; i <= 3; ++i)
        {
            for (int j = 0; j <= 12; ++j)
            {
                cards_vector.push_back(make_pair(i, j));
            }
        }
    }

    void Randomize()
    {
        srand(time(0));  //setting seed to current time so we don't get same "random" results
        random = rand()%cards_vector.size();
        colorIndex = cards_vector[random].first; //we set the index of color based on first element from vector pair
        rankIndex = cards_vector[random].second;   //we set the index of color based on second element from vector pair
        cards_vector.erase(cards_vector.begin() + random); //delete that pair from the vector so it's never drawn again
    }

    void Hold()
    {
        hold = true;
        QTimer* timer = new QTimer();
        QObject::connect(timer, &QTimer::timeout, [this, timer](){
            if (!check_for_end())
            {
                drawCard();
            }
            else
            {
                QMetaObject::invokeMethod(timer, "stop", Qt::QueuedConnection);
            }
        });
        timer->start(1000); // start the timer with a 1 second interval
    }

    void play_sound()
    {
        int randomNumber = QRandomGenerator::global()->bounded(1, 3);
        QString urlString = QString("qrc:/Sounds/draw_card%1.wav").arg(randomNumber); //choose one of the 2 draw_card sounds
        soundEffect->setSource(QUrl(urlString));
        soundEffect->play();
    }

    void displayCard()
    {
        QString color = QString::fromStdString(colors[colorIndex]);
        QString rank = QString::fromStdString(ranks[rankIndex]);

        //play random sound
        play_sound();

        // Create the image path based on color and rank
        QString imagePath = ":/images/card" + color + rank + ".png";

        // Load the card image
        QPixmap cardImage(imagePath);

        // Create a new QLabel for the card
        QLabel* cardLabel = new QLabel(ui->parentWidget);

        // Set the card image to the QLabel
        cardLabel->setPixmap(cardImage);
        cardLabel->setFixedSize(cardImage.size());

        // Add the QLabel to the parent widget's layout
        ui->parentWidget->layout()->addWidget(cardLabel);
        ui->parentWidget->layout()->setAlignment(Qt::AlignLeft);
        // Make sure the QLabel is visible
        cardLabel->show();
    }

    void displayCard_opponent()
    {
        QString color = QString::fromStdString(colors[colorIndex]);
        QString rank = QString::fromStdString(ranks[rankIndex]);

        //play sound
        play_sound();

        // Create the image path based on color and rank
        QString imagePath = ":/images/card" + color + rank + ".png";

        // Load the card image
        QPixmap cardImage(imagePath);

        // Create a new QLabel for the card
        QLabel* cardLabel_2 = new QLabel(ui->parentWidget_2);

        // Set the card image to the QLabel
        cardLabel_2->setPixmap(cardImage);
        cardLabel_2->setFixedSize(cardImage.size());

        // Add the QLabel to the parent widget's layout
        ui->parentWidget_2->layout()->addWidget(cardLabel_2);
        ui->parentWidget_2->layout()->setAlignment(Qt::AlignLeft);
        // Make sure the QLabel is visible
        cardLabel_2->show();

    }

    void addPlayerPoints()
    {   player_points=0;
        for (int i=0;i<4;i++)
            for (int j=1;j<13;j++)
            {  if (usedCards_player[i][j] == 1)
                {    if (j<=8)
                        player_points+=j+1;
                    else
                        player_points+=10;
                }
            }
        for (int i=0;i<4;i++)
            if (usedCards_player[i][0] == 1)
            {  if (player_points+11<=21)
                    player_points+=11;
                else
                    player_points+=1;
            }

        // Get the existing QLabel for the player score
        QLabel* player_score_label = ui->player_points_label;

        // Set the text of the QLabel to the player points
        player_score_label->setText(QString::number(player_points));

        check_for_end();
    }

    void addOpponentPoints()
    {   opponent_points=0;
        for (int i=0;i<4;i++)
            for (int j=1;j<13;j++)
            {  if (usedCards_opponent[i][j] == 1)
                {    if (j<=8)
                        opponent_points+=j+1;
                    else
                        opponent_points+=10;
                }
            }
        for (int i=0;i<4;i++)
            if (usedCards_opponent[i][0] == 1)
            {  if (opponent_points+11<=21)
                    opponent_points+=11;
                else
                    opponent_points+=1;
            }

        // Get the existing QLabel for the player score
        QLabel* opponent_score_label = ui->opponent_points_label;

        // Set the text of the QLabel to the player points
        opponent_score_label->setText(QString::number(opponent_points));

        //check_for_end();
    }

    void drawCard()
    {
        Randomize();

        if (hold==false)
        {
            usedCards_player[colorIndex][rankIndex] = 1;
            addPlayerPoints();
            displayCard();
        }
        else
        {
            usedCards_opponent[colorIndex][rankIndex] = 1;
            addOpponentPoints();
            displayCard_opponent();
        }

    }

    void reset()
    {
      int usedCards_player[4][13] = {{0}};
      int usedCards_opponent[4][13] = {{0}};
      hold=false;
      opponent_points=0;
      player_points=0;

      // Get the path to the current executable
      QString appPath = QCoreApplication::applicationFilePath();
      // Launch a new instance of the application
      QProcess::startDetached(appPath);
      // Terminate the current instance of the application
      QCoreApplication::exit(0);

    }
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_draw_card_button_clicked();
    void on_hold_button_clicked();
    void on_reset_button_clicked();
    void on_actionOn();
    void on_actionOff();
public slots:
    void set_bet_label(int value); //public for access in dialog window

private:
    Ui::MainWindow *ui;
    Deck deck;
    Logic logic;
    PlayerProgress progress;
    QSoundEffect soundEffect;
    QSoundEffect background_song;

};
#endif // MAINWINDOW_H
