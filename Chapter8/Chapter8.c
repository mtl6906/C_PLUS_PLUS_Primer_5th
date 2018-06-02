#include "Chapter8.h"

std::istream &read(std::istream& is)
{
        std::string text;
        while(!is.eof())
        {
                is >> text;
                std::cout << text;
        }
        std::cout << std::endl;
        is.clear();
        return is;
}
