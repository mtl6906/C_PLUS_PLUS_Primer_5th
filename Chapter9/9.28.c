#include <iostream>
#include <forward_list>

using std::forward_list;
using std::cout;
using std::endl;
using std::string;

void insert(forward_list<string> &sfl,const string &des,const string &val)
{
        for(auto s=sfl.begin();s!=sfl.end();++s)
                if(*s == des)
                        sfl.insert_after(s,val);
}

int main()
{
        forward_list<string> sfl = {"a","b","c","d"};

        insert(sfl,"b","e");

        for(const auto& s : sfl)
                cout << s << endl;

        return 0;
}
