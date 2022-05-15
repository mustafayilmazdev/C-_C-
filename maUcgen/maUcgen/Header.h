#ifndef UCGEN_H
#define UCGEN_H

#include <iostream>
#include <string>

using namespace std;


class ucgen {




private:
	double kenarA, kenarB, kenarC;
	double aciAB, aciAC, aciBC;
	void acilariBul();
	bool ucgenKontrol(double = 1, double = 1, double = 1);
public:
	ucgen(double = 1,double=1,double =1);
	~ucgen();

	void yazdir();
	~ucgen();
	ucgen(double = 1, double = 1, double = 1);
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

#endif