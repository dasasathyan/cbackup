#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"gaurav.h"
void main()
 {
   char emp[10][20],temp[20],num[10];
   int i,j,n,ch;
   long int salary[10],temp1;
    clrscr();
    head();
    do
    {
     printf("\n\n\n No. of employee in shop : :");
     gets(num);
    }while(digit(num)==0);
    n=atoi(num);
    for(i=0;i<n;i++)
    {
     head();
     printf("\n\n\n Employee # %d",i+1);
     do
     {
      flushall();
      printf("\n\n Name : ");
      gets(emp[i]);
     }while(alpha(emp[i])==0);
     do
     {
      printf("\n\n Salary : ");
      gets(num);
     }while(digit(num)==0);
      salary[i]=atoi(num);
    }
   do
   {
    head();
    printf("\n\n\n Sort the employee details :");
    printf("\n\n 1 : Sort by Name.");
    printf("\n\n 2 : Sort by Salary.");
    printf("\n\n\n Enter your choice : ");
    ch=getche();
    if(ch==49)
    {
    for(i=0;i<n;i++)
     for(j=i+1;j<n;j++)
      {
	if(strcmp(emp[i],emp[j])>0)
	 {
	  strcpy(temp,emp[i]);
	  strcpy(emp[i],emp[j]);
	  strcpy(emp[j],temp);
	  temp1=salary[i];
	  salary[i]=salary[j];
	  salary[j]=temp1;
	 }
      }
    }
    else if(ch==50)
    {
     for(i=0;i<n;i++)
     for(j=i+1;j<n;j++)
      {
	if(salary[i]>salary[j])
	 {
	  strcpy(temp,emp[i]);
	  strcpy(emp[i],emp[j]);
	  strcpy(emp[j],temp);
	  temp1=salary[i];
	  salary[i]=salary[j];
	  salary[j]=temp1;
	 }
      }
    }
    head();
    printf("\n\n\n Sorted employees are :\n");
    printf("\n %-15s       %-15s","Name","Salary");
    line1();
    for(i=0;i<n;i++)
      printf("\n\n %-15.15s ->    %-15.2ld ",emp[i],salary[i]);

    getch();
    printf("\n\n\n Press 1 to continue...");
    ch=getch();
   }while(ch==49);
 }