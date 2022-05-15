#include "epslib.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

FILE *fp;

int main() {


	Figure *fig;
	Color c;
	//fig = (Figure*)malloc(sizeof(Figure));
	fig=start_figure(500.0,500.0);
	//printf("%f %f %f %f %f %f\n", fig[0].llx, fig->lly, fig->urx, fig->ury, fig->thickness, fig->resolution);
	set_thickness_resolution(fig, 20.0, 1.0);
	//printf("%f %f %f %f %f %f\n", fig[0].llx, fig->lly, fig->urx, fig->ury, fig->thickness, fig->resolution);
	c.blue = 0.5;
	c.green = 0.5;
	c.red = 0.5;
	set_color(fig, c);
	//printf("%f %f %f\n", fig->color.blue, fig->color.green, fig->color.red);
	
	
	
	
	/*DRAW FX BEGIN*/
	//draw_fx(fig, sin , 1.0, 250,1000000);
	//int s = 0;
	//printf("Main\n");
	//fp = fopen("sinx.eps", "w");
	//fprintf(fp,"%%!PS-Adobe-3.0 EPSF-3.0\n");
	//fprintf(fp,"%%BoundingBox: -250 -250 250 250\n");
	//fprintf(fp,"0 setlinewidth\n");
	//fprintf(fp,"0.0 0.0 0.0 setrgbcolor\n");
	//fprintf(fp, "0 0 moveto\n");
	//
	//for (s =0; s < fig->say; s++) {
	//	printf("%d %f ",s, fig->point[s].x);
	//	printf("%f\n", fig->point[s].y);
	//	fprintf(fp,"%f %f lineto\n",fig->point[s].x ,fig->point[s].y);

	//	
	//		
	//}
	//fprintf(fp,"stroke\n");
	//fclose(fp);

	/*DRAW FX END*/

	archetype a;
	/*a = (archetype*)malloc(sizeof(archetype));*/
	a.x = 120;
	draws(a);



		return 0;
}