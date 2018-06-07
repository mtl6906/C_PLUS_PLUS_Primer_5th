#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
        vector<int> iv = {0,1,2,3,4,5,6,7,8,9};

        list<int> il;

        copy(iv.begin()+2,iv.begin()+6,front_inserter(il));

        for(const auto& i : il)
                cout << i << endl;

        return 0;
}
