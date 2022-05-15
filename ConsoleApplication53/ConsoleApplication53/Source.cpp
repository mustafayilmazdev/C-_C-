#include <iostream>
 #include "Ogrenci.cpp"
 using namespace std;
 int main(int argc, char const *argv[])
 {
 int n;
 cin >> n;
 Ogrenci * ogrenciler = new Ogrenci[n];
 for (int i = 0; i < n; i++)
		 {
		 ogrenciler[i].girdiAl();
		 }
	 int skorum = ogrenciler[0].toplamNotuHesapla();
	
		 int buyuk_sayisi = 0;
	for (int i = 1; i < n; i++)
		 {
		 int skor = ogrenciler[i].toplamNotuHesapla();
		 if (skor>skorum)
			 buyuk_sayisi++;
		 }
	 cout << buyuk_sayisi;
	 return 0;
	 }