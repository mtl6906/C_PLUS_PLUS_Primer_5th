#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
        string s1,s2;
        cin >> s1 >> s2;
//      比大小  
        if(s1 > s2)
                cout << s1 << endl;
        else if(s1 < s2)
                cout << s2 << endl;
        else
                cout << s1 << " equal to " << s2 << endl;

//      比长短
        if(s1.size() > s2.size())
                cout << s1 << endl;
        else if(s1.size() < s2.size())
                cout << s2 << endl;
        else
                cout << s1 << "'s size equal " << s2 << "'s size" << endl;


}
