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

        if(read(cin,total))
        {
                Sales_data cur;
                while(read(cin,cur))
                {
                        if(total.isbn() == cur.isbn())
                                total.combine(cur);
                        else
                        {
                                print(cout,total);
                                total = cur;
                        }
                }
                print(cout,total);
        }
        else
        {
                cerr << "No data?" << endl;
                return -1;
        }

        return 0;
}
