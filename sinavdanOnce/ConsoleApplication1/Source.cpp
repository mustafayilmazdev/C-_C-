#include <iostream>

using namespace std;

inline int f(int x, int y) {
	return x*y;

}

int main() {

	int k = 5, y = 3;

	cout << "Carpim: " << f(k, y) << endl;
}

