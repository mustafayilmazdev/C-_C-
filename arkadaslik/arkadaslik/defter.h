#ifndef DEFTER_H
#define DEFTER_H
#include  <iostream>
#include <string>
using namespace std;

class defter {

private:
	string tur,notlar;
	int sayfa;
	
public:
	defter(string= "Burasi kareli aq",const int=80,string= "Bos");
	//~defter();
	//void bilgiYaz();
};

#endif //!DEFTER_H