#include <stdio.h>


typedef struct 
{
	double x, y;
	struct  point2D *nextp;
	int jump;
}point2D;


typedef struct
{

	double red, green, blue;

}Color;

typedef struct {


	double solaltx, solalty, sagustx, sagusty,resolution,thickness,width,height;
	Color color;
	point2D *p;
}Figure;

Figure * start_figure(double width, double height);