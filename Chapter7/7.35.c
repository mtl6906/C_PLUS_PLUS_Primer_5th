#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

typedef string Type;
Type initval();

class Exercise
{
        public:
                typedef double Type;
                Type setVal(Type);
                Type initVal(){return 1;};
        private:
                int val;
};

//Type          string
Exercise::Type
Exercise::setVal(Exercise::Type parm)   //      string
{
        val = parm + initVal(); //      Exercis::initval();
        return val;
}

int main()
{
        Exercise e;
        e.setVal(1);
        return 0;
}
