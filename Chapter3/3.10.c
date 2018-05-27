#include <cctype>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
        string s;
        cin >> s;

        for(auto &c : s)
                if(!ispunct(c))
                        cout << c;
        cout << endl;

        return 0;
}
