QT += widgets

TARGET = arcclock2

HEADERS       = arcclock.h \
    prefs.h
SOURCES       = arcclock.cpp \
                main.cpp \
    prefs.cpp

FORMS += \
    prefs.ui

TRANSLATIONS += ts/arc_en.ts
TRANSLATIONS += ts/arc_de.ts
TRANSLATIONS += ts/arc_ua.ts


isEmpty(PREFIX) {
    PREFIX = /usr
}

BINDIR = $$PREFIX/bin
DATADIR = $$PREFIX/share

target.path = $$BINDIR
#translations.path = $$DATADIR/$${TARGET}/translations
#translations.files = arc_de.qm arc_en.pm
desktop.path = $$DATADIR/applications
desktop.files = arcclock.desktop
icons.path = $$DATADIR/icons/hicolor/scalable/apps
icons.files = arcclock.svg

INSTALLS += target desktop icons

RESOURCES += \
    resources.qrc
