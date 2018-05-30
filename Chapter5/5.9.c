#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
        int cnt = 0;
        string text;

        cin >> text;

        for(const auto &c : text)
                if(c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u')
                        cnt++;

        cout << cnt << endl;

        return 0;
}
