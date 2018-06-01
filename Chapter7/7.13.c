#include "Sales_data.h"
#include <iostream>

using std::cin;
using std::cerr;
using std::cout;
using std::endl;

int main()
{

        Sales_data total(cin);
        if(cin)
        {
                Sales_data cur(cin);
                while(cin)
                {
                        if(total.isbn() == cur.isbn())
                                total.combine(cur);
                        else
                        {
                                print(cout,total);
                                total = cur;
                        }
                        Sales_data cur(cin);
                }
                print(cout,total);
        }
        else
        {
                cerr << "No data?" << endl;
        }

        return 0;
}
