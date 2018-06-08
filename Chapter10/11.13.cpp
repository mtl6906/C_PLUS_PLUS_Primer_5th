#include <iostream>
#include <vector>
#include <string>

int main()
{
        std::string s;
        int i;

        std::vector<std::pair<std::string,int>> pv;

        while(std::cin >> s >> i)
                pv.push_back(std::make_pair(s,i));
//              pv.push_back({s,i});    这种最好写
//              pv.push_back(std::pair<std::string,int>(s,i));
        for(const auto& p : pv)
                std::cout << p.first << " " << p.second << std::endl;

        return 0;
}
