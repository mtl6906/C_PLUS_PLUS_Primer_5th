#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
        string s = "ab2c3d7R4E6";

        string num ="0123456789";

        string::size_type pos = 0;

        while((pos = s.find_first_of(num,pos)) != string::npos)
        {
                cout << "find " << s[pos] << " at " << pos << endl;
                ++pos;
        }

        pos = 0;

        while((pos = s.find_first_not_of(num,pos)) != string::npos)
        {
                cout << "find " << s[pos] << " at " << pos << endl;
                ++pos;
        }

        return 0;
}
