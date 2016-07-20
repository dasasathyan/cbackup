#include<stdio.h>
#include<conio.h>
#include"gaurav.h"
void main()
 {
   int n,i,ch,p_qty;
   char item_name[10][10],item_code[10][10],num[10];
   float qty[10],cost[10],amt;
   head();
   do
   {
    printf("\n\n\n Enter the no. of product :");
    gets(num);
   }while(digit(num)==0);
   n=atoi(num);
   printf("\n\n\n Press enter to input product detail...");
   getch();
   i=0;
   while(i<n)
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
       printf("\n Item quantity : ");
       gets(num);
      }while(digit(num)==0);
      qty[i]=atoi(num);
      do
      {
       printf("\n Item cost : ");
       gets(num);
      }while(float_chk(num)==0);
      cost[i]=atof(num);

      i++;
     }
   again:
   head();
   printf("\n\n\n Choose the item to purchase \n\n\n");
   printf("\n Product No. \t Product Name \t Cost");
   line1();
   for(i=0;i<n;i++)
    {
     printf("\n %d \t\t %s \t\t %.2f",i+1,item_name[i],cost[i]);
    }
   line1();
   flushall();
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
   printf("\n\n\n You have selected %s",item_name[ch-1]);
   printf("\n\n Enter Quantity : ");
   scanf("%d",&p_qty);
   if((qty[ch-1]-p_qty)>=0)
   {
    head();
    amt=cost[ch-1]*p_qty;
    printf("\n\n Sl.no.\tProduct Name\tRate\tQty\tAmount");
    line1();
    printf("\n 1\t%s\t\t%.2f\t%d\t%.2f",item_name[ch-1],cost[ch-1],p_qty,amt);
    line1();
    printf("\n\n\n Total Amount : %.2f",amt);
    qty[ch-1]-=p_qty;
    getch();
   }
  else
   {
    printf("\n\n\n Not enough stock...");
    printf("\n\n Purchase %s soon...\n",item_name[ch-1]);
   }
  if(qty[ch-1]<10)
   {
    if(qty[ch-1]<1)
     {
      printf("\n\n\n Alert alert alert!!!");
      printf("\n\n No stock for PRODUCT : %s",item_name[ch-1]);
      printf("\n\n Purchase it now!!!");
     }
    else
     {
      printf("\n\n\n Stock underflow...");
      printf("\n\n\n Purchase %s urgently...",item_name[ch-1]);
     }
   }
 printf("\n\n\n\n\n     Press 1 to purchase more...");
 scanf("%d",&ch);
 if(ch==1)
   goto again;
 getch();
 }