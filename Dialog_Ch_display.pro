#-------------------------------------------------
#
# Project created by QtCreator 2018-04-27T08:38:47
#
#-------------------------------------------------

QT       += core gui
QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dialog_Ch_display
TEMPLATE = app

UI_DIR = ./build/ui
MOC_DIR = ./build/moc
OBJECTS_DIR = ./build/obj
RCC_DIR = ./build/rcc


SOURCES += main.cpp\
        mainwindow.cpp \
    multichanneltablewidget.cpp \
    drowline.cpp \
    chanelselect.cpp

HEADERS  += mainwindow.h \
    multichanneltablewidget.h \
    drowline.h \
    chanelselect.h

FORMS    += mainwindow.ui \
    multichanneltablewidget.ui \
    drowline.ui \
    chanelselect.ui

RESOURCES += \
    Res.qrc
