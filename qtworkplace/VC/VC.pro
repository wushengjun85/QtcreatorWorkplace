CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(vcplugin)
TEMPLATE    = lib

HEADERS     = vcplugin.h \
    vc.h
SOURCES     = vcplugin.cpp \
    vc.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(vc.pri)

FORMS += \
    vc.ui
