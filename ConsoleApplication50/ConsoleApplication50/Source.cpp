#include <iostream>

using namespace std;
class Complex {
public:
	int a, b;
	Complex(int a,int b){
		this->a = a;
		this->b = b;
	}
	void yazdir() {
	
		cout << "(" << this->a << "," << this->b << "i)" << endl;
	
	}
	Complex() {

	}
	
	Complex arti(Complex &a) {
		Complex s;
		s.a = this->a + a.a;
		s.b = this->b + a.b;
		return s;
	}
	Complex eksi(Complex&a) {
		Complex s;
		s.a = this->a - a.a;
		s.b = this->b - a.b;
		return s;
	}
	
	Complex carpi(Complex&a) {
		Complex c1;
		c1.a = (this->a*a.a)- this->b*a.b;
		c1.b = (this->b*a.a) + this->a*a.b;
		
		return c1;

	}
	Complex eksi() {
		Complex s;
		s.a=this->a * -1;
		s.b=this->b * -1;
		return s;
	}
};


int main(int argc, char* argv[])
{
	Complex c1(1, 2);
	Complex c2(3, 4);
	c1.yazdir();
	Complex c3 = c1.arti(c2);
	c3.yazdir();
	Complex c4 = c3.eksi(Complex(1, 1));
	c4.yazdir();
	Complex c5 = c4.carpi(c1);
	c5.yazdir();
	c5.eksi().yazdir();
	return 0;
}