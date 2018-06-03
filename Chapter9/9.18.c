#include <iostream>
#include <string>
#include <deque>

using std::deque;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
        deque<string> sd;

        string ele;

        while(cin >> ele)
        {
                sd.push_back(ele);
        }

        for(auto s=sd.begin();s!=sd.end();++s)
                cout << *s << endl;

        return 0;
}
