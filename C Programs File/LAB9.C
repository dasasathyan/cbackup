#include<stdio.h>
#include<conio.h>
#include"gaurav.h"
void main()
 {
   char stkname[3][3][25],num[10];
   int oldstk[3][3],newstk[3][3],totstk[3][3],i,j;
   clrscr();
   head();
   printf("\n\n\n Enter the name of the stock :");
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      {
       do
       {
       printf("\n\n Item %d ,Size %d : ",i+1,j+1);
       gets(stkname[i][j]);
       }while(alpha(stkname[i][j])==0);
      }
   clrscr();
   head();
   printf("\n Enter quantity of old stock : \n");
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      {
	do
	{
	 printf("\n %s : ",stkname[i][j]);
	 gets(num);
	}while(digit(num)==0);
	oldstk[i][j]=atoi(num);
      }
   head();
   printf("\n Enter quantity of added stock : \n");
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      {
	do
	{
	 printf("\n %s : ",stkname[i][j]);
	 gets(num);
	}while(digit(num)==0);
	newstk[i][j]=atoi(num);
      }

   for(i=0;i<3;i++)
     for(j=0;j<3;j++)
      totstk[i][j]=oldstk[i][j]+newstk[i][j];
   clrscr();
   head();
   printf("\n Total quantity of stock : \n");
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      printf("\n\n %-15.15s : %-15d",stkname[i][j],totstk[i][j]);

  getch();
 }