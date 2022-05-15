#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape { // Abstract base class
protected:
	int x, y;
public:
	Shape(int x_in, int y_in) { x = x_in; y = y_in; } // Constructor
	virtual void draw() = 0; // pure virtual function
};
class Line :public Shape { // Line class
protected:
	int x2, y2; // End coordinates of line
public:
	Line(int x_in, int y_in, int x2_in, int y2_in) :Shape(x_in, y_in) {
		x2 = x2_in;
		y2 = y2_in;
	}
	void draw() { Line(x, y, x2, y2); } // virtual draw function
};

class Rectangle :public Line { // Rectangle class
public:
	Rectangle(int x_in, int y_in, int x2_in, int y2_in) :
		Line(x_in, y_in, x2_in, y2_in) {}
	void draw() { Rectangle(x, y, x2, y2); } // virtual draw
};
class Circle :public Shape { // Circle class
protected:
	int radius;
public:
	Circle(int x_cen, int y_cen, int r) :Shape(x_cen, y_cen) {
		radius = r;
	}
	void draw() { Circle(x, y, radius); } // virtual draw
};
/* A function to draw different shapes ***/
void show(Shape &shape) { // Which draw function will be called?
	shape.draw(); // It 's unknown at compile-time
};



