#include <iostream>

int main()
{
        int sum = 0,num = 50;

        while(num <= 100)
        {
                sum += num;
                num++;
        }

        std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

        return 0;
}
