//
// Created by Shikha Pallavi on 7/18/24.
//
#include"Date.h"
#include <iomanip>
#include <sstream>

Date:: Date(){
    year = 0;
    month = 0;
    day = 0;
}

Date:: Date(int year, int month, int day){
    this -> year = year;
    this->month = month;
    this->day = day;
}
void Date::setDate(int year, int month, int day){
    this -> year = year;
    this->month = month;
    this->day = day;
}

string Date:: getDate() const{
    stringstream ss;
    ss << setw(2) << setfill('0') << month << "/"
       << setw(2) << setfill('0') << day <<"/"
       << year;

    return ss.str();
}

string Date :: getSeason() const{
    if((month == 12 && day >= 22) || month <= 2 || (month == 3 && day <= 21)){
        return "winter";
    }
    else if((month == 3 && day >= 21) || (month < 6) || (month == 6 && day <= 21)){
        return "spring";
    }
    else if((month == 6 && day >= 21) || (month < 9) || (month == 9 && day <= 23)){
        return "summer";
    }
    else{
        return "Fall";
    }
}