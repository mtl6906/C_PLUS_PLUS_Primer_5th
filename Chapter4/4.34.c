#include <iostream>

using std::cout;
using std::endl;

int main()
{
        bool flag;
        char cval;
        short sval;
        unsigned short usval;
        int ival;
        unsigned int uival;
        long lval;
        unsigned long ulval;
        float fval;
        double dval;

        if(fval){}      //      float转化为bool

        dval = fval + ival;     //      ival转化为float，两者之和从float转化为double

        dval + ival * cval;     //      cval转化为int,ival*cval转化为double

        return 0;
}
