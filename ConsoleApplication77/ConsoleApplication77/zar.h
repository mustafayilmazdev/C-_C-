#include <iostream>
#include <time.h> // time(NULL)
#include <stdlib.h>//srand()
using namespace std;
class zar
{
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

