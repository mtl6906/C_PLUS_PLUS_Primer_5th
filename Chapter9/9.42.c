#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::cin;

int main()
{
//      应该先将其读入一个数组，然后再传给string进行初始化
        char a[101];

        cin >> a;

        string s(a);

        cout << s << endl;

        return 0;
}
