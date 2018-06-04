#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
//      整型
        vector<string> svi = {"123","+23","-342"};
        const string int_range = "+-0123456789";

        int int_sum = 0;

        size_t p;

        for(const auto& i : svi)
        {
                p = i.find_first_of(int_range);
                int_sum += stoi(i,&p,10);
        }

        cout << int_sum << endl;
//      浮点型

        vector<string> svd = {".1354","+1.4684","12.54"};
        const string double_range = "+-.0123456789";

        double double_sum = 0;

        for(const auto &i : svd)
        {
                p = i.find_first_of(double_range);
                double_sum += stod(i,&p);
        }

        cout << double_sum << endl;

        return 0;
}
