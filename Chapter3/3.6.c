#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
        string s;
        cin >> s;               //      输入一个字符串

        for(auto &c:s)          //      将每个元素转化为'X'
                c = 'X';

        cout << s << endl;

        return 0;
}
