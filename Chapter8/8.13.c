#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::istringstream;
using std::ifstream;

struct PersonInfo
{
        string name;
        vector<string> phones;
};

int main(int argc,char **argv)
{
        vector<PersonInfo> piv;
        string line,word;
        istringstream record;

        ifstream ifs(argv[1]);

        while(getline(ifs,line))
        {
                PersonInfo info;
                istringstream record(line);
                record >> info.name;
                while(record >> word)
                {
                        info.phones.push_back(word);
                }
                piv.push_back(info);
                record.clear();
        }

        for(const auto &pi : piv)
        {
                cout << pi.name << endl;
                for(const auto &p : pi.phones)
                        cout << p << " ";
                cout << endl;
        }

        return 0;
}
