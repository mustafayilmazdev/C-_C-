#include <iostream>

using namespace std;
//Girilen sayıya kadarki asal sayıları çıktı olarak verir.
int main() {

	int sayi = 0, durum = 1;
	cout << "Sayi : ";
	cin >> sayi;

	for (int i = 2; i < sayi; i++) {
			
		for (int j = 2; j < i; j++) {

			if (i%j == 0) {
				durum = 0;
				break;
			}
		
		}
		if (durum) {
			cout << i << endl;
			
		}
		durum = 1;

	}

	

	return 0;
}