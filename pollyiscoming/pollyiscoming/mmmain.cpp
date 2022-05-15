#include "pis.h"


int main() {
	CokTerimli p;
	CokTerimli q;
	p.usDerecesi = 1;
	p.katSayilar[0] = 1;
	p.katSayilar[1] = 1;
	q = p + p;
	p = q * q;
	//cout << q << endl;
	q.goster();
	getch();
	return 0;
}