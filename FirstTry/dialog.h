#ifndef DIALOG_H
#define DIALOG_H
#include "mainwindow.h"
#include "ui_dialog.h"
#include <QPixmap>
#include <QMainWindow>
#include <QString>
#include <QtWidgets>
#include <QThread>
#include <QFile>
#include <QSoundEffect>
#include <QProcess>
#include <QTimer>
#include <QDialog>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(MainWindow* mainWindow, QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_set_bet_clicked();

private:
    Ui::Dialog *ui;
    MainWindow* mainWindowPtr;
    QSoundEffect enter_sound;
};

#endif // DIALOG_H
