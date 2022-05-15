#include <iostream>
using namespace std;

//class Square { // Temel sinif
//protected:
//	double edge;
//public:
//	Square(double e) :edge(e) { } // temel sinif kurucusu
//	virtual virtual double Area() { return(edge * edge); }
//};
//class Cube : public Square { // Turetilmis sinif
//public:
//	Cube(double e) :Square(e) {} // Turetilmis sinif kurucusu
//	double Area() { return(6.0 * edge * edge); }
//}; void main() {
//	Square S(2.0);
//	Cube C(8.0);
//	Square *ptr;
//	char c;
//	cout << "Square or Cube" << endl;
//		cin >> c ;
//		if (c == 's') {
//			ptr = &S;
//		}
//		else {
//			ptr = &C;
//		}
//	cout<<	ptr->Area()<<endl
//			;
//}
class Square { // Temel sinif
protected:
	double edge;
public:
	Square(double e) :edge(e) { } // temel sinif kurucusu
	virtual virtual double Area() { return(edge * edge); }
	Square *next;
};
class Cube : public Square { // Turetilmis sinif
public:
	Cube(double e) :Square(e) {} // Turetilmis sinif kurucusu
	double Area() { return(6.0 * edge * edge); }
};

void main() {
	Cube c1(2);
	Square s1(4);
	Cube c2(3);
	Square s2(1);
	Square *listPtr; // Pointer of the linked list
					 /*** Construction of the list ***/
	listPtr = &c1;
	c1.next = &s1;
	s1.next = &c2;
	c2.next = &s2;
	s2.next = 0L;
	/*** Printing all elements of the list ***/
	while (listPtr) {
		cout << listPtr->Area() << endl;
		listPtr = listPtr->next;
	}
}