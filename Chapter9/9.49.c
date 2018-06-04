#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;


int main()
{
        string sets = "bdfghjklpqty";

        ifstream is("word.dat");

        string res;

        string words;

        while(is >> words)
        {
                if(words.find_first_of(sets) == string::npos)
                {
                        if(words.size() > res.size())
                                res = words;
                }
        }

        cout << res << endl;

        return 0;
}
