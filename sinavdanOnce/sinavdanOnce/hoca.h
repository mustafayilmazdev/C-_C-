#ifndef HOCA_H
#define HOCA_H

#include <iostream>
#include <string>

using namespace std;

class hoca {
	friend ostream & operator<<(ostream & cout, hoca &h);
	friend istream & operator >> (istream & cin, hoca &h);

private:
	string ad, soyad, adres;
	int maas;
public:
	hoca();
	void setHoca();
	void yaziliGir();
	hoca & operator+(hoca &h);
	hoca & operator-(hoca &h);
};

#endif