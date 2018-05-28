#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

bool is_empty(const string &s)  //      string& s将无法传递字符串常量
{
        return s.empty();
}

int main()
{

        string a;

        if(is_empty(a))
                cout << "yes" << endl;
        else
                cout << "no" << endl;

}
