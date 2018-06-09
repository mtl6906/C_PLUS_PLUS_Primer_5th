#include <map>
#include <iostream>
#include <string>


using std::multimap;
using std::string;
using std::cin;
using std::endl;
using std::cout;

int main()
{
        multimap<string,string> mp;

        string author,article;

        while(cin >> author >> article)
                mp.insert({author,article});

        cin.clear();

        cin >> author;

        auto t = mp.find(author);

        auto cnt = mp.count(author);

        while(cnt--)
        {
                mp.erase(t++);
        }

        for(const auto &c : mp)
                cout << c.first << " " << c.second << endl;

        return 0;
}
