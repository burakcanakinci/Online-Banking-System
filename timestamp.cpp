#include<iostream>
#include<sstream>
#include<cstring>
#include"timestamp.h"
TimeStamp::TimeStamp(const TimeStamp &other){
    date=other.date;
    month=other.month;
    year=other.year;
}
std::string TimeStamp::toString() const{
    std::stringstream ss;
    ss<<date<<"/"<<month<<"/"<<year;
    return ss.str();
}
int TimeStamp::timeWeight() const{
    return ((year*10000)+(month*100)+date);
}
bool TimeStamp::operator>(const TimeStamp& other) const{
    if((timeWeight())>(other.timeWeight()))
    return true;
    else return false;
}
bool TimeStamp::operator<(const TimeStamp& other) const{
    if((timeWeight())<(other.timeWeight()))
    return true;
    else return false;
}
bool TimeStamp::operator==(const TimeStamp& other) const{
    if((timeWeight())==(other.timeWeight()))
    return true;
    else return false;
}

void TimeStamp::set(unsigned int date,unsigned int month,unsigned int year)
{
    this->date=date;
    this->month=month;
    this->year=year;
}