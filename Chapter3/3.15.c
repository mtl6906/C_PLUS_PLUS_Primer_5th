#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
        string s;
        vector<string> sv;
        while(cin >> s)
                sv.push_back(s);

        for(auto s : sv)
                cout << s << " ";

        cout << endl;

        return 0;
}
