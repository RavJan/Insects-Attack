TEMPLATE = app
CONFIG += console
CONFIG -= qt

LIBS += -lSDL -lSDL_image -lSDL_gfx

SOURCES += main.cpp \
    classes/Media/image.cpp \
    classes/Media/file.cpp \
    classes/game.cpp \
    classes/test.cpp \
    classes/resourcemanager.cpp \
    classes/Config.cpp \
    classes/Obiects/Object.cpp \
    classes/Obiects/Movalbe.cpp \
    classes/Obiects/Static.cpp \
    classes/Obiects/Destroyable.cpp \
    classes/Obiects/Upgradable.cpp \
    classes/Point.cpp \
    classes/Obiects/Unit.cpp \
    classes/Obiects/Building.cpp \
    classes/Obiects/Water.cpp

HEADERS += \
    classes/Media/image.h \
    classes/Media/file.h \
    classes/game.h \
    classes/test.h \
    classes/resourcemanager.h \
    classes/Config.h \
    classes/Obiects/Object.h \
    classes/Obiects/Movalbe.h \
    classes/Obiects/Static.h \
    classes/Obiects/Destroyable.h \
    classes/Obiects/Upgradable.h \
    classes/Point.h \
    classes/Obiects/Unit.h \
    classes/Obiects/Building.h \
    classes/Obiects/Water.h
