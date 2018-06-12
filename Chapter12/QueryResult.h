#ifndef QUERYRESULT_H
#define QUERYRESULT_H

class QueryResult
{
        friend std::ostream& print(std::ostream&,const QueryResult&);
        public:
                using line_no = std::vector<std::string>::size_type;
                QueryResult(std::string s,std::shared_ptr<std::set<line_no>> p,const std::shared_ptr<std::vector<std::string>>& f):key(s),lines(p),file(f){}
        private:
                std::shared_ptr<std::vector<std::string>> file;
                std::shared_ptr<std::set<line_no>> lines;
                std::string key;
};

std::ostream& print(std::ostream&,const QueryResult&);
#endif
