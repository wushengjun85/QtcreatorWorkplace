#include "vc.h"
#include "vcplugin.h"

#include <QtPlugin>

VCPlugin::VCPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void VCPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool VCPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *VCPlugin::createWidget(QWidget *parent)
{
    return new VC(parent);
}

QString VCPlugin::name() const
{
    return QLatin1String("VC");
}

QString VCPlugin::group() const
{
    return QLatin1String("");
}

QIcon VCPlugin::icon() const
{
    return QIcon();
}

QString VCPlugin::toolTip() const
{
    return QLatin1String("");
}

QString VCPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool VCPlugin::isContainer() const
{
    return false;
}

QString VCPlugin::domXml() const
{
    return QLatin1String("<widget class=\"VC\" name=\"vC\">\n</widget>\n");
}

QString VCPlugin::includeFile() const
{
    return QLatin1String("vc.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(vcplugin, VCPlugin)
#endif // QT_VERSION < 0x050000
