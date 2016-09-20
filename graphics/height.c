//height of the text

#include<graphics.h>


main()
{
    int gd = DETECT, gm, height;
    char array[100];

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    height = textheight("C programming");

    sprintf(array,"Textheight = %d",height);
    outtext(array);

    getch();
    closegraph();
    return 0;
}
