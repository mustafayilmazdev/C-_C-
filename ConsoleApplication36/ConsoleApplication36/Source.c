#include <stdio.h>
void tanit()
{
	printf("Merhaba ben Hamid\n");
	printf("Yasim 33\n");
	return;
}

void yazdir(int yas)
{
	printf("Merhaba ben insan\n");
	printf("Yasim %d\n", yas);
	return;
}

void triple(int *x)
{
	printf("Fonksiyon ici giris: %d\n", *x);
	*x = *x * 3;
	printf("Fonksiyon ici son: %d\n", *x);

}

int main()
{
	int s = 27;
	tanit();
	yazdir(s);
	int x;
	printf("Bir sayi giriniz: ");
	scanf("%d", &x);

	printf("Fonksiyon oncesi: %d\n", x);
	triple(&x);
	printf("Fonksiyon sonrasi: %d\n", x);

	return 0;
}

