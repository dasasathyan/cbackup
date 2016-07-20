#include<stdio.h>
#include<conio.h>
#include"gaurav.h"
union emp
 {
  int empid;
  char empname[20];
  float empsal;
 };
void main()
 {
  int i;
  float pay;
  char num[10];
  union emp e1;
  clrscr();
  head();
  do
  {
  printf("\n\n\n Enter the Employee ID : ");
  gets(num);
  }while(digit(num)==0);
  e1.empid=atoi(num);
  printf("\n Employee ID :%d",e1.empid);
  line1();
  flushall();
  do
  {
  printf("\n\n Enter the Employee Name : ");
  gets(e1.empname);
  }while(alpha(e1.empname)==0);
  printf("\n Employee Name : %s",e1.empname);
  line1();
  do
  {
  printf("\n\n Enter the Employee Salary : ");
  gets(num);
  }while(float_chk(num)==0);
  e1.empsal=atof(num);
  if(e1.empsal>75000)
    pay=(float)(e1.empsal*25)/100;
  else if(e1.empsal>50000 && e1.empsal<75000)
    pay=(float)(e1.empsal*15)/100;
  else if(e1.empsal>35000 && e1.empsal<50000)
    pay=(float)(e1.empsal*15)/100;
  else
    pay=(float)(e1.empsal*5)/100;
  printf("\n\n Employee Salary :%f ",e1.empsal);
  printf("\n\n Employee Net Pay :%.2f ",pay);
  getch();
 }