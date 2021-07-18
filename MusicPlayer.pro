#-------------------------------------------------
#
# Project created by QtCreator 2021-07-11T12:18:11
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MusicPlayer
TEMPLATE = app
CONFIG += c++17

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0




SOURCES += \
    ViewModel/deletemusiccommand.cpp \
        main.cpp \
        View/mainwindow.cpp \
#        ViewModel/*.cpp \
#        Model/*.cpp \
#        mainwindow.cpp \
        App/app.cpp \
        Model/musiclist.cpp \
        Model/music.cpp \
        ViewModel/viewmodel.cpp \
        Commands/command.cpp \
        ViewModel/addmusiccommand.cpp\
        Notification/notification.cpp \
    View/updateviewnotification.cpp \
    ViewModel/updateinfonotification.cpp



HEADERS += \
#        mainwindow.h \
#        Common/*.h \
#        App/*.h \
#        Commands/*.h \
        View/mainwindow.h \
#        ViewModel/*.h \
#        Model/*.h \
        App/app.h \
        Model/musiclist.h \
        Model/music.h \
    ViewModel/deletemusiccommand.h \
        ViewModel/viewmodel.h \
        Commands/command.h \
        ViewModel/addmusiccommand.h\
        Notification/notification.h\
    Notification/notification.h \
    View/updateviewnotification.h \
    ViewModel/updateinfonotification.h \
        myqss.h

FORMS += \
        mainwindow.ui

DISTFILES += \
    image/ios-pause.png \
    image/ios-play (1).png \
    image/ios-skipbackward.png \
    image/ios-skipforward.png

RESOURCES += \
    image.qrc
