#ifndef SCREEN_H
#define SCREEN_H
#include <string>
#include <iostream>

class Screen
{
	friend void Window_mgr::clear(Window_mgr::ScreenIndex);
	public:
		typedef std::string::size_type pos;
		Screen() = default;
		Screen(pos ht,pos wd) : height(ht),width(wd),content(ht*wd,' '){};
		Screen(pos ht,pos wd,char c) : height(ht),width(wd),content(ht*wd,c){};
		char get() const;
		char get(pos,pos) const;
		Screen &move(pos,pos);
		Screen &set(char);
		Screen &set(pos,pos,char);
		Screen &display(std::ostream&);
		const Screen &display(std::ostream&)const;
		pos size() const;
	private:
		pos height = 0,width = 0;	
		pos cursor = 0;		
		std::string content;	
		void do_display(std::ostream&)const;	
};

inline char Screen::get() const
{
	return content[cursor];
}

inline char Screen::get(pos r,pos c)const
{
	return content[r*width+c];
}

inline Screen &Screen::move(pos r,pos c)
{
	cursor = r * width + c;
	return *this;
}

inline Screen &Screen::set(char ch)
{
	content[cursor] = ch;
	return *this;		
}

inline Screen &Screen::set(pos r,pos c,char ch)
{
	content[r*width+c];
	return *this;
}	

inline void Screen::do_display(std::ostream &os) const
{
	os << content;
}

inline Screen& Screen::display(std::ostream &os)
{
	do_display(os);
	return *this;
}
inline const Screen& Screen::display(std::ostream &os) const
{
	do_display(os);
	return *this;
}

inline Screen::pos Screen::size() const
{
	return height * width;
}
#endif
