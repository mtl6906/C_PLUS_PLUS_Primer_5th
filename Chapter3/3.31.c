#include <iostream>

using std::endl;
using std::cout;

int main()
{
        int a[10] = {0,1,2,3,4,5,6,7,8,9};

        for(int i=0;i<9;i++)
                cout << a[i] << " ";
        cout << a[9] << endl;

        return 0;
}
