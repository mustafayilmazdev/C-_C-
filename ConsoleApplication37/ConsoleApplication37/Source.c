#include <stdio.h>
#include <stdlib.h>



int main() {

	int sayiAl;
	
	int dngKnt;
	
	do {

		printf("Lutfen Sayi giriniz: ");
		scanf("%d", &sayiAl);
		if (sayiAl % 2 == 0) {
			printf("Duzgun sayi gir, cirkin sey...\n");

		}
		else {
			printf("Sayi tektir...\n");

		}
		getchar();
		printf("\nCikmak icin 0'i devam etmek icin 1'i tuslayiniz: ");
		scanf("%d", &dngKnt);
		printf("\n");
		
	} while (dngKnt!=0);
	
	printf("\nProgram sonlandirilmistir...\n");

	return 0;
}