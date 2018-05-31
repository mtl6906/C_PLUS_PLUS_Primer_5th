#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int Add(int a,int b)
{
        return a + b;
}

int Sub(int a,int b)
{
        return a - b;
}

int Mul(int a,int b)
{
        return a * b;
}

int Div(int a,int b)
{
        return a / b;
}

int main()
{
        vector<int(*)(int,int)> fv = {Add,Sub,Mul,Div};

        int a,b;

        cin >> a >> b;

        for(auto f = fv.begin();f != fv.end(); ++f)
                cout << (*f)(a,b) << endl;

        return 0;
}
