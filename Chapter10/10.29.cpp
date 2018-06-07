#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>

using std::istream_iterator;
using std::string;
using std::vector;
using std::ifstream;
using std::cout;
using std::endl;

int main(int argc,char **argv)
{
        if(argc != 2)
        {
                cout << "usage: ./10.29 <filename>" << endl;
                return -1;
        }

        ifstream ifs(argv[1]);

        if(!ifs.is_open())
        {
                cout << "file not exist..." << endl;;
                return -1;
        }

        istream_iterator<string> iter(ifs),eof;

        vector<string> sv(iter,eof);

        for(const auto& s : sv)
                cout << s << endl;

        return 0;
}
