#ifndef DEFTER_H
#define DEFTER_H
#include  <iostream>
#include <string>
using namespace std;

class defter {
	friend class kalem;

private:
	string tur, notlar;
	int sayfa;

public:
	defter(string = "Kareli", const int = 80, string = "Bos");
	~defter();
	void bilgiYaz();
};

#endif //!DEFTER_H