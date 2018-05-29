#include <iostream>

using std::cout;
using std::endl;

int main()
{
        int i;
//      if(42 = i){}    error

        if(i = 42)
                cout << "true" << endl;
        else
                cout << "false" << endl;

        return 0;
}
