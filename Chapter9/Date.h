#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>

class Date
{
        public:

                static const std::string MONTH[12];

                Date(std::string date)
                {
//      检测月份全称
                        int i;
                        for(i=0;i<12;i++)
                                if(date.find(MONTH[i]) != std::string::npos || date.find(MONTH[i].substr(0,3)) != std::string::npos)
                                {
                                        _month = i+1;
                                        break;
                                }

                        size_t dp = date.find_first_of(" /,")+1;
                        size_t yp = date.find_last_of(" /,")+1;
                        if(i == 12)
                                _month = stoi(date.substr(0,dp-1));
                        _day = stoi(date.substr(dp,yp-dp));
                        _year = stoi(date.substr(yp,date.size()-yp));
                }

                void year(unsigned year){_year = year;}
                void month(unsigned month){_month = month;}
                void day(unsigned day){_day = day;}
                unsigned year(){return _year;}
                unsigned month(){return _month;}
                unsigned day(){return _day;}

        private:
                unsigned _year;
                unsigned _month;
                unsigned _day;
};


#endif
