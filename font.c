#include<graphics.h>
#include<stdio.h>

main()
{
int gd = DETECT, gm, x = 25, y = 25, font = 0;
initgraph(&gd,&gm,"C:\\TC\\BIN");

for ( font = 0 ; font <= 10 ; font++)
{
settextstyle(font, HORIZ_DIR, 1);
outtextxy(x, y, "Text with different fonts");
y = y + 25;
}

getch();
closegraph();
return 0;
}
