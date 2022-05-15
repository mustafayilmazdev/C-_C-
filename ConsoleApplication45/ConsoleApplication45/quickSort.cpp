#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int parca(int d[], int k, int b)
{
	int pivot = d[b]; 
	int i = (k - 1);

	for (int j = k; j <= b - 1; j++)
	{
		if (d[j] <= pivot)
		{
			i++;   
			swap(&d[i], &d[j]);
		}
	}
	swap(&d[i + 1], &d[b]);
	return (i + 1);
}

void quickSort(int d[], int k, int b)
{
	if (k < b)
	{
		
		int pivot = parca(d, k, b);

		
		quickSort(d, k, pivot - 1);
		quickSort(d, pivot + 1, b);
	}
}

void diziYazdir(int d[], int boyut)
{
	int i;
	for (i = 0; i < boyut; i++)
		cout << d[i] << "\t";

}

int main()
{
	int d[] = { 12,23,3,43,51,35,19,45 };
	int n = sizeof(d) / sizeof(d[0]);
	cout << "Dizi" << endl;
	diziYazdir(d, n);
	cout << endl;
	quickSort(d, 0, n - 1);
	cout << "Siralanmis Dizi" << endl;
	diziYazdir(d, n);
	return 0;
}