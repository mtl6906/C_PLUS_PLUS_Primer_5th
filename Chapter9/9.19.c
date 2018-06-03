#include <iostream>
#include <string>
#include <list>

using std::list;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
        list<string> sd;

        string ele;

        while(cin >> ele)
        {
                sd.push_back(ele);
        }

        for(auto s=sd.begin();s!=sd.end();++s)
                cout << *s << endl;

        return 0;
}
