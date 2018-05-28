#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

int main()
{
        vector<int> iv(10,42);

        for(auto i=iv.begin();i!=iv.end();i++)
                *i <<= 1;

        for(auto i=iv.cbegin();i!=iv.end();i++)
                cout << *i << endl;

        return 0;
}
