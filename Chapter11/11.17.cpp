#include <set>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
        std::vector<std::string> v;
        std::multiset<std::string> ms;

        copy(v.begin(),v.end(),std::inserter(ms,ms.end()));
//      copy(v.begin(),v.end(),std::back_inserter(ms)); 不合法
        copy(ms.begin(),ms.end(),std::inserter(v,v.end()));
        copy(ms.begin(),ms.end(),std::back_inserter(v));
        return 0;
}
