#ifndef TOPLAMA_H
#define TOPLAMA_H

#include <iostream>
using namespace std;

inline void f() {
	int a, b,c;

	cout << "************************Girilen iki sayiyi Toplama programi...*****************************" << endl;
	cout << "Ilk sayiyi giriniz: ";
	cin >> a;
	cout << "Ikinci sayiyi giriniz: ";
	cin >> b;	
	
	 c=a + b;
	 cout << "Sayilarin toplami: " << c << endl;
}

#endif //!TOPLAMA_H