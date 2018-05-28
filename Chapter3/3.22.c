#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::vector;
using std::string;
using std::end;
using std::cout;
using std::endl;

int main()
{
        vector<string> sv;
        sv.push_back("abc");
        sv.push_back("");
        sv.push_back("def");
        for(auto i=sv.begin();i!=sv.end() && !i -> empty();i++)
        {
                for(auto s=i->begin();s!=i->end();s++)
                        if(islower(*s))
                                *s = toupper(*s);
                cout << *i << endl;
        }

        return 0;
}
