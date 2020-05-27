#-------------------------------------------------
#
# Project created by QtCreator 2020-05-27T21:16:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QAApp
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11 release

SOURCES += \
        ..\src\main.cpp \
        ..\src\mainwnd.cpp \
    ../src/sqlopt.cpp \
    ../src/datacenter.cpp

HEADERS += \
        ..\src\mainwnd.h \
    ../src/sqlopt.h \
    ../src/datacenter.h \
    ../src/qaappdef.h

FORMS += \
        ..\src\qmainwnd.ui

UI_DIR += ..\tmp\


MOC_DIR += ..\tmp\


DESTDIR += ..\bin\


OBJECTS_DIR += ..\tmp\

# Default rules for deployment.
qnx: target.path = tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
