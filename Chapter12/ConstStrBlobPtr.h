#ifndef CONSTSTRBLOBPTR_H
#define CONSTSTRBLOBPTR_H

#include <memory>
#include <string>
#include <vector>

class ConstStrBlobPtr
{
        public:
                ConstStrBlobPtr() : curr(0){}
                bool operator!=(const ConstStrBlobPtr &o)const {return curr != o.curr;}
                ConstStrBlobPtr(const StrBlob&,size_t);
                std::string& deref() const;
                ConstStrBlobPtr& incr();
        private:
                std::shared_ptr<std::vector<std::string>> check(std::size_t,const std::string&) const;
                std::weak_ptr<std::vector<std::string>> wptr;
                std::size_t curr;
};

#endif
