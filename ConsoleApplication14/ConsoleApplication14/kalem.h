#ifndef KALEM_H
#define KALEM_H
#include "defter.h"

class kalem {

private:
	string tur, renk;
	double uc;
public:
	kalem(string="Tukenmez",string="Siyah",double=0.5);
	~kalem();
	void yaziYaz(defter&);


};

#endif