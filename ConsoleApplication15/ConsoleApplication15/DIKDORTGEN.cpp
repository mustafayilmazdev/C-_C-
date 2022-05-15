#include "DIKDORTGEN.h"

dikdortgen::dikdortgen(double k,double u){
	cout << "\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< DIKDORTGEN YARATILDI >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	uzunKenar = u;
	kisaKenar = k;
	for (int i = 0; i <4; i++) {
		acilar[i] = 90;
	}
	
	ozellikyazdir()
		;
}

int dikdortgen::alanhesapla() {
	return kisaKenar*uzunKenar;
}
int dikdortgen::cevrehesapla() {
	return (kisaKenar+uzunKenar) * 2;
}
void dikdortgen::alani1artir(int a) {
	cout << "\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< SIKI TUTUNUN ALAN 1 ARTIRILIYOR >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	int x = alanhesapla(), y;
	while (1) {
		uzunKenar += 0.0001;
		y = alanhesapla();
		cevrehesapla();
		if (x + a <= y) {
			break;
		}
	}


}

ostream & operator <<(ostream &cout, dikdortgen &d) {
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	cout << "\nKisa kenari: " << d.kisaKenar << " Uzun kenari: " << d.uzunKenar << " olan dikdortgen ozellikleri" << endl;
	cout << "\nDikdortgen alani-> " << d.alanhesapla() << endl;
	cout << "\nDikdortgen cevresi->" << d.cevrehesapla() << endl;
	cout << "\nDikdortgen acilari->" << d.acilar[0]<<" " <<d.acilar[1]<< " " << d.acilar[2]<< " " << d.acilar[3] << endl;
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;

	return cout;
}
void dikdortgen::fillrandom(int ust,int alt) {
	if (ust > 0 && alt > 0) {
		srand(time(NULL));
		cout << "\n\n||||||||||||||||||||| - RANDOM DEGERLERLE SEKIL OLUSTURMA BASARILI :) - |||||||||||||||||||||" << endl;
		kisaKenar = rand() % (ust - alt + 1) + alt;
		uzunKenar = rand() % (ust - alt + 1) + alt;
	}
	else {
		int a, b;
		cout << "Random deger sinirlari icin -'li degerler girilemez.Lutfen duzeltin...\nUst siniri ve alt siniri giriniz: ";
		cin >> a >> b;
		fillrandom(a, b);
		
	}
}


void dikdortgen::ozellikyazdir() {


//	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	cout << "\nKisa kenari: " << kisaKenar << " Uzun kenari: " << uzunKenar << " olan dikdortgen ozellikleri" << endl;
	cout << "\nDikdortgen alani-> " << alanhesapla() << endl;
	cout << "\nDikdortgen cevresi->" <<cevrehesapla() << endl;
	cout << "\nDikdortgen acilari->" <<acilar[0] << " " << acilar[1] << " " << acilar[2] << " " << acilar[3] << endl;
	cout << "\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;

}