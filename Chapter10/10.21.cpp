#include <iostream>

using std::cout;
using std::endl;

int main()
{
        int sz = 10;

        auto down = [&sz](){return --sz == 0;};

        while(!down())
                cout << sz << endl;
        return 0;
}
