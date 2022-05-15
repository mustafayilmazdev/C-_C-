#include <iostream>
#include <conio.h>
#include <ostream>
using namespace std;
class CokTerimli {
	enum { Azm_US = 100 };
	friend int main();
public:
	//friend ostream &operator <<();
	CokTerimli();
	void sifirCokTerimli();
	CokTerimli operator+(const CokTerimli & st) const;
	CokTerimli operator*(const CokTerimli & st) const;
	void goster() const;
private:
	int katSayilar[Azm_US];
	int usDerecesi;
};