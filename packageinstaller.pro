# **********************************************************************
# * Copyright (C) 2017 MX Authors
# *
# * Authors: Adrian
# *          Dolphin_Oracle
# *          MX Linux <http://mxlinux.org>
# *
# * This file is part of mx-packageinstaller.
# *
# * mx-packageinstaller is free software: you can redistribute it and/or modify
# * it under the terms of the GNU General Public License as published by
# * the Free Software Foundation, either version 3 of the License, or
# * (at your option) any later version.
# *
# * mx-packageinstaller is distributed in the hope that it will be useful,
# * but WITHOUT ANY WARRANTY; without even the implied warranty of
# * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# * GNU General Public License for more details.
# *
# * You should have received a copy of the GNU General Public License
# * along with mx-packageinstaller.  If not, see <http://www.gnu.org/licenses/>.
# **********************************************************************/

QT       += core gui xml network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = packageinstaller
TEMPLATE = app


SOURCES += main.cpp\
    cmd.cpp \
    mainwindow.cpp \
    lockfile.cpp \
    versionnumber.cpp

HEADERS  += \
    cmd.h \
    mainwindow.h \
    lockfile.h \
    versionnumber.h

FORMS    += \
    mainwindow.ui

TRANSLATIONS += translations/packageinstaller_ca.ts \
                translations/packageinstaller_cs.ts \
                translations/packageinstaller_de.ts \
                translations/packageinstaller_el.ts \
                translations/packageinstaller_es.ts \
                translations/packageinstaller_fr.ts \
                translations/packageinstaller_it.ts \
                translations/packageinstaller_nl.ts \
                translations/packageinstaller_pt.ts \
                translations/packageinstaller_ro.ts \
                translations/packageinstaller_ru.ts \
                translations/packageinstaller_sk.ts \
                translations/packageinstaller_sv.ts \
                translations/packageinstaller_zh_TW.ts

RESOURCES += \
    images.qrc


