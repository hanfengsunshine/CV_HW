#-------------------------------------------------
#
# Project created by QtCreator 2014-02-14T16:07:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CV_HW
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    iscissor.cpp \
    fibheap.cpp \
    binheap.cpp

HEADERS  += mainwindow.h \
    iscissor.h \
    fibheap.h \
    binheap.h \
    helper.h

FORMS    += mainwindow.ui

OPENCVENABLE = 1
!include(QTFlagsOpenCV.pri) {
    error("Cannot include QTFlagsOpenCV.pri")
}

OTHER_FILES += \
    libraryDetector.pri