#include <vector>
#include <string>

using std::string;
using std::vector;

int main()
{
        vector<string>::iterator iter;

        *iter++;
//      (*iter)++;      error
//      *iter.empty();  error
        iter -> empty();
//      ++*iter;        error
        iter++ -> empty();

        return 0;
}
