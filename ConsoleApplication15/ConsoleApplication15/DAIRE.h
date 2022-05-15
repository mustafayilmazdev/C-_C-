#ifndef DAIRE_H
#define DAIRE_H
#include "UCGEN.h"

class daire {
	friend ostream &operator <<(ostream &, daire &);
private:
	double cap, yaricap;
public:
	daire(double=16);
	double alanHesapla();
	double cevreHesapla();
	void alani1Artir();
	void fillRandom(int=10,int=5);
	void setCap(double);
	void guncelle();
	void ozellikyazdir();



};

#endif //!DAIRE_H