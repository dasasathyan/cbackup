#include<stdio.h>
#include<conio.h>
#include"gaurav.h"
struct pro
 {
   int pro_id;
   char pro_name[20];
   int pro_rate;
 };
void main()
 {
   int i,n,flag=0;
   char ch,name[20],num[10];
   struct pro p1;
   FILE *f1;
   clrscr();
   head();
   do
   {
    printf("\n Enter the no. of product : ");
    gets(num);
   }while(digit(num)==0);
   n=atoi(num);
   f1=fopen("product.dat","w+");
   if(f1==NULL)
    {
      printf("\n\nCannot open file....");
      return;
    }
   for(i=0;i<n;i++)
    {
      clrscr();
      head();
      flushall();
      printf("\n\n       Product Detail # %d",i+1);
      do
      {
      printf("\n\n\n Enter the product name : ");
      gets(p1.pro_name);
      }while(alpha(p1.pro_name)==0);
      do
      {
      printf("\n Enter the product no. : ");
      gets(num);
      }while(digit(num)==0);
      p1.pro_id=atoi(num);
      do
      {
      printf("\n Enter the product rate : ");
      gets(num);
      }while(digit(num)==0);
      p1.pro_rate=atoi(num);
      fprintf(f1,"\n %s \t %d \t %d",p1.pro_name,p1.pro_id,p1.pro_rate);
    }
    //fclose(f1);
    clrscr();
    head();
    printf("\n\n\n Do you want to search ? ");
    ch=getche();
    do
    {
    flag=0;
    if(ch=='y'||ch=='Y')
    {
     //f1=fopen("product.dat","r");
     head();
     flushall();
     printf("\n\n\n Enter the Name : ");
     gets(name);

     head();
     fseek(f1, 0, SEEK_SET);
     for(i=0;i<n;i++)
     {
      fscanf(f1,"%s %d %d",p1.pro_name,&p1.pro_id,&p1.pro_rate);
      if(strcmp(name,p1.pro_name)==0)
      {
       printf("\n\n Search found :\n\n");
       printf("\n Product name : %s",p1.pro_name);
       printf("\n\n Product no. : %d",p1.pro_id);
       printf("\n\n Product rate : %d",p1.pro_rate);
       getch();
       flag=1;
      }
     }
     if(flag==0)
      {
       printf("\n\n\n Not found...");
       getch();
      }
     head();
     printf("\n\n Want to continue : ");
     ch=getche();
    }
    }while(ch=='y');
    fclose(f1);
   getch();
 }
