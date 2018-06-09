#include <map>
#include <string>
#include <iostream>

using std::cin;
using std::map;
using std::cout;
using std::endl;
using std::string;

int main()
{
        map<string,int> word_count;
        string word;

        while(cin >> word)
        {
                auto t = word_count.insert({word,1});
                if(!t.second)
                        ++t.first->second;
        }

        for(const auto wc : word_count)
                cout << wc.first << " " << wc.second << endl;

        return 0;
}
