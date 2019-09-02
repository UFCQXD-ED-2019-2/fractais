TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    lib/pen.cpp \
    lib/cpen.cpp \
    lib/sfline.cpp \
    fractais.cpp

HEADERS += \
    lib/cpen.h \
    lib/sfLine.h \
    lib/pen.h


CONFIG += c++17
LIBS += -lsfml-graphics -lsfml-window -lsfml-system
