#-------------------------------------------------
#
# Project created by QtCreator 2011-09-29T09:57:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = QAgentesLogicos
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qagente.cpp \
    qambiente.cpp \
    qambientegui.cpp \
    qagentesimples.cpp \
    qagentememoriaanterior.cpp \
    qagentecommemoria.cpp \
    qagenteguloso.cpp \
    qdijkstra.cpp \
    qagenteinteligente.cpp \
    qtest.cpp \
    qtestgui2.cpp

HEADERS  += mainwindow.h \
    qagente.h \
    qambiente.h \
    qambientegui.h \
    qagentesimples.h \
    qagentememoriaanterior.h \
    qagentecommemoria.h \
    qagenteguloso.h \
    qdijkstra.h \
    qagenteinteligente.h \
    qtest.h \
    qtestgui2.h

FORMS    += mainwindow.ui \
    qtestgui.ui \
    qtestgui2.ui

RESOURCES += \
    qresources.qrc
