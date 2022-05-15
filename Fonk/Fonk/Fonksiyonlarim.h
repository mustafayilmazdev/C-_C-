#ifndef FONKSIYONLARIM_H
#define FONKSIYONLARIM_H
#include <iostream>
#include <string>
using namespace std;
class fonksiyonlar {
	string kullaniciAdi="darklordshow";
	int sifreler=123456,fibDeger;
	void ulas(int);
	int f(int n);
	void comb();//UST TARAF KOMBÝNASYON HESAPLAMAK ÝCÝN FAKTORÝYEL DE VAR ÝCÝNDE	-1
	void topla();//UST TARAF SADECE 2 SAYI TOPLAMAK ÝCÝN 							-2
	int fib(int x);//UST TARAF FÝBONACCÝ DE GÝRÝLEN TERÝMÝN DEGERÝNÝ BULMAK ÝCÝN		-3
	float aritmetik(float sayi);//UST TARAF GÝRÝLEN SAYILARIN ARÝTMETÝK ORTALAMASINI BULMAK ÝCÝN	-6	
	int ilk10sayikaresi(int);
	void kare10al(int);//UST TARAF 1-DEN 10-A KADAR OLAN SAYILARI TABLO HALÝNDE KARESÝNÝ ALARAK YAZMAK ÝÇÝN ÖRN: SAYÝ         KARESÝ		-7
	int max(int s1, int s2, int s3);//UST TARAF 3 SAYÝ ÝCÝNDEN EN BUYUGUNU BULMA						-8
	int buyuksayibulma(int x);//UST TARAF ÝSTEDÝGÝN KADAR SAYÝYÝ KIYASLAYARAK EN BUYUGUNU BULMA	-9
	void kareAl(int);
	void armstrong();


public:
	fonksiyonlar();
	int test(string,int);
	int amk(int);
};
#endif //!FONKSIYONLARIM_H