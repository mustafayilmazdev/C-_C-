#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#define PI 3.141592
using namespace std;

class shape {
public:
	void area();
	virtual void perimeter()=0;	
};



#endif //! SHAPE_H