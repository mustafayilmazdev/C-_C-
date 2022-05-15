#ifndef SEKIL_H
	#define SEKIL_H
#include <iostream>
#define PI 3.141592
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <Windows.h>
using namespace std;
class sekil {
	virtual void alanhesapla() = 0;
public:
	sekil() {
		cout << "sekil constructor" << endl;
	}
};

#endif //!SEKIL_H