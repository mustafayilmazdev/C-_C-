#include <stdio.h> 
#include <stdlib.h> 
#include <graphics.h> 
#include <math.h> 

int main()
{

	initwindow(500, 500, "Window Text", 0, 0);

	int x1 = 100, y1 = 300, i;

	for (i = 0; i<4; i++)
	{
		circle(x1 + 40 * i, y1, 50);

	}

	getch();
	return 0;

}
