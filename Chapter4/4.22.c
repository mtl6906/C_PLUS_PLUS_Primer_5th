#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
        int score;
        cin >> score;
//      表达式
        cout << ((score > 90) ? "high score" : (score < 60) ? "fail" : (score <= 75) ? "low score" : "pass") << endl;
//      if
        if(score < 60)
                cout << "fail" << endl;
        else if(score <= 75)
                cout << "low score" << endl;
        else if(score < 90)
                cout << "pass" << endl;
        else
                cout << "high score" << endl;

        return 0;
}
