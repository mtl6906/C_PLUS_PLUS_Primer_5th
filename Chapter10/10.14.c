#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main()
{
        int a,b;

        cin >> a >> b;

        auto sum = [](const int &a,const int &b){return a+b;};

        cout << sum(a,b) << endl;

        return 0;
}
