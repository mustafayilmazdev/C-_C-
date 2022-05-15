#include <iostream>
#include <string>
using namespace std;

class ogretmen{
protected:
	string ad;
public:
	ogretmen(string AD) {
		ad = AD;
		cout << "Ogretmen " << ad<<endl;
	}
	void print() {
		cout << "Private aktarildi.Public olacak" << endl;
	}
	void print2() {

		cout << "Private aktarildi.Private kalacak" << endl;
	}

};
class mudur:private ogretmen {
public: 		
	mudur(string AD):ogretmen(AD) {
		ad = AD;
		cout << "Mudur "<<ad<<endl;
	}
	ogretmen::print;
	ogretmen::print2;

};

int main() {

	mudur m("Mustafa");
	m.print();
	m.print2();
	return 0;
}