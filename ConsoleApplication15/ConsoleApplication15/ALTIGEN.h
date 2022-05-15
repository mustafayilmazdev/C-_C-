#ifndef ALTIGEN_H
#define ALTIGEN_H
#include "DIKDORTGEN.h"

class altigen {
	friend ostream & operator <<(ostream &, altigen &);
private:
	double kenarA, kenarB, kenarC, kenarD, kenarE, kenarF,acilar[6];

public:
	altigen(double=5,double=120);
	double alanhesapla();
	double cevrehesapla();
	void alaniartir(int=1);
	void fillrandom(int = 7, int = 3);
	void ozellikyazdir();

};


#endif// !ALTIGEN_H