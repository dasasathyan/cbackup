#include<stdio.h>
#include<conio.h>
#include"gaurav.h"
void main()
 {
   char *name,ch,num[10];
   int *id,size=0,new_size,i;
   float *salary,*bonus,*netpay;
   head();
   do
   {
   do
   {
    printf("\n\n\n Enter no. of employee : ");
    gets(num);
   }while(digit(num)==0);
   new_size=atoi(num);
   }while(new_size>100);
   name=(char *)malloc(new_size*15*sizeof(char));
   id=(int *)malloc(new_size*sizeof(int));
   salary=(float *)calloc(new_size,sizeof(float));
   bonus=(float *)calloc(new_size,sizeof(float));
   netpay=(float *)calloc(new_size,sizeof(float));

   do
   {
   clrscr();
   for(i=size;i<size+new_size;i++)
   {
    flushall();
    head();
    printf("\n\n Record # %d\n",i+1);
    do
    {
    printf("\n Enter the name : ");
    scanf("%s",name+(i*15));
    }while(alpha(name+(i*15))==0);
    flushall();
    do
    {
    printf("\n Enter the ID : ");
    gets(num);
    }while(digit(num)==0);
    *(id+i)=atoi(num);
    flushall();
    do
    {
    printf("\n Enter the Salary : ");
    gets(num);
    }while(float_chk(num)==0);
    *(salary+i)=atof(num);
    if(*(salary+i)>50000)
     {
      *(bonus+i)=5000;
      *(netpay+i)=*(salary+i)+*(bonus+i)-*(salary+i)*0.25;
     }
    else
     {
     *(bonus+i)=2000;
     *(netpay+i)=*(salary+i)+*(bonus+i)-*(salary+i)*0.05;
     }
   }
   head();
   printf("\n\n\n %-15s %-15s %-15s %-15s %-15s","Name","ID","Salary","Bonus","Netpay");
   printf("----------------------------------------------------------------------------");
   for(i=0;i<size+new_size;i++)
     printf("\n %-15.15s %-15d %-15.2f %-15.2f %-15.2f",(name+(i*15)),*(id+i),*(salary+i),*(bonus+i),*(netpay+i));
   printf("----------------------------------------------------------------------------");
   printf("\n\n Want to add more employee : ");
   ch=getche();
   size+=new_size;
   if(ch=='y'||ch=='Y')
   {
   do
   {
   do
   {
    printf("\n\n\n Enter the new size : ");
    gets(num);
   }while(digit(num)==0);
   new_size=atoi(num);
   }while(new_size>100);
    name=(char *)realloc(name,(size+new_size)*sizeof(char)*15);
    id=(int *)realloc(id,(size+new_size)*sizeof(int));
    salary=(float *)realloc(salary,(size+new_size)*sizeof(float));
    bonus=(float *)realloc(bonus,(size+new_size)*sizeof(float));
    netpay=(float *)realloc(netpay,(size+new_size)*sizeof(float));
   }
    }while(ch=='y');
   free(name);
   free(id);
   free(salary);
   free(bonus);
   free(netpay);
   getch();
 }