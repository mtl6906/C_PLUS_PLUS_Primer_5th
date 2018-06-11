#include <memory>
#include <string>
#include <iostream>

using std::cin;
using std::string;
using std::allocator;

int main()
{
        const size_t n = 5;

        allocator<string> alloc;

        string *const p = alloc.allocate(n);

        string s;

        string *q = p;

        while(cin >> s && q != p + n)
        {
                *q++ = s;
        }

        const size_t count_size = q - p;

        q = p;

        while(q != p + count_size)
                alloc.destroy(q++);

        alloc.deallocate(p,n);

        return 0;
}
