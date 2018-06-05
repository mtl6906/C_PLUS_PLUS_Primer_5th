#include "Date.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
        string date = "January 1,1997",date1 = "12/1/1997",date2 = "Jan,1,1997";

//      cout << date.substr(8,1) <;< endl;

//      cout << stoi(date.substr(8,1)) << endl;

        Date dt(date),dt1(date1),dt2(date2);

        cout << dt.year() << " " << dt.month() << " " << dt.day() << endl;
        cout << dt1.year() << " " << dt1.month() << " " << dt1.day() << endl;
        cout << dt2.year() << " " << dt2.month() << " " << dt2.day() << endl;

        return 0;
}
