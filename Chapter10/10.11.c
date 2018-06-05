#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

void elimDups(vector<string> words)
{
        sort(words.begin(),words.end());
        words.erase(unique(words.begin(),words.end()),words.end());
}

bool isShorter(const string &s1,const string &s2)
{
        return s1.size() < s2.size();
}

int main()
{
        vector<string> sv;
        string s;
        while(cin >> s)
                sv.push_back(s);

        elimDups(sv);

        stable_sort(sv.begin(),sv.end(),isShorter);

        for(const auto& c : sv)
                cout << c << " ";
        cout << endl;

        return 0;
}
