#include "Ucgen.h"

int SAYAC=0,FLAG=0;

Ucgen::~Ucgen()
{
	//kenarlariYazdir();
	//cout << " Ucgeni yok edildi" << endl << endl;
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
	cout << "\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< UCGEN YARATILDI >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

	if (ucgenKontrol(a, b, c))
	{
		setKenarA(a);
		setKenarB(b);
		setKenarC(c);

		acilariBul();
		ozellikyazdir();
		//kenarlariYazdir();
		//cout << "Ucgeni olusturuldu" << endl << endl;
	}
	else
	{
		cout << "Gonderdiginiz degerlerle ucgen olusmaz. Degerler 1 yapildi" << endl;
		kenarA = kenarB = kenarC = 1;
		acilariBul();
		ozellikyazdir();
	}
	

}

bool Ucgen::ucgenKontrol(double a, double b, double c)
{
	//Sleep(3);

	if (((b - c) < a && a < b + c) && ((a - c) < b && b < a + c) && ((b - a) < c && c < b + a))
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

unsigned int Ucgen::setKenarA(double k)
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
	return 0;

}
unsigned int Ucgen::setKenarB(double k)
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
	return 0;
}
unsigned int Ucgen::setKenarC(double k)
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
	return 0;
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
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	//cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "\nKenar uzunluklari-> " << u.kenarA << " " << u.kenarB << " " << u.kenarC << " Olan Ucgen"<<endl;
	cout << "\nAcilar-->A: " << u.aciBC << " B: " << u.aciAC << " C: " << u.aciAB << endl;
	cout << "\nAlan->" << u.alan() << endl;
	cout << "\nCevre->" << u.cevre() << endl;
	//cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	return cout;
}


void Ucgen::fillRandom(int ust, int alt) {
	srand(time(NULL));
	/*kenarA = rand() % (ust - alt + 1) + alt;
	kenarB = rand() % (ust - alt + 1) + alt;
	kenarC = rand() % (ust - alt + 1) + alt;*/
	//cout << "ASAGIDAKI UCGEN RANDOM DEGERLELE OLUSTURULDU..." << endl;
	/*setKenarA(rand() % (ust - alt + 1) + alt);
	setKenarB(rand() % (ust - alt + 1) + alt);
	setKenarC(rand() % (ust - alt + 1) + alt);*/
	double a, b, c;
	Sleep(3);
	if (ucgenKontrol(a = rand() % (ust - alt + 1) + alt, b = rand() % (ust - alt + 1) + alt, c = rand() % (ust - alt + 1) + alt)) {

		cout << "\n\n||||||||||||||||||||| - RANDOM DEGERLERLE SEKIL OLUSTURMA BASARILI :) - |||||||||||||||||||||" << endl;
		kenarA = a;
		kenarB = b;
		kenarC = c;
		guncelle();

	}
	
	else {
		if (FLAG == 0) {
			cout << "RANDOM DEGERLERLE UCGEN OLUSTURULMASI ICIN UYGUN DEGERLER ARANIYOR...\n LUTFEN BEKLEYINIZ..." << endl;
			FLAG = 1;
		}
		//cout << "Olusturulamadi tekrar cagiriliyor...   "<<a<<b<<c ;		
		fillRandom(ust, alt);
		
		
	}
	
}

void Ucgen::alani1Artir(int a) {
	double x = alan(),y;
	cout << "\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< SIKI TUTUNUN ALAN 1 ARTIRILIYOR >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	while (1) {
		kenarA += 0.0001;
		kenarB += 0.0001;
		kenarC += 0.0001;
		y = alan();
		cevre();
		if (x + a <= y) {
			break;
		}
	}


}
void Ucgen::guncelle() {
	alan();
	cevre();
	acilariBul();
}

void Ucgen::ozellikyazdir() {

//	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	//cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "\nKenar uzunluklari-> " << kenarA << " " << kenarB << " " << kenarC << " Olan Ucgen" << endl;
	cout << "\nAcilar-->A: " << aciBC << " B: " << aciAC << " C: " << aciAB << endl;
	cout << "\nAlan->" << alan() << endl;
	cout << "\nCevre->" << cevre() << endl;
	//cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;


}