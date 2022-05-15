#include <iostream>

using namespace std;

template <typename T> 
int f(T x, T y)
{
	T c = 0;
	 c= x + y;
	 return c;
}

int main() {
	int l=189,k=27;

	cout << f(l, k) << endl;


	
	

}