#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
        const size_t size = 10;
        char *t = new char[size+1];

        cin.get(t,size+1);

        cout << t << endl;

        delete []t;

        return 0;
}
