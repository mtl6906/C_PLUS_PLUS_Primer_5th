#include "Sales_data.h"

Sales_data::Sales_data(const std::string &s)
{
        bookNo = s;
}

Sales_data::Sales_data(const std::string &s,unsigned n,double p)
{
        bookNo = s;
        units_sold = n;
        revenue = p;
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
