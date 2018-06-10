#ifndef STRBLOB
#define STRBLOB

#include <vector>
#include <string>
#include <memory>
#include <stdexcept>

class StrBlob
{
        public:
                typedef std::vector<std::string>::size_type size_type;
                StrBlob() : data(std::make_shared<std::vector<std::string>>()){};
                StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il)){};
                size_type size() const { return data -> size(); }
                bool empty() {return data -> empty();}
                void push_back(const std::string &t) { data -> push_back(t);}
                void pop_back();
                std::string& front();
                std::string& back();
                std::string& front() const;
                std::string& back() const;
        private:
                std::shared_ptr<std::vector<std::string>> data;
                void check(size_type i,const std::string &msg) const;
};

#endif
