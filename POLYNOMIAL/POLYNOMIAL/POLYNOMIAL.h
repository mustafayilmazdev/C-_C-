#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <iostream>
#include <cmath>


using namespace std;

#endif //!POLYNOMIAL
class Polynomial
{
	friend ostream& operator<<(ostream&, const Polynomial&);
	//friend istream &  operator >> (istream &, Polynomial&);
	enum {Max_DGR=100};

public:
	Polynomial();//NO PARAMETER CONSTRUCTOR
	Polynomial(int dgr,  double clist[]);// CONSTRUCTOR WITH PARAMETER
	Polynomial(const Polynomial &);//COPY CONSTRUCTOR
	~Polynomial();


	//Polynomial operator +(const Polynomial & np);
	void setDegree(const int);
	int getDegree()const;
	void setCoefficients(double[]);
	void setCoefficientsOnlyDesire(double);
	double getCoefficientsOnlyDesire(double);
	void printForDestructor();
	int evaluate();
	bool predicate();
	int descartes();
	int * falsePosition(double,double);
	double evaluateforFalsep(double);
//	Polynomial operator *(const Polynomial &np)const;
	//friend istream& operator >> (istream&, Polynomial&);
	double  *coefficients; // list of coefficients
private:
	int    degree;
	


};

