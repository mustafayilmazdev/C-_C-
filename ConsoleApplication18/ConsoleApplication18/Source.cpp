#include "Header.h"

void main()
{
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "\\tc\\bgi"); //To graphics mode
	Line Line1(1, 1, 100, 250);
	Circle Circle1(100, 100, 20);
	Rectangle Rectangle1(30, 50, 250, 140);
	Circle Circle2(300, 170, 50);
	show(Circle1);
	getch();
	show(Line1);
	getch();
	show(Circle2);
	getch();
	show(Rectangle1);
	getch();
	closegraph();
}