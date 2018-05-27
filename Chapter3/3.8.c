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

        for(int i=0;i<s.size();i++)             //      将每个元素转化为'X'
                s[i] = 'X';

        /*
                int i = 0;

                while(s[i] < s[i].size())
                {
                        s[i] = 'X';
                        s[i]++;
                }

        */
        cout << s << endl;      

        return 0;
}
