#include <iostream>

int main()
{
        int start,end;

        std::cout << "Enter two numbers:" << std::endl;
        std::cin >> start >> end;

        if(start > end)     
        {
                start ^= end;
                end ^= start;
                start ^= end;
        }

        for(int i=start;i<=end;i++)
                std::cout << i << std::endl;

        return 0;
}
