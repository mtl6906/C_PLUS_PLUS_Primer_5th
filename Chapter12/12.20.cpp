#include "Chapter12.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{

        StrBlob sb;

        string word;

        while(cin >> word)
                sb.push_back(word);

        StrBlobPtr sbp = sb.begin();

        while(sbp != sb.end())
        {
                cout << sbp.deref() << endl;
                sbp.incr();
        }

        return 0;
}
