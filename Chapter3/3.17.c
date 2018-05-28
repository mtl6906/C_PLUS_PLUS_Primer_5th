#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
        string s;
        vector<string> sv;
        while(cin >> s)
                sv.push_back(s);

        for(auto &s : sv)
                for(auto &c : s)
                        if(islower(c))
                                c = toupper(c);

        for(auto s : sv)
                cout << s << endl;

        return 0;
}
