#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

string make_plural(int count,const string &word,const string &s)
{
        return count > 1 ? word + s : word;
}

void elimDups(vector<string> words)
{
        sort(words.begin(),words.end());
        for(const auto& c : words)
                cout << c << " ";
        cout << endl;
        words.erase(unique(words.begin(),words.end()),words.end());
}

void biggies(vector<string> &words,vector<string>::size_type sz)
{
        elimDups(words);
        stable_sort(words.begin(),words.end(),[](const string &a,const string &b){return a.size() < b.size();});
        auto wc = find_if(words.begin(),words.end(),[sz](const string &a){return a.size() >= sz;});
        auto count = words.end() - wc;
        cout << count << " " << make_plural(count,"word","s") << " of length " << sz << " or longer " << endl;

        for_each(wc,words.end(),[](const string &s){cout << s << " ";});
        cout << endl;
}
int main()
{
        string s;
        vector<string> sv;
        while(cin >> s)
                sv.push_back(s);

        biggies(sv,5);

        return 0;
}
