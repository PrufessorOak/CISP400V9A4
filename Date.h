// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A4
// PURPOSE : Date class definition. This file presents Date's public 
//           interface without revealing the implementations of Date's member
//           functions, which are defined in Date.cpp
//           To show my understanding of a header file and function prototypes.
// Software Change (Modifications) Record
// date         what               who
// 10/15/2015   created program    Yev

#ifndef DATE_H
#define DATE_H
#include "Time.h"
class Date
{
public:
	static const unsigned int monthsPerYear = 12; // months in a year
	explicit Date(int = 1, int = 1, int = 1900, Time = Time()); // default constructor
	void print() const; // print date in month/day/year format
	void increaseADay(); // increase the day by one if data is valid
	void tick(); // increase time by one second if data is valid
	~Date(); // provided to confirm destruction order
private:
	unsigned int month; // 1-12 (January-December)
	unsigned int day; // 1-31 based on month
	unsigned int year; // any year
	Time time; // time object

	// utility function to check if day is proper for month and year
	unsigned int checkDay(int) const;
}; // end class Date

#endif
