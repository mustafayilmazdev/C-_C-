#include "Ucgen.h"
#define PI 3.141592


Ucgen::~Ucgen()
{
	kenarlariYazdir();
	cout << " Ucgeni yok edildi" << endl << endl;
}
void Ucgen::yazdir()
{

	kenarlariYazdir();
	acilariYazdir();
	cout << "Cevre: " << cevre() << endl;
	cout << "Alan: " << alan() << endl << endl;
}

Ucgen::Ucgen(double a, double b, double c)
{
	if (ucgenKontrol(a, b, c))
	{
		setKenarA(a);
		setKenarB(b);
		setKenarC(c);

		acilariBul();
		kenarlariYazdir();
		cout << "Ucgeni olusturuldu" << endl << endl;
	}
	else
	{
		cout << "Gonderdiginiz degerlerle ucgen olusmaz. Hepsi 1 yapildi" << endl;
		kenarA = kenarB = kenarC = 1;
		acilariBul();
	}

}

bool Ucgen::ucgenKontrol(double a, double b, double c)
{

	if ((abs(b - c) < a && a < b + c) && (abs(a - c) < b && b < a + c) && (abs(b - a) < c && c < b + a))
		return true;
	else
		return false;
}
void Ucgen::acilariBul()
{
	//cout << kenarA << " " << kenarB << " " << kenarC << "**********************************" << endl;
	aciBC = acos((kenarB*kenarB + kenarC*kenarC - kenarA*kenarA) / (2 * kenarB*kenarC)) * 180 / PI;
	aciAB = acos((kenarA*kenarA + kenarB*kenarB - kenarC*kenarC) / (2 * kenarB*kenarA)) * 180 / PI;
	aciAC = acos((kenarA*kenarA + kenarC*kenarC - kenarB*kenarB) / (2 * kenarC*kenarA)) * 180 / PI;
}

void Ucgen::setKenarA(double k)
{
	if (k >= 0)
	{
		kenarA = k;
		acilariBul();
	}
	else
	{
		cout << "Uzunluk negatif olamaz. Bu sebeple 1 atandi" << endl;
		kenarA = 1;
	}

}
void Ucgen::setKenarB(double k)
{
	if (k >= 0)
	{
		kenarB = k;
		acilariBul();
	}
	else
	{
		cout << "Uzunluk negatif olamaz. Bu sebeple 1 atandi" << endl;
		kenarB = 1;
	}
}
void Ucgen::setKenarC(double k)
{
	if (k >= 0)
	{
		kenarC = k;
		acilariBul();

	}
	else
	{
		cout << "Uzunluk negatif olamaz. Bu sebeple 1 atandi" << endl;
		kenarC = 1;
	}
}
void Ucgen::kenarlariYazdir()
{
	cout << "Kenarlar-->a: " << kenarA << " b: " << kenarB << " c: " << kenarC << endl;

}
void Ucgen::acilariYazdir()
{
	cout << "Acilar-->A: " << aciBC << " B: " << aciAC << " C: " << aciAB << endl;
}
double Ucgen::alan()
{
	double u = cevre() / 2;
	double sonuc = sqrt(u*(u - kenarA)*(u - kenarB)*(u - kenarC));
	return sonuc;
}
double Ucgen::cevre()
{
	return kenarA + kenarB + kenarC;

}

ostream &operator <<(ostream &cout, Ucgen &u) {

	cout << u.aciAB << " " << u.aciAC << " " << u.aciBC << endl;
	return cout;
}