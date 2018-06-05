#include <vector>
#include <numeric>
#include <iostream>

using std::endl;
using std::cout;
using std::vector;

int main()
{
        vector<double> dv = {1.0,2.5,3.5,6.8};
//      会被转化为一个整型
        double sum = accumulate(dv.cbegin(),dv.cend(),0);

        cout << sum << endl;

        return 0;
}
