#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;


int main()
{
        char a[] = "abc",b[] = "def",c[7];

        strcpy(c,a);
        strcat(c,b);

        cout << c << endl;

        return 0;
}
