#include <iostream>
#include <vector>

using std::vector;

int main()
{
        vector<int> iv;
//      iv[0] = 42;     不合法
        iv.push_back(42);
        return 0;
}
