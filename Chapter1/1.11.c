#include <iostream>

int main()
{
        int start,end;

        std::cout << "Enter two numbers:" << std::endl;
        std::cin >> start >> end;

        while(start <= end)
        {
                std::cout << start << std::endl;
                start++;
        }

        return 0;
}
