#include <iostream>

using namespace std;


int main() {
	
	int i = 2;
	int toplam = 1;
	int sayi;
	cout << "Sayiyi Giriniz: "; cin >> sayi;
	
	while (i != int(sayi / 2 + 1)) {
		if (sayi%i == 0) {
			toplam += i;
			i += 1;
		}
	}

	if (toplam == sayi)
		cout<<"mükemmel";
	else
		cout<<"mükemmel deðil";


	return 0;
}