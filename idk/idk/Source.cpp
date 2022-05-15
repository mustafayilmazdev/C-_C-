#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <iostream>
#include <cmath>
using namespace std;
#endif //!POLYNOMIAL
class Polynomial
{
	enum { Azm_US = 100 };

public:
	Polynomial();//NO PARAMETER CONSTRUCTOR
	Polynomial(int dgr, const double clist[], int size);// CONSTRUCTOR WITH PARAMETER
	Polynomial operator +(const Polynomial & np)const;
	//	Polynomial operator *(const Polynomial &np)const;
	friend ostream& operator<<(ostream&, const Polynomial&);
	//friend istream& operator >> (istream&, Polynomial&);

private:
	int    degree;
	double coefficients[Azm_US]; // list of coefficients


};




Polynomial::Polynomial() {
	for (int i = 0; i < Azm_US; i++) {

		coefficients[i] = 0;
	}
	degree = 0;
}



int main() {

	Polynomial pp;
	//double a[3] = { 6,2,4 };
	//	Polynomial p2(2, a, 3);


	return 0;
}

