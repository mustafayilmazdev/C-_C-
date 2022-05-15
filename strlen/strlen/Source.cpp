/*#include <iostream>
#include <string>

using namespace std;

int main() {
	char x[] = "Mustafa";
	cout << x << endl;
	int y = strlen(x);

	cout << x << " uzunlugu " << y << " dir" << endl;

	return 0;
}
*/

/* Kullanýcý tarafýndan girilen metinin þifrelenip,
çözülmesini saðlayan C programý. */

#include <stdio.h> 
#include <string.h> 


void sifrele(/*parametreler*/char sifre[], int anahtar)
{
	/* Ýþaretsiz (unsigned) ön eki kullanýldýðý taktirde,
	veri tipi ile saklanacak deðerin sýfýr ve sýfýrdan büyük olmasý saðlanýr.*/
	unsigned int i;
	for (i = 0; i < strlen(sifre); ++i)
		/* strlen : karakter dizisini verir. */
		// ++i : deðiþkenin deðerini bir arttýr. sonra döngüyü iþlet. 
	{

		sifre[i] = (sifre[i] - anahtar)  ;
		printf("%d   ", sifre[i]);
		printf("%d   ", i);
		printf("%c \n", sifre[i]);

	}
}

void sifrecoz(char sifre[], int anahtar)
{
	unsigned int i;
	for (i = 0; i < strlen(sifre); ++i)
	{
		sifre[i] = sifre[i] + anahtar;
	}
}

int main()
{
	// 0xFACA unicode karakter 
	char sifre[20];
	printf("Sifrelenecek Metni Giriniz: \n ");
	scanf("%s", sifre);
	printf("Girdiginiz deger	: %s\n", sifre);
	sifrele(sifre, 0xFACA);
	printf("Sifrelenmis bicimi	: %s\n", sifre);
	sifrecoz(sifre, 0xFACA);
	printf("Sifresi cozulmus bicimi	: %s\n", sifre);
	//printf("%d", 0xFACA);
	printf("%c  %c", 171,-85);
	return 0;
}