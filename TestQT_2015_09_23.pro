#-------------------------------------------------
#
# Project created by QtCreator 2015-09-23T18:04:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestQT_2015_09_23
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    vlc_on_qt.cpp



INCLUDEPATH += "C:\Program Files (x86)\VideoLAN\VLC\sdk\include"

LIBS += -llibvlc -L"c:\Program Files (x86)\VideoLAN\VLC"
#LIBS += -llibvlc -Lc:\Program Files (x86)\VideoLAN\VLC\sdk\lib

HEADERS  += mainwindow.h \
    vlc_on_qt.h

FORMS    += mainwindow.ui
