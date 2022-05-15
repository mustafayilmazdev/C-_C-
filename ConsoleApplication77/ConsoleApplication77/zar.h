#include <iostream>
#include <time.h> // time(NULL)
#include <stdlib.h>//srand()
using namespace std;
class zar
{
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

