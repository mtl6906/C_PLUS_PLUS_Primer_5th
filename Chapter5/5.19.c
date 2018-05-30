#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
        string s1,s2;

        do
        {

                cout << "Please input two string: " << endl;

                cin >> s1 >> s2;

                if(s1.size() < s2.size())
                        cout << s1 << endl;
                else
                        cout << s2 << endl;

        }while(true);

        return 0;
}
