#include <iostream>

using namespace std;


int fib(int x) {
	if (x == 1) {
		return 1;
	}
	if (x == 0) {
		return 0;
	}
	return fib(x - 1) + fib(x - 2);
}

int main() {
	int f;
	cout << "Hesaplanacak Degeri Giriniz: ";
	cin >> f;
	cout << "Deger: " << fib(f) << endl;

}
