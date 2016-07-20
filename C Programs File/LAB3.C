#include<stdio.h>
#include<conio.h>
#include"gaurav.h"
void main()
 {
   int n,i,ch,qty;
   char item_name[10][10],item_code[10][10],num[10];
   float weight[10],cost[10],tax[10],dis[10],amt;
   head();
   do
   {
    printf("\n\n\n Enter the no. of product :");
    gets(num);
   }while(digit(num)==0);
   n=atoi(num);
   printf("\n Press enter to input product detail...");
   getch();
   for(i=0;i<n;i++)
    {
      head();
      flushall();
      printf("\n\n\n Product : # %d",i+1);
      do
      {
       printf("\n\n Item Name : ");
       gets(item_name[i]);
      }while(alpha(item_name[i])==0);
      do
      {
       printf("\n Item ID : ");
       gets(item_code[i]);
      }while(alphanum(item_code[i])==0);
      do
      {
       printf("\n Item weight : ");
       gets(num);
      }while(float_chk(num)==0);
      weight[i]=atof(num);
      do
      {
       printf("\n Item cost : ");
       gets(num);
      }while(float_chk(num)==0);
      cost[i]=atof(num);
      do
      {
       printf("\n Tax applied : ");
       gets(num);
      }while(float_chk(num)==0);
      tax[i]=atof(num);
      do
      {
       printf("\n Discount given : ");
       gets(num);
      }while(float_chk(num)==0);
      dis[i]=atof(num);
     }
   head();
   printf("\n\n\n Choose the item to purchase \n\n\n");
   printf(" Product No. \t Product Name \t Cost");
   line1();
   for(i=0;i<n;i++)
    {
     printf("\n %d \t\t %s \t\t %.2f",i+1,item_name[i],cost[i]);
    }
   line1();
   a:
   do
   {
    printf("\n\n\n Enter Purchase choice :");
    gets(num);
   }while(digit(num)==0);
   ch=atoi(num);
   if(ch>n||ch<1)
    {
     printf("\n Invalid choice...");
     goto a;
    }
   printf("\n\n You have selected %s",item_name[ch-1]);
   do
   {
    printf("\n\n\n Enter Quantity : ");
    gets(num);
   }while(digit(num)==0);
   qty=atoi(num);
   head();
   amt=cost[ch-1]*qty;
   printf("\n\n Sl.no.\tProduct Name\tRate\tQty\tAmount");
   line1();
   printf("\n 1\t%s\t\t%.2f\t%d\t%.2f",item_name[ch-1],cost[ch-1],qty,amt);
   line1();
   printf("\n\n\n Total Amount : %.2f",amt);
 getch();
 }