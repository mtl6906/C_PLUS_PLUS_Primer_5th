#include <forward_list>
#include <iostream>

using std::forward_list;
using std::cout;
using std::endl;

int main()
{
        forward_list<int> ifl = {1,2,3,4,5,6};

        auto prev = ifl.before_begin(),cur = ifl.begin();

        while(cur != ifl.end())
        {
                if(*cur % 2)
                {
                        cur = ifl.erase_after(prev);
                }
                else
                {
                        prev = cur;
                        ++cur;
                }
        }

        for(const auto& i : ifl)
                cout << i << endl;

        return 0;
}
