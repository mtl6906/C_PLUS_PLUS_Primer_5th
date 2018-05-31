#include <vector>

using std::vector;

int Func(int a,int b)
{
        return 1;
}

int main()
{
        vector<int(*)(int,int)> fv;

        fv.push_back(Func);

        return 0;
}
