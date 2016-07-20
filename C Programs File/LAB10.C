#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include"gaurav.h"
void main()
 {
   char emp[10][20],temp[20],num[5],eid[10][10],sname[20];
   int i,j,n,ch,low,high,mid,flag=0;
   float salary[10],temp1,ssal;
    clrscr();
    head();
    do
    {
    do
    {
     printf("\n\n\n No. of employee in shop : ");
     gets(num);
    }while(digit(num)==0);
    n=atoi(num);
    }while(n<=0||n>32000||strlen(num)>5);
    printf("\n\n\n Enter the %d employees names :\n",n);
    for(i=0;i<n;i++)
    {
      head();
     flushall();
     printf("\n\n\n Employee # %d",i+1);
     do
     {
      printf("\n\n\n Employee ID : ");
      gets(eid[i]);
     }while(alphanum(eid[i])==0);
     do
     {
      printf("\n\n Name : ");
      gets(emp[i]);
     }while(alpha(emp[i])==0);
     do
     {
      printf("\n\n Salary : ");
      gets(num);
     }while(float_chk(num)==0);
      salary[i]=atof(num);
    }
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
	  strcpy(temp,eid[i]);
	  strcpy(eid[i],eid[j]);
	  strcpy(eid[j],temp);
	 }
      }
   do
   {
      head();
      printf("\n\n\n Enter employee name to search :");
      gets(sname);
      low=0;
      high=n;
      flag=0;
      while(low<=high)
       {
	mid=(low+high)/2;
	if(strcmp(sname,emp[mid])>0)
	 low=mid+1;
	else if(strcmp(sname,emp[mid])<0)
	 high=mid-1;
	else if(strcmp(sname,emp[mid])==0)
	 {
	  printf("\n\n\n Employee Id : %s \n\n Name : %s \n\n Salary : %.2f ",eid[mid],emp[mid],salary[mid]);
	  flag=1;
	  low=mid+1;
	 }
       }
      if(flag==0)
	printf("\n\n\n Not found ...");

    getch();
    printf("\n\n\n Press 1 to continue...\n\n");
    ch=getch();
   }while(ch==49);
}