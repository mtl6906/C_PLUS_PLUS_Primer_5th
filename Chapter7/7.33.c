#include "Screen.h"

using std::cout;
using std::endl;

int main()
{
        Screen screen(5,3,'*');

        cout << screen.size() << endl;

        return 0;
}
