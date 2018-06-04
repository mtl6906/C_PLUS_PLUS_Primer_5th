#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main()
{
        vector<int> iv;

//      采用的是倍增策略
        for(int i=0;i<10000;i++)
        {
                iv.push_back(i);
                cout << iv.capacity() << endl;
        }

        return 0;
}
