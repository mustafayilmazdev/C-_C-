#include <iostream>
#include <string>

using namespace std;
//int main() {
//	string adSoyad;
//	cout << "Adinizi Soyadinizi giriniz: ";
//	getchar();
//	getline(cin, adSoyad);
//	
//	cout << adSoyad << endl;
//
//}

template <class T>
T kuvvetAl(T &taban, T &ust)
{
	T sonuc = 1;

	for (int i = 1; i <= ust; i++) {
		sonuc *= taban;
	}
	return sonuc;



}

int main() {
	int s1 = 5;
	float s2=3.7;
	cout << "Sonuc: " << kuvvetAl(s1, s2);
	
}