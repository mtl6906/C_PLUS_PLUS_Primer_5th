#include <iostream>
#include <algorithm>
#include <list>

using std::list;
using std::cout;
using std::endl;

int main()
{
        list<int> il = {1,2,3,4,5,6};

        fill_n(il.begin(),6,0);

        for(const auto& i : il)
                cout << i << endl;

        return 0;
}
