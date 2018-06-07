#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <cctype>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

const string make_plural(int count,const string& word,const string& s)
{
        return count > 1 ? word + s : word;
}
const string clean(const string &s)
{
        string tmp = "";
        for(auto& c : s)
                if(isalpha(c))
                        tmp += tolower(c);
        return tmp;
}

bool cmp(const string &a,const string &b)
{

        return clean(a) < clean(b);
}


int main()
{
        vector<string> sv;

        string s;

        while(cin >> s)
                sv.push_back(s);

        sort(sv.begin(),sv.end(),cmp);

        auto iter = sv.begin();

        while(iter != sv.end())
        {
                auto wc = find_if(iter,sv.end(),[iter](const string& i){return clean(i)!=clean(*iter);});
                size_t cnt = wc - iter;
                cout << clean(*iter) << " occurs " << cnt << make_plural(cnt,"time","s") << endl;
                iter = wc;
        }
        return 0;
}
