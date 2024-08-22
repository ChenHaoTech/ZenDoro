//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <audioplayers_linux/audioplayers_linux_plugin.h>
#include <clipboard_watcher/clipboard_watcher_plugin.h>
#include <flutter_secure_storage_linux/flutter_secure_storage_linux_plugin.h>
#include <gtk/gtk_plugin.h>
#include <hotkey_manager/hotkey_manager_plugin.h>
#include <local_notifier/local_notifier_plugin.h>
#include <pasteboard/pasteboard_plugin.h>
#include <rich_clipboard_linux/rich_clipboard_plugin.h>
#include <screen_retriever/screen_retriever_plugin.h>
#include <sentry_flutter/sentry_flutter_plugin.h>
#include <sqlite3_flutter_libs/sqlite3_flutter_libs_plugin.h>
#include <system_tray/system_tray_plugin.h>
#include <url_launcher_linux/url_launcher_plugin.h>
#include <window_manager/window_manager_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) audioplayers_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "AudioplayersLinuxPlugin");
  audioplayers_linux_plugin_register_with_registrar(audioplayers_linux_registrar);
  g_autoptr(FlPluginRegistrar) clipboard_watcher_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "ClipboardWatcherPlugin");
  clipboard_watcher_plugin_register_with_registrar(clipboard_watcher_registrar);
  g_autoptr(FlPluginRegistrar) flutter_secure_storage_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterSecureStorageLinuxPlugin");
  flutter_secure_storage_linux_plugin_register_with_registrar(flutter_secure_storage_linux_registrar);
  g_autoptr(FlPluginRegistrar) gtk_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "GtkPlugin");
  gtk_plugin_register_with_registrar(gtk_registrar);
  g_autoptr(FlPluginRegistrar) hotkey_manager_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "HotkeyManagerPlugin");
  hotkey_manager_plugin_register_with_registrar(hotkey_manager_registrar);
  g_autoptr(FlPluginRegistrar) local_notifier_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "LocalNotifierPlugin");
  local_notifier_plugin_register_with_registrar(local_notifier_registrar);
  g_autoptr(FlPluginRegistrar) pasteboard_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "PasteboardPlugin");
  pasteboard_plugin_register_with_registrar(pasteboard_registrar);
  g_autoptr(FlPluginRegistrar) rich_clipboard_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "RichClipboardPlugin");
  rich_clipboard_plugin_register_with_registrar(rich_clipboard_linux_registrar);
  g_autoptr(FlPluginRegistrar) screen_retriever_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "ScreenRetrieverPlugin");
  screen_retriever_plugin_register_with_registrar(screen_retriever_registrar);
  g_autoptr(FlPluginRegistrar) sentry_flutter_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "SentryFlutterPlugin");
  sentry_flutter_plugin_register_with_registrar(sentry_flutter_registrar);
  g_autoptr(FlPluginRegistrar) sqlite3_flutter_libs_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "Sqlite3FlutterLibsPlugin");
  sqlite3_flutter_libs_plugin_register_with_registrar(sqlite3_flutter_libs_registrar);
  g_autoptr(FlPluginRegistrar) system_tray_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "SystemTrayPlugin");
  system_tray_plugin_register_with_registrar(system_tray_registrar);
  g_autoptr(FlPluginRegistrar) url_launcher_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "UrlLauncherPlugin");
  url_launcher_plugin_register_with_registrar(url_launcher_linux_registrar);
  g_autoptr(FlPluginRegistrar) window_manager_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "WindowManagerPlugin");
  window_manager_plugin_register_with_registrar(window_manager_registrar);
}
