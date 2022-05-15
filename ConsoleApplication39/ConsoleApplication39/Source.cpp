#include <iostream >
using namespace std;

int main() {
	int x[] =  { 0,1,2 };
	int y[]= { 1,2,2 };
	int d, dmin = 99999999,index1,index2;
	for (int i = 0; i < 2; i++) {

		for (int j = i + 1; j < 3; j++) {
			d = sqrt(pow( x[i]-x[j],2)+ pow(y[i]-y[j],2));
			if (d < dmin) {

				index1 = i;
				index2 = j;
			}
		}
	}

	cout << "x,y:( " << index1 << ", " << index2 << ")" << endl;
	return 0;
}