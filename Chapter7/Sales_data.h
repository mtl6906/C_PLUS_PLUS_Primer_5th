#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>


struct Sales_data
{
        friend Sales_data add(const Sales_data&,const Sales_data&);
        friend std::istream &read(std::istream &,Sales_data &);
        friend std::ostream &print(std::ostream &,const Sales_data &);

        private:
                std::string bookNo;
                unsigned int units_sold = 0;
                double revenue = 0.0;
                double avg_price();
        public:
//              Sales_data() = default;
                Sales_data(const std::string &bookNo) : Sales_data(bookNo,0,0.0)
                {
        //              std::cout << "1 value" << std::endl;
                }
                Sales_data(const std::string &bookNo,unsigned units_sold,double revenue):bookNo(bookNo),units_sold(units_sold),revenue(revenue)
                {
        //              std::cout << "3 value" << std::endl;
                }
                Sales_data(std::istream &is=std::cin):Sales_data("",0,0.0)
                {
                        is >> bookNo >> units_sold >> revenue;
        //              std::cout << "no value" << std::endl;
                }
                std::string isbn()const;
                Sales_data& combine(const Sales_data &);
};

Sales_data add(const Sales_data&,const Sales_data&);
std::istream &read(std::istream &,Sales_data &);
std::ostream &print(std::ostream &,const Sales_data &);
#endif
