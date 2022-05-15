#include "Fonksiyonlarim.h"



void fonksiyonlar::armstrong() {

	int x,k,tut,kalan=0,sonuc=0;
	cout << "Bir deger giriniz: ";
	cin >> x;
	for (int i = 153; i <= x;i++) {
		k = i;
		tut = k;
		while (k != 0) {
			if (k >= 10) {
				kalan = k % 10;
				k /= 10;
				sonuc += kalan*kalan*kalan;
			}
			else {
				
				sonuc += kalan*kalan*kalan;
				kalan -= kalan;
			
			}
			
		}

		if (sonuc == tut) {
			cout << "Oluyor" << endl;
		}


	}



}


void fonksiyonlar::kare10al(int c) {

	//int *sonuc = (int*)malloc(sizeof(int)*c);
	int hesap = 0,son=0,z,toplam=0;

	for (int i = 1; i <= c; i++) {
		hesap += i;
//		sonuc[i - 1] = i*i;
		cout << "Degerler: " << hesap << endl;
	}
	z = hesap*hesap;
	cout << "toplamlarinin karesi: " << hesap*hesap;


	int *sonuc = (int*)malloc(sizeof(int)*c);
	for (int i = 1; i <= c; i++) {

		sonuc[i - 1] = i*i;
		toplam += sonuc[i - 1];
		cout << "Degerler: " << sonuc[i - 1] << endl;
	}
	son = z - toplam;
	cout << z << " - " << toplam << " = " << son;
}


void fonksiyonlar::kareAl(int x) {

	int *sonuc = (int*)malloc(sizeof(int)*x);
	for (int i = 1; i <= x; i++) {

		sonuc[i-1] = i*i;
		cout << "Degerler: " << sonuc[i - 1] << endl;
	}
	


}

fonksiyonlar::fonksiyonlar() {
	//kullaniciAdi=
	cout << "*******Yarattiginiz nesne Mustafa YILMAZ'in fonksiyonlarina ulasmak icindir******" << endl;
	cout << "Giris yapilmadan fonksiyonlara ulasamazsiniz..." << endl;
	cout << "Giris yapmak icin 1'i cikmak icin 0'i tuslayiniz: ";
	int t;
	cin >> t;
	if (t == 1) {
		cout << "Kullanici adi: ";
		string kA,l="Mustafa";
		cin >> kA;
		cout << "Sifre: ";
		int sifre,k=1;
		cin >> sifre;	
		test(kA,sifre);
	}

	else {
		cout << "Program sonlandirilmistir...";
	}
}

int fonksiyonlar::f(int n) {
	int sonuc = 1;
	for (int i = 1; i <= n; i++) {
		sonuc *= i;
	}
	return sonuc;
}

void fonksiyonlar::comb() {
	int n, r, sonuc;

	cout << "Kombinasyon hesaplamak icin istediginiz degerleri girmelisiniz..." << endl;
	cout << "Eleman sayisi(n): ";
	cin >> n;
	cout << "Secim sayisi(r):";
	cin >> r;
	sonuc=f(n) / (f(n - r)*(f(r)));
	cout << "Islem sonuc: " << sonuc<<endl;
}

void fonksiyonlar::topla()
{
	int a, b, c;
	cout << "Bu fonksiyon iki adet sayiyi toplar lutfen sayilari giriniz..." << endl;
	cout << "Ilk sayiyi giriniz: ";
	cin >> a;
	cout << "Ikinci sayiyi giriniz: ";
	cin >> b;
	cout << "Islemin sonucu: " << c << endl;
}

int fonksiyonlar :: fib(int x) {
	//cout << "Geldiiiinm mmmiiiiiiii";
	//int y=0;
	if (x == 1 || x == 0) {
		if (x == 0) {
			return 0;
		}
		return 1;
	}
	//cout << "Degerler: " << y << endl;
	return fib(x - 1) + fib(x - 2);
	
}

int fonksiyonlar::test(string a,int b) {

	if (a == kullaniciAdi &&b == sifreler) {
		cout << "************Ulasmak istediginiz fonksiyonlar asagidadir**********" << endl;
		cout <<"1-Kombinasyon hesabi" << endl;
		cout << "2-Sayi toplama" << endl;
		cout << "3-fibonecci hesabi" << endl;
		cout << "4-kare alma(parantez) hesabi" << endl;
		cout << "5-kare alma hesabi" << endl;
		cout << "6-Armstrong hesabi" << endl;


		cout << "Ulasmak istediginiz fonksiyonun numarasini giriniz: ";
		int x;
		cin >> x;
		ulas(x);
	}
	else {
		cout << "Sifren yada kullanici adin yanlis ama hangisi soylemem :)" << endl;
}
	return 0;
}


void fonksiyonlar::ulas(int g) {
	switch(g) {
	case 1: {		
		comb();
		break; }
	case 2: {
		topla();
		break;
	}
	case 3: {
		cout << "Deger: " << fib(10) << endl;
		break;
	}
	case 4: {
		cout << "Karelerinin toplaminin hesaplanmasini istediðiniz degeri giriniz: ";
		int x;
		cin >> x;
	
		kareAl(x);
		
		break;
	}
	case 5: {
		cout << "Karelerinin toplaminin hesaplanmasini istediðiniz degeri giriniz: ";
		int x;
		cin >> x;

		kare10al(x);
		break;
	}

	case 6: {
		//cout << "Karelerinin toplaminin hesaplanmasini istediðiniz degeri giriniz: ";
		armstrong();
		break;
	}

	}
	
	
}

