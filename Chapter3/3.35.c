#include <vector>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
        int a[10];
        int *s = std::begin(a),*e = std::end(a);

        for(int *it=s;it!=e;it++)
                *it = 0;

        for(int *it=s;it!=e;it++)
                cout << *it << endl;
        return 0;
}
