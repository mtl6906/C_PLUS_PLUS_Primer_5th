#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
        int score;

        cin >> score;

        if(score < 60)
                cout << "F" << endl;
        else if(score <70)
                cout << "E" << endl;
        else if(score < 80)
                cout << "D" << endl;
        else if(score < 90)
                cout << "C" << endl;
        else if(score < 100)
                cout << "A" << endl;
        else
                cout << "A++" << endl;

        return 0;
}
