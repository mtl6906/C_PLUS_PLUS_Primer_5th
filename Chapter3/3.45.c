#include <iostream>
#include <vector>

using int_array = int[4];
using std::cout;
using std::cin;
using std::endl;

int main()
{
        int_array a[] = {0,1,2,3,4,5,6,7,8,9,10,11};

        for(auto p = std::begin(a);p!=std::end(a);p++)
                for(auto q=std::begin(*p);q!=std::end(*p);q++)
                        cout << *q << endl;

        return 0;
}
