#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{

        cout << "c1" << endl;
        vector<int> c1;

        for(const auto &c : c1)
                cout << c << endl;

        cout << "c2" << endl;
        vector<int> c2 = c1;

        for(const auto &c : c2)
                cout << c << endl;

        cout << "c3" << endl;
        vector<int> c3{1,2,3,4,5};

        for(const auto &c : c3)
                cout << c << endl;

        cout << "c4" << endl;
        vector<int> c4(c3.begin(),c3.begin()+3);

        for(const auto &c : c4)
                cout << c << endl;

        cout << "c5" << endl;
        vector<int> c5(10);

        for(const auto &c : c5)
                cout << c << endl;

        cout << "c6" << endl;
        vector<int> c6(10,2);

        for(const auto &c : c6)
                cout << c << endl;
        return 0;
}
