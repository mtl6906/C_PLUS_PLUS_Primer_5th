#include <iostream>
/*
 *      若所有值都相等,将会仅仅打印一条结果，次数为n;
 *
 *      若没有重复值，则会打印n条结果，每条次数都为1.
 */
int main()
{
        int n = 0,cnt = 1,cur,last;

        std::cin >> n;          //      输入个数n
        std::cin >> cur;        //      输入第一个数

        for(int i=1;i<n;i++)    //      输入后n-1个数
        {
                last = cur;     //      替换上个数
                std::cin >> cur;//      输入当前数
                if(cur == last)
                        cnt++;  //      计数器加1
                else
                {
                        std::cout << last << " occurs " << cnt << std::endl;    //      输出计数器的值
                        cnt = 1;        //      计数器重置为1
                }
        }

        std::cout << cur << " occurs " << cnt << std::endl;     //      打印最后一个数对应计数器的值

        return 0;
}
