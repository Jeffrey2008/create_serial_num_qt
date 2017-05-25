#-------------------------------------------------
#
# Project created by QtCreator 2016-06-22T16:23:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = create_serial_num_qt
TEMPLATE = app
RC_FILE = myapp.rc
TRANSLATIONS += cn.ts

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

RESOURCES += \
    resource.qrc
