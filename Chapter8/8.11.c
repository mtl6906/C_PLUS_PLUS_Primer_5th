#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::istringstream;

struct PersonInfo
{
        string name;
        vector<string> phones;
};

int main()
{
        vector<PersonInfo> piv;
        string line,word;
        istringstream record;

        while(getline(cin,line))
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
