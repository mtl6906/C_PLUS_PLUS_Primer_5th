#include <initializer_list>
#include <iostream>

using std::initializer_list;
using std::cout;
using std::cin;
using std::endl;

int sum(initializer_list<int> lst)
{
        int sum = 0;
        for(auto t=lst.begin();t!=lst.end();++t)
                sum += *t;
        return sum;
}
int main()
{
        int a,b,c;
        cin >> a >> b >> c;
        initializer_list<int> lst = {a,b,c};
        cout << sum(lst) << endl;

        return 0;
}
