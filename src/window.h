#pragma once

#include <adwaita.h>

#define MNL_TYPE_WINDOW (mnl_window_get_type ())

G_DECLARE_FINAL_TYPE (MnlWindow, mnl_window, MNL, WINDOW, AdwApplicationWindow)

MnlWindow *mnl_window_new (AdwApplication *app);
