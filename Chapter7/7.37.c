#include "Sales_data.h"

using std::cin;
using std::cout;

Sales_data first_item(cin);

int main()
{
        Sales_data next;
        Sales_data last("9-999-99999-9");

        print(cout,first_item);
        print(cout,next);
        print(cout,last);

        return 0;
}
