#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::vector;
using std::istream_iterator;
using std::ostream_iterator;

int main()
{
        istream_iterator<int> iter(cin),eof;
        vector<int> iv(iter,eof);

        sort(iv.begin(),iv.end());

        ostream_iterator<int> oiter(cout);

        for(const auto& i : iv)
                oiter = i;

        return 0;
}
