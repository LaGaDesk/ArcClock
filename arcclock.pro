QT += widgets

TARGET = arcclock

HEADERS       = arcclock.h \
    prefs.h
SOURCES       = arcclock.cpp \
                main.cpp \
    prefs.cpp

# install
#target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/shapedclock
#INSTALLS += target

FORMS += \
    prefs.ui
