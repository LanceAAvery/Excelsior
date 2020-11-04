# file: {Excelsior repo}./src/Excelsior.pri

#message(QT5INCLUDEBASE = $$(QT5INCLUDEBASE))
#message(QTBASEDESTDIR = $$(QTBASEDESTDIR))
#message(QTCVINCLUDEPATH = $$(QTCVINCLUDEPATH))
###message(PATH = $$(PATH))

#DEFINES *= QTCV_SETTINGS_HACK
include(./version.pri)
include(../../EIRC5/src/ourbld.pri)
include(../../EIRC5/src/ourdest.pri)
#include(../../EIRC5/src/ipath.pri)
INCLUDEPATH *= ../../libs
INCLUDEPATH *= ../../../../EIRC5/src/libs

#message(OURDEST = $$OURDEST)
#message(LIBS = $$LIBS)
