#include <stdio.h>

int main() {
	int sekil;
	printf("Seklin buyuklugunu giriniz: ");
	scanf("%d", &sekil);
	int deneme = sekil;
	for (int i = 0; i <= sekil; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");		
		}
		for (int k = 0; k <= deneme*2 - 1; k++) {
			printf(" ");
		}
		deneme--;
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		
		printf("\n");
	}

	return 0;
}