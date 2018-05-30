#include <iostream>

using std::cout;
using std::endl;

int main()
{
        int sum = 0,val = 1;

        while(sum += val,val < 10)
                ++val;

        cout << "Sum of 1 to 10 inclusive is " << sum << endl;

        return 0;
}
