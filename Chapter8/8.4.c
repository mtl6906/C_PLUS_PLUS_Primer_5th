#include "Chapter8.h"

using std::vector;
using std::string;
using std::endl;
using std::cout;

int main(int argc,char**argv)
{
        vector<string> sv;
        read(argv[1],sv);
        for(const auto &s : sv)
                cout << s << endl;
        return 0;

}
