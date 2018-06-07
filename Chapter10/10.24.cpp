#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using namespace std::placeholders;

bool check_size(const string &s,int sz)
{
        return s.size() < sz;
}

int main()
{
        vector<int> iv;
        int i;
        string s;
        cin >> s;
        while(cin >> i)
                iv.push_back(i);

        auto wc = find_if(iv.begin(),iv.end(),bind(check_size,s,_1));

        cout << *wc << endl;

        return 0;
}
