//set bkcolor
#include<graphics.h>


main()
{
    int gd = DETECT, gm;


    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setbkcolor(RED);

    getch();
    closegraph();

}
