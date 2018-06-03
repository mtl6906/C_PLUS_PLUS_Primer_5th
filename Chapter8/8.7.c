#include "Sales_data.h"
#include <fstream>

using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

int main(int argc,char **argv)
{
        Sales_data total;

        ifstream fin(argv[1]);
        ofstream fout(argv[2]);

        if(!fin.is_open())
        {
                cerr << argv[1] << " can't open..." << endl;
                return -1;
        }

        if(!fout.is_open())
        {
                cerr << argv[2] << "can't open..." << endl;
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
                                print(fout,total);
                                total = cur;
                        }
                }
                print(fout,total);
        }
        else
        {
                cerr << "no data..." << endl;
                return -1;
        }

        return 0;
}
