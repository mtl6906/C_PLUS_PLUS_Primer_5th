#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
        int cnt[5] = {0};
        char ch[5] = {'a','e','i','o','u'};

        string text;

        cin >> text;

        for(auto c : text)
        {
                c = tolower(c);
                for(int i=0;i<5;i++)
                {
                        if(ch[i] == c)
                        {
                                cnt[i]++;
                                break;
                        }
                }
        }
        for(int i=0;i<5;i++)
                cout << ch[i] << " " << cnt[i] << endl;

        return 0;
}
