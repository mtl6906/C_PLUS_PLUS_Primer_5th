#include <string>
#include <vector>
#include <functional>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::bind;
using namespace std::placeholders;

string make_plural(int count,const string &word,const string &s)
{
        return count > 1 ? word + s : word;
}

void elimDups(vector<string> &words)
{
        sort(words.begin(),words.end());
        for(const auto& c : words)
                cout << c << " ";
        cout << endl;
        words.erase(unique(words.begin(),words.end()),words.end());
}

bool isShorter(const string &s,vector<string>::size_type sz)
{
        return s.size() < sz;
}

void less(vector<string> &words,vector<string>::size_type sz)
{
        auto is = bind(isShorter,_1,sz);
        elimDups(words);
        stable_sort(words.begin(),words.end(),[](const string &a,const string &b){return a.size() < b.size();});
        auto wc = stable_partition(words.begin(),words.end(),is);
        auto count = count_if(words.begin(),words.end(),is);
        cout << count << " " << make_plural(count,"word","s") << " of length " << sz << " or longer " << endl;

        for_each(words.begin(),wc,[](const string &s){cout << s << " ";});
        cout << endl;
}
int main()
{
        string s;
        vector<string> sv;
        while(cin >> s)
                sv.push_back(s);

        less(sv,6);

        return 0;
}
