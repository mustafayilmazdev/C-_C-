#include "Ucgen.h"

int main() {
	
	ucgen y;
	int b;

	cout << "Bir deger giriniz: ";
	cin >> b;
	cout << "Deger: " << b << endl;

	y.setUlas(b);
	y.goster();	

}