#include "zar.h"

class zarOyunu
{
public:


	void oyna() {//VO�D OLMASININ SEBEB� B�R DE�ER D�ND�RMEYECEK OLMASI

		while (1) {

			if (zar1.ustDegerVer() + zar2.ustDegerVer() == 7) { //YUVARLANAN ZAR DE�ERLER�N� TOPLAYIP KONTROL ED�YORUZ
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
	zar zar1, zar2; //DI�ARDAN D�REKT ER���M� ENGELLEMEK ���N

};

