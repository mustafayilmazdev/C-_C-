#include <stdio.h>
#include <math.h>
int main() {

	int i, k, a, s, h;
	int v[4], b[3], g[3], t[3], gecici, deneme;
	float j;
	for (i = 10; i < 10000; i++) {
		if (i <= 100) {
			k = i % 10;
			a = i / 10;
			j = i;

			//printf("%d   %d   %d \n", i, k,a);

			if (k < 10) {
				if (k + a == sqrt(j)) {
					printf("%f xxxxxxxxxxxxxxxxxxxxxxx\n", sqrt(j));
				}
			}
		}

	
		if (i > 1000) {
			gecici = i;
			
			for (h = 0; h < 4; h++) {
				v[h] = gecici % 10;
				gecici /= 10;
			//	printf("%d ", i);
			//	printf("%d   ", v[h]);
			}
		//	printf("\n");


			deneme = v[0] + v[1] + v[2] + v[3];
			j = i;
			if (deneme == sqrt(j)) {
				printf("%f xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n", sqrt(j));
				continue;
			}

			gecici = i;
			b[0] = gecici % 10;
			gecici /= 1000;
			b[1] = i/10 - (gecici*100);
			b[2] = i / 1000;
			//printf("%d ", i);
			//printf("%d s %d s %d s\n", b[0], b[1], b[2]);
			j = i;
			if (b[0] + b[1] + b[2] == sqrt(j)) {
				printf("%f xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n", sqrt(j));
				continue;
			}
		
		
			gecici = i;
			g[0] = gecici % 10;
			gecici /= 10;
			g[1] = gecici % 10;
			gecici /= 10;
			g[2] = gecici;
			j = i;
			if (g[0] + g[1] + g[2] == sqrt(j)) {
						printf("%f xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n", sqrt(j));
						continue;
					}

			gecici = i;
			t[0] = gecici / 1000;
			t[1] = i / 100 - ((gecici / 1000) * 10);
			t[2] = i - ((gecici / 100) * 100);
			j = i;
			if (t[0] + t[1] + t[2] == sqrt(j)) {
				printf("%f xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n", sqrt(j));
				continue;
			}


		}
	
	}
	
	
	return 0;
}