#include <iostream>
#include <vector>

using int_array = int[4];
using std::cout;
using std::endl;


int main()
{
        int_array a[3] = {0,1,2,3,4,5,6,7,8,9,10,11};

        for(int_array *p = a;p != a + 3; p++)
                for(int *q = *p;q != *p + 4;q++)
                        cout << *q << endl;
        return 0;
}
