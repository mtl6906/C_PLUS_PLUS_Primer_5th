#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int fact(int n)
{
        int product = 1;
        while(n > 1)
                product *= n--;
        return product;
}

int main()
{
        cout << fact(5) << endl;
        return 0;
}
