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
	void comb();//UST TARAF KOMB�NASYON HESAPLAMAK �C�N FAKTOR�YEL DE VAR �C�NDE	-1
	void topla();//UST TARAF SADECE 2 SAYI TOPLAMAK �C�N 							-2
	int fib(int x);//UST TARAF F�BONACC� DE G�R�LEN TER�M�N DEGER�N� BULMAK �C�N		-3
	float aritmetik(float sayi);//UST TARAF G�R�LEN SAYILARIN AR�TMET�K ORTALAMASINI BULMAK �C�N	-6	
	int ilk10sayikaresi(int);
	void kare10al(int);//UST TARAF 1-DEN 10-A KADAR OLAN SAYILARI TABLO HAL�NDE KARES�N� ALARAK YAZMAK ���N �RN: SAY�         KARES�		-7
	int max(int s1, int s2, int s3);//UST TARAF 3 SAY� �C�NDEN EN BUYUGUNU BULMA						-8
	int buyuksayibulma(int x);//UST TARAF �STED�G�N KADAR SAY�Y� KIYASLAYARAK EN BUYUGUNU BULMA	-9
	void kareAl(int);
	void armstrong();


public:
	fonksiyonlar();
	int test(string,int);
	int amk(int);
};
#endif //!FONKSIYONLARIM_H