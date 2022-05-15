#include "kare.h"

kare::kare() {
	cout << "Yaratilacak karenin kenar uzunlugunu giriniz: ";
	cin >> kenarA;
	kenarD = kenarC = kenarB = kenarA;
	kareCiz();

}
kare::~kare() {

	cout << "Islem tamamlandi ve kare gebertildi xd" << endl << endl;

}

void kare::kareCiz() {
	cout << "\n";
	for (int i = 0; i < kenarA; i++) {
		for (int j = 0; j < kenarA; j++) {
			cout << "*";
				}
		cout << "\n";
	}

}