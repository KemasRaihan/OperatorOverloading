#include <iostream>
#include "MyTime.h"

int main()
{
	MyTime t1 = MyTime(10,20,30);
	MyTime t2 = MyTime(100,100,100);

	// assignment: t1=t2;
	//t1 = t2;
	//std::cout << "Hours: " << t1.getSecs() << std::endl;
	//std::cout << "Mins: " << t1.getMins() << std::endl;
	//std::cout << "Secs: " << t1.getHours() << std::endl;

	// addition: t2=t1+seconds;
	//MyTime t2 = t1 + 100;
	//std::cout << t2.getSecs() << std::endl;


	//// addition: t3=t1+t2;
	//MyTime t3 = t1 + t2;
	//std::cout << t3.getSecs() << std::endl;
	//std::cout << t3.getMins() << std::endl;
	//std::cout << t3.getHours() << std::endl;


	// less than: t1<t2
	//std::cout << (t1 < t2) << std::endl;

	// greater than or equal to: t1>=t2 (perhaps use the < operator to implement this)
	//std::cout << (t1 >= t2) << std::endl;


	// same as: t1==t2
	//std::cout << (t1 == t2) << std::endl;

	// same as: t1!=t2 (perhaps use the == operator)
	//std::cout << (t1 != t2) << std::endl;

	// add: t1+=t2;
	//t1 += t2;
	//std::cout << t1.getHours() << std::endl;
	//std::cout << t1.getMins() << std::endl;
	//std::cout << t1.getSecs() << std::endl;

	// increment prefix: ++t1; (adds one second)
	//++t1;
	//std::cout << t1.getSecs() << std::endl;

	// increment postfix: t1++; (adds one second)

	//t1++;
	//std::cout << t1.getSecs() << std::endl;

	// IO Output Stream
	//std::cout << t1;

	// IO Input Stream
	MyTime t3 = MyTime();
	std::cin >> t3;
	std::cout << t3;

	return 0;
}