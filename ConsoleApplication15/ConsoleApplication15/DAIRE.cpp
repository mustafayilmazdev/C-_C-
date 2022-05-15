#include"DAIRE.h"

daire::daire(double cap) {
	cout << "\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< DAIRE YARATILDI >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	this->cap = cap;
	yaricap = this->cap / 2;
	ozellikyazdir();
}

ostream & operator <<(ostream &cout, daire &d) {
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	cout << "Dairenin capi ve yaricapi: " << d.cap << " " << d.yaricap << endl;
	cout << "Dairenin alani: " << d.alanHesapla() << endl;
	cout << "Dairenin cevresi: " << d.cevreHesapla() << endl;
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	return cout;

}

double daire::alanHesapla(){

	return PI*yaricap*yaricap;

}
double daire::cevreHesapla() {

	return 2 * PI*yaricap;

}

void daire::alani1Artir() {	
	double x = alanHesapla(),y=0;	
	cout << "\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< SIKI TUTUNUN ALAN 1 ARTIRILIYOR >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

	while (1) {
		cap += 0.0001;
		yaricap = cap / 2;		
		y = alanHesapla();
		cevreHesapla();
		if (x +1 <= y) {
			break;
		}
	}
}
void daire::fillRandom(int ust, int alt) {
	srand(time(NULL));
	cout << "\n\n||||||||||||||||||||| - RANDOM DEGERLERLE SEKIL OLUSTURMA BASARILI :) - |||||||||||||||||||||" << endl;
	cap = rand() % (ust - alt + 1) + alt;
	guncelle();

}

void daire::setCap(double cap){

	if (cap > 0) {
		cap = cap;
	}
	else {
		cout << cap<<" Degeri cap degiskenine atanamaz...Otomatik 6 atandi" << endl;
		this->cap = 6;
		guncelle();
	}


}


void daire::guncelle() {

	yaricap = cap / 2;
	alanHesapla();
	cevreHesapla();


}

void daire::ozellikyazdir() {
	//cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	cout << "Dairenin capi ve yaricapi: " << cap << " " << yaricap << endl;
	cout << "Dairenin alani: " << alanHesapla() << endl;
	cout << "Dairenin cevresi: " << cevreHesapla() << endl;
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;


}
