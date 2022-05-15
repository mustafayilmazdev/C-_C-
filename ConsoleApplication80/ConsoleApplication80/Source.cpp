#include <stdio.h>
int main()
{
	double tutar,indirim;
	printf("Alisveris miktari: "); scanf("%lf", &tutar);
	if (tutar <= 50) {
		printf("Alisveris miktari: %lf YTL\n", tutar);
		indirim = tutar*0.02;
		printf("Indirim miktari: %lf ",indirim);
		printf("Odeme miktari: %lf\n", tutar - (indirim));
	}
	else if (tutar > 51 && tutar < 100) {
		printf("Alisveris miktari: %lf YTL\n", tutar);
		indirim=50*0.02;
		tutar -= 50;
		indirim+=  tutar*0.03;
		printf("Indirim miktari: %lf\n ", indirim);
		printf("Odeme miktari: %lf\n", tutar+50 - (indirim));
	}
}