#include "Sales_data.h"
#include <set>

int main()
{
        std::multiset<Sales_data,bool(*)(const Sales_data&,const Sales_data&)> ms(compareIsbn);
        std::multiset<Sales_data,bool(*)(const Sales_data&,const Sales_data&)>::iterator bookstore = ms.begin();
        return 0;
}
