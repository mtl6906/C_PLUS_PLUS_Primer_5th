#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
        int num;
        cin >> num;

        if(num % 2)
                cout << "odd" << endl;
        else
                cout << "even" << endl;

        return 0;
}
