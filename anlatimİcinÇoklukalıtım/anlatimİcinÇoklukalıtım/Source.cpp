#include <iostream>
class Base1 { // Base 1
public:
	int a;
	void fa1() {};
	char  *fa2(int) { return 0; };
};
class Base2 { // Base 2
public:
	int a;
	 char  *fa2(int, char) {};
	int fc() { return 0; };
};



class Deriv :  public Base1,  public Base2 {
public:
	int a;
	float fa1(float) { return  0; };
	int fb1(int) {};
};

int main()
{
	Deriv d;
	d.a = 4; //Deriv::a
	float y = d.fa1(3.14); //Deriv::fa1
	int i = d.fc(); // Base2::fc
	char * c = d.Base1::fa2(1);
	return 0;

}