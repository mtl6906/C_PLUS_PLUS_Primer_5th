#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
struct Person
{
        friend std::istream& read(std::istream &,Person &);
        friend std::ostream& print(std::ostream &,const Person &);

        private:
                std::string name;
                std::string address;
        public:
                std::Person() = default;
                std::Person(const std::string &,const std::string &);
                std::string getName()const;
                std::string getAddress()const;
};

std::istream& read(std::istream &,Person &);
std::ostream& print(std::ostream &,const Person &);
#endif
