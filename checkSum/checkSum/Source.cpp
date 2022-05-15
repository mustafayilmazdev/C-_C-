#include <stdio.h>

int main() {

	int a;
	printf("Sayi gir "); scanf("%d", &a);

	while (a > 0) {
		printf("%d\n", a % 10);
		a /= 10;
	}

	return 0;
}