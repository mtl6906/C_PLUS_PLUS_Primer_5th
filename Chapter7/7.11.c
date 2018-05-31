#include "Sales_data.h"
#include <iostream>

using std::cin;
using std::cout;

int main()
{

        Sales_data sd1,sd2("123"),sd3("123",2u,1.0),sd4(cin);

        print(cout,sd1);
        print(cout,sd2);
        print(cout,sd3);
        print(cout,sd4);

        return 0;
}
