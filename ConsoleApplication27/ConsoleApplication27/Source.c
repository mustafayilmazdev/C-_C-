#include <stdio.h>
#include <math.h>

int main() {

	int a, b, c;
	double delta;
	double x1, x2;

	printf("1: "); scanf("%d", &a);

	printf("2: "); scanf("%d", &b);

	printf("3: "); scanf("%d", &c);

	delta = (b*b) - 4 * a*c;
	printf("Buradayim\n");
	if (delta > 0) {
	//	printf("Buradayim\n");

		x1 = ((-b + sqrt(delta)) / 2);
//		printf("Buradayim\n");

		x2 = ((-b - sqrt(delta)) / 2);
		//printf("Buradayim\n");

	}

	else if (delta == 0) {
		x1 = (-b) / (2 * a);
		x2 = x1;
	}
	//printf("%lf		%lf", x1, x2);

	return 0;
}