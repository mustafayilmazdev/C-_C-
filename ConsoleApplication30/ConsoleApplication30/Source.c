#include <stdio.h>

int main() {

	int x = 5, y = 7, sonuc = 0;
	sonuc = (++x)*(y--) + (8) + (--y);
	printf("%d", (++x)*(y--) + (8) + (--y));
}