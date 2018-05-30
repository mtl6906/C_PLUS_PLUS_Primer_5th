#include <iostream>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;

int main()
{
        int a,b;

        while(cin >> a >> b)
        {
                try
                {
                        if(b == 0)
                                throw runtime_error("second value can't be 0");
                        cout << a / b << endl;
                        break;
                }
                catch(runtime_error err)
                {
                        cout << err.what() << endl;
                        cout << "Input again: " << endl;
                }
        }
        return 0;
}
