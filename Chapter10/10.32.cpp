#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <numeric>
#include <functional>
#include "1/Sales_item.h"

using std::vector;
using std::cin;
using std::istream_iterator;
using std::cout;
using std::endl;
using std::string;
using std::placeholders::_1;

bool is_diff(const string &a,const string & b)
{
        return a != b;
}

int main()
{
        Sales_item total;

        istream_iterator<Sales_item> in(cin),eof;

        vector<Sales_item> siv(in,eof);

        sort(siv.begin(),siv.end(),compareIsbn);

        auto bg = siv.begin(),ed = siv.end();

        while(bg != siv.end())
        {
                ed = find_if(bg,siv.end(),[bg](const Sales_item &si){return si.isbn() != bg -> isbn();});
                cout << accumulate(bg,ed,Sales_item(bg->isbn())) << endl;
                bg = ed;
        }

        return 0;
}
