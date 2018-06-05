#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::endl;
using std::cout;
using std::vector;
using std::string;

bool func(string str)
{
        return str.size() >= 5;
}

int main()
{
        vector<string> sv;

        string s;

        while(cin >> s)
                sv.push_back(s);

        sv.erase(partition(sv.begin(),sv.end(),func),sv.end());

        for(const auto &s : sv)
                cout << s << endl;


        return 0;
}
