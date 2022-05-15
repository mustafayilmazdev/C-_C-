
#ifndef EPSLIB_H
#define EPSLIB_H

typedef struct Point2D {
	double x, y;
	struct Point2D *nextp; /* next point */
	int jump; /* flag for to jump that point without drawing any line/ -> for moveto */
}Point2D;

typedef struct {
	double red, green, blue; /* RGB */
}Color;

typedef struct Text {
	double x, y, /* starting points of txt */size;
	int number; /* 0-999 */
	struct Text *nextt; /* next text */

}Text;

typedef struct {
	double urx, ury, llx, lly, /* upper right(x,y) and lower_left(x,y) */
		resolution,
		thickness;
	int say;
	Color color;
	Point2D *point;
	Text *text;
}Figure;

typedef struct Tree {
	int number;
	struct Tree *branch1, *branch2;
}Tree;


typedef struct archetype {

	int x; //  square
	int y;  // hexagon


}archetype;




Figure * start_figure(double width, double height); /*þekil çerçevesini ayarlayacak fonksiyon */
void set_thickness_resolution(Figure * fig, double thickness, double resolution); /*çizimin kalýnlýðýný ve çözünürlüðünü ayarlayacak fonksiyon*/
void set_color(Figure * fig, Color c);
void draw_fx(Figure * fig, double f(double x), double start_x, double end_x, double step_size);
void draw_polyline(Figure *fig, Point2D * poly_line, int n);
void draws();





#endif 