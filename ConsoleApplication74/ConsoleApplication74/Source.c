#include <stdio.h>
#include <math.h>



int main() {

	int i, j, s, k[4], l, p, f = 0, gecici,deger;
	float sq;

	for (i = 10; i < 10000; i++) {
		sq = i;
		s = i;
		for (j = 0; j < 4; j++) {
			k[j] = s % 10;
			s /= 10;
		}

		deger=k[0] * 10 + k[1] + k[2] + k[3];
		if (deger == sqrt(sq)) {

			printf("%d Sayisi bir S-sayisidir -> %d + %d + %d = %d \n",i, k[0] * 10 + k[1], k[2],k[3],deger);
			continue;
		}
		deger = k[0] + k[1] * 10 + k[2] + k[3];
		if (deger == sqrt(sq)) {

			printf("%d Sayisi bir S-sayisidir -> %d + %d + %d = %d\n", i, k[0]+ k[1]*10, k[2], k[3], deger);
			continue;
		}

		deger = k[0] + k[1] + k[2] * 10 + k[3];
		if (deger == sqrt(sq)) {

			printf("%d Sayisi bir S-sayisidir -> %d + %d + %d = %d\n", i, k[0] , k[1], k[2]*10+ k[3], deger);
			continue;
		}
		deger = k[0] + k[1] + k[2] + k[3] * 10;
		if (deger == sqrt(sq)) {

			printf("%d Sayisi bir S-sayisidir -> %d + %d + %d = %d\n", i, k[0] , k[1], k[2] + k[3] * 10, deger);
			continue;
		}




		for (l = 0; l <4; l++) {
			

			deger = k[0] * 10 + k[1] + k[2] * 10 + k[3];
			if (deger == sqrt(sq)) {

				printf("%d Sayisi bir S-sayisidir -> %d + %d  = %d\n", i, k[0]*10+ k[1], k[2]*10 + k[3] , deger);
				break;
			}
			deger = k[0] * 10 + k[1] + k[2]+ k[3] * 10;
			if (deger == sqrt(sq)) {

				printf("%d Sayisi bir S-sayisidir -> %d + %d  = %d\n", i, k[0] * 10 + k[1], k[2]  + k[3] * 10, deger);
				break;
			}

			deger = k[0] * 10 + k[2] + k[1] * 10 + k[3];
			if (deger == sqrt(sq)) {

				printf("%d Sayisi bir S-sayisidir -> %d + %d  = %d\n", i, k[0] * 10 + k[2], k[1]*10 + k[3], deger);
				break;
			}
			deger = k[0] * 10 + k[2] + k[1] + k[3] * 10;
			if (deger == sqrt(sq)) {

				printf("%d Sayisi bir S-sayisidir -> %d + %d  = %d\n", i, k[0] * 10 + k[2], k[1]  + k[3]*10, deger);
				break;
			}

			deger = k[0] * 10 + k[3] + k[2] * 10 + k[1];
			if (deger == sqrt(sq)) {

				printf("%d Sayisi bir S-sayisidir -> %d + %d  = %d\n", i, k[0] * 10 + k[3], k[2] * 10 + k[1], deger);
				break;
			}
			deger = k[0] * 10 + k[3] + k[2] + k[1] * 10;
			if (deger == sqrt(sq)) {

				printf("%d Sayisi bir S-sayisidir -> %d + %d  = %d\n", i, k[0] * 10 + k[3], k[2]+ k[1]*10, deger);
				break;
			}

			if (l != 3) {
				gecici = k[0];
				k[0] = k[l + 1];
				k[l + 1] = gecici;
			}

		}

	}


	return 0;
}