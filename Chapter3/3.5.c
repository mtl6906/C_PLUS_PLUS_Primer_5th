#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
        string s1,s2,s;

        if(cin >> s);
        else return 0;

        s1 = s2 = s;

        while(cin >> s)
        {
                s1 += s;
                s2 += " " + s;
        }

        cout << s1 << endl;     //      整串
        cout << s2 << endl;     //      用空格分割的串

        return 0;
}
