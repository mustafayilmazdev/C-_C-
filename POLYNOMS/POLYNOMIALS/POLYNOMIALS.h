#include <iostream>

using namespace std;

class Myclass {
public:
	Myclass() {
		cout << "default constructor" << endl;
	}

	Myclass(const Myclass &r)
	{
		cout << "***********************************" << endl;
		cout << "copy constructor" << endl;
		cout << "this  = " << this << endl;
		cout << "&r    = " << &r << endl;
		cout << "***********************************" << endl;
	}

};

int main()
{
	Myclass m1;
	Myclass m2{ m1 };   //C++11

	cout << "&m1  = " << &m1 << endl;
	cout << "&m2  = " << &m2 << endl;



	return 0;
}