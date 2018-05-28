#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main()
{
        int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
//      version1
        for(const auto &p : a)
                for(auto q : p)
                        cout << q << endl;
//      version2
        for(int i=0;i<3;i++)
                for(int j=0;j<4;j++)
                        cout << a[i][j] << endl;
//      version3
        for(auto p=std::begin(a);p!=std::end(a);p++)
                for(auto q= std::begin(*p);q!=std::end(*p);q++)
                        cout << *q << endl;
        return 0;
}
