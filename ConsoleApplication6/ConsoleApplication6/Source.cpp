#include "kare.h"
#include <iostream> //printf fonksiyonu i�in 

class altigen
{
public:
	int kenarSayisi = 6;
private:
	int kosegenSayisi;
};

int main()
{
	altigen altigen1;

	kare kare1;

	printf("Altigenin kenar sayisi %d dir.\n", altigen1.kenarSayisi);
	printf("Karenin kenar sayisi %d tur.\n", kare1.kenarSayisiGetir());
	printf("Karenin kose sayisi %d tur.\n", kare1.koseSayisi);
	kare1.alanHesapla();
	system("pause"); //program�n i�i bitince kapanmamas�n� sa�l�yor

}