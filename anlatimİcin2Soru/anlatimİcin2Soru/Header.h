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
	Personal() {
		
	}
	void virtual calculateSalary() {
		salary = 1000;
		//	cout << "Salary did not found" << endl << endl;
	}
};


class Manager :public Personal {
public:
	Manager() {	}
	void calculateSalary() {

		Personal::calculateSalary();

		salary +=salary*1.5;
		cout << salary;
	}

};

class Employee :public Personal {


public:
	Employee();
	void calculateSalary();
};
#endif // !1