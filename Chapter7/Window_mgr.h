#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H
#include <vector>

class Window_mgr
{
        public:
                Window_mgr(Screen &h){screens.push_back(h);}
                Window_mgr() = default;
                using ScreenIndex = std::vector<Screen>::size_type;
                void clear(ScreenIndex);
        private:
                std::vector<Screen> screens;
};

#endif
