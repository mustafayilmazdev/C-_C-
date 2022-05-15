#include "UCGEN.h"
ucgen::ucgen(int a, int b, int c) {
	if (uKontrol(a, b, c)==true) {
		kenarA = a;
		kenarB = b;
		kenarC = c;
		cout << "Kenar uzunluklari " << kenarA << " " << kenarB << " " << kenarC << " olan ucgen yaratildi..." << endl;
		acilariniBul();

	}
	else {
		kenarA = 1;
		kenarB = 1;
		kenarC = 1;
		cout << "Kenar uzunluklari " << kenarA << " " << kenarB << " " << kenarC << " olan ucgen yaratildi..." << endl;
		acilariniBul();
	}
}
double ucgen::ucevreHesapla() {
	int cevre;
	cevre = kenarA + kenarB + kenarC;
	return cevre;
}
double ucgen::ualanHesapla() {
	double cevre=ucevreHesapla();
	double u = cevre / 2;
//	cout << "u= " << u << endl;
	double alan = sqrt(u*(u - kenarA)*(u - kenarB)*(u - kenarC));
	
	return alan;
}
bool ucgen::uKontrol(int a,int b,int c) {
	if (a > 0 && b > 0 && c > 0) {
		if (abs(b - c) < a&& a < b + c && abs(a - c) < b&&b < a + c && abs(a - b) < c&&c < a + b) {
		//	cout << "truedayim" << endl;			
			return true;
		}
	}
	else {
		cout << "Gonderilen parametrelerle ucgen olusturulamaz kenarlara otomatik 1 atandi..." << endl;
		return false;
	}

}
ostream &operator<<(ostream & cout, ucgen & u) {
	cout <<"Kenar uzunluklari: " <<u.kenarA << " " << u.kenarB << " " << u.kenarC<<" olan ";

	return cout;
}

void ucgen::acilariniBul() {	//cout << kenarA;
	//cout << kenarA << " " << kenarB << " " << kenarC << "**********************************" << endl;
	aciBC = acos((kenarB*kenarB + kenarC*kenarC - kenarA*kenarA) / (2 * kenarB*kenarC)) * 180 / PI;
	aciAB = acos((kenarA*kenarA + kenarB*kenarB - kenarC*kenarC) / (2 * kenarB*kenarA)) * 180 / PI;
	aciAC = acos((kenarA*kenarA + kenarC*kenarC - kenarB*kenarB) / (2 * kenarC*kenarA)) * 180 / PI;
	cout << "Acilar-->A: " << aciBC << " B: " << aciAC << " C: " << aciAB << endl;
}
void ucgen::printAcilar() {
	
}