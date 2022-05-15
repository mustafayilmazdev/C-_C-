#include "POLYNOMIAL.h"
int say;
int max(int a, int b) { return a > b ? a : b; }
Polynomial::~Polynomial() {
	printForDestructor();
//	delete[] coefficients;
	cout << "Destructor has been slain" << endl;
	
}


Polynomial::Polynomial() {
	coefficients = 0;
	degree = 0;
}
Polynomial::Polynomial(int dgr,  double  clist[]) {
	degree = dgr;
	coefficients =clist;
	cout << "The polynomial equation: "; printForDestructor();
//	cout << coefficients[i] << endl;
	}

void Polynomial::printForDestructor() {
	cout << "[";
	for (int i = degree; i >= 0; i--) {
		int k = degree - i;
		cout << *(coefficients + k) << "(x)^" << i;
		if(i!=0)cout << " + ";
	}
	cout << "] " ;
	//cout << *(coefficients + degree - 1) <<"] ";

}

//Polynomial Polynomial:: operator+(const Polynomial &np) {
//	Polynomial sum;
//	sum.degree = max(degree, np.degree);
//	for (int i = sum.degree; i >= 0; i--) {
//		sum.coefficients[i] = coefficients[i-1] + np.coefficients[i-1];
//		//cout << sum.coefficients[i] << endl;
//	}
//	return sum;
//}

ostream & operator<<(ostream &cout, const Polynomial &np) {
	for (int i = np.degree; i > 1; i--) {
		int k = np.degree-i;
		cout << *(np.coefficients + k)<< "(x)^" << i << " + ";
	}
	
	cout << *(np.coefficients+np.degree-1) << endl;
	return cout;
}

void Polynomial::setDegree(const int degree) {
	if (degree > 0) {
		this->degree = degree;
		}
	else {
		cout<<"Error: attempted to set a negative degree" << endl;
		cout << "Degree's value has been changed as '1' "<<endl;
		this->degree = 1;
	}

}
int Polynomial::getDegree()const {
	return degree;
}
void Polynomial::setCoefficients(double coefficients[]) {
	this->coefficients = coefficients;
}

Polynomial::Polynomial(const Polynomial & x) {
	if (x.getDegree() <= 0) {
		setDegree(0);
	}
	else {
		setDegree(x.getDegree());
		setCoefficients(x.coefficients);
	}


}
void Polynomial::setCoefficientsOnlyDesire(double avalueallforcoefficients) {
	double *a_Trick=new double[degree];
	for (int i = 0; i < degree; i++) {
		*(a_Trick+i) = avalueallforcoefficients;	
	}	setCoefficients(a_Trick);
}

double Polynomial::getCoefficientsOnlyDesire(double avalueforget) {
	for (int i = 0; i < degree; i++) {
		if (avalueforget == *(coefficients + i)) {

			cout << *(coefficients + i) << endl;

		}
		}
	
	return 0;
}
int Polynomial::evaluate() {

	int k=degree, sum, x;
	cout << "\n\n Enter the value of x for evaluation: ";
	cin >> x;
	sum = 0;
	for (int i = 0; i <= degree; i++) {
		sum += *(coefficients + i)*pow(x, k);
		k--;
	}
	for (int i = degree; i >= 0; i--) {
		int k = degree - i;
		cout <<" "<< *(coefficients + k) << "(" <<x<<")^" << i;
		if (i != 0)cout << " + ";
	}
	cout << endl;
	cout << "\n The Resultant value of the polynomial is:" << sum <<endl<<endl;
	return sum;
	
}

bool Polynomial::predicate() {
	if (degree == 2) {

		return true;
	}
	else {
		return false;
	}
}

//int Polynomial::descartes() {
//	cout << "1" << endl;
//	int say;
//	cout << "2" << endl;
//	for (int i = 0; i < degree; i++) {
//		cout << "3" << endl;
//		if (coefficients[i] < 0) {
//			cout<<coefficients[i] << endl;
//			cout << "4" << endl;
//			
//			say++;
//			cout << "5" << endl;
//		}
//	}
//	
//	cout << "6" << endl;
//	return say;
//}
int Polynomial::descartes() {

	//cout << "Sa" << endl;
	int i;
	say = 0;
	for (i = 0; i < degree-1; i++) {
	//	cout << coefficients[i] << endl;
		if (coefficients[i] < 0 && coefficients[i+1]>0 || coefficients [i]>0  &&  coefficients [i+1]<0) {
			say++;
		}
	}

	return say;

}

int * Polynomial::falsePosition(double k, double j) {

	double a, b;
	a = evaluateforFalsep(k);
	b = evaluateforFalsep(j);
	

	
	double formul,g;
	cout <<endl<<endl<< b << endl << a << endl << endl << endl;
	formul = ((0 * b) - (1 * a));
	formul /=   b - a;
	cout <<"FORMUL>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<< formul << endl;
	
	g=evaluateforFalsep(formul);
	cout <<"-------------------------------------"<< a*g << endl;
	if (a*g < 0) {
		falsePosition(k, formul);
	}


	
	return 0;


}



double Polynomial::evaluateforFalsep(double g) {

	double k = degree, sum;
	double x;
	x = g;
	sum = 0;
	for (int i = 0; i <= degree; i++) {
		sum += *(coefficients + i)*pow(x, k);
		k--;
	}
	for (int i = degree; i >= 0; i--) {
		int k = degree - i;
		cout << " " << *(coefficients + k) << "(" << x << ")^" << i;
		if (i != 0)cout << " + ";
	}
	//cout << endl;
	//cout << "\n The Resultant value of the polynomial is:" << sum << endl << endl;
	return sum;


}


int p=1;
