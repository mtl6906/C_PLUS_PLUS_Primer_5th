#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data
{
        std::string bookNo;
        unsigned int units_sold = 0;
        double revenue = 0.0;
        std::string isbn()const;
        Sales_data& combine(const Sales_data &);
};

#endif
