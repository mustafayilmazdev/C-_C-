/* Taþ-kaðýt-makas
Kodunuzu bu dosya içine yazýnýz
*/
#include<iostream>
#include <string>
using namespace std;

int main() {

	int sayi,sayac=0;
	cin >> sayi;
	while (sayi != 1) {
		if (sayi % 2 == 0) {
			sayi /= 2;
		}
		else {
			sayi *= 3;
			sayi++;
		}

		sayac += 1;
	}
	cout << sayac;
	return 0;
}