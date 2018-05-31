#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int odd[5],even[5];

decltype(odd) &arrPtr(int i)
{
        return (i%2) ? odd : even;
}

int main()
{



        return 0;
}
