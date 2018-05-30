#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
        string word[3] = {"ff","fl","fi"};
        int cnt[3] = {0};

        string text;

        cin >> text;

        for(auto i=text.begin();i!=text.end()-1;++i)
                if(*i == 'f' )
                {
                        if(*(i+1) == 'f')
                                cnt[0]++;
                        else if(*(i+1) == 'l')
                                cnt[1]++;
                        else if(*(i+1) == 'i')
                                cnt[2]++;
                }

        for(int i=0;i<3;i++)
                cout << word[i] << " : " << cnt[i] << endl;

        return 0;
}
