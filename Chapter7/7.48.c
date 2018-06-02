#include "Sales_data.h"


int main()
{
        //都可以运行
        std::string s = "9999999";
        Sales_data a(s);
        print(std::cout,a);
        Sales_data b("999-9--9--");
        print(std::cout,b);;
        return 0;
}
