#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int digit(char num[])
 {
   int i=0,flag=0;
   while(num[i]!='\0')
    {
     if(num[i]>=48&&num[i]<=57)
       flag=1;
     else
      {
       flag=0;
       break;
      }
     i++;
    }
  return flag;
 }

int alphanum(char num[])
 {
   int i=0,flag=0;
   while(num[i]!='\0')
    {
     if((num[i]>=48&&num[i]<=57)||((num[i]>=65&&num[i]<=91)||(num[i]>=97&&num[i]<123)))
       flag=1;
     else
      {
       flag=0;
       break;
      }
     i++;
    }
  return flag;
 }
 int alpha(char name[])
 {
   int i=0,flag=0;
   while(name[i]!='\0')
    {
      if((name[i]>=65&&name[i]<=90)||(name[i]>=97&&name[i]<122))
	flag=1;
      else
       {
	flag=0;
	break;
       }
     i++;
    }
  return flag;
 }
int main()
{
   int i,n,valid1,valid2,valid3,qty[10],rate[10],amt[10];
   char tab[3][30];
   char name[3][30];
     printf("Enter the number of tablets that has arrived in the inventory\n" );
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("Enter the name of the %d customer\n",i+1 ); //name of the customer
       scanf("%s",name[i] );
       valid3=alpha(name);
       if(valid3==0){
         printf("Invalid input.Enter only the alphabets\n" );
       }
       else{
         printf("Enter the %d tab\n",i+1);//name of the tablet
         scanf("%s", tab[i]);
         valid1=alphanum(tab);
         if(valid1==0){
         printf("\nInvalid Input.Please enter again \n");
       }
       else{
         printf("Enter the quantity of the %d tab\n",i+1 );
         scanf("%d",&qty[i] );
         printf("Enter the rate\n" );
         scanf("%d",&rate[i] );
         amt[i]=qty[i]*rate[i];
      }
    }
  }
     for (i = 0; i < n; i++) {
      printf("The bill for %s is %d and he has bought  %s\n", name[i],amt[i],tab[i]);
    }
  }
