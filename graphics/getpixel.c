//getpixel


#include<graphics.h>

main()
{
  int gd = DETECT, gm, color;
  char array[50];

  initgraph(&gd,&gm,"C:\\TC\\BGI");

  color = getpixel(0, 0);

  sprintf(array,"color of pixel at (0,0) = %d",color);
  outtext(array);

  getch();
  closegraph();
  return 0;
}
