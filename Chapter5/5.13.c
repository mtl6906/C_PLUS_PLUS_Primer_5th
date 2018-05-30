#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
        string curText,lastText,resText;

        int cnt = 0,maxCnt = 0;

        if(cin >> lastText);
        else
                return -1;

        while(cin >> curText)
        {
                if(curText == lastText)
                {
                        cnt++;
                        if(cnt > maxCnt)
                        {
                                maxCnt = cnt;
                                resText = curText;
                        }
                }
                else
                        cnt = 0;
                lastText = curText;
        }

        cout << resText << " " << maxCnt+1 << endl;

        if(maxCnt == 0)
                cout << "no word same" << endl;

        return 0;
}
