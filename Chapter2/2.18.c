#include <iostream>

int main()
{
        int t = 5,s = 6,*p = &t;

        *p = 4;         //      更改指针所指对象的值
        std::cout << t << std::endl;

        p = &s;         //      更改指针的值
        std::cout << *p << std::endl;

        return 0;
}
