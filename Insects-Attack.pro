TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    classes/Media/image.cpp \
    classes/Media/file.cpp \
    classes/game.cpp \
    classes/test.cpp \
    classes/resourcemanager.cpp \
    classes/Config.cpp

HEADERS += \
    classes/Media/image.h \
    classes/Media/file.h \
    classes/game.h \
    classes/test.h \
    classes/resourcemanager.h \
    classes/Config.h
