#include <iostream>

int main()
{
        constexpr size_t array_size = 10;
        int ia[array_size];
//      for(size_t ix = 1;ix <= array_size; ix++)       越界
        for(size_t ix = 0;ix < array_size;ix++)
                ia[ix] = ix;

        return 0;
}
