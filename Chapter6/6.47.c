#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void print(vector<int> iv,int cur = 0)
{
        if(cur == iv.size())
                return;
#ifndef NDEBUG
        cout << "iv's size is " << iv.size() << endl;
#endif
        cout << iv[cur] << endl;
        print(iv,cur+1);
}

int main()
{
        vector<int> iv = {1,2,3,4,5};

        print(iv,0);

        return 0;
}
