#include "TextQuery.h"

TextQuery::TextQuery(std::ifstream &in) : file(new std::vector<std::string>)
{
        std::string line;
        std::string word;
        size_t cnt = 0;
        while(getline(in,line))
        {
                ++cnt;
                file -> push_back(line);
                std::istringstream iss(line);

                while(iss >> word)
                {
                        auto &lines = wm[word];
                        if(!lines)
                                lines.reset(new std::set<line_no>);
                        lines -> insert(cnt);
                }
        }
}

QueryResult TextQuery::query(const std::string& key) const
{
        static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);

        auto t = wm.find(key);

        if(t == wm.end())
                return QueryResult(key,nodata,file);
        return QueryResult(key,t -> second,file);
}
