#pragma once

#include <QtGlobal>

#if defined(WUSHENGJUNMYPLUGIN_LIBRARY)
#  define WUSHENGJUNMYPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define WUSHENGJUNMYPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif