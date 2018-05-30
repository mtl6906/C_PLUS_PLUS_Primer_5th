#include <iostream>

using std::cout;
using std::endl;

int main()
{
        char cval;
        int ival;
        unsigned int ui;
        float fval;
        double dval;

        cval = 'a' + 3;         //      'a'转化为int

        fval = ui - ival * 1.0; //      ival转化为double，ui转化为double，等号右方整个转化为float

        dval = ui * fval;       //      ui转化为float，两者之积转化为double

        cval = ival + fval + dval;      //      ival转化为float，float转化为double，double转化为char

        return 0;
}
