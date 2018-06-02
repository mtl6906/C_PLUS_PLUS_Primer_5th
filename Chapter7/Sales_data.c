#include "Sales_data.h"

inline double Sales_data::avg_price()
{
        return revenue / units_sold;
}


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

Sales_data add(const Sales_data& o1,const Sales_data& o2)
{
        Sales_data sum = o1;
        sum.revenue += o2.revenue;
        sum.units_sold += o2.units_sold;
        return sum;
}

std::istream& read(std::istream &is,Sales_data &o)
{
        is >> o.bookNo >> o.units_sold >> o.revenue;
}

std::ostream& print(std::ostream &os,const Sales_data &o)
{
        return os << "isbn: " << o.bookNo << ",units_sold: " << o.units_sold << ",revenue: " << o.revenue << std::endl;
}
