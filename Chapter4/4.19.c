#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
        int *ptr;
        vector<int> vec;
        int ival;

        if(ptr != 0 && ptr++)   //      如果指针不为空返回true，然后ptr增加1
                cout << "true" << endl;
        else
                cout << "false" << endl;

        if(ival++ && ival)      //      如果ival不为0返回true，然后ival增加1
                cout << "true" << endl;
        else
                cout << "false" << endl;

        if(vac[ival++] <= vec[ival])    //恒为true
                cout << "true" << endl;
        else
                cout << "false" << endl;

        return 0;
}
