#include <iostream>
#include <time.h> // time(NULL)
#include <stdlib.h>//srand()

using namespace std;//standart isim uzay�n� kullan

class zar { //zar s�n�f�n� olu�turduk

public:
	zar() { //PARAMETRES�Z CONSTRUCTOR- �ALI�IR �ALI�MAZ USTDEGER DE���KEN�NE ZAR DE�ER� ATAR
		yuvarlan();// ZAR DE�ER� �RETEN FONKS�YON
	}
	int ustDegerVer() {// USTDEGER� D�ND�REN FONKS�YON
		
		return ustDeger;
	}
	void yuvarlan() {
		ustDeger = 1 + (rand() % 6); //(RAND FONKS�YONU RANDOM SAYI GET�R�YOR) (%6 �RET�LEN SAYIYI 0-5 ARASINA �EK�YOR YAN� 6 YA MODUNU ALIYOR) (+1 DE�ER� DE ZAR DE�ERLER�N� VER�YOR)
		
	}
private:
	int ustDeger; //DI�ARDAN D�REKT ER���M� ENGELLEMEK ���N 
};
class zarOyunu // ZAROYUNU SINIFI OLU�TURULUYOR
{
public:
	
	
	void oyna() {//VO�D OLMASININ SEBEB� B�R DE�ER D�ND�RMEYECEK OLMASI
		
			
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



	return 0;// program�n sonland���n� i�letim sistemine belirtmek i�in
}