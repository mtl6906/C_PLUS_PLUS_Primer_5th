#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
        vector<int> iv(10,2);
        int a[10];

        for(int i=0;i<10;i++)
                a[i] = iv[i];

        for(int i=0;i<10;i++)
                cout << a[i] << endl;

        return 0;
}
