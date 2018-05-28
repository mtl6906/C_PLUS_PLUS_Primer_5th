#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main()
{
        int score;
        vector<int> iv(11,0);

        auto start = iv.begin();

        while(cin >> score)
                if(score <= 100)
                        ++*(start+score/10);

        for(auto i=iv.begin();i!=iv.end();i++)
                cout << *i << endl;

        return 0;
}
=
