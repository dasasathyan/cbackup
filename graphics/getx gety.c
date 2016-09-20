//getx gety
#include<graphics.h>

#include<stdlib.h>

int main()
{
	int gd = DETECT, gm;
	int x, y;
	char a[100];

	initgraph(&gd,&gm,"C:\\TC\\BGI");

	moveto(200,200);

	circle(getx(), gety(), 50);

	getch();
	closegraph();
	return 0;
}
