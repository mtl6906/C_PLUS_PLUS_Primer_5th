#include "Sales_data.h"
#include <fstream>

using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;

int main(int argc,char **argv)
{
        Sales_data total;
        ifstream fin(argv[1]);

        if(!fin.is_open())
        {
                cerr << argv[1] << " can't open..." << endl;
                return -1;
        }

        if((total = Sales_data(fin)),fin)
        {
                Sales_data cur;
                while((cur = Sales_data(fin)),fin)
                {
                        if(cur.isbn() == total.isbn())
                        {
                                total.combine(cur);
                        }
                        else
                        {
                                print(cout,total);
                                total = cur;
                        }
                }
                print(cout,total);
        }
        else
        {
                cerr << "no data..." << endl;
                return -1;
        }

        return 0;
}
