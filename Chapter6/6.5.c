#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int
abs(int n)
{
        return n > 0 ? n : -n;
}

int
main()
{
        cout << abs(5) << " " << abs(-5) << endl;
        return  0;
}
