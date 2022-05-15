#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H
#include "DAIRE.h"

class dikdortgen {
	friend ostream & operator <<(ostream &, dikdortgen &);

private:
	double kisaKenar, uzunKenar;
	int acilar[4];
public:
	dikdortgen(double=4,double=5);
	int alanhesapla();
	int cevrehesapla();
	void alani1artir(int=1);
	void fillrandom(int =7,int=3);
	void ozellikyazdir();



};
#endif //! DIKDORTGEN_H