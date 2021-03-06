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

/* Kullan?c? taraf?ndan girilen metinin ?ifrelenip,
??z?lmesini sa?layan C program?. */

#include <stdio.h> 
#include <string.h> 


void sifrele(/*parametreler*/char sifre[], int anahtar)
{
	/* ??aretsiz (unsigned) ?n eki kullan?ld??? taktirde,
	veri tipi ile saklanacak de?erin s?f?r ve s?f?rdan b?y?k olmas? sa?lan?r.*/
	unsigned int i;
	for (i = 0; i < strlen(sifre); ++i)
		/* strlen : karakter dizisini verir. */
		// ++i : de?i?kenin de?erini bir artt?r. sonra d?ng?y? i?let. 
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