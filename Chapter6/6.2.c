#include <string>

using std::string;
//int   返回值与函数的返回类型不匹配
string  //将函数的返回类型修改为string
f()
{
        string s;
        return s;
}

//f2(int i){}   未定义函数的返回类型
void 
f2(int i)
{

}

//int calc(int v1,int v1)}      形参名重复，花括号不全

int 
calc(int v1,int v2){}

//double square(double x)return x*x;    没有花括号
double 
square(double x)
{
        return x*x;
}
int 
main()
{
        return 0;
}
