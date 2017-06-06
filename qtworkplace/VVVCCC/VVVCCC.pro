CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(vvvcccplugin)
TEMPLATE    = lib

HEADERS     = vvvcccplugin.h \
    vvvccc.h
SOURCES     = vvvcccplugin.cpp \
    vvvccc.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(vvvccc.pri)

FORMS += \
    vvvccc.ui
