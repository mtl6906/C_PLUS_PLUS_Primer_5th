#include <memory>

int main()
{
        std::unique_ptr<int> a(new int(5));
        std::unique_ptr<int> b = a;
        return 0;
}
