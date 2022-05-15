#include<iostream>
#include<string>
using namespace std;

template<typename T>
void yazdir(T deger)
{
	cout << "deger : " << deger << endl;
}

int main()
{
	int i = 5;
	double d = 5.5;
	string s("Merhaba Dunya");
	bool b = true;

	yazdir(i); // T int
	yazdir(d); // T double
	yazdir(s); // T string
	yazdir(b); // T bool
	return 0;
}