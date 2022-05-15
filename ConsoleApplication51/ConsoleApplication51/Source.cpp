

#include <iostream>

using namespace std;

class Complex
{
public:
	int a, b;
	Complex() {

	}
	Complex(int a, int b) {
		this->a = a;
		this->b = b;
	}

	int  operator [](int a) {

		if (a == 0) {
			return this->a;
		}
		else {
			return this->b;
		}
	}


};

Complex operator-(const Complex& c, const Complex& d) {

	Complex c1;

	int x = c.a - d.a;
	int y = c.b - d.b;

	c1.a = x; c1.b = y;

	return c1;
}
Complex operator*(const Complex& c, const Complex& d) {

	Complex c1;

	int x = (c.a * d.a) + (c.b*d.b);
	int y = (c.a * d.b) + (c.b*d.a);

	c1.a = x; c1.b = y;

	return c1;
}
Complex operator+(const Complex& c, const Complex& d) {

	Complex c1;

	int x = c.a + d.a;
	int y = c.b + d.b;

	c1.a = x; c1.b = y;

	return c1;
}


std::ostream &operator<<(std::ostream  &input, Complex &c1) {
	if (c1.b>0)
		input << "(" << c1.a << "," << c1.b << "i)";

	else
		input << "(" << c1.a << "," << c1.b << "-i)";

	return input;
}
Complex operator-(const Complex& c) {

	Complex c1;

	int x = c.a*-1;
	int y = c.b * 1;

	c1.a = x; c1.b = y;

	return c1;
}


int main()
{
	Complex c1(4, 5);
	Complex c2(1, 2);
	Complex c3 = c1 - c2;
	cout << c3 << endl;
	cout << c1 + c2*c3 << endl;
	cout << -c2 << endl;
	cout << c1[0] << "," << c1[1] << "i" << endl;
	return 0;
}