// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A3
// PURPOSE : Test program for classes Time.h and date.h
// Software Change (Modifications) Record
// date         what               who
// 10/15/2015   created program    Yev

#include <iostream> // allows program to output data to the screen
using std::cout; // using standrad cout library
using std::endl; // using standrad end line library

#include "Time.h" // include Time class definition
#include "Date.h" // include Date class definition

const int MAX_TICKS = 30000;

int main()
{
	Time t(23, 59, 58);// create a time object

	Date d(12, 31, 2014, t); // create date object

	// output Time object t's values 
	for (int ticks = 1; ticks < MAX_TICKS; ++ticks)
	{
		d.print(); // invokes print 
		cout << endl;
		d.tick(); // invokes function tick
	} // end for
	d.~Date();// call Date destructor
	system("PAUSE");
	return 0;
} // end main
