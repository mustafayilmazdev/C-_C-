#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Zar
{
public:
	Zar() {
		
	}

	int ustDegerVer() {yuvarlan(); return ustDeger; }
	void yuvarlan() {   ustDeger = 1 + (rand() % 6); }

private:
		int ustDeger;

};


class zarOyunu
{
public:
	zarOyunu() {
		
	}
	
	bool oyna() {
		sonuc = zar1.ustDegerVer() + zar2.ustDegerVer();
		cout << "Ust deger toplam: " << sonuc << endl;
		if (sonuc == 7) {
			cout << "Tebrikler Kazandiniz..." << endl;
		}
		else {
			cout << "Kaybettiniz..." << endl;
		
		}
		return 1;
	}

private:
	Zar zar1, zar2;
	int sonuc;
};


class Oyuncu
{
public:
	Oyuncu() {
		z.oyna();
	}
	
	
private:
	zarOyunu z;

};



int main() {

	srand(time(NULL));
	Oyuncu o;

	return 0;
}