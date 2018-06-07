#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::placeholders::_1;

bool check_size(const string& s,size_t sz)
{
        return s.size() > sz;
}

string make_plural(size_t count ,const string& word,const string &s)
{
        return count > 1 ? word + s : word;
}

void elimDups(vector<string> &words)
{
        sort(words.begin(),words.end());
        words.erase(unique(words.begin(),words.end()),words.end());
}

void biggies(vector<string> words,size_t sz)
{
        elimDups(words);

        auto wc = stable_partition(words.begin(),words.end(),bind(check_size,_1,sz));

        auto cnt = wc - words.begin();

        cout << cnt << " " << make_plural(cnt,"word","s") << " of length " << sz << " or longer" << endl;

        for(auto i=words.begin();i!=wc;++i)
                cout << *i << endl;
}

int main()
{
        vector<string> sv;
        string s;
        while(cin >> s)
                sv.push_back(s);

        biggies(sv,6);

        return 0;
} 
