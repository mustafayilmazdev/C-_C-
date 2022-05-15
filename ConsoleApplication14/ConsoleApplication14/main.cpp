#include "kalem.h"
int main() {
	defter d1("Cizgili",60,"Bu defterin tum haklari Mustafa Yilmazdadir");
	kalem k1;
	k1.yaziYaz(d1);
	cout << "******Defter bilgileri******" << endl;
	d1.bilgiYaz();
}