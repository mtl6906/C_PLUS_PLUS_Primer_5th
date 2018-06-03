#include "Chapter8.h"
#include <fstream>
#include <sstream>

using std::vector;
using std::string;
using std::istringstream;
using std::endl;
using std::cout;

int main(int argc,char **argv)
{
        vector<string> sv;

        read(argv[1],sv);

        istringstream iss;

        string word;

        for(const auto &s : sv)
        {
                iss.str(s);
                while(iss >> word)
                {
                        cout << word << endl;
                }
                iss.clear();
        }

        return 0;
}
