#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main()
{
        int i;
        vector<int> iv;

        while(cin >> i)
                iv.push_back(i);

        size_t sz = iv.size();
//      相邻和
        for(int i=0;i<sz-1;i++)
                cout << iv[i] + iv[i+1] << endl;

        cout << endl;
//      两端和
        for(int i=0;i<sz+1>>1;i++)
                cout << iv[i] + iv[sz-i-1] << endl;

        return 0;
}
