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
        string last,first;

        while(cin >> last >> first)
                mp.insert({last,first});

        for(const auto wc : mp)
                cout << wc.first << " " << wc.second << endl;
        return 0;
}
