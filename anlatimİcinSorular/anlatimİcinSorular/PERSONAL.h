#ifndef PERSONAL_H
#define PERSONAL_H
#include <iostream>
#include <string>
using namespace std;
class Personal {
protected:
	string name;
	int salary;
public:
	Personal();
	void virtual calculateSalary();
};
#endif // !1
