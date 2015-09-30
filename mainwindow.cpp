
#include <QFileDialog>
#include <QMouseEvent>

#include <vlc/vlc.h>
#include "mainwindow.h"
#include "windows.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qApp->installEventFilter(this);

    /*libvlc_instance_t * vlcInst = libvlc_new(0,NULL);

    if(vlcInst)
        libvlc_release(vlcInst);*/




    p.resize(640,480);
    //p.playFile("rtp://@:2626"); // Replace with what you want to play
    p.playFile("Fire1.avi"); // Replace with what you want to play
    //p.playFile("D://Programs//VideoFile//ЭЛУ.avi/"); // Replace with what you want to play
    p.show();

    //Player p;
    //p.resize(640,480);
    //p.playFile("rtp://@:2626"); // Replace with what you want to play
    //p.playFile("D://Programs//VideoFile//ЭЛУ.avi/"); // Replace with what you want to play
    //p.playFile("D://Programs//VideoFile//ЭЛУ.avi/"); // Replace with what you want to play
    //p.show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    /*if( event->type() == QEvent::MouseMove )
    {
        QMouseEvent *m = static_cast< QMouseEvent * >( event );
        QWidget *w = QApplication::widgetAt( m->globalPos() );
        if( w )
            ui->listWidget->addItem( obj->objectName() );
            //ui->labelHint->setText( w->whatsThis() );
    }*/

    if ((event->type() == QEvent::MouseButtonPress))
    {
        //ui->listWidget->addItem( obj->objectName() );

        QMouseEvent *m = static_cast< QMouseEvent * >( event );

        QString s = "";
        s += "x " + s.number(m->x(), 10) + " y " + s.number(m->y(), 10);
        ui->listWidget->addItem( s );
    }

    return QMainWindow::eventFilter( obj, event );
}

void MainWindow::on_pushButton_clicked()
{
    ShellExecute(
            0,
            TEXT( "open" ),
            TEXT( "C:\\Program Files (x86)\\The KMPlayer\\KMPlayer.exe" ),
            //TEXT( "\"D:\\Âèäåî\\+ + + Àýðî + + +\\Ïîëíûé Ýêñòðèì\\The Need 4 Speed - The Art Of Flight.mp4\"" ),
                //C:\Programs\TestQT_2015_09_23\TestQT_2015_09_23\VideoFile
            TEXT( "\"C:\\Programs\\VideoFile\\ЭЛУ.avi\"" ),
            0,
            SW_SHOWDEFAULT );
}

void MainWindow::on_pushButton_2_clicked()
{
    ShellExecute(
            0,
            TEXT( "open" ),
            TEXT( "C:\\Program Files (x86)\\The KMPlayer\\KMPlayer.exe" ),
            //TEXT( "\"D:\\Âèäåî\\+ + + Àýðî + + +\\Ïîëíûé Ýêñòðèì\\The Need 4 Speed - The Art Of Flight.mp4\"" ),
                //C:\Programs\TestQT_2015_09_23\TestQT_2015_09_23\VideoFile
            TEXT( "\"C:\\Programs\\VideoFile\\Fire1.avi\"" ),
            0,
            SW_SHOWDEFAULT );
}

void MainWindow::on_pushButton_3_clicked()
{
    ShellExecute(
            0,
            TEXT( "open" ),
            TEXT( "C:\\Program Files (x86)\\The KMPlayer\\KMPlayer.exe" ),
            //TEXT( "\"D:\\Âèäåî\\+ + + Àýðî + + +\\Ïîëíûé Ýêñòðèì\\The Need 4 Speed - The Art Of Flight.mp4\"" ),
                //C:\Programs\TestQT_2015_09_23\TestQT_2015_09_23\VideoFile
            TEXT( "\"C:\\Programs\\VideoFile\\111.jpg\"" ),
            0,
            SW_SHOWDEFAULT );
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->listWidget->addItem( "Привет" );
    //ui->listWidget->addItem( file );
}

void MainWindow::on_pushButton_5_clicked()
{
    //QString file = QFileDialog::getOpenFileName(0 ,"Укажите файлы для запуска", "", "*.exe");
    QString file = QFileDialog::getOpenFileName(0 ,"Укажите файлы для запуска", "", "*.avi");
    ui->listWidget->addItem( file );
    ui->lineEdit->setText( file );
}
