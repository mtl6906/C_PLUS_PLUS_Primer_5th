#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
        vector<int> iv = {1,2,3,4,5};

        iv.erase(iv.begin()+1,iv.begin()+1);    //      no thing happen

        for(const auto& i : iv)
        {
                cout << i << endl;
        }

        iv.erase(iv.end(),iv.end());            //      no thing happen,too

        for(const auto& i : iv)
        {
                cout << i << endl;
        }

        return 0;
}
