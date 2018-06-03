#include <list>
#include <vector>
#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::list;
using std::vector;

int main()
{
        list<const char*> ccl = {"1","2","3"};

        vector<string> sv;

        sv.assign(ccl.cbegin(),ccl.cend());

        for(const auto &s : sv)
                cout << s << endl;

        return 0;
}
