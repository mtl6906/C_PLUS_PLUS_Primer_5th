#include <map>
#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::map;
using std::cout;
using std::cin;
using std::endl;
using std::pair;

int main()
{
        map<string,vector<pair<string,string>>> mp;

        string last,first,birth;

        cin >> last >> first >> birth;

        mp[last].push_back({first,birth});

        return 0;
}
