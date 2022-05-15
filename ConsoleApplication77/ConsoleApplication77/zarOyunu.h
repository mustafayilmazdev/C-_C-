#include "zar.h"

class zarOyunu
{
public:


	void oyna() {//VOÝD OLMASININ SEBEBÝ BÝR DEÐER DÖNDÜRMEYECEK OLMASI

		while (1) {

			if (zar1.ustDegerVer() + zar2.ustDegerVer() == 7) { //YUVARLANAN ZAR DEÐERLERÝNÝ TOPLAYIP KONTROL EDÝYORUZ
				cout << "Toplam Deger: " << zar1.ustDegerVer() + zar2.ustDegerVer() << endl;
				cout << "Tebrikler Kazandiniz..." << endl;
				break;
			}
			else {
				cout << "Toplam Deger: " << zar1.ustDegerVer() + zar2.ustDegerVer() << endl;
				cout << "Maalesef Kaybettiniz..." << endl;
			}
		}
	}
private:
	zar zar1, zar2; //DIÞARDAN DÝREKT ERÝÞÝMÝ ENGELLEMEK ÝÇÝN

};

