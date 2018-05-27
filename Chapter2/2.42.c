#include "Sales_data.h"
#include <iostream>

int main()
{
        Sales_data  a;
        std::cin >> a.bookNo >> a.units_sold >> a.revenue;
        std::cout << a.bookNo << " " << a.units_sold << " " << a.revenue << std::endl;
        return 0;
}
