#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
        vector<Sales_data> sdv;

        Sales_data sd;

        while(read(cin,sd))
                sdv.push_back(sd);

        sort(sdv.begin(),sdv.end(),[](const Sales_data &sd1,const Sales_data &sd2){return sd1.isbn() < sd2.isbn();});

        for(const auto& s : sdv)
                print(cout,s);

        return 0;
}
