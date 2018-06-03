#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

bool search(vector<int>::iterator begin,vector<int>::iterator end,int val)
{
        while(begin!=end)
        {
                if(val == *begin)
                        return true;
                ++begin;
        }
        return false;
}

int main()
{
        vector<int> a = {1,2,3,4,5};

        cout << search(a.begin(),a.end(),3) << endl;

        return 0;
}
