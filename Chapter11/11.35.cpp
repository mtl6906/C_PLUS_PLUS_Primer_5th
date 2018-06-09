#include <map>
#include <iostream>
#include <string>

using std::map;
using std::string;
using std::cout;
using std::endl;

int main()
{
        map<string,string> mp;

        mp["sb"] = "nb";

        cout << mp.at("sb") << endl;

        mp["sb"] = "sb";

        cout << mp.at("sb") << endl;

        mp.insert({"sb","nb"});

        cout << mp.at("sb") << endl;

        return 0;
}
