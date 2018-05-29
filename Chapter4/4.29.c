#include <iostream>

using std::cout;
using std::endl;

int main()
{
        int x[10];
        int *p = x;

        cout << sizeof(x)/sizeof(*x) << endl;   //      数组的size / 数组元素的size
        cout << sizeof(p)/sizeof(*p) << endl;   //      指针的size / int类型的size

        return 0;
}
