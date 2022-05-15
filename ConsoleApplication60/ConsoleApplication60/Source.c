#include <stdio.h>
#include <stdlib.h>
int *dizi;
int tepe = 0;
FILE *dosya;
int asal(int a) {
	int i, j, bayrak,sayac=0;

	for (i = 2; i < a; i++) {
		bayrak = 0;
		for (j = 2; j < i; j++) {
			if (i%j == 0) {
				bayrak = 1;
				break;
			}
		}
		if (bayrak == 0) {
		
			sayac++;
		}

	}

	return sayac;
}

int main() {	
	int sayi,size,i,bayrak,j;
	printf("Ust limiti giriniz: ");
	scanf("%d", &sayi);
	size=asal(sayi);
	dizi = (int*)malloc(sizeof(int) * size);
	
	for (i = 2; i < sayi; i++) {
		bayrak = 0;
		for (j = 2; j < (i/2)+1 ; j++) {
			if (i%j == 0) {
				bayrak = 1;
				break;
			}
		}
		if (bayrak == 0) {
			printf("Verilen aralikta %d sayisi asaldir\n",i);
			dizi[tepe++] = i;
		}

	}

	dosya = fopen("asalsayilar.txt", "w");
	for (i = 0; i < size; i++)
	{
		fprintf(dosya, "%d ", *(dizi + i));
	}
	fprintf(dosya, "\n");
	fclose(dosya);
	free(dizi);

	
	getch();
	return 0;
}
