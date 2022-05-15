#include <stdio.h>
int main() {
	int a, b, c;
	int eb, ek, ort;
	printf("3 adet tam sayi giriniz: ");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) {
		if (a > c) {
			eb = a;
			if (c > b) {
				ek = b;
				ort = c;
			}
			else {
				ek = c;
				ort = b;
			}
		}
		else {
			eb = c;
			ek = b;
			ort = a;
		}
	}
	else {
		if (b > c) {
			eb = b;
			if (c > a) {
				ek = a;
				ort = c;
			}
			else {
				ek = c;
				ort = a;
			}
		}
		else {
			ort = b;
			eb = c;
			ek = a;
		}
	}
	printf("Buyuk sayi: %d + Kucuk sayi: %d = Toplam %d\n", eb, ek, eb + ek);
	return 0;
}