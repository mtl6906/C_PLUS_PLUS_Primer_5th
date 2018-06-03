#include <list>
#include <iostream>

using std::list;
using std::cout;
using std::endl;

int main()
{
        list<int> lst1 = {1,2,3,4,5};
        list<int>::iterator iter1 = lst1.begin(),iter2 = lst1.end();

//      while(iter1 < iter2)    list未定义<操作符
        while(iter1 != iter2)
        {
                cout << *iter1 << endl;
                ++iter1;
        }
        return 0;
}
