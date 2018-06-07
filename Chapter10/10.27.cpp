#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using std::list;
using std::cout;
using std::endl;
using std::vector;

int main()
{
        vector<int> iv = {1,2,3,5,1,3,5};
        list<int> il;

        sort(iv.begin(),iv.end());
        unique_copy(iv.begin(),iv.end(),back_inserter(il));

        for(const auto& s : il)
                cout << s << endl;

        return 0;
}
