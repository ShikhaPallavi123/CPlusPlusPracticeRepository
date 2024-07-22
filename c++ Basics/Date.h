//
// Created by Shikha Pallavi on 7/18/24.
//
/**
 * 1. Date Class

Write a C++ class definition for an abstract data type called Date that models a day of the year.  The Date class stores the year, month, and day. Your class should implement the following member functions:

A default constructor with no user-provided arguments.
A constructor with three integer arguments - the year, month, and day in that order. Use the arguments to initialize the data members.
void setDate(int year, int month, int day) : Sets the year, month, and day of the invoking Date object.
string getDate() : Returns the string version of the date in mm/dd/yyyy format.
string getSeason() : Returns the string "Winter", "Spring", "Summer", or "Fall" based on the season. Use the following dates as a guide:
First day of Spring: March 21
First day of Summer: June 21
First day of Fall: September 23
First day of Winter: December 22
2. Client program

Once you have created the Date class, create a client program (main) that displays the date in mm/dd/yyyy format (calls getDate function) and shows the season (calls getSeason function) for each of the following dates:

01/01/2012
03/10/1996
06/20/2015
09/22/2000
12/25/1980
11/22/2001
10/31/2017
09/23/2011
*
*/



#ifndef CPLUSPLUSPRACTICEREPOSITORY_ADT_ICE1_H
#define CPLUSPLUSPRACTICEREPOSITORY_ADT_ICE1_H


#include<iostream>
#include<string>
using namespace std;

class Date{
public:
    Date();
    Date(int year, int month, int day);
    void setDate(int year, int month, int day);
    string getDate() const;
    string getSeason() const;
private:
    int year;
    int month;
    int day;
};

#endif //CPLUSPLUSPRACTICEREPOSITORY_ADT_ICE1_H
