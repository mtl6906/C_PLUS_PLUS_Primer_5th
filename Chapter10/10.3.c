#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using std::cout;
using std::endl;
using std::vector;

int main()
{
        vector<int> iv = {1,2,3,4,5,6};

        int sum = accumulate(iv.cbegin(),iv.cend(),0);

        cout << sum << endl;

        return 0;
}
