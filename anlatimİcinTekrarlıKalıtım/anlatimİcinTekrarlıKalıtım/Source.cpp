#include <iostream>
using namespace std;
class Gparent
{ 
public:
	int g;
	Gparent() {
		g = 8;
	}
	void  f() {
		cout << "Gparent'im" << endl;
	}

};
class Father :virtual public Gparent
{
public:
	int c;
	Father() {
		g = 11;
	}
	
};
class Mother :virtual public Gparent
{
public:
	float c;
	Mother() {
		g = 10;
	}


};

class Child : public Father, public Mother
{
public:
	Child() {
	
		
	}

};
int main() {
	Child c;

	cout << c.Father::g;
	cout << c.Mother::g;
	cout << c.g;
	c.f();
	



	return 0;
}