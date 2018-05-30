#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

bool iv_cmp(vector<int> iv1,vector<int> iv2)
{
        for(auto i=iv1.begin(),j=iv2.begin();i!=iv1.end()&&j!=iv2.end();++i,++j)
                if(*i != *j)
                        return false;
        return true;
}

int main()
{
        vector<int> iv1 = {0,1,1,2};
        vector<int> iv2 = {0,1,1,2,3,5,8};

        if(iv_cmp(iv1,iv2))
                cout << "true" << endl;
        else
                cout << "false" << endl;

        return 0;
}
