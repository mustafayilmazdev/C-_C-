#include <iostream>
class Base{
public:
	int k;
	void f();
};
class Derived : private Base { // All members of Base are private now
	int i;
public:
//	Base:: f(); // f() is public again
	Base::k;
	void fb1();
};