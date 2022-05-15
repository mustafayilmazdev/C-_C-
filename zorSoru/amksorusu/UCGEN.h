#ifndef UCGEN_H
#define UCGEN_H

#include <iostream>
#include <cmath>
using namespace std;

class Ucgen
{
	friend ostream &operator<<(ostream&, Ucgen&);
private:
	double kenarA, kenarB, kenarC;
	double aciAB, aciAC, aciBC;
	void acilariBul();
	bool ucgenKontrol(double = 1, double = 1, double = 1);
public:
	void yazdir();
	~Ucgen();
	Ucgen(double = 1, double = 1, double = 1);
	void setKenarA(double);
	void setKenarB(double);
	void setKenarC(double);
	void kenarlariYazdir();
	void acilariYazdir();
	double alan();
	double cevre();



	double getKenarA()const { return kenarA; }
	double getKenarB()const { return kenarB; }
	double getKenarC()const { return kenarC; }
	double getAciAB()const { return aciAB; }
	double getAciAC()const { return aciAC; }
	double getAciBC()const { return aciBC; }

};


#endif // !UCGEN_H

