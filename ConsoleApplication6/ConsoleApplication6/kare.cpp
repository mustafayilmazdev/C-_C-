#include "kare.h"
#include <iostream> //printf fonksiyonu için 

kare::kare() //yapýcýnýn türü olmaz
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