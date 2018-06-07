#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using std::vector;
using std::istream_iterator;
using std::ostream_iterator;
using std::cout;
using std::cin;

int main()
{
        istream_iterator<int> in(cin),eof;

        ostream_iterator<int> out(cout);

        vector<int> iv(in,eof);

        sort(iv.begin(),iv.end());

        unique_copy(iv.begin(),iv.end(),out);

        return 0;
}
