#include <iostream>

using std::cin;

int fact(int n)
{
        int product = 1;
        while(n > 1)
                product *= n--;
        return product;
}

int fact()
{
        int n,product = 1;
        cin >> n;
        while(n > 1)
        {
                product *= n--;
        }
        return product;
}

int abs(int n)
{
        return n > 0 ? n : -n;
}
