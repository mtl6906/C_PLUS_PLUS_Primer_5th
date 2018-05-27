#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int func()
{
        static int cnt = 0;
        return cnt++;
}

int main()
{
        cout << func() << endl;
        cout << func() << endl;
        cout << func() << endl;
        cout << func() << endl;
        return 0;
}
