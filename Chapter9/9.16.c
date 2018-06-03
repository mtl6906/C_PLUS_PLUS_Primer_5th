#include <iostream>
#include <list>
#include <vector>

using std::list;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
        list<int> il;
        vector<int> iv;

        int i;

        while(cin >> i)
        {
                il.push_back(i);
        }
        cin.clear();

        while(cin >> i)
        {
                iv.push_back(i);
        }
        cin.clear();

        vector<int> iv1(il.cbegin(),il.cend());

        if(iv1 == iv)
                cout << "equal" << endl;
        else
                cout << "not equal" << endl;

        return 0;
}
