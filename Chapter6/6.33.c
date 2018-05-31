#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

void print(vector<int>::iterator cur,vector<int>::iterator end)
{
        if(cur == end)
                return;
        cout << *cur << endl;
        print(cur+1,end);
}

int main()
{
        vector<int> iv = {1,2,3,4,5};

        print(iv.begin(),iv.end());

        return 0;
}
