#!/bin/bash

if [ $EUID != 0 ]; then
    echo "You need to run me as super user"
    exit 1
fi

if [ -f Makefile ]; then
    make distclean
fi

qmake
make

if [ -x arcclock ]; then
    cp -fv ./arcclock /usr/bin
    cp -fv ./arcclock.desktop /usr/share/applications
    cp -fv ./arcclock.svg /usr/share/icons/hicolor/scalable/apps
fi
