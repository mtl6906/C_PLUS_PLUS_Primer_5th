#include <iostream>
#include <string>
#include <map>

using std::multimap;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
        multimap<string,string> mp;

        string author ,article;

        while(cin >> author >> article)
                mp.insert({author,article});

        auto iter = mp.begin();

        while(iter != mp.cend())
        {
                auto range = mp.equal_range(iter -> first);
                cout << "author: " << range.first -> first << endl;
                cout << "article:" << endl;
                while(range.first != range.second)
                {
                        cout << range.first -> second << endl;
                        ++range.first;
                }
                iter = range.second;
        }

        return 0;
}
