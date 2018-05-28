#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
        int a[] = {1,2,3,4,5};
        vector<int> iv(std::begin(a),std::end(a));

        for(const auto &i : iv)
                cout << i << endl;

        return 0;
}
