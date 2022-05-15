#include <iostream>
#include <string>
using namespace std;

class ogrenci {
public:
	int no;
	string ad;
	int vize,fnl;
	void ogrBilgi() {
		cout << "Ogrenci numarasini giriniz: "; cin >> no;
		getchar();
		cout << "Ogrenci adini ve soyadini giriniz: "; getline(cin, ad);
		cout << "Ogrenci vize notunu giriniz: "; cin >> vize;
		cout << "Ogrenci Final notunu giriniz: "; cin >> fnl;
		
	}

};


int main() {

	ogrenci x[5];
	double hesap=0,sonuc;
	int n,z;
	for (int i = 0; i < 5; i++) {

		x[i].ogrBilgi();
		n = x[i].fnl;
		z = x[i].vize;
		hesap += (n*0.60) + (z*0.40);
	}
	sonuc = hesap / 5;
	cout << "Ortalama basari notu: " << sonuc << endl;
	if (sonuc >= 60) {
		cout << "Ogrenci basari duzeyiniz ortalamanin uzerinde..." << endl;

	}
	else {

		cout << "Ogrenci basari duzeyiniz ortalamanin altinda...." << endl;

	}

}