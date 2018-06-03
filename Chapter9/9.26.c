#include <iostream>
#include <list>
#include <vector>

using std::list;
using std::vector;
using std::cout;
using std::endl;

int main()
{
        int ia[] = {0,1,1,2,3,5,8,13,21,34,55,89};
        vector<int> iv(std::begin(ia),std::end(ia));
        list<int> il(std::begin(ia),std::end(ia));

        auto iter = iv.begin();

        while(iter != iv.end())
                if(*iter % 2 == 0)
                        iter = iv.erase(iter);
                else
                        iter++;
        auto iter1 = il.begin();

        while(iter1 != il.end())
                if(*iter1 % 2)
                        iter1 = il.erase(iter1);
                else
                        iter1++;

        for(const auto& i : iv)
                cout << i << endl;

        cout << endl;

        for(const auto& i : il)
                cout << i << endl;

        return 0;
}
