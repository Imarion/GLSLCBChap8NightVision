QT += gui core

CONFIG += c++11

INCLUDEPATH += $$PWD/../glm/glm

TARGET  = NightVision
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    NightVision.cpp \
    teapot.cpp \
    vboplane.cpp \
    torus.cpp

HEADERS += \
    NightVision.h \
    teapotdata.h \
    teapot.h \
    vboplane.h \
    torus.h

OTHER_FILES += \
    fshader.txt \
    vshader.txt

RESOURCES += \
    shaders.qrc

DISTFILES += \
    fshader.txt \
    vshader.txt
