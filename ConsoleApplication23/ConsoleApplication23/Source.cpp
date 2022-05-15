#include <iostream>

using namespace std;

template <class A>
int kareAl(A x){

	return x*x;
}

class c {
protected:
	int b;
public:
	int l;


};

class k :private c {




};
class h :public k{



};


int main() {

	int x = 5;

	cout<<kareAl(x)<<endl;

	double a=5.3;

	cout<<kareAl(a)<<endl;


}