#include <iostream>
#include <string>
using namespace std;

class insan{
	virtual int maas()  = 0;
};

class hoca:public insan {

public:
	int maas() {
		cout << "Maasim 3000" << endl;
		return 0;
	}


};

class mudur :public hoca {

public:
	int maas() {
		cout << "Ben mudurum maasim 50000" << endl;
		return 0;
	}


};

int main() {

	mudur m;
	insan *p;
	hoca h;
	p = &m;
	p->maas();
	p = &h;
	p->maas()
		;

	return 0;
}