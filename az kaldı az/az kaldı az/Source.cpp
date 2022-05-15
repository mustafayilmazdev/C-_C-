#include <iostream>
#include <string>
using namespace std;

class x {

	string name;
public:
	x();
	void setName(string ad) {

		name = ad;

	}

	string getName() {

		return name;
	}



};



int main() {

	x y[10];
	y->[2]setName("Mustafa");
	cout << "Ad: " << y->getName() << endl;

	return 0;
}

x::x()
{


}
