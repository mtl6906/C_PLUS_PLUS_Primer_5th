#include <iostream>
#include <deque>
#include <list>

using std::cout;
using std::cin;
using std::endl;
using std::deque;
using std::list;

int main()
{
        deque<int> odd_id,even_id;
        list<int> il;

        int i;

        while(cin >> i)
        {
                il.push_back(i);
        }

        for(const auto& c : il)
                if(c % 2)
                        odd_id.push_back(c);
                else
                        even_id.push_back(c);

        for(const auto& c : odd_id)
                cout << c << endl;
        for(const auto& c : even_id)
                cout << c << endl;

        return 0;
}
