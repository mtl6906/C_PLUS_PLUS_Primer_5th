#include <iostream>

int main()
{
        int sum = 0;
//      sum of -100 to 100
        for(int i=-100;i<=100;i++)
                sum += i;

        std::cout << "Sum's value is " << sum << std::endl;

        return 0;
}
