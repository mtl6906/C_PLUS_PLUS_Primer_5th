#include <iostream>
#include <string>

using std::string;

int (*getarray(int (*a)[10]))[10]
{
        return a;
}

int main()
{
        int a[10] = {0};
        getarray(&a);
        return 0;
}
