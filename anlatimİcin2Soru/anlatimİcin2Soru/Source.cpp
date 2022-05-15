#include "Header.h"

int main() {
	Personal p;
	Manager m;	
	Personal *k;
	k = &m;
	k->calculateSalary();

return 0;
}