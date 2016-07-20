#include<stdlib.h>
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
int float_chk(char num[])
 {
   int i=0,flag=0,count=0;
   while(num[i]!='\0')
    {
     if(num[i]==46)
	count++;
     if((num[i]>=48&&num[i]<=57)||num[i]==46)
       flag=1;
     else
      {
       flag=0;
       break;
      }
     i++;
    }
  if(count!=1)
   return(0);
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
void head()
 {
   clrscr();
   printf("\n *****************************************************************************");
   printf("\n\n                    General Store Inventory Control System");
   printf("\n\n                             S.G. Palya,11th Cross");
   printf("\n\n                                 Bangalore-29");
   printf("\n\n *****************************************************************************");
 }

void line1()
{
   printf("\n ----------------------------------------------------------------------------");
}
void starline()
{
  printf("\n\n *****************************************************************************");
}
