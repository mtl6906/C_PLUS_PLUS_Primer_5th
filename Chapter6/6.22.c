#include <iostream>
using std::cout;
using std::endl;


void swap(int *(&p1),int *(&p2))
{
        int *t = p1;
        p1 = p2;
        p2 = t;
}

int main()
{
        int s = 1,d = 2;
        int *a = &s ,*b = &d;

        cout << a << " " << b << endl;

        swap(a,b);

        cout << a << " " << b << endl;

}
