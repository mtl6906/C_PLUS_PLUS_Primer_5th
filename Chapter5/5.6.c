#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main()
{
        int score;

        cin >> score;

        cout << (score < 60 ? "F" : score < 70 ? "D" : score < 80 ? "C" : score < 90 ? "B" : score < 100 ? "A" : "A++") << endl;

        return 0;
}
