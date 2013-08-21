TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    zdarzenie.cpp \
    stdafx.cpp \
    silnik.cpp \
    pole.cpp \
    pole_plus.cpp \
    plansza.cpp \
    menu.cpp \
    komunikaty.cpp \
    grafika.cpp \
    gracz.cpp \
    ekran.cpp \
    dzwiek.cpp \
    czas.cpp \
    main.cpp \
    pole_minus.cpp \
    pole_neutral.cpp \
    kostka.cpp

OTHER_FILES += \
    Thumbs.db \
    README.md \
    LICENSE \
    JFRingmaster.ttf \
    comicbd.ttf \
    comic.ttf \
    CMakeLists.txt \
    bagno.pro.user \
    arial.ttf

HEADERS += \
    zdarzenie.h \
    targetver.h \
    stdafx.h \
    silnik.h \
    pole.h \
    pole_plus.h \
    pole_neutral.h \
    pole_minus.h \
    plansza.h \
    menu.h \
    komunikaty.h \
    grafika.h \
    gracz.h \
    generuj_tablice.h \
    ekran.h \
    dzwiek.h \
    czas.h \
    kostka.h


unix:!macx: LIBS += -L$$PWD/../../Pobrane/SFML-2.0/lib/ -lsfml-audio
unix:!macx: LIBS += -L$$PWD/../../Pobrane/SFML-2.0/lib/ -lsfml-graphics
unix:!macx: LIBS += -L$$PWD/../../Pobrane/SFML-2.0/lib/ -lsfml-network
unix:!macx: LIBS += -L$$PWD/../../Pobrane/SFML-2.0/lib/ -lsfml-system
unix:!macx: LIBS += -L$$PWD/../../Pobrane/SFML-2.0/lib/ -lsfml-window


INCLUDEPATH += $$PWD/../../Pobrane/SFML-2.0/include
DEPENDPATH += $$PWD/../../Pobrane/SFML-2.0/include
