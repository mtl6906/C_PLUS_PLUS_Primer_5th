#include "Person.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
        Person p1,p2;

        if(read(read(cin,p1),p2))       //      内层read返回一个istream&引用,然后第二个read接着调用，如果两次调用都成功，那么外层read返回的istream&对象会隐式转换成true,否则会被转化为false
                cout << "success" << endl;
        else
                cout << "failure" << endl;

        return 0;
}
