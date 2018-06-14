#include "Bulk_quote.h"

using std::cout;
using std::endl;

int main()
{
        Quote q("isbn-1354",15.0);
        Bulk_quote bq("isbn-1354",15.0,3,0.1);

        print_total(cout,q,4);
        print_total(cout,bq,4);

        return 0;
}
