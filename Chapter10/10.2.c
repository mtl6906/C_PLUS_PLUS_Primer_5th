#include <list>
#include <algorithm>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::list;
using std::string;
using std::count;
using std::cin;

int main()
{
        list<string> sl;

        string s;

        while(cin >> s)
                sl.push_back(s);

        cin.clear();

        cin >> s;

        cout << count(sl.begin(),sl.end(),s) << endl;

        return 0;
}
