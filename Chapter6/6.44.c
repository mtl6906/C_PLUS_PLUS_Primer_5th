#include <string>
#include <iostream>

using std::string;
using std::endl;
using std::cout;

inline const bool isShorter(const string &s1,const string &s2)
{
        return s1.size() < s2.size();
}

int main()
{
        cout << isShorter("abc","abcd") << endl;
        return 0;
}
