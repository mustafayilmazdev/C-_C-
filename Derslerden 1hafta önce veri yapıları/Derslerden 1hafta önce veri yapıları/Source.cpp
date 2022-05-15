#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 101
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
void sort(int[], int);

int main(void) {
	int i, n;
	int list[MAX_SIZE];
	srand(time(NULL));

	printf("Dizi Boyunu Giriniz: ");
	scanf("%d", &n);

	if (n<1 || n>MAX_SIZE) {
		printf("Hatali n degeri!\n");
		exit(1);
	}

	for (i = 0; i<n; i++) { // Diziye deðerleri ata
		list[i] = rand() % 100; // [0,99] aralýðýndan bir deðer
		printf("--------------------------%d\n\n", rand());
		printf("%d ", list[i]);
	}

	printf("\n\nSirali Degerler:\n");
	sort(list, n); // Sýrala
	for (i = 0; i<n; i++)
		printf("%d ", list[i]);

	return 0;
} // --> end main()
void sort(int list[], int n) {
	int i, j, min, temp;
	for (i = 0; i<n; i++) {
		min = i;
		for (j = 0; j<n; j++)
			if (list[j] > list[min]) {
				min = j;
				SWAP(list[i], list[min], temp);
			}
	}
} // -> end sort()