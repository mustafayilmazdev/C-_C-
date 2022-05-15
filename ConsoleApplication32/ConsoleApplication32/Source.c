#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sayi1, sayi2, sayi3;
	printf("1. sayi:");
	scanf("%d", &sayi1);
	printf("2. sayi:");
	scanf("%d", &sayi2);
	printf("3. sayi:");
	scanf("%d", &sayi3);
	while (sayi1 == sayi2) {
		printf("Lütfen 1.sayiyi tekrar giriniz: ");
		scanf("%d", &sayi1);
		printf("Lütfen 2.sayiyi tekrar giriniz: ");
		scanf("%d", &sayi2);
		while (sayi1 == sayi3) {
			printf("Lütfen 1.sayiyi tekrar giriniz: ");
			scanf("%d", &sayi1);
		}
	}
	while (sayi2 == sayi3) {
		printf("Lütfen 2.sayiyi tekrar giriniz: ");
		scanf("%d", &sayi2);
		while (sayi2 == sayi1) {
			printf("Lütfen 2.sayiyi tekrar giriniz: ");
			scanf("%d", &sayi2);
		}
	}
	while (sayi1 == sayi3) {
		printf("Lütfen 1.sayiyi tekrar giriniz: ");
		scanf("%d", &sayi1);
		printf("Lütfen 3.sayiyi tekrar giriniz: ");
		scanf("%d", &sayi3);
		while (sayi1 == sayi2) {
			printf("Lütfen 1.sayiyi tekrar giriniz: ");
			scanf("%d", &sayi1);
		}
		if (sayi1 > sayi2) {
			if (sayi2 > sayi3) {
				printf("Sayilarin büyükten kücüge sirasi: %d, %d, %d dir. ", sayi1, sayi2, sayi3);//1-2-3
			}
			else if (sayi3 > sayi2) {
				if (sayi3 < sayi1) {
					printf("Sayilarin büyükten kücüge sirasi: %d, %d, %d dir. ", sayi1, sayi3, sayi2); //1-3-2
				}
				else if (sayi3 > sayi1) {
					printf("Sayilarin büyükten kücüge sirasi: %d, %d, %d dir. ", sayi3, sayi1, sayi2); //3-1-2
				}
			}
		}
		else if (sayi2 > sayi1) {
			if (sayi1 > sayi3) {
				printf("Sayilarin büyükten kücüge sirasi: %d, %d, %d dir. ", sayi2, sayi1, sayi3); //2-1-3
			}
			else if (sayi3 > sayi1) {
				if (sayi2 > sayi3) {
					printf("Sayilarin büyükten kücüge sirasi: %d, %d, %d dir. ", sayi2, sayi3, sayi1);  //2-3-1
				}
				else if (sayi3 > sayi2) {
					printf("Sayilarin büyükten kücüge sirasi: %d, %d, %d dir. ", sayi3, sayi2, sayi1); //3-2-1
				}
			}
		}
	}
}