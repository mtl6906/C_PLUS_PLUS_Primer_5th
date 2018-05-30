#include <iostream>

using std::cout;
using std::endl;

int main()
{
        bool someValue = 1;
        int x = 0,y = 0;

        cout << (someValue ? ++x ,++y : --x , --y) << endl;     //      分别增加x，y到1，然后减少x，y到0，'，'表达式返回0

        return 0;
}
