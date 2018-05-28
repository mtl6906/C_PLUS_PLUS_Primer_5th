#include <iostream>
#include <cctype>
#include <string>

using std::string;
using std::cout;
using std::endl;

bool has_upper(const string &s) //      需要防止形参应用的对象被改变
{
        for(auto c : s)
                if(isupper(c))
                        return true;
        return false;
}

void toLower(string &s)         //      需要改变形参引用的对象
{
        for(auto &c : s)
                if(isupper(c))
                        c = tolower(c);
}

int main()
{
        string s("gaegGAEEAGgea");
        if(has_upper(s))
                cout << s << " has upper" << endl;
        toLower(s);
        cout << s << endl;
        return 0;
}
