## Copyright (C) 2014 University of Kaiserslautern
## Microelectronic System Design Research Group
##
## This file is part of the FPGAHS Course
## de.uni-kl.eit.course.fpgahs
##
## Matthias Jung <jungma@eit.uni-kl.de>
## Christian De Schryver <schryver@eit.uni-kl.de>
## Markus Steffes <steffesm@rhrk.uni-kl.de>

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

QMAKE_CXXFLAGS += -std=c++0x

HEADERS += nand2.h
HEADERS += exor2.h
HEADERS += stim.h
HEADERS += mon.h

unix:!macx: LIBS += -L/opt/systemc/lib/ -lsystemc

INCLUDEPATH += /opt/systemc/include
DEPENDPATH += /opt/systemc/include
