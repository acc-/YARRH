#-------------------------------------------------
#
# Project created by QtCreator 2012-06-26T12:00:18
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = yarrh
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glwidget.cpp \
    gcodeobject.cpp \
    layer.cpp \
    graphwidget.cpp \
    headcontrol.cpp \
    headcontrolline.cpp \
    printer.cpp \
    aboutwindow.cpp \
    layer2d.cpp

HEADERS  += mainwindow.h \
    glwidget.h \
    gcodeobject.h \
    layer.h \
    graphwidget.h \
    headcontrol.h \
    headcontrolline.h \
    printer.h \
    aboutwindow.h \
    layer2d.h

FORMS    += mainwindow.ui \
    aboutwindow.ui

include(qextserialport/qextserialport.pri)

RESOURCES += \
    resource.qrc

TRANSLATIONS = yarrh_pl.ts \
               yarrh_en.ts \
               yarrh_de.ts \
               yarrh_bg.ts \
               yarrh_fi.ts












