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
        return is >> name >> address;
}

std::ostream& print(std::ostream &os,const Person &o)
{
        return os << "name: " << name << ",address: " << address << std::endl;
}
