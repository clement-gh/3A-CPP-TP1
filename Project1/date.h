
#include <iostream>

#ifndef DATE_H
#define DATE_H

namespace date {
    class Date {
    private:
        int _month;
        int _day;
        int _year;

    public:
        Date(int month = 1, int day = 1, int year = 1);
      
        int month() const;
        int day() const;
        int year() const;
        void updateMonth(int month);
        void updateDay(int day);
        void updateYear(int year);
        void next();
        void back();
        
    };
    bool isbisextile(int year);
    bool isDate(int month, int day,int year);
    int getDaysInMonth(int month);
    int dayOfYear(Date d);
    std::string toString(Date d);
} // date

#endif // DATE_H