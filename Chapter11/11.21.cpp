#include <map>
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main()
{
        map<string,int> word_count;

        string word;

        while(cin >> word)
                ++word_count.insert({word,0}).first -> second;

//      单词计数

        for(const auto& wc : word_count)
                cout << wc.first << " " << wc.second << endl;

        return 0;
}
