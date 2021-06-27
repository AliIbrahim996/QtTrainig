#-------------------------------------------------
#
# Project created by QtCreator 2021-06-27T14:52:20
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    databasemanager.cpp

HEADERS  += mainwindow.h \
    databasemanager.h

FORMS    += mainwindow.ui
