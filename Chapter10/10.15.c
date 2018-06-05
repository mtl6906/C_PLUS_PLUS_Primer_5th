#include <iostream>

using std::cout;
using std::endl;

int main()
{
        int t = 5;
        auto sum = [t](const int& a){return a + t;};

        cout << sum(4) << endl;

        return 0;
}
