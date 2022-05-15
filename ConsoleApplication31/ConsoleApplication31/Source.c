#include <stdio.h>

int main() {


	int a, b, c,d;	
	int y = 5;
	--y;
	printf("%d", y);
		printf("1. Sayiyi giriniz: "); scanf("%d", &a);
		printf("2. Sayiyi giriniz: "); scanf("%d", &b);
		printf("3. Sayiyi giriniz: "); scanf("%d", &c);
		printf("4. Sayiyi giriniz: "); scanf("%d", &d);
		if (a> b) {
			if (b > c) {
				printf("Sayilarin buyukten kucuge sirasi: %d, %d, %d \n ", a, b, c);
			}
			else if (c > b) {
				if (c < a) {
					printf("Sayilarin buyukten kucuge sirasi: %d, %d, %d \n ", a, c, b); 
				}
				else if (c > a) {
					printf("Sayilarin buyukten kucuge sirasi: %d, %d, %d \n ", c, a, b); 
				}
			}
		}

		else if (b > a) {
			if (a > c) {
				printf("Sayilarin buyukten kucuge sirasi: %d, %d, %d \n ", b, a, c); 
			}
			else if (c > a) {
				if (b > c) {
					printf("Sayilarin buyukten kucuge sirasi: %d, %d, %d \n ", b, c, a);  
				}
				else if (c > b) {
					printf("Sayilarin buyukten kucuge sirasi: %d, %d, %d \n ", c, b, a);				}
			}
		}	
		






	return 0;
}