#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

void show(const vector<int> &v)
{
        cout << v.size() << endl;
        for(auto i=v.cbegin();i!=v.cend(); i++)
                cout << *i << " ";
        cout << endl;
}

void show(const vector<string> &v)
{
        cout << v.size() << endl;
        for(auto i=v.begin();i!=v.cend();i++)
                cout << *i << " ";
        cout << endl;
}

int main()
{
        vector<int> v1;
        show(v1);
        vector<int> v2(10);
        show(v2);
        vector<int> v3(10,42);
        show(v3);
        vector<int> v4{10};
        show(v4);
        vector<int> v5{10,42};
        show(v5);
        vector<string> v6{10};
        show(v6);
        vector<string> v7{10,"hi"};
        show(v7);

        return 0;
}
