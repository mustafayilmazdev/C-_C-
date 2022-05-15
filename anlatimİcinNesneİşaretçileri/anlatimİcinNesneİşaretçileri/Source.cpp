#include <iostream>
#include <cstring>
using namespace std;

class person // class of persons
{
	char *name; // person's name
public:
	person(); //Default Constructor
	void setName(char *); // set the name
	void printName() // print the name
	{
		cout << "Name is:" << name << endl;
	}
	~person()
	{
		cout << "Destructor" << endl;
		delete name;
	}
};
person::person()
{
	cout << "Constructor" << endl;
	name = new char;
	name = '\0';
}

void person::setName(char *n)
{
	delete name;
	name = new char[strlen(n)+1];
	strcpy(name, n);
}int main()
{
	person* persPtr = new person[3];
	
	
	persPtr->setName("Person1");
	(persPtr + 1)->setName("Person2");
	(persPtr + 2)->setName("Person3");
	
	persPtr->printName();
	(persPtr + 1)->printName();
	(persPtr + 2)->printName();
	delete[] persPtr;
	
	
	return 0;
}