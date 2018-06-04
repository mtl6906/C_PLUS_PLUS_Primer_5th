#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
        vector<int> iv = {1,2,3,4,5,6};

        auto iter = iv.begin();
//      不停的朝头部插首元素
        while(iter != iv.end())
        {
                if(*iter % 2)
                        iter = iv.insert(iter,*iter);
                cout << *iter << endl;
        }
        ++iter;

        return 0;
}
