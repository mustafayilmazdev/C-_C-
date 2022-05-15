#ifndef UCGEN_H
#define UCGEN_H
#include "SEKIL.h"
class Ucgen
{
		friend ostream &operator<<(ostream&, Ucgen&);
private:
	double kenarA, kenarB, kenarC;
	double aciAB, aciAC, aciBC;
	void acilariBul();
	bool ucgenKontrol( double = 1, double = 1,  double = 1);
public:
	void yazdir();
	~Ucgen();
	Ucgen(double = 1, double = 1, double = 1);
	unsigned int setKenarA(double);
	unsigned int setKenarB(double);
	unsigned int setKenarC(double);
	void kenarlariYazdir();
	void acilariYazdir();
	double alan();
	double cevre();
	void fillRandom(int=10, int=5);
	void alani1Artir(int=1);
	void guncelle();
	void ozellikyazdir();


	double getKenarA()const { return kenarA; }
	double getKenarB()const { return kenarB; }
	double getKenarC()const { return kenarC; }
	double getAciAB()const { return aciAB; }
	double getAciAC()const { return aciAC; }
	double getAciBC()const { return aciBC; }

};


#endif // !UCGEN_H

