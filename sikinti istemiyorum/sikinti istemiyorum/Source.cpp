#include <iostream>
using namespace std;


class soyut {
public:
	virtual double alan() = 0;

};

class kare : public soyut {
protected:
	int edge;
public:
	kare(int e) :edge(e) {}
	double alan() {
		return edge*edge;
	}

};

class kup :public kare {

public:
	int x;
	kup(int e) :kare(e) {	}
	double alan(){
		return (6*kare::alan());
	}


};



int main() {
	soyut *s;
	kare k(5);
	s = &k;
	cout<<s->alan()<<endl;
	kup b(5);
	s = &b;
	cout<<s->alan()<<endl;



	return 0;
}
