#include <map>
#include <vector>
#include <string>
#include <iostream>

using std::map;
using std::vector;
using std::string;
using std::cin;
using std::endl;
using std::cout;

int main()
{
        vector<int> iv = {1,2,3,4,5};

        string str = "1";

        map<string,vector<int>> mp = {{str,iv}};

        map<string,vector<int>>::iterator t = mp.find(str);

        return 0;
}
