#include "POLYNOMIAL.h"

int main() {
	//Polynomial p1;
	//p1.setDegree(-1);
	//double a[] = { 232,523,213,542,9592 };
	//p1.setCoefficients(a);
	//cout << p1;
	/*double b[] = { 13,11,10,3,2};
	Polynomial ps( 4 , b);
	ps.evaluate();*/
	//cout << "\n The Resultant value of the polynomial is:" << x <<endl<<endl;

	//Polynomial p2(3, b);
	//cout << p2;

	//Polynomial p3(p2);
	//cout << p3;
	//p3.setDegree(8);
	//p3.setCoefficientsOnlyDesire(15);
	//cout << p3;
	//p2.getCoefficientsOnlyDesire(2);

	
	double b[] = { 13,11,10,3,24 };
	Polynomial p(4, b);
	p.setDegree(3);	
	int *k;
	double a, c;
	cout << "Araligin baslangicini giriniz: "; cin >> a;
	cout << "Araligin sinirini giriniz: "; cin >> c;
	k=p.falsePosition(a,c);
	
	p.descartes();
	cout << "Maksimum pozitif kok derecesi: " << p.descartes()<<" tanedir..."<<endl;
	cout << boolalpha <<p.predicate() << endl;
	////cout << boolalpha << p.predicate() << endl;
	cout<<p.predicate();
	//
	if (a) {
		cout << "Degree is quadratic..." << endl;

	}
	else {
		cout << "Degree is not quadratic..." << endl;
	}




	return 0;
}