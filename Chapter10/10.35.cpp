#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{
        vector<int> iv = {1,2,3,4,5,6};

        auto iter = iv.end();

        while(iter-- != iv.begin())
                cout << *iter << endl;

        return 0;
}
