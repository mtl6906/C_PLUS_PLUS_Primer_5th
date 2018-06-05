#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::cin;

void display(vector<string> &iv)
{
        for(const auto& c : iv)
                cout << c << " ";
        cout << endl;
}

int main()
{
        vector<string> iv;

        string i;

        while(cin >> i)
                iv.push_back(i);
        display(iv);

        sort(iv.begin(),iv.end());
        auto end_iter = unique(iv.begin(),iv.end());
        display(iv);

        iv.erase(end_iter,iv.end());
        display(iv);

        return 0;
}
