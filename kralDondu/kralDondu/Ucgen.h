#ifndef UCGEN_H
#define UCGEN_H
#include <iostream>
#include <cmath>
using namespace std;
class ucgen{
private:
	double kenara,kenarb,kenarc;
	double aciAB, aciAC, aciBC;
	void acilariBul();
	bool ucgenKontrol(double=1,double=1,double=1);
public:
	void yazdir();
	~ucgen();
	ucgen(double=1 ,double =1,double =1);
	void setkenara(double);
	void setkenarb(double);
	void setkenarc(double);
	void kenarlariYazdir();
	void acilariYazdir();
	double alan();
	double cevre();

	double gkenara()const { return kenara; }
	double gkenarb()const { return kenarb; }
	double gkenarc()const { return kenarc; }

};
#endif // !UCGEN_H
