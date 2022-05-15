#ifndef OGRETMEN_H
#define OGRENTMEN_H
#include "ogrenci.h"
class ogretmen {

	string okul,unvan;
public:
	string ad,soyad;
	int maas,testt;
	void hataliAta() {
		cout << "***********************Ogretmen giris************************" << endl;
		cout << "Adinizi giriniz: ";
		cin >> ad;
		cout << "Soyadinizi giriniz: ";
		cin >> soyad;}
	bool test() {
		if (ad == "Mustafa"&&soyad == "YILMAZ") {
			cout << "Giris basarili ogrenci notlarini girebilirsiniz"<<endl;
			testt = 1;
			return true;
		}
		cout << "Girilen verilerde bir ogretmen kaydi bulunmamaktadir..."<<endl;
		cout << "Tekrar girmek icin 1'i programi sonlandirmak icin 0'i tuslayiniz" << endl;
		int x;
		cin >> x;
			if (x == 1) {
				cout << ad << soyad;
			hataliAta();
			test();
		}
			return false;
	

	}

	void gir(ogrenci x,int y) {		
		cout << y+1 << ".Ogrenci notu: ";
		cin >> x.vize;
	}


};

#endif //!OGRETMEN_H