#pragma once
#ifndef CLEAR_SCREEN_H
#define CLEAR_SCREEN_H

#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

#include <cstdlib>

inline void clearScreen() {
    std::system(CLEAR_SCREEN); // Clear the screen
}

#endif
