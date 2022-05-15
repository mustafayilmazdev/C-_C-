#include "ALTIGEN.h"

altigen::altigen(double k,double a) {
	cout << "\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ALTIGEN YARATILDI >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

	kenarA = kenarB = kenarC = kenarD = kenarE = kenarF = k;
	for (int i = 0; i < 6; i++) {		
		
		acilar[i] = a;
	//	cout << "DENEME ACILAR "<<i<<endl << acilar[0] << " " << kenarlar[0] << endl;
	}

	ozellikyazdir();
	//alaniartir();
	//ozellikyazdir();
	//fillrandom();
	//ozellikyazdir();
	//alaniartir();
	//ozellikyazdir();


	
}
double altigen::alanhesapla() {

	return ((3 * sqrt(3)) / 2) *(kenarA*kenarA);

}

double altigen::cevrehesapla() {

	return 6 * kenarA;
}
void altigen::alaniartir(int a) {
	double x = alanhesapla(),y;
	cout << "\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<||| ALAN ARTIRMA FONKSIYONU |||>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	while (1) {
		kenarA += 0.0001;
		kenarB += 0.0001;
		kenarC += 0.0001;
		kenarD += 0.0001;
		kenarE += 0.0001;
		kenarF += 0.0001;
		y = alanhesapla();
		cevrehesapla();
		if (x + a <= y) {
			ozellikyazdir();

			break;
		}

	}

}

void altigen::fillrandom(int ust, int alt) {

	if (ust > 0 && alt > 0) {
		srand(time(NULL));
		cout << "\n\n||||||||||||||||||||| - RANDOM DEGERLERLE SEKIL OLUSTURMA BASARILI :) - |||||||||||||||||||||" << endl;
		kenarA = kenarB = kenarC = kenarD = kenarE = kenarF = rand() % (ust - alt + 1) + alt;
		ozellikyazdir();
		
	}
	else {
		int a, b;
		cout << "Random deger sinirlari icin -'li degerler girilemez.Lutfen duzeltin...\nUst siniri ve alt siniri giriniz: ";
		cin >> a >> b;
		fillrandom(a, b);

	}
}
ostream & operator <<(ostream &cout, altigen &a) {

	//cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	cout << "\nA,B,C,D,E,F Kenar uzunlugu-> " << a.kenarA << "  olan altigen ozellikleri" << endl;
	cout << "\nAltigen alani-> " << a.alanhesapla() << endl;
	cout << "\nAltigen cevresi->" << a.cevrehesapla() << endl;
	cout << "\nAltigen acilari->" << a.acilar[0] << " " << a.acilar[1] << " " << a.acilar[2] << " " << a.acilar[3] << endl;
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;

	return *cout;
}


void altigen::ozellikyazdir() {


	//cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	cout << "\nA,B,C,D,E,F Kenar uzunlugu-> " << kenarA << "  olan altigen ozellikleri" << endl;
	cout << "\nAltigen alani-> " <<alanhesapla() << endl;
	cout << "\nAltigen cevresi->" << cevrehesapla() << endl;
	cout << "\nAltigen acilari->" << acilar[0] << " " << acilar[1] << " " << acilar[2] << " " << acilar[3] << endl;
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;

}