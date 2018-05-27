#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
        string s;
        getline(cin,s);         //      读取整行

        cout << s << endl;;
        cin >> s;               //      读取一个词

        cout << s << endl;

        return 0;
}
