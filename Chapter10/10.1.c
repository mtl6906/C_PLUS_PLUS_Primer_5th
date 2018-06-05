#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::count;
using std::cout;
using std::endl;

int main()
{
        vector<int> iv = {1,2,3,4,5,5,6,7,7};
        cout << count(iv.begin(),iv.end(),7) << endl;
        return 0;
}
