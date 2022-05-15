#include <stdio.h>
#include <stdlib.h>
int main() {
	int x = 0;
	int c = 1000;
	while (x!=5) {
		printf("\a");
		_sleep(500);		
		printf("\a");
		_sleep(500);
		printf("\a");
		_sleep(500);
		printf("\a");
		_sleep(500);
		printf("\a");

		x++;
		_sleep(2000);
	}

	printf("Mustafa\n");
	_sleep(5000);
	printf("%s\n", "Yilmaz");
//	printf("\a");
	return 0;
}