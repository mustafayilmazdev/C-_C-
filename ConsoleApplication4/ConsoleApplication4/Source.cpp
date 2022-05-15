#include <iostream>
#include <string>
using namespace std;

class student {
public:

	string name;

	void tellName() {
		cout << "Benim adim " << name << endl;
	}



};

int main() {

	student  x;
	cout << "Ogrenci adini giriniz: ";
	cin >> x.name;
	cout << "Adini soyle ogrenci " << x.name << endl;
	x.tellName();

	






}