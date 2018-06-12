#include "QueryResult.h"

std::string make_pluary(size_t count,const std::string& word,const std::string& s)
{
        return count > 1 ? word + s : word;
}


std::ostream& print(std::ostream& out,const QueryResult& qr)
{
        out << qr.key << " occurs " << qr.lines -> size() << make_pluary(qr.lines -> size(),"time","s") << std::endl;

        for(auto num : *qr.lines)
        {
                out << "\t(line " << num << ") " << *(qr.file -> begin() + num - 1) << std::endl;
        }
        return out;
}
