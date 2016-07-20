#include<stdio.h>
#include<conio.h>
#include"gaurav.h"
void main()
 {
  unsigned qty1,qty2,ch;
  char num[10];
  head();
  do
  {
  printf("\n Enter the quantity of product 1 : ");
  gets(num);
  }while(digit(num)==0);
  qty1=atoi(num);
  do
  {
  printf("\n Enter the quantity of product 2 : ");
  gets(num);
  }while(digit(num)==0);
  qty2=atoi(num);
  while(1)
  {
   do
    {
    head();
    printf("\n\n************* Menu for bitwise operation *******");
    printf("\n\n 1: AND Operation.");
    printf("\n\n 2: OR Operation.");
    printf("\n\n 3: XOR Operation.");
    printf("\n\n 4: Right Shift Operation.");
    printf("\n\n 5: Left Shift Operation.");
    printf("\n\n 6: 1's Compliment.");
    printf("\n\n 7: EXIT.");
    printf("\n\n\n Enter the choice : ");
    gets(num);
    }while(digit(num)==0);
    ch=atoi(num);
    switch(ch)
     {
      case 1:printf("\n\n %d & %d = %d",qty1,qty2,qty1&qty2);break;
      case 2:printf("\n\n %d | %d = %d",qty1,qty2,qty1|qty2);break;
      case 3:printf("\n\n %d ^ %d = %d",qty1,qty2,qty1^qty2);break;
      case 4:printf("\n\n Right Shift of %d = %d",qty1,qty1>>1);break;
      case 5:printf("\n\n Left Shift of %d = %d",qty2,qty2<<1);break;
      case 6:printf("\n\n 1's Compliment of %d = %d",qty1,~qty1);break;
      case 7:exit(0);
     }
     getch();
  }
 }