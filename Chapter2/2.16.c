#include <iostream>

int i = 0,&r1 = i;
double d = 0,&r2 = d;

int main()
{
        r2 = 3.14159;   //      将d赋值为3.14159
        std::cout << r2 << std::endl;
        r2 = r1;        //      将d赋值为i
        std::cout << r1 << std::endl;
        i = r2;         //      将i赋值为d
        std::cout << i << std::endl;
        r1 = d;         //      将i赋值为d      
        std::cout << r1 << std::endl;

        return 0;
}
