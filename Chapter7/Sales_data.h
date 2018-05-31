#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

struct Sales_data
{
        std::string bookNo;
        unsigned int units_sold = 0;
        double revenue = 0.0;
        std::string isbn()const;
        Sales_data& combine(const Sales_data &);
};

Sales_data add(const Sales_data&,const Sales_data&);
std::istream &read(std::istream &,Sales_data &);
std::ostream &print(std::ostream &,Sales_data &);
#endif
