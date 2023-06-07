#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(1400, 800);

    int id = QFontDatabase::addApplicationFont(":/Font/peralta.ttf");
    if (id < 0)
        cout << "Failed to load font.";

    QFont font("Peralta", 15, 1);


    QApplication::setFont(font);
    w.setFont(font);  // Set font for the MainWindow widget

    Dialog dialog(&w);
    dialog.setFont(font);  // Set font for the Dialog widget

    dialog.show();

    return a.exec();
}
