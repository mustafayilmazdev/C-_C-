#include <iostream>
#include <string>
using namespace std;
class kisi
{
public:
	string ad;
	kisi (){}
	kisi(string ad) {
		this->ad = ad;
	}
virtual	void PutData() {
		cout << "Ad: " << ad << endl;
	}
virtual	int isOutstanding() {
		return 55;
	}
private:

};


class ogrenci : public kisi {

public:
	float ortalama;
	ogrenci () {
	
	}
	ogrenci(string s,float ortalama):kisi(s) {
		this->ortalama = ortalama;
	}
	void PutData(){
		cout << "Ad: "<< ad << " Ortalama: " << ortalama;
	}
	int isOutstanding() {
		if (ortalama > 3.5) {
			return 1;
		}
		return 0;
	}
};


class ogretmen :public kisi {

public:
	int makaleSayisi;
	ogretmen() {}
	ogretmen(string s,int makaleSayisi):kisi(s) {
		this->makaleSayisi = makaleSayisi;
	}
	void PutData() {
		cout << "Makale Sayisi: " << makaleSayisi;
	}
	int isOutstanding() {
		if (makaleSayisi > 100) {
			return 1;
		}
		return 0;
	}

};
int main()
{
	kisi *a[100];
	ogrenci o[100];
	ogretmen t[100];
	int i,j;
	char secim;
	string ad;
	float ortalama;
	int makale;	
	char durum;
	for (i = 0; i < 100; i++) {
		cout << "Ogrenci icin o ogretmen icin t giriniz ";
		cin >> secim;
		if (secim == 'o') {
			
			cout << "Ad giriniz:";
			cin >> ad;
			cout << "Ortalama: ";
			cin >> ortalama;
			
			o[i].ad = ad;
			o[i].ortalama = ortalama;
			a[i] = &o[i];
			cout << "Girise devam etmek icin e cikis icin h giriniz ";
			cin >> durum;
			if (durum == 'h') {
				i++;
				break;
			}
		}

		if (secim == 't') {
			cout << "Ad giriniz: ";
			cin >> ad;
			cout << "Makale Sayisi: ";
			cin >> makale;
			t[i].ad = ad;
			t[i].makaleSayisi = makale;
			a[i] = &t[i];
			cout << "Girise devam etmek icin e cikis icin h giriniz";
			cin >> durum;
			if (durum == 'h') {
				i++;
				break;
			}
		}
	}

	for (j = 0; j < i; j++) {
		a[j]->PutData();
		if (a[j]->isOutstanding()) {
			cout << " (Bu kisi olaganustudur)" << endl;
		}
	}
	

	return 0;
}