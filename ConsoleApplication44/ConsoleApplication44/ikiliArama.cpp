#include <iostream>
using namespace std;

int ikiliArama(int D[], int N, int Aranan)
{
	
	int Ortadaki, Sol = 0, Sag = N-1 ;
	while (Sol <= Sag)
	{
		Ortadaki = (Sol + Sag) / 2;
		if (Aranan == D[Ortadaki])
			return Ortadaki;
		else if (Aranan>D[Ortadaki])
			Sol = Ortadaki + 1;
		else
			Sag = Ortadaki - 1;
	}
	return -1;
}
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
		cout << d[i] << endl;

}


int main()
{
	int indis, Ara, B[] = { 13,25,365,4457,5234,6235,76,8436,95465,10867,1197,12967,138564,147,15546,16546,17534623,1877,1934,201};
	int n = sizeof(B) / sizeof(B[0]);
	quickSort(B, 0, n-1);
	diziYazdir(B, n);
	cout << "Aranan sayiyi girin,z: ";
	cin >> Ara;
	indis = ikiliArama(B, n, Ara);
	if (indis == -1)
		cout << "Aranan sayi bulunamadi!"<<endl;
	else
		cout << "Aranan sayi " << indis << " indisli elemandir."<<endl;
	
	return 0;
}