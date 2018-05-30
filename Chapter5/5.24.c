#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::exception;

int main()
{
        int a,b;

        cin >> a >> b;

        if(!b)

                throw exception();

        cout << a / b;

        return 0;
}
