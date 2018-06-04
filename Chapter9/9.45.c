#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


string merge(string name,string prefix,string suffix)
{
        name.insert(name.begin(),prefix.begin(),prefix.end());
        name.append(suffix);
        return name;
}

int main()
{
        cout << merge("t","m","l") << endl;
        return 0;
}
