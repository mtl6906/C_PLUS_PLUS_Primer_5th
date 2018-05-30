#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
        int cnt[8] = {0};
        char ch[8] = {'a','e','i','o','u',' ','\t','\n'};

        char c;

        while(cin.get(c))
        {
                c = tolower(c);
                for(int i=0;i<8;i++)
                {
                        if(ch[i] == c)
                        {
                                cnt[i]++;
                                break;
                        }
                }
        }

        for(int i=0;i<8;i++)
                cout << ch[i] << " : " << cnt[i] << endl;

        return 0;
}
