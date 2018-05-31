#include "Sales_data.h"

using std::string;

string Sales_data::isbn()const
{
        return bookNo;
}

Sales_data& Sales_data::combine(const Sales_data& o)
{
        revenue += o.revenue;
        units_sold += o.units_sold;
        return *this;
}
