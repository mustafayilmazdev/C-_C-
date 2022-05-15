#include "eps.h"
Figure * start_figure(double width, double height) {


	Figure *f = (Figure*)malloc(sizeof(Figure));
	f-> sagustx = width / 2.0;
	f->sagusty = height / 2.0;
	f->solaltx = -width / 2.0;
	f->solalty = -height / 2.0;
	f->width = width;
	f->height=height;
	return f;
}

void set_thickness_resolution(Figure *fig, double resolution, double thickness)
{
	fig->resolution = resolution;
	fig->thickness = thickness;
}

void set_color(Figure * fig, Color c)
{
	fig->color.red = c.red;
	fig->color.green = c.green;
	fig->color.blue = c.blue;
}


double function(double x) {
	printf("f1\n");


	int y = 2.0*x;
	printf("f2\n");
	return y;

}

void draw_fx(Figure * fig, double f(double x), double start_x, double end_x)
{

	
	point2D *headp; 

	headp = (point2D*)malloc(sizeof(point2D));
	
	
	headp->x = start_x;
	printf("%f", headp->x);
	headp->y = function(start_x);

	for (double x = start_x + (1.0 / fig->resolution);	x <= end_x;	x += (1.0 / fig->resolution))
	{		
	
		point2D *lastp, *newp;
		lastp = headp;
		while (lastp->nextp!=NULL)
		{
			lastp = lastp->nextp;
			
		}
		newp = (point2D*)malloc(sizeof(point2D));
		newp->x = x;
		newp->y = function(x);		
		newp->nextp = NULL;
		lastp->nextp = newp;
	}
	
	fig->p = headp; 

}


void export_eps(Figure * fig, char * file_name)
{
	point2D *tmp;
	tmp=(point2D*)malloc(sizeof(point2D));
	tmp->y = 0;
	tmp->x = 0;
	FILE *fp;
	fp = fopen(file_name, "w");
	fclose(fp);
	
	fp = fopen(file_name, "a");

	fprintf(fp, "%%!PS - Adobe - 3.0 EPSF - 3.0");
	fprintf(fp, "\n%%%%BoundingBox: %d %d %d %d", (int)fig->solaltx, (int)fig->solalty, (int)fig->width, (int)fig->height);
	fprintf(fp, "\n%d setlinewidth", (int)fig->thickness);
	fprintf(fp, "\n%.1f %.1f %.1f setrgbcolor", fig->color.red, fig->color.green, fig->color.blue);
	fprintf(fp, "\n%.1f %.1f moveto", fig->p->x + fig->width / 2.0, fig->p->y + fig->height / 2.0);

	for (tmp = fig; tmp != NULL; tmp = tmp->nextp)
	{
		printf("Burada kaliyor!\n");
		fprintf(fp, "\n%.1f %.1f  lineto", tmp->x + fig->width / 2.0, tmp->y + fig->height / 2.0);
		printf("Burada kaliyor!\n");
	}
	printf("Burada kaliyor!\n");
	fprintf(fp, "\nstroke\n");
	fclose(fp);
}