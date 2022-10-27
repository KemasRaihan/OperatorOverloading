#include "MyTime.h"

MyTime::MyTime() : hours(0), mins(0), secs(0) {}

MyTime::MyTime(int hours, int mins, int secs) : hours(hours), mins(mins), secs(secs) {}

MyTime::~MyTime(){}


// assignment: t1=t2;

MyTime& MyTime::operator=(const MyTime& rhs)
{
	if (this != &rhs)
	{
		hours = rhs.hours;
		mins = rhs.mins;
		secs = rhs.secs;
	}
	return *this;
}

//// addition: t2=t1+seconds;
//
const MyTime MyTime::operator+(const int seconds) const
{
	MyTime lhs = MyTime();
	lhs.secs = secs + seconds;
	return lhs;
}
//
//// addition: t3=t1+t2;
//
const MyTime MyTime::operator+(const MyTime& rhs) const
{
	MyTime lhs = MyTime();
	lhs.hours = hours + rhs.hours;
	lhs.mins = mins + rhs.mins;
	lhs.secs = secs + rhs.secs;
	return lhs;
}
//
//// less than: t1<t2
//
bool MyTime::operator<(const MyTime& rhs) const
{
	return ((secs < rhs.secs) && (mins < rhs.mins) && (hours < rhs.hours));

}
//
//// greater than or equal to: t1>=t2 (perhaps use the < operator to implement this)
//
bool MyTime::operator>=(const MyTime& rhs) const
{
	return ((rhs.secs < secs) && (rhs.mins < mins) && (rhs.hours < hours));
}

// same as: t1==t2

bool MyTime::operator==(const MyTime& rhs) const
{
	return ((secs == rhs.secs) && (mins == rhs.mins) && (hours == rhs.hours));
}

// same as: t1!=t2 (perhaps use the == operator)

bool MyTime::operator!=(const MyTime& rhs) const
{
	return ((secs != rhs.secs) && (mins != rhs.mins) && (hours != rhs.hours));
}

// add: t1+=t2;

MyTime& MyTime::operator+=(const MyTime& rhs)
{
	hours += rhs.hours;
	mins += rhs.mins;
	secs += rhs.secs;
	return *this;
}

// increment prefix: ++t1; (adds one second)

MyTime& MyTime::operator++() // Prefix increment operator
{
	++secs;
	return *this;
}

//// increment postfix: t1++; (adds one second)

const MyTime MyTime::operator++(int) // postfix increment operator
{
	secs++;
	return *this;
}

// IO Output Stream

std::ostream& operator<<(std::ostream& os, const MyTime& rhs)
{
	os << rhs.hours << ":" << rhs.mins << ":" << rhs.secs; 
	return os;
}

// IO Input Stream

std::istream& operator>>(std::istream& is, MyTime& rhs)
{
	is >> rhs.hours >> rhs.mins >> rhs.secs;
	return is;
}