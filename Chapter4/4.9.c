#include <iostream>

using std::cout;
using std::endl;

int main()
{
        const char *cp = "Hello World";

        if(cp && *cp)   //      'H'以及'H'所在的地址都不为0
                cout << "yes" << endl;
        else
                cout << "no" << endl;
        return 0;
}
