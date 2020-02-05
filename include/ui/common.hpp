#pragma once
#include <nanovg.h>
#include <blendish.h>

#include <common.hpp>

/** Useful for menu items with a "true" boolean state */
#define CHECKMARK_STRING "✔"
#define CHECKMARK(_cond) ((_cond) ? CHECKMARK_STRING : "")

/** Useful for menu items that open a sub-menu */
#define RIGHT_ARROW "▸"
