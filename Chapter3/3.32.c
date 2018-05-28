#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
//      数组
        int a[10] = {0,1,2,3,4,5,6,7,8,9};
        int b[10];

        for(size_t i=0;i<10;i++)
                b[i] = a[i];

//      vector
        vector<int> iv1(10),iv2;
        for(auto i=iv1.begin();i!=iv1.end();i++)
                *i = i - iv1.begin();

        iv2 = iv1;

        return 0;
}
