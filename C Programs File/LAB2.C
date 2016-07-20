#include<stdio.h>
#include<conio.h>
#include <gaurav.h>
#include<stdlib.h>
int main()
 {
   int ch,pid,flag=0;
   float num,weight,rate;
   char item[25],in[10];
   double amount;
system("cls");
   while(1)
    {
     fflush(stdin);
    // clrscr();
    //head();
     printf("\n\n 1: Purchase.");
     printf("\n\n 2: Billing.");
     printf("\n\n 3: Exit.");
     do
     {
      printf("\n\n Enter your choice : ");
      gets(in);
     }while(digit(in)==0);
     ch=atoi(in);
     switch(ch)
      {
       case 1:
	       clrscr();
	       head();
	       printf("\n\n --------- Choose product to purchase -------");
	       printf("\n\n\n 1: Sugar.");
	       printf("\n\n 2: Rice.");
	       printf("\n\n 3: Dal.");
	       printf("\n\n 4: Coffee.");
	       printf("\n\n 5: Tea.");
	       do
	       {
		printf("\n\n\n Enter the product no. : ");
		gets(in);
	       }while(digit(in)==0);
	       pid=atoi(in);
	       do
	       {
		printf("\n\n Enter the quantity : ");
		gets(in);
	       }while(float_chk(in)==0);
	       num=atof(in);
	       switch(pid)
		 {
		   case 1: rate=15.50;strcpy(item,"Sugar");break;
		   case 2: rate=35.00;strcpy(item,"Rice");break;
		   case 3: rate=55.00;strcpy(item,"Dal");break;
		   case 4: rate=155.20;strcpy(item,"Coffee");break;
		   case 5: rate=110.50;strcpy(item,"Tea");break;
		   default: printf("Invalid Input ...");
		 }
	       flag=1;
	       break;
       case 2:
	       clrscr();
	       head();
	       if(flag==0)
		 {
		   printf("\n\n Sorry, No Product Choosed...");
		 }
	       else
		 {
		   amount=(double)rate*num;
		   printf("\n\n Sl.no.\tProduct Name\tRate\tQty\tAmount");
		   line1();
		   printf("\n 1\t%s\t\t%.2f\t%.2f\t%.2f",item,rate,num,amount);
		   line1();
		   printf("\n\n\n Total Amount : %.2f",amount);
		   flag=0;
		 }
	       getch();
	       break;
       default:exit(0);
      }
    }
   getch();
 }
