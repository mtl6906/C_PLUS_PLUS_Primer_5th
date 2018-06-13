#ifndef EMPLOYEE 
#define EMPLOYEE

class Employee
{
        public:
                Employee() : em_no(++count){};
                Employee(const string &name) : name(name) ,em_no(++count){};
                Employee(const Employee&) = delete;
                Employee& operator=(const Employee&) = delete;
        private:
                size_t em_no;
                std::string name;
                static size_t count;
};

size_t count = 0;

#endif
