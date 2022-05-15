
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, j, n;
	printf("Satir Sayisini Giriniz..:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (j = 1; j <= (i * 2 - 1); j++)
			printf("*");
		printf("\n");
	}
	getch();
}