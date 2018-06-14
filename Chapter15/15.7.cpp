#include "Limit_quote.h"

int main()
{
        Limit_quote lq("isbn-1354",20.0,5,0.1);

        print_total(std::cout,lq,6);

        return 0;
}
