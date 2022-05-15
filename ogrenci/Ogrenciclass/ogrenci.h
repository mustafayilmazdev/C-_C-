#ifndef OGRENCI_H
#define OGRENCI_H
#include <iostream>
#include <string>
using namespace std;

class ogrenci {	
	friend class ogretmen;
	int vize, ds;
public:
	string ad;
	int numara;
	double ortalama;
	

	
};

#endif //!OGRENCI_H