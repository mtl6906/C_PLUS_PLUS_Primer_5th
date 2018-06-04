#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
        vector<string> sv;
        sv.reserve(1024);       //      为sv分配1024个元素的内存

        string word;

        while(cin >> word)      //      循环读取string，添加到sv中
                sv.push_back(word);

        sv.resize(sv.size()+sv.size()/2);       //      将sv的当前元素的个数修改为当前的3/2倍。

        return 0;
}
