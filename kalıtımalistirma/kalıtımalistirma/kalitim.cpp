#ifndef KALITIM_H
#define KALITIM_H
#include <iostream>
#include <string>
using namespace std;

class insan {
public:
	string meslek;
	int age;
	insan() :meslek("Yazilimci"), age(22){}
	void printf() {
		cout << meslek << " " << age << endl;
	}
};

int main() {

	insan i;
	i.printf();


	return 0;
}

#endif //!KALITIM_H