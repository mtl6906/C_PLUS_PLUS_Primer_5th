#include "Person.h"

std::string Person::getName() const
{
        return name;
}

std::string Person::getAddress() const
{
        return address;
}


std::istream& read(std::istream &is,Person &o)
{
        return is >> o.name >> o.address;
}

std::ostream& print(std::ostream &os,const Person &o)
{
        return os << "name: " << o.name << ",address: " << o.address << std::endl;
}
