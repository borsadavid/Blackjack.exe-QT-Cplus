#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QApplication>

int game_bet;
bool bet_chosen=false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), deck(ui,&soundEffect), logic(ui,&soundEffect), progress(ui,&soundEffect)
{

    ui->setupUi(this);
    ui->reset_button->setVisible(false); //reset button is only visible on game end
    ui->game_result->setVisible(false);
    //setting currency and highscore on start display
    QString currency_value = "";
    QFile currencyFile(QDir::currentPath() + "/Progress/Currency.txt");
    if (currencyFile.open(QIODevice::ReadOnly | QIODevice::Text))
        currency_value = QTextStream(&currencyFile).readLine();
    currencyFile.close();
    ui->currency_label->setText(currency_value);
    QString highscore_value = "";
    QFile highscoreFile(QDir::currentPath() + "/Progress/Highscore.txt");
    if (highscoreFile.open(QIODevice::ReadOnly | QIODevice::Text))
        highscore_value = QTextStream(&highscoreFile).readLine();
    highscoreFile.close();
    ui->highscore_label->setText(highscore_value);
    //end o setting first values

    //start background song
    background_song.setSource(QUrl("qrc:/Sounds/loop.wav"));
    background_song.setLoopCount(QSoundEffect::Infinite);
    background_song.setVolume(0.1); // Set volume to 10%
    background_song.play();

    //connect menu actions to their functions
    connect(ui->actionOn, &QAction::triggered, this, &MainWindow::on_actionOn);
    connect(ui->actionOff, &QAction::triggered, this, &MainWindow::on_actionOff);


}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_draw_card_button_clicked()
{
    deck.drawCard();
}


void MainWindow::on_hold_button_clicked()
{
    deck.Hold();
}

void MainWindow::on_reset_button_clicked()
{
    deck.reset();
}

void MainWindow::set_bet_label(int value)
{
    ui->bet_label->setText(QString::number(value)); //display on screen chosen bet
}

void MainWindow::on_actionOn()
{
    background_song.setVolume(0.1); //enable volume
}

void MainWindow::on_actionOff()
{
    background_song.setVolume(0); //disable volume
}
