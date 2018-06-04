#include <iostream>
#include <forward_list>

using std::forward_list;
using std::cout;
using std::endl;
using std::string;

void insert(forward_list<string> &sfl,const string &des,const string &val)
{
        auto s = sfl.begin();
        auto prev = sfl.before_begin();
        while(s != sfl.end())
        {
                if(*s == des)
                {
                        sfl.insert_after(s,val);
                        return;
                }
                ++prev;
                ++s;
        }
        sfl.insert_after(prev,val);
}

int main()
{
        forward_list<string> sfl = {"a","b","c","d"};

        insert(sfl,"w","e");

        for(const auto& s : sfl)
                cout << s << endl;

        return 0;
}
