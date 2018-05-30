#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
        string curStr,lastStr;
        bool flag = false;

        if(cin >> lastStr)
                while(cin >> curStr)
                {
                        if(islower(lastStr[0]))
                        {
                                lastStr = curStr;
                                continue;
                        }
                        if(curStr == lastStr)
                        {
                                cout << curStr << endl;
                                flag = true;
                                break;
                        }
                        lastStr = curStr;
                }
                if(flag == false)
                        cout << "no same word" << endl;

        return 0;
}
