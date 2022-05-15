#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#define SIZE 255
class strtype {
public:
	strtype();
	~strtype();
	void set(char *ptr);
	void show();
private:
	char *p;
	int len;
};
strtype::strtype()
{
	p = (char*)malloc(SIZE);
	if (!p)
	{
		cout << "bellekte yer ayýrma hatasý\n";
		exit(1);
	}
	*p = '\0';
	len = 0;
}
strtype::~strtype()
{
	cout << "p serbest býrakýlýyor";
	free(p);
}
void strtype::set(char *ptr)
{
	if (strlen(p) >= SIZE)
	{
		cout << "katar fazla buyuk\n";
		return;
	}
	strcpy(p, ptr);
	len = strlen(p);
}
void strtype::show()
{
	cout << p << "nin uzunlugu " << len;
	cout << "\n";
}
int main()
{
	strtype s1, s2;
	s1.set("bu bir deneme.");
	s2.set("C++ 'i seviyorum");
	s1.show();
	s2.show();
	return 0;
}