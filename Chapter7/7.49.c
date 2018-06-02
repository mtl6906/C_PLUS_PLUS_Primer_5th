#include "Sales_data.h"

int main()
{
        //      a无法隐式转换
        //      b无法隐式转换
        //      c无法读写
        Sales_data a("123");

        std::string s = "123";

        a.combine(s);

        return 0;
}
