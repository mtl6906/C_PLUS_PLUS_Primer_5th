#include <fstream>
#include <iterator>
#include <iostream>

using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::istream_iterator;
using std::ostream_iterator;

int main(int argc,char **argv)
{
        if(argc != 4)
        {
                cout << "usage: ./a.out <inputfile> <evenfile> <oddfile>" << endl;
                return -1;
        }

        ifstream is(argv[1]);
        ofstream even_os(argv[2]);
        ofstream odd_os(argv[3]);

        if(!(is.is_open() && odd_os.is_open() && even_os.is_open()))
        {
                cout << "file open failed..." << endl;
                return -1;
        }

        istream_iterator<int> in(is),eof;
        ostream_iterator<int> even_out(even_os,"\n"),odd_out(odd_os,"\n");

        while(in != eof)
        {
                if(*in % 2 == 0)
                        even_out = *in;
                else
                        odd_out = *in;
                ++in;
        }

        return 0;
}
