#pragma once

#include "wushengjunmyplugin_global.h"

#include <extensionsystem/iplugin.h>

namespace WushengjunMyPlugin {
namespace Internal {

class WushengjunMyPluginPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "WushengjunMyPlugin.json")

public:
    WushengjunMyPluginPlugin();
    ~WushengjunMyPluginPlugin();

    bool initialize(const QStringList &arguments, QString *errorString);
    void extensionsInitialized();
    ShutdownFlag aboutToShutdown();

private:
    void triggerAction();
};

} // namespace Internal
} // namespace WushengjunMyPlugin
