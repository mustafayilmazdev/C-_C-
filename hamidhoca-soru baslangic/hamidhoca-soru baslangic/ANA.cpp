#include "UCGEN.h"

int main() {

	ucgen u1(5,6,9);
	cout <<u1<< "Ucgenin cevresi: " << u1.ucevreHesapla()<< endl;
	cout <<u1<<"Ucgenin alani: " << u1.ualanHesapla() << endl<<endl<<endl;
	/*cout << u2<<"Ucgenin cevresi: " << u2.ucevreHesapla() << endl;
	cout << u2<<"Ucgenin alani: " << u2.ualanHesapla() << endl;*/
	u1.acilariniBul();
	u1.printAcilar();
}