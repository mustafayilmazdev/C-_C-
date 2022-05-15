#include <iostream>

using namespace std;

inline int x(int y, int z) { return (y <= z) ? z : y; }

int main() {
	int k, l,buy;
	
	cout << "Bir deger giriniz: ";
	cin >> k;
	cout << "Baska bir deger giriniz: ";
	cin >> l;

	buy = x(k, l);
	cout << "BUYUK SAYI: " << buy << endl;



}