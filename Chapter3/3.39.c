#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
//      cstring
        char cs1[10],cs2[10];

        cin >> cs1 >> cs2;

        if(strcmp(cs1,cs2) == 0)
                cout << "yes" << endl;
        else
                cout << "no" << endl;
//      string
        string s1,s2;

        cin >> s1 >> s2;

        if(s1 == s2)
                cout << "yes" << endl;
        else
                cout << "no" << endl;

        return 0;
}
