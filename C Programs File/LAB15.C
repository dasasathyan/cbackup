#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"gaurav.h"
struct emp
 {
  char ename[25];
  short int age;
  float salary;
 };
void selection(struct emp *,int n);
void salary(char [],short int,float);
void main()
 {
   int i,n,ch;
   char cho,num[8];
   struct emp e1[10];
   clrscr();
   head();
   do
   {
   do
   {
    printf("\n\n\n Enter the no. of employee :  ");
    gets(num);
    if(digit(num)==0)
      printf("\n WARNING: ERROR IN INPUT, TRY AGAIN !!!");
    }while(digit(num)==0);
   n=atoi(num);
   if(n>20||n<=0)
     printf("\n WARNING: NOT IN LIMIT, TRY AGAIN !!!");
   }while(n>20||n<=0);
   for(i=0;i<n;i++)
    {
     flushall();
     clrscr();
     head();
     printf("\n\n\n Employee # %d ",i+1);
     do
     {
      printf("\n\n Name : ");
      gets(e1[i].ename);
      if(alpha(e1[i].ename)==0||strlen(e1[i].ename)>25)
       printf("\n WARNING: ERROR IN INPUT, TRY AGAIN !!!");
     }while(alpha(e1[i].ename)==0||strlen(e1[i].ename)>25);
     do
     {
     do
     {
      printf("\n Age : ");
      gets(num);
      if(digit(num)==0)
       printf("\n WARNING: ERROR IN INPUT, TRY AGAIN !!!");
     }while(digit(num)==0);
     e1[i].age=atoi(num);
     if(e1[i].age<18||e1[i].age>90)
      printf("\n WARNING: INVALID AGE, TRY AGAIN !!!");
     }while(e1[i].age<18||e1[i].age>90);
     do
     {
      printf("\n Salary : ");
      gets(num);
      if(float_chk(num)==0||strlen(num)>8)
	printf("\n WARNING: ERROR IN INPUT, TRY AGAIN !!!");
     }while(float_chk(num)==0||strlen(num)>8);
     e1[i].salary=atof(num);
    }
     selection(e1,n);
     clrscr();
     head();
     printf("\n\n\n Sorted details of employees are :");
     printf("\n\n\n %-15s %-15s %-15s %-15s","Name","Age","Salary","Netpay");
     printf("\n------------------------------------------------------------------");
     for(i=0;i<n;i++)
       salary(e1[i].ename,e1[i].age,e1[i].salary);
     printf("\n------------------------------------------------------------------");
     getch();
 }
void selection(struct emp *e1,int n)
 {
   int i,j;
   long int itemp;
   struct emp *pos,*pi,*pj;
   char small[25],temp[25];

  for(i=0,pi=e1;i<n-1;i++,pi++)
   {
    strcpy(small,pi->ename);
    pos=pi;
    for(j=i+1,pj=pi+1;j<n;j++,pj++)
    {
      if(strcmp((pj)->ename,small)<0)
	{
	 strcpy(small,(pj)->ename);
	 pos=pj;
	}
     }
       strcpy(temp,pi->ename);
       strcpy(pi->ename,pos->ename);
       strcpy(pos->ename,temp);

       itemp=pi->age;
       pi->age=pos->age;
       pos->age=itemp;

       itemp=pi->salary;
       pi->salary=pos->salary;
       pos->salary=itemp;
    }
 }
void salary(char name[],short int age,float sal)
 {
  float net_pay;
  if(sal>75000)
    net_pay=(float)sal+((sal*25)/100);
  else if(sal>50000&&sal<75000)
    net_pay=(float)sal+((sal*15)/100);
  else if(sal>30000&&sal<50000)
    net_pay=(float)sal+((sal*10)/100);
  else
    net_pay=(float)sal+((sal*5)/100);
  printf("\n %-15.15s %-15d %-15.2f %-15.2f ",name,age,sal,net_pay);
 }