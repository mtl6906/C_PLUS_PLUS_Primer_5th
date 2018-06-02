#ifndef CHAPTER_7_H
#define CHAPTER_7_H

class Screen;

#include "Window_mgr.h"
#include "Screen.h"

inline void Window_mgr::clear(Window_mgr::ScreenIndex si)
{
        Screen s = screens[si];
        s.content = std::string(s.width*s.height,' ');
}

#endif
