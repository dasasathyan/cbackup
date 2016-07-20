#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
#include"gaurav.h"
union tempo
 {
   char num[10];
   int total;
 }*t1;
struct product
 {
  char name[25];
  int price;
 };
void input(struct product *pro,int n,int i)
 {
   if(i==n)return;
   head();
   flushall();
   printf("\n\n\n    Product # %d",i+1);
   do
   {
   printf("\n\n\n Enter Product Name : ");
   gets(pro->name);
   }while(alpha(pro->name)==0);
   do
   {
   printf("\n Enter Price : ");
   gets(t1->num);
   }while(digit(t1->num)==0);
   pro->price=atoi(t1->num);

   input(pro+1,n,i+1);
 }
 void output(struct product *pro,int n,int i)
 {
   if(i==n)return;
   printf("\n %-15d %-15.15s %-15d",i+1,pro->name,pro->price);
   output(pro+1,n,i+1);
 }
void billing(struct product *pro,int *sel,int *selqty,int n)
 {
   if(n==0)
    {
     line1();
     printf("\n\n\n Total Payable Bill : %d",t1->total);
     printf("\n\n\n Thanks Visit Again!!!");
     return;
    }
   t1->total+=((pro+*(sel))->price)*(*(selqty));
   printf("\n\n %-15.15s %-15d %-15d %-15d",(pro+*(sel))->name,(pro+*(sel))->price,*(selqty),((pro+*(sel))->price)*(*(selqty)));
   billing(pro,sel+1,selqty+1,n-1);
 }
void main()
 {
   int n=0,i,j,newn=0,ch,*sel,*selqty;
   char cho,num[10];
   struct product *pro;
   clrscr();
   head();
   do
   {
   printf("\n\n\n Enter the no. of product : ");
   gets(num);
   }while(digit(num)==0);
   n=atoi(num);
   pro=(struct product *)calloc(n,sizeof(struct product));
   input(pro,n,0);
   while(1)
   {
   clrscr();
   head();
   printf("\n\n\n *********** MENU **************");
   printf("\n\n\n 1: Add Product.");
   printf("\n\n 2: Display.");
   printf("\n\n 3: Billing.");
   printf("\n\n 4: Exit\n\n");
   line1();
   do
   {
   printf("\n\n Enter the choice : ");
   gets(num);
   }while(digit(num)==0);
   ch=atoi(num);
   switch(ch)
    {
     case 1:
	head();
	do
	{
	printf("\n\n\n No. of product to add : ");
	gets(num);
	}while(digit(num)==0);
	newn=atoi(num);
	pro=(struct product *)realloc(pro,n+newn*sizeof(struct product));
	head();
	input(pro+n,n+newn,n);
	n=n+newn;
	break;
     case 2:
	clrscr();
	head();
	printf("\n\n\n %-15.15s %-15.15s %-15.15s","Serial No.","Product Name","Price");
	line1();
	output(pro,n,0);
	line1();
	getch();
	break;
     case 3:
	clrscr();
	head();
	printf("\n\n\n %-15.15s %-15.15s %-15.15s","Serial No.","Product Name","Price");
	line1();
	output(pro,n,0);
	line1();
	i=0;
	sel=(int *)calloc(i,sizeof(int));
	selqty=(int *)calloc(i,sizeof(int));
	do
	{
	i++;
	sel=(int *)realloc(sel,i+sizeof(int));
	selqty=(int *)realloc(selqty,i+sizeof(int));
	do
	{
	do
	{
	printf("\n\n Select the item :");
	gets(num);
	}while(digit(num)==0);
	*(sel+i-1)=atoi(num);
	}while(*(sel+i-1)>n||*(sel+i-1)<1);
	*(sel+i-1)-=1;
	do
	{
	printf("\n Quantity : ");
	gets(num);
	}while(digit(num)==0);
	*(selqty+i-1)=atoi(num);
	printf("\n Want to purchase more : ");
	cho=getche();
	}while(cho=='y');
	clrscr();
	head();
	printf("\n\n\n %-15.15s %-15.15s %-15.15s %-15.15s","Product Name","Quantity","Price","Total Price");
	line1();
	t1->total=0;
	billing(pro,sel,selqty,i);
	getch();
	break;
     case 4:
	exit(0);
    }
   }
 }