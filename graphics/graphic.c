#include<graphics.h>
#include<stdio.h>
int main(){
  int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;
  initgraph(&gd,&gm,NULL);
//  initwindow(480,640,"title");
//  line(2,4,200,250);
circle(30,40,8);
setcolor(BLUE);
arc(200,100,400,500,60);
line(3,4,5,7);
setbkcolor(RED);
ellipse(50,150,0,350,70,40);
  getch();
}
