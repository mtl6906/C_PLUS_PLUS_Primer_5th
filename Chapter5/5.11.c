#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
        int cnt;
        string text;

        getline(cin,text);

        for(auto c : text)
        {
                c = tolower(c);
                if(c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
                        cnt++;
        }

        cout << cnt << endl;

        return 0;
}
