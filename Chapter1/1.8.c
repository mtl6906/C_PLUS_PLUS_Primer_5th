#include <iostream>

int main()
{
        std::cout << "/*";
        std::cout << "*/";
//      std::cout << /* "*/" */ << endl;        不合法
        std::cout << /* "*/" /* "/*" */ << std::endl;
        return 0;
}
