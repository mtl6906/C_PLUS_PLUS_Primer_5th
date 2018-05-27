#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int
fact()
{
        int n,product = 1;
        cin >> n;
        while(n > 1)
                product *= n--;
        return product;
}

int main()
{
        cout << fact() << endl;
        return 0;
}
