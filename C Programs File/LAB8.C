#include<stdio.h>
#include<conio.h>
#include"gaurav.h"

void main()
 {
   char emp[10][25],num[10];
   int absent,n,i,ch,conti;
   long int salary[10];
   float pay;
   clrscr();
   head();
   printf("\n\n No. of worker in shop : ");
   scanf("%d",&n);
   printf("\n Enter worker name and salary of employee :\n");
   for(i=0;i<n;i++)
    {
     do
     {
      flushall();
      head();
      printf("\n\n\n Employee detail # %d",i+1);
      printf("\n\n\n Name : ");
      gets(emp[i]);
     }while(alpha(emp[i])==0);
     do
     {
      printf("\n Salary : ");
      gets(num);
     }while(float_chk(num)==0);
     salary[i]=atof(num);
   }
   do
   {
   clrscr();
   head();
   printf("\n\n %-15.15s%-15.15s%-15.15s","Sl.No.","Name","Salary");
   line1();
   for(i=0;i<n;i++)
    printf("\n %-15d %-15.15s %-15.2ld",i+1,emp[i],salary[i]);
   line1();
   do
   {
   do
   {
    printf("\n Select the person for paying salary :");
    gets(num);
   }while(digit(num)==0);
   ch=atoi(num);
   }while(ch>n||ch<1);
   ch=ch-1;
   printf("\n\n You are paying salary for %s",emp[ch]);
   do
   {
   do
   {
    printf("\n\n Enter the no. of days absent : ");
    gets(num);
   }while(digit(num)==0);
   absent=atoi(num);
   }while(absent>30||absent<0);
   pay=(float)(salary[ch]/30.00)*(30-absent);
   printf("\n\n %s's Payable Salary is %.2f",emp[ch],pay);
   printf("\n\n\n Press 1 to continue...");
   conti=getch();
   }while(conti==49);
 }