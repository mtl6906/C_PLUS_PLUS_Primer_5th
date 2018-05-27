#include <vector>
#include <string>

using std::vector;
using std::string;

int main()
{
        vector<vector<int>> a;
//      vector<string> s = a;   不正确，不能在不同类型之间赋值
        vector<string> s1(10,"null");



        return 0;
}
