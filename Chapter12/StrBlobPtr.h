#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H

#include <memory>
#include <string>
#include <vector>

class StrBlobPtr
{
        public:
                StrBlobPtr() : curr(0){}
                bool operator!=(const StrBlobPtr &o)const {return curr != o.curr;}
                StrBlobPtr(StrBlob&,size_t);
                std::string& deref() const;
                StrBlobPtr& incr();
        private:
                std::shared_ptr<std::vector<std::string>> check(std::size_t,const std::string&) const;
                std::weak_ptr<std::vector<std::string>> wptr;
                std::size_t curr;
};

#endif
