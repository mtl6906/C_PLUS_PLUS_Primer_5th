#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
        const char ca[] = {'h','e','l','l','o'};
        const char *cp = ca;
//      输出结果未知，直到遇到'\0'才会停下来
        while(*cp)
        {
                cout << *cp << endl;
                ++cp;
        }

        return 0;
}
