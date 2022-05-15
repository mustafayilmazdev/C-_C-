#include "ogrenci.h"

ogrenci::ogrenci(){
	cout << "Lutfen ogrenci ad ve soyadini giriniz:";
	cin >> adSoyad;
	cout << "Numarasini giriniz: ";
	cin >> numara;

}

ogrenci::~ogrenci() {

	cout << adSoyad<<" yok edildi";

}


