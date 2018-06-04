#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
        vector<char> cv = {'1','4','2'};

        string s(cv.begin(),cv.end());

        cout << s << endl;

        return 0;
}
