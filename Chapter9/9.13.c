#include <iostream>
#include <list>
#include <vector>

using std::list;
using std::vector;

int main()
{
        list<int> il1 = {1,2,3,4,5};
        vector<double> dv1(il1.begin(),il1.end());
        list<int> il2 = {1,2,3,4,5,};
        vector<double> dv2(il2.begin(),il2.end());

        return 0;
}
