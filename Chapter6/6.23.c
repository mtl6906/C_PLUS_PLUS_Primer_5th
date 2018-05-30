#include <iostream>
#include <vector>

using std::cout;
using std::endl;

void print(const int *a,size_t n)
{
        for(int i=0;i<n;i++)
                cout << a[i] << endl;
}

void print(const int *a,const int *b)
{
        while(a != b)
        {
                cout << *a << endl;
                a++;
        }
}

void print(int (&a)[2])
{
        for(const auto &c : a)
                cout << c << endl;
}

int main()
{
        int i = 0,j[2] = {0,1};

//      print(&i,1);
        print(j,2);

        //print(std::begin(&i),std::end(&i));
        print(std::begin(j),std::end(j));

//      print(&i);
        print(j);

        return 0;
}
