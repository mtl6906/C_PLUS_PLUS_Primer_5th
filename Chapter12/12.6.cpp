#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

vector<int> *create_int_vector()
{
        return new vector<int>();
}

void input(vector<int> &iv)
{
        int i;
        while(cin >> i)
                iv.push_back(i);
}

void output(const vector<int> &iv)
{
        for(const auto& i : iv)
                cout << i << endl;
}

int main()
{
        auto *piv = create_int_vector();
        input(*piv);
        output(*piv);
        delete piv;
        return 0;
}
