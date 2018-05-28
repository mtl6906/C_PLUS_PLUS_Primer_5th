#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
        int i;
        vector<int> iv;
        while(cin >> i)
        {
                iv.push_back(i);
        }

        for(auto i : iv)
                cout << i << " ";

        cout << endl;

        return 0;
}
