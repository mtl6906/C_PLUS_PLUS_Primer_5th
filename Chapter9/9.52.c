#include <iostream>
#include <stack>
#include <string>

using std::stack;
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main()
{
        string str = "geag(faegeagae)fea";

        stack<char> cs;

        bool flag = false;

        for(const auto& c : str)
                if(c == '(')
                        flag = true;
                else if(c == ')')
                        flag = false;
                else if(flag)
                        cs.push(c);

        while(!cs.empty())
        {
                cout << cs.top();
                cs.pop();
        }
        cout << endl;

        return 0;
}
