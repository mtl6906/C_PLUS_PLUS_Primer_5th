#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
        const string s = "Keep out!";

        for(auto &c : s)        //      类型是const char&
                cout << c;

        cout << endl;

        return 0;
}
