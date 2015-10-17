// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A4
// PURPOSE : Time class definition. This file presents Time's public 
//           interface without revealing the implementations of Time's member
//           functions, which are defined in Time.cpp
//           To show my understanding of a header file and function prototypes.
// Software Change (Modifications) Record
// date         what               who
// 10/15/2015   created program    Yev

// prevent multiple inclusions of header 
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time
{
public:
	explicit Time(int = 0, int = 0, int = 0); // default constructor

	// set functions
	void setTime(int, int, int); // set hour, minute, second
	void setHour(int); // set hour (after validation)
	void setMinute(int); // set minute (after validation)
	void setSecond(int); // set second (after validation)

	// get functions
	unsigned int getHour() const; // return hour
	unsigned int getMinute() const; // return minute
	unsigned int getSecond() const; // return second

	~Time(); // destructor
	void printUniversal() const; // output time in universal-time format
	void printStandard() const; // output time in standard-time format
private:
	unsigned int hour; // 0 - 23 (24-hour clock format)
	unsigned int minute; // 0 - 59
	unsigned int second; // 0 - 59
}; // end class Time

#endif
