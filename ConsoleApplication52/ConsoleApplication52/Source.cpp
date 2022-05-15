#include <iostream>

using namespace std;
class Complex {
public:
	int a, b;
	Complex(int a, int b) {}
	void yazdir();
	Complex();
	Complex arti(Complex a);
	Complex eksi(Complex a);

	Complex carpi(Complex a);
	Complex eksi();
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