#include "kare.h"
#include <iostream> //printf fonksiyonu i�in 

kare::kare() //yap�c�n�n t�r� olmaz
{
	koseSayisi = 4;
	kenarSayisi = 4;
}

void kare::alanHesapla()
{
	printf("Karenin alani herhangi iki kenari carpilarak bulunabilir.\n\n");
}

int kare::kenarSayisiGetir()
{
	return kenarSayisi;
}