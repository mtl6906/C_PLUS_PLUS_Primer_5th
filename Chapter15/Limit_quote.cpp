#include "Limit_quote.h"

Limit_quote::Limit_quote(std::string book,double p,size_t qty,double disc)
: Quote(book,p),max_qty(qty),discount(disc){}

double Limit_quote::net_price(size_t cnt) const
{
        if(cnt <= max_qty)
                return cnt * (1 - discount) * price;
        return (cnt - max_qty) * price + max_qty * (1 - discount) * price;
}
