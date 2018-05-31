#include <iostream>
#include <vector>

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
        return 0;
}
