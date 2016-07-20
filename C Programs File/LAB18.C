#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include"gaurav.h"
#define PR printf
#define OR ||
#define pointer(type,size) (type *)calloc(size,20*sizeof(type))

void main()
 {

   int i,j,*age,size,pos,itemp;
   char *ename,small[20],ctemp[20],num[10],ch;
   float *salary,ftemp;
   do
   {
   clrscr();
   head();
   do
   {
   PR("\n\n\n Enter the no of employee in shop : ");
   gets(num);
   }while(digit(num)==0);
   size=atoi(num);
   ename=pointer(char,size);//(char *)calloc(size,20*sizeof(char));
   age=pointer(int,size);
   salary=pointer(float,size);
   for(i=0;i<size;i++)
    {
     flushall();
     clrscr();
     head();
     PR("\n\n\n Employee # %d",i+1);
     do
     {
     PR("\n\n\n Name : ");
     gets(ename+(i*20));
     }while(alpha(ename+(i*20))==0 OR strlen(ename+(i*20))>20);
     do
     {
     do
     {
     PR("\n Age : ");
     gets(num);
     }while(digit(num)==0);
     *(age+i)=atoi(num);
     }while(*(age+i)<18 OR *(age+i)>90);
     do
     {
     do
     {
     PR("\n Salary : ");
     gets(num);
     }while(float_chk(num)==0);
     *(salary+i)=atof(num);
     }while(*(salary+i)<0 OR *(salary+i)==0);
    }
    clrscr();
    head();
    PR("\n\n\n Detail Before Sorting\n");
    line1();
    PR("\n %-15.15s %-15.15s %-15.15s","Name","Age","Salary");
    line1();
    for(i=0;i<size;i++)
    {
     PR("\n %-15.15s %-15d %-15.2f",(ename+(i*20)),*(age+i),*(salary+i));
    }
    line1();
    getch();
    for(i=0;i<size;i++)
    {
     strcpy(small,(ename+(i*20)));
     pos=i;
     for(j=i;j<size;j++)
      {
	if(strcmp(ename+(j*20),small)<0)
	 {
	  strcpy(small,ename+(j*20));
	  pos=j;
	 }
      }
	strcpy(ctemp,ename+(pos*20));
	strcpy(ename+(pos*20),ename+(i*20));
	strcpy(ename+(i*20),ctemp);

	itemp=*(age+pos);
	*(age+pos)=*(age+i);
	*(age+i)=itemp;

	ftemp=*(salary+pos);
	*(salary+pos)=*(salary+i);
	*(salary+i)=ftemp;
    }
    clrscr();
    head();
    PR("\n\n\n Deatil After Sorting\n");
    line1();
    PR("\n %-15.15s %-15.15s %-15.15s","Name","Age","Salary");
    line1();
    for(i=0;i<size;i++)
    {
     PR("\n %-15.15s %-15d %-15.2f",(ename+(i*20)),*(age+i),*(salary+i));
    }
    line1();
    PR("\n Want to continue : ");
    ch=getche();
   }while(ch=='y' OR ch=='Y');
   getch();
 }