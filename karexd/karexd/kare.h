#ifndef KARE_H
#define KARE_H
#include <iostream>
using namespace std;

class kare {
private:
	int kenarA, kenarB, kenarC, kenarD;
	double aciAB, aciAD, aciBC, aciDC;

public:
	kare();
	~kare();
	void kareCiz();
};


#endif // !KARE_H
