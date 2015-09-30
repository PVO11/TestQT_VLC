#include "mainwindow.h"
#include <QApplication>
#include "vlc_on_qt.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    Player p;
    p.resize(640,480);
    //p.playFile("rtp://@:2626"); // Replace with what you want to play
    p.playFile("D:\programs\videovile\ЭЛУ.avi"); // Replace with what you want to play
    //p.playFile("D://Programs//VideoFile//ЭЛУ.avi/"); // Replace with what you want to play
    p.show();


    return a.exec();
}
