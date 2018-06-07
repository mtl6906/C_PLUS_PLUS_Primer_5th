#include <iostream>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;

int main()
{
        list<int> il = {0,1,2,3,4,5,6,0};

        cout << *find(il.crbegin(),il.crend(),0) << endl;

        return 0;
}
