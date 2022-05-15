#include "MANAGER.h"

int main() {

	Personal p;
	Manager m;
	Employee e;

	p.calculateSalary();
	m.calculateSalary();
	e.calculateSalary();

	Personal *P;
	
//	x->calculateSalary();

	P = &m;

	P->calculateSalary();
	P = &e;
	P->calculateSalary();

	P->Personal::calculateSalary();
	return 0;
}