//width
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
 
int main()
{
   int gd = DETECT, gm, width;
   char array[100];
 
   initgraph(&gd, &gm, "C:\\TC\\BGI");
 
   width = textwidth("C programming");
 
   sprintf(array,"Textwidth = %d",width);
   outtext(array);
 
   getch();
   closegraph();
   return 0;
}
