#include <iostream>

using std::cout;
using std::endl;

struct X
{
//      X(int i,int j) : base(i) ,rem(base % j){}       定义顺序
        X(int i,int j) : base(i) ,rem(i % j){}
        int rem,base;
};

int main()
{
        X x(4,2);
        cout << x.rem << " " << x.base << endl;
        return 0;
}
