#include <map>
#include <iostream>

int main()
{
        std::map<std::string,int> name_age;

        std::string name;

        int age;

        std::cin >> name >> age;

        name_age[name] = age;

        std::cout << name_age.begin() -> first << " " << name_age.begin() -> second << std::endl;

        return 0;
}
