#include <iostream>

using std::cout;
using std::endl;

int main()
{
//      溢出就是表达式的结果超出了数据类型的范围
        cout << 0 - 1u << endl;
        cout << 0 - 2u << endl;
        cout << 0 - 3u << endl;

        return 0;
}
