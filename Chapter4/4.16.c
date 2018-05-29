#include <iostream>

using std::cout;
using std::endl;

bool getPtr()
{
        return 0;
}

int main()
{
        int i;
        bool p;
//      if(p = getPtr() != 0)   会先进行相等性运算
        if((p = getPtr()) != 0)
                cout << "true" << endl;
        else
                cout << "false" << endl;

//      if(i = 1024)    结果永远是true
        if(i == 1024)
                cout << "true" << endl;
        else
                cout << "false" << endl;

        return 0;
}
