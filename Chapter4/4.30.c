#include <iostream>

using std::cout;
using std::endl;

long double f()
{


}

struct {
        int mem[10];
}*p;

int main()
{
        int x,y,a=1,b=2,i = 0;

        cout << sizeof(x+y) << endl;
        cout << sizeof(p->mem[i]) << endl;
        cout << (sizeof(a) < b) << endl;
        cout << sizeof(f()) << endl;

        return 0;
}
