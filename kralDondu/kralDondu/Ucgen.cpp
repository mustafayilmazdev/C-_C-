#include "Ucgen.h"
#define PI 3.141592

ucgen::~ucgen() {

	kenarlariYazdir();
	cout << "Ucgeni yok edildi" << endl << endl;
	}
void ucgen::yazdir() {
	kenarlariYazdir();
	acilariYazdir();
	cout << "Cevre: " <<cevre() << endl;
	cout << "Alan: " << alan() << endl << endl;
	}
ucgen::ucgen(double a,double b,double c) {
	if (ucgenKontrol(a,b,c)==1){
		setkenara(a);
		setkenarb(b);
		setkenarc(c);
		if (a + b + c== 3) cout << "Ucgen kenar degerlerine 1 degeri atandi...Lutfen istediginiz degerleri giriniz... ";
		cin >> kenara >> kenarb >> kenarc;
		a = kenara;
		b = kenarb;
		c = kenarc;
		acilariBul();
		kenarlariYazdir();
		cout << "Ucgeni olusturuldu..." << endl << endl;
	}
	else
	
		{
			cout << "Gonderdiginiz degerlerle ucgen olusmaz...Otomatik 1 atandi..." << endl << endl;
			kenara = kenarb = kenarc = 1;
			acilariBul();			}

	}
bool ucgen::ucgenKontrol(double a, double b, double c) {

	if ((abs(b - c) < a && a < b + c) && (abs(a - c) < b && b < a + c) && (abs(b - a) < c && c < b + a))
		return 1;
	else
		return 3;
	
}
void ucgen::acilariBul()
{
	aciBC = acos((kenarb*kenarb + kenarc*kenarc - kenara*kenara) / (2 * kenarb*kenarc))*180 / PI;
	aciAC = acos((kenara*kenara + kenarc*kenarc - kenarb*kenarb) / (2 * kenara*kenarc))*(180 / PI);
	aciAB = acos((kenara*kenara + kenarb*kenarb - kenarc*kenarc) / (2 * kenara*kenarb))*(180 / PI);
	cout << "Acilar-->" << "BC: " << aciBC << " AC: " << aciAC << " AB: " << aciAB << endl;
}


void ucgen::setkenara(double k) {

	if (k >= 0) {
		kenara = k;
		if(k>1)acilariBul();
		}
	else {

		//cout << "Uzunluk negatif olmamali... Bu sebeple 1 atandi..." << endl;
		kenara = 1;
	}

}
void ucgen::setkenarb(double k) {

	if (k >= 1) {
		kenarb = k;
		if (k>1)acilariBul();
	}
	else {

	//	cout << "Uzunluk negatif olmamali... Bu sebeple 1 atandi..." << endl;
		kenarb = 1;
	}

}
void ucgen::setkenarc(double k) {

	if (k >= 0) {
		kenarc = k;
		if (k>1)acilariBul();
	}
	else {

		//cout << "Uzunluk negatif olmamali... Bu sebeple 1 atandi..." << endl;
		kenarc = 1;
	}

}

void ucgen::kenarlariYazdir() {
	cout << "Kenarlar-->a: " << kenara << " b: " << kenarb << " c: " << kenarc << endl;
}
void ucgen::acilariYazdir() {
	cout << "Acilar-->A: " << aciBC << " B: " << aciAC << " C: " << aciAB << endl;
	}

double ucgen::alan() {

	double u,sonuc;
	u = cevre() / 2;
	return sonuc = sqrt(u*(u - kenara)*(u - kenarb)*(u - kenarc));
	}
double ucgen::cevre() {
	return kenara + kenarb + kenarc;
}


