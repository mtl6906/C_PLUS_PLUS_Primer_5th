#include <string>
#include <iostream>

using std::string;
using std::endl;
using std::cout;

inline const string& shorterString(const string &s1,const string &s2)
{
        return s1.size() <= s2.size() ? s1 : s2;
}

int main()
{
        cout << shorterString("abc","abcd") << endl;
        return 0;
}
