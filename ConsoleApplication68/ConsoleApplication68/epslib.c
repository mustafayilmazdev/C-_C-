#include "epslib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

#define PI 3.141592 // =180 


/*Çerçeveyi oluþturuyoruz*/
Figure * start_figure(double width, double height)
{
	Figure *fig = (Figure*)malloc(sizeof(Figure)); /* defined new figure */

	fig->urx = width / 2.0;
	fig->ury = height / 2.0;
	fig->llx = -width / 2.0;
	fig->lly = -height / 2.0;
	fig->text = NULL; /* defined as null in default */


	return fig;
}
/*Kalýnlýðý ve çözünürlüðü ayarlýyoruz*/
void set_thickness_resolution(Figure * fig, double thickness, double resolution) {

	fig->resolution = resolution;
	fig->thickness = thickness;

}

void set_color(Figure * fig, Color c) {

	fig->color.blue = c.blue;
	fig->color.green = c.green;
	fig->color.red = c.red;

}


void draw_fx(Figure * fig, double f(double x), double start_x, double end_x, double step_size) {
	Point2D *p; 
	p = (Point2D*)malloc(sizeof(Point2D)*end_x);
	fig->point = (Point2D*)malloc(sizeof(Point2D)*end_x);
	float i = 0;
	int k = 0;
	p = fig->point;
	for (i = start_x; i <= end_x; i += start_x + (end_x / step_size)) {
		p[k].x = i;
		p[k].y = f(i);
		p->nextp = fig->point->nextp;
		printf("%d %f %f %f \n",k, i, f(i),step_size);
		k++;
	}
	fig->say = k;


}

void draws(archetype a) {
	int center = (a.x / 2);

	FILE *fp;
	fp = fopen("deneme.eps", "w");
	fprintf(fp, "%%!PS-Adobe-3.0 EPSF-3.0\n");
	fprintf(fp, "%%BoundingBox: -250 -250 250 250\n");
	fprintf(fp, "0 0 moveto\n");
	fprintf(fp, "%d 0 lineto\n", a.x);
	fprintf(fp, "%d %d lineto\n",2* a.x, a.x);
	fprintf(fp, "%d %d lineto\n", a.x, 2 * a.x);
	fprintf(fp, "0 %d lineto\n",2* a.x);
	fprintf(fp, "%d %d lineto\n",-1* a.x, a.x);
	fprintf(fp, "0 0 lineto\n");



	fprintf(fp, "%d 0 moveto\n",center);
	fprintf(fp, "%d %d lineto\n", 2 * center, center);
	fprintf(fp, "%d 0 moveto\n", center);
	fprintf(fp, "0 %d lineto\n",center);

	fprintf(fp, "%d %d moveto\n", center * 3, center);
	fprintf(fp, "%d %d lineto\n",center*2,center);
	fprintf(fp, "%d %d moveto\n", center * 3, center);
	fprintf(fp, "%d %d lineto\n", center * 2, center*2);

	fprintf(fp, "stroke\n");
	fclose(fp);
}