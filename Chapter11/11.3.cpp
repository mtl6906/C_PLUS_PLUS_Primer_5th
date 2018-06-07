#include <algorithm>
#include <vector>
#include <string>
#include <iostream>


using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

const string make_plural(int count,const string& word,const string& s)
{
        return count > 1 ? word + s : word;
}

int main()
{
        vector<string> sv;

        string s;

        while(cin >> s)
                sv.push_back(s);

        sort(sv.begin(),sv.end());

        auto iter = sv.begin();

        while(iter != sv.end())
        {
                auto wc = find_if(iter,sv.end(),[iter](const string& i){return i!=*iter;});
                size_t cnt = wc - iter;
                cout << *iter << " occurs " << cnt << make_plural(cnt,"time","s") << endl;
                iter = wc;
        }
        return 0;
}
