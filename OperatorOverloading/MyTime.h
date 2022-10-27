#pragma once
#include <iostream>
class MyTime
{
public:
	MyTime();
	MyTime(int hours, int mins, int secs);
	~MyTime();

	inline int getSecs() const;
	inline int getMins() const;
	inline int getHours() const;

	// assignment: t1=t2;

	MyTime& operator=(const MyTime& rhs);

	// addition: t2=t1+seconds;

	const MyTime operator+(const int seconds) const;

	// addition: t3=t1+t2;

	const MyTime operator+(const MyTime& rhs) const;

	// less than: t1<t2

	bool operator<(const MyTime& rhs) const;

	// greater than or equal to: t1>=t2 (perhaps use the < operator to implement this)

	bool operator>=(const MyTime& rhs) const;

	// same as: t1==t2

	bool operator==(const MyTime& rhs) const;

	//// same as: t1!=t2 (perhaps use the == operator)

	bool operator!=(const MyTime& rhs) const;

	//// add: t1+=t2;

	MyTime& operator+=(const MyTime& rhs);

	//// increment prefix: ++t1; (adds one second)

	MyTime& operator++(); // Prefix increment operator

	//// increment postfix: t1++; (adds one second)

	const MyTime operator++(int); // postfix increment operator

	// IO Output Stream

	friend std::ostream& operator<<(std::ostream& os, const MyTime& rhs);

	// IO Input Stream

	friend std::istream& operator>>(std::istream& is, MyTime& rhs);

private:
	int hours, mins, secs;

};

inline int MyTime::getSecs() const { return secs; }
inline int MyTime::getMins() const { return mins; }
inline int MyTime::getHours() const { return hours; }




