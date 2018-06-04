#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

void func(string &s,string oldVal,string newVal)
{
        for(auto c=s.begin();c!=s.end();++c)
        {
                if(string(c,c+oldVal.size()) == oldVal)
                {
                        c = s.erase(c,c+oldVal.size());
                        c = s.insert(c,newVal.begin(),newVal.end());
                        c += newVal.size();
                }
        }
}

int main()
{
        string s = "123456";

        string t = "34";

        string t1 = "234";

        func(s,t,t1);

        cout << s << endl;

        return 0;
}
