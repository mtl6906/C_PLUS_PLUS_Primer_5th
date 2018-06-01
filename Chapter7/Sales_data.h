#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>


struct Sales_data
{
        std::string bookNo;
        unsigned int units_sold = 0;
        double revenue = 0.0;
        Sales_data() = default;
        Sales_data(const std::string &);
        Sales_data(const std::string &,unsigned,double);
        Sales_data(std::istream &is){std::cin >> bookNo >> units_sold >> revenue;}
        std::string isbn()const;
        Sales_data& combine(const Sales_data &);
};

Sales_data add(const Sales_data&,const Sales_data&);
std::istream &read(std::istream &,Sales_data &);
std::ostream &print(std::ostream &,const Sales_data &);
#endif
