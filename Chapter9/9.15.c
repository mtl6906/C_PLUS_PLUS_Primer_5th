#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main()
{
        vector<int> iv1,iv2;

        int i;

        while(cin >> i)
        {
                iv1.push_back(i);
        }
        cin.clear();

        while(cin >> i)
        {
                iv2.push_back(i);
        }
        cin.clear();

        if(iv1 == iv2)
                cout << "equal" << endl;
        else
                cout << "not equal" << endl;

        return 0;
}
