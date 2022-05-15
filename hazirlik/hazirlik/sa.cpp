#include "dikdortgen.h"

dikdortgen::dikdortgen() {
	cout << "Lutfen en ve boy degerlerini giriniz: ";
	cin >> yedekEn >> yedekBoy;
	kontrol(yedekEn, yedekBoy);
	

}

dikdortgen::dikdortgen(int k,int l) {
	cout << "konst calisti";
	cout << k << " " << l << endl;

	kontrol(k, l);

}

dikdortgen::~dikdortgen() {

	cout <<a<<" -  "<<b<< "dikdortgeni geberdi..." << endl;

}

void dikdortgen::kontrol(int k, int l) {
	//cout << "Geldi";


	if (k >= 0) {
		a = k;
	}
	if (l >= 0) {

		b = l;
	}

	else if (k < 0) {
		cout << "En degeri negatif olamaz..." << endl;
		cout << "Lutfen yeni bir en degeri giriniz: ";
		cin >> yedekEn;
		kontrol(yedekEn, l);
	}
	else if (l < 0) {
		cout << "Boy degeri negatif olamaz..." << endl;
		cout << "Lutfen yeni bir boy degeri giriniz: ";
		cin >> yedekBoy;
		kontrol(k, yedekBoy);
	}
	//else
		//cout << "dusmedi aq";

}


void dikdortgen::goster() {

	cout << "\n\ndikdortgen icerigi: " << a <<" -  " << b<<endl;



}