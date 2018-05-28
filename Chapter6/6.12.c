#include <iostream>

using std::cout;
using std::endl;

//  引用不需要使用*符，相对来说更好写
void swap(int &v1,int &v2)
{
        int t = v1;
        v1 = v2;
        v2 = t;
}

int main()
{
        int v1 = 1,v2 = 2;

        cout << "v1's value is " << v1 << ",v2's value is " << v2 << endl;
        swap(v1,v2);
        cout << "v1's value is " << v1 << ",v2's value is " << v2 << endl;
        return 0;
}
