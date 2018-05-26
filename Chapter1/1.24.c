#include <iostream>
#include "1/Sales_item.h"

int main()
{
        Sales_item last,cur;

        if(std::cin >> last)
        {
                while(std::cin >> cur)
                {
                        if(last.isbn() == cur.isbn())
                                last += cur;
                        else
                        {
                                std::cout << last << std::endl;
                                last = cur;
                        }
                }
        }
        else
                std::cout << "No book sales." << std::endl;

        return 0;
}
