#include<stdio.h>
#include<conio.h>
#include"gaurav.h"
void main()
 {
  long char item_name[25];
  char item_code[15];
  double item_weight;
  short int no_of_item;
  long float cost;
  short int discount;
  short float tax;
  unsigned int batchno;
  char ch,num[10];
  clrscr();
  flushall();
  head();
  gotoxy(5,13);printf("ENTER THE PRODUCT DETAIL");
  do
  {
   gotoxy(5,15);printf("Enter the Item Name : ");clreol();
   gets(item_name);
   if(alpha(item_name)==0)
     {
      gotoxy(27,15);clreol();
      printf("ERROR IN INPUT : TRY AGAIN");
      getch();
     }
  }while(alpha(item_name)==0);
  do
  {
   gotoxy(5,17);printf("Enter the Item Code : ");clreol();
   gets(item_code);
   if(alphanum(item_code)==0)
     {
      gotoxy(27,17);clreol();
      printf("ERROR IN INPUT : TRY AGAIN");
      getch();
     }
  }while(alphanum(item_code)==0);
  do
  {
   gotoxy(5,19);printf("Enter the Weight of Item : ");clreol();
   gets(num);
   if(float_chk(num)==0)
     {
      gotoxy(31,19);clreol();
      printf("ERROR IN INPUT : TRY AGAIN");
      getch();
     }
  }while(float_chk(num)==0);
  item_weight=atof(num);
  do
  {
  gotoxy(5,21);printf("Enter no. of Items : ");clreol();
  gets(num);
  if(digit(num)==0)
     {
      gotoxy(25,21);clreol();
      printf("ERROR IN INPUT : TRY AGAIN");
      getch();
     }
  }while(digit(num)==0);
  no_of_item=atoi(num);
  do
  {
  gotoxy(5,23);printf("Enter the cost of the Item : ");clreol();
  gets(num);
  if(float_chk(num)==0)
     {
      gotoxy(34,23);clreol();
      printf("ERROR IN INPUT : TRY AGAIN");
      getch();
     }
  }while(float_chk(num)==0);
  cost=atof(num);
  do
  {
  gotoxy(5,25);printf("Enter the product discount : ");clreol();
  gets(num);
  if(digit(num)==0)
   {
     gotoxy(33,25);clreol();
     printf("ERROR IN INPUT : TRY AGAIN");
     getch();
   }
  }while(digit(num)==0);
  discount=atoi(num);
  do
  {
  gotoxy(5,27);printf("Enter the tax charged : ");clreol();
  gets(num);
  if(float_chk(num)==0)
   {
     gotoxy(29,27);clreol();
     printf("ERROR IN INPUT : TRY AGAIN");
     getch();
   }
  }while(float_chk(num)==0);
  tax=atoi(num);
  do
  {
    gotoxy(5,29);printf("Enter the batch no. :");clreol();
    gets(num);
    if(digit(num)==0)
     {
      gotoxy(26,29);clreol();
      printf("ERROR IN INPUT : TRY AGAIN");
      getch();
     }
  }while(digit(num)==0);
  batchno=atoi(num);
  starline();
  printf("\n\n\n Do you want to display the product detail (y/n) : ");
  ch=getche();
  if (ch=='y'||ch=='Y')
    {
      head();
      printf("\n\n\n PRODUCT DETAILS");
      printf("\n\n Item Name : %s",item_name);
      printf("\n\n Item Code : %s",item_code);
      printf("\n\n Weight of Item : %lf",item_weight);
      printf("\n\n No. of Items : %d",no_of_item);
      printf("\n\n Cost of the Item : %lf",cost);
      printf("\n\n Product discount : %d",discount);
      printf("\n\n Tax charged : %f",tax);
      printf("\n\n Batch No. : %d",batchno);
      starline();
    }
  getch();
 }