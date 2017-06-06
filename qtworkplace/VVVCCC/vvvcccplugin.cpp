#include "vvvccc.h"
#include "vvvcccplugin.h"

#include <QtPlugin>

VVVCCCPlugin::VVVCCCPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void VVVCCCPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool VVVCCCPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *VVVCCCPlugin::createWidget(QWidget *parent)
{
    return new VVVCCC(parent);
}

QString VVVCCCPlugin::name() const
{
    return QLatin1String("VVVCCC");
}

QString VVVCCCPlugin::group() const
{
    return QLatin1String("");
}

QIcon VVVCCCPlugin::icon() const
{
    return QIcon();
}

QString VVVCCCPlugin::toolTip() const
{
    return QLatin1String("");
}

QString VVVCCCPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool VVVCCCPlugin::isContainer() const
{
    return false;
}

QString VVVCCCPlugin::domXml() const
{
    return QLatin1String("<widget class=\"VVVCCC\" name=\"vVVCCC\">\n</widget>\n");
}

QString VVVCCCPlugin::includeFile() const
{
    return QLatin1String("vvvccc.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(vvvcccplugin, VVVCCCPlugin)
#endif // QT_VERSION < 0x050000
