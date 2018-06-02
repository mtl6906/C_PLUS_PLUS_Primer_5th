#include "Chapter8.h"

std::istream &read(std::istream &is)
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

void read(const std::string &filename,std::vector<std::string> &sv)
{
        std::string line;
        std::ifstream ifs(filename);

        while(getline(ifs,line))
        {
                sv.push_back(line);
        }
}
