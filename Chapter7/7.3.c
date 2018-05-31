#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::cerr;

int main()
{
        Sales_data total;

        if(cin >> total.bookNo >> total.units_sold >> total.revenue)
        {
                Sales_data cur;
                while(cin >> cur.bookNo >> cur.units_sold >> cur.revenue)
                {
                        if(total.isbn() == cur.isbn())
                                total.combine(cur);
                        else
                        {
                                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                                total = cur;
                        }
                }
                cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
        }
        else
        {
                cerr << "No data?" << endl;
                return -1;
        }

        return 0;
}
