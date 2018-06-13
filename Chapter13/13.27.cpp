#include <string>

class HasPtr
{
	public:
		HasPtr(const std::string &s = std::string()) : ps(new std::string(s)),i(0),cnt(new count(1)){}
		HasPtr(const HasPtr& hp) : ps(*hp.ps),i(hp.i),cnt(cnt){++cnt;};
		HasPtr& operator=(const HasPtr& hp)
		{
			++*ps.cnt;
			if(--cnt == 0)
			{
				delete ps;
				delete cnt;
			}
			ps = hp.ps;
			i = hp.i;
			cnt = hp.cnt;
			return *this;
		}
		~HasPtr()
		{
			if(--*cnt == 0)
			{
				delete cnt;
				delete ps;
			}
		}
	private:
		std::string *ps;
		int i;
		int *cnt;
};
