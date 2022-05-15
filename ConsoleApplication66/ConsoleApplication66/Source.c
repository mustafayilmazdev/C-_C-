#include "eps.h"

FILE *fp;

int main() {
	/*Figure *f;
	f = start_figure(100, 100);
	printf("Hello World");
	fp = fopen("deneme.eps","w");
	fprintf(fp,"%%!PS-Adobe-3.0 EPSF-3.0\n");
	fprintf(fp, "%%%BoundingBox: %f %f %f %f\n", f->sagustx,f->sagusty,f->solaltx,f->solalty);
	fprintf(fp,"stroke\n");
	fclose(fp);*/
	printf("1\n");
	//f(5);
	Color c;
	printf("1\n");
	c.red = 0;
	printf("2\n");
	c.blue = 0;
	printf("3\n");
	c.green = 0;
	printf("4\n");
	Figure *fig = start_figure(500.0, 250.0);
	printf("5\n");
	set_thickness_resolution(fig, 20.0, 0.5);
	printf("6\n");
	set_color(fig, c);
	printf("7\n");
	
	draw_fx(fig, function(1.0), 0, 100);
	
	printf("8\n");
	
	export_eps(fig, "bak.eps");
	printf("9\n");
	return  0;
}