#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string merge(string name,string prefix,string suffix)
{
        name.insert(0,prefix);
        name.insert(name.size(),suffix);
        return name;
}

int main()
{
        cout << merge("t","m","l") << endl;
        return 0;
}
