#include <string>
#include <iostream>

struct Sales_data
{
        std::string bookNo;
        unsigned units_sold;
        double revenue;
};

int main()
{
        Sales_data sd = {"123",5,36.0};
        std::cout << sd.bookNo << " " << sd.units_sold << " " << sd.revenue << std::endl;
        return 0;
}
