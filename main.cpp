#include "mainwindow.h"
#include <QApplication>
#include "vlc_on_qt.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();


    return a.exec();
}
