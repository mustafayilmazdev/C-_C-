#ifndef UCGEN_H
#define UCGEN_H
#include <iostream>
#include <cmath>
#define PI 3,141592

using namespace std;

class ucgen {
	friend ostream & operator <<(ostream &, ucgen&);
	
private:
	int kenarA, kenarB, kenarC;
	int aciAB, aciBC, aciAC;
public:
	ucgen(int =1,int=1,int =1);
	double ualanHesapla();
	double ucevreHesapla();
	bool uKontrol(int,int,int);
	void acilariniBul();
	void printAcilar();
	void setKenar();
	
};

#endif //!UCGEN_H