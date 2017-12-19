#-------------------------------------------------
#
# Project created by QtCreator 2017-11-28T13:14:07
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = halizatester2
TEMPLATE = app


SOURCES += main.cpp\
        halizatester2.cpp \
    testdisplay.cpp \
    loggingcategories.cpp \
    testkyped.cpp \
    testbaterai.cpp \
    hidupitupilihan.cpp \
    logger.cpp

HEADERS  += halizatester2.h \
    testdisplay.h \
    loggingcategories.h \
    testkyped.h \
    testbaterai.h \
    hidupitupilihan.h \
    logger.h

FORMS    += halizatester2.ui \
    testdisplay.ui \
    testkyped.ui \
    testbaterai.ui \
    hidupitupilihan.ui

DISTFILES += \
    LoggingCategoriesForm.ui.qml \
    LoggingCategories.qml
