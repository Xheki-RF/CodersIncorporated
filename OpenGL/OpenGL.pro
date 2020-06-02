#-------------------------------------------------
#
# Project created by QtCreator 2020-05-10T21:33:58
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = OpenGL
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h
LIBS += -lopengl32

OTHER_FILES += \
    vshader.vsh \
    fshader.fsh


