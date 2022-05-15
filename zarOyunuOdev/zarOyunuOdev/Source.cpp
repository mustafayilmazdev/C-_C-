#include <iostream>
#include <time.h> // time(NULL)
#include <stdlib.h>//srand()

using namespace std;//standart isim uzayýný kullan

class zar { //zar sýnýfýný oluþturduk

public:
	zar() { //PARAMETRESÝZ CONSTRUCTOR- ÇALIÞIR ÇALIÞMAZ USTDEGER DEÐÝÞKENÝNE ZAR DEÐERÝ ATAR
		yuvarlan();// ZAR DEÐERÝ ÜRETEN FONKSÝYON
	}
	int ustDegerVer() {// USTDEGERÝ DÖNDÜREN FONKSÝYON
		
		return ustDeger;
	}
	void yuvarlan() {
		ustDeger = 1 + (rand() % 6); //(RAND FONKSÝYONU RANDOM SAYI GETÝRÝYOR) (%6 ÜRETÝLEN SAYIYI 0-5 ARASINA ÇEKÝYOR YANÝ 6 YA MODUNU ALIYOR) (+1 DEÐERÝ DE ZAR DEÐERLERÝNÝ VERÝYOR)
		
	}
private:
	int ustDeger; //DIÞARDAN DÝREKT ERÝÞÝMÝ ENGELLEMEK ÝÇÝN 
};
class zarOyunu // ZAROYUNU SINIFI OLUÞTURULUYOR
{
public:
	
	
	void oyna() {//VOÝD OLMASININ SEBEBÝ BÝR DEÐER DÖNDÜRMEYECEK OLMASI
		
			
		if (zar1.ustDegerVer() + zar2.ustDegerVer()== 7 ) {
			cout << "Toplam Deger: " << zar1.ustDegerVer() + zar2.ustDegerVer() << endl;
			cout << "Tebrikler Kazandiniz..." << endl;
		}
		else {
			cout << "Toplam Deger: " << zar1.ustDegerVer() + zar2.ustDegerVer() << endl;
			cout << "Maalesef Kaybettiniz..." << endl;
		}
	}
private:
	zar zar1, zar2;

};
class oyuncu {
public:
	oyuncu() {
		z.oyna();
	}
private:
	zarOyunu z;
};


int main() {
	
	srand(time(NULL));
	oyuncu oyuncu1;



	return 0;// programýn sonlandýðýný iþletim sistemine belirtmek için
}