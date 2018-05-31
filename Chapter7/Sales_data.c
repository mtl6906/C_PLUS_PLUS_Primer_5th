#include "Sales_data.h"

std::string Sales_data::isbn()const
{
        return bookNo;
}

Sales_data& Sales_data::combine(const Sales_data& o)
{
        revenue += o.revenue;
        units_sold += o.units_sold;
        return *this;
}

Sales_data add(Sales_data& o1,Sales_data& o2)
{
        Sales_data sum = o1;
        sum.revenue += o2.revenue;
        sum.units_sold += o2.units_sold;
        return sum;
}

std::istream read(std::istream &is,Sales_data &o)
{
        cin >> o.bookNo >> o.units_sold >> o.revenue;
        return cin;
}

std::ostream print(std::ostream &os,Sales_data &o)
{
        os << "isbn: " << o.bookNo << ",units_sold: " << o.units_sold << ",revenue: " << o.revenue << endl;
}
