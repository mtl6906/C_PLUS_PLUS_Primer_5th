#ifndef LIMIT_QUOTE_H
#define LIMIT_QUOTE_H

#include "Quote.h"

class Limit_quote : public Quote
{
        public:
                Limit_quote() = default;
                Limit_quote(std::string,double,size_t,double);
                double net_price(size_t cnt) const override;

        private:
                size_t max_qty;
                double discount;
};

#endif
