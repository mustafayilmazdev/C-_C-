#pragma once
class Ogrenci
{
public:
	int a[5];
	Ogrenci();
	~Ogrenci();
	void girdiAl() {
		for (int i = 0; i < 5; i++) {
			cin >> a[i];
		}
	}
	int toplamNotuHesapla() {
		int toplam = 0;
		for (int i = 0; i < 5; i++) {
			toplam += a[i];
		}
		return toplam;
		
	}
};

