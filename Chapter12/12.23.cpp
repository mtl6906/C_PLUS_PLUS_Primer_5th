#include <string>
#include <cstring>

using std::string;

int main()
{
//      const char*

        const char t[] = "abcde",s[] = "fghi";

        int lt = strlen(t),ls = strlen(s);

        char *res = new[lt+ls+1];

        for(int i=0;i<lt;++i)
                res = t[i];

        for(int i=0;i<ls;++i)
                res = s[i];

//      string

        string a="abcde",b="fghi";

        string c = a + b;


        return 0;
}
