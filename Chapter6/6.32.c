#include <iostream>

using std::cout;
using std::endl;
//      返回一个数组指定位置的索引
int &get(int *array,int index)
{
        return array[index];
}

int main()
{
        int ia[10];

        for(int i=0;i!=10;++i)
                get(ia,i) = i;

        for(int i=0;i!=10;++i)
                cout << ia[i] << endl;

        return 0;
}
