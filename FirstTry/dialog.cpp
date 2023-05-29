#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"

extern int game_bet;
extern bool bet_chosen;

Dialog::Dialog(MainWindow* mainWindow, QWidget *parent)
    : QDialog(parent), ui(new Ui::Dialog), mainWindowPtr(mainWindow)
{
    ui->setupUi(this);

    // Connect the slider and label
    connect(ui->horizontalSlider, &QSlider::valueChanged, [=](int value) {
        ui->bet_value->setNum(static_cast<int>(value));
    });

    enter_sound.setSource(QUrl("qrc:/Sounds/door.wav"));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_set_bet_clicked()
{
    QFile currencyFile("C:/Users/qwert/Documents/Qt/FirstTry/Progress/Currency.txt");
    int limit = currencyFile.open(QIODevice::ReadOnly | QIODevice::Text) ? QTextStream(&currencyFile).readLine().toInt() : 0;
    if (limit <= 0)
        limit = 30;

    game_bet = static_cast<int>(ui->horizontalSlider->value());

    if (game_bet > limit)
    {
        QMessageBox::information(this, "Wrong Bet", "Not enough currency for this bet!", QMessageBox::Ok);
    }
    else
    {
        enter_sound.play();
        close();
        mainWindowPtr->show(); //open main window
        mainWindowPtr->set_bet_label(game_bet); //we pass a function to main screen to show chosen bet
    }
}
