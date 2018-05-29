#include <iostream>

using std::cout;
using std::endl;

int main()
{
        constexpr int size = 5;
        int ia[size] = {1,2,3,4,5};
//      若数组下标等于数组size或者指针ptr等于数组尾后元素结束循环
        for(int *ptr = ia,ix = 0;ix != size && ptr != ia + size;++ix,++ptr)
        {


        }

        return 0;
}
