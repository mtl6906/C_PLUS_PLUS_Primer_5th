#include <iostream>

using std::cout;
using std::endl;

int swap(int *a,int *b)
{
        int t = *a;
        *a = *b;
        *b = t;
}

int main()
{
        int a = 1,b = 2;
        cout << a << " " << b << "(before)" << endl;
        swap(&a,&b);
        cout << a << " " << b << "(after)" << endl;
        return 0;
}
