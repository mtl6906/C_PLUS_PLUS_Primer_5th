#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;

int main()
{
        vector<int> iv = {5,3,4,1,3,7,6};

        for(auto &c : iv)
                c = (c % 2 ? c << 1 : c);

        for(const auto &c : iv)
                cout << c << endl;

        return 0;
}
