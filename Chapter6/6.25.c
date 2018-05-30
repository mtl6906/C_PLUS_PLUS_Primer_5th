#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc,char **argv)
{
        string text = argv[0];
        for(int i=1;i<argc;i++)
                text = text + " " + argv[i];

        cout << text << endl;

        return 0;
}
