#include "kalem.h"

kalem::kalem(string bt,string br,double buc) {
	tur = bt;
	renk = br;
	uc = buc;
	cout << tur << " turunde " << br << " renkli " << buc << " Uclu kalem olusturuldu" << endl;
}

kalem::~kalem() {

	cout << "\n\nKalem OLDU aminakoyim" << endl;

}

void kalem::yaziYaz(defter &d) {

	cout << "Notunuzu giriniz: ";
	getchar();
	getline(cin, d.notlar);

}