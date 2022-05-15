#include "hoca.h"
ostream & operator<<(ostream & cout, hoca &h) {
	cout << "****************** Hocanin Bilgileri*****************" << endl;
	cout << "Hocanin adi soyadi: " << h.ad<<" " << h.soyad << endl;
	cout << "Adresi: " << h.adres << endl;
	cout << "Hocanin maasi: " << h.maas << endl;
	return cout;
	
}
istream & operator >> (istream &cin, hoca &h) {
	cout << "Hocanin adini ve soyadini giriniz: ";
	cin >> h.ad >> h.soyad;
	cout << "Hocanin maasini giriniz: ";
	cin >> h.maas;
	cout << "Hocanin adresini giriniz:  ";
	cin >> h.adres;
	return cin;

}


hoca::hoca() {
	setHoca();
}

void hoca::setHoca() {
	cout << "Hocanin adini ve soyadini giriniz: ";
	cin >> ad >> soyad;
	cout << "Hocanin maasini giriniz: ";
	cin >> maas;
	cout << "Hocanin adresini giriniz:  ";
	cin >> adres;
}

hoca& hoca::operator+ (hoca &h) {
	h.adres = adres;
	h.soyad = soyad;
	maas /= 2;
	h.maas += maas;
	return h;
}