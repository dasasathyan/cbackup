#include<stdio.h>
#include<conio.h>
#include"gaurav.h"
int length_of(char str[])
 {
  int i=0;
  while(str[i]!='\0')
   i++;
  return i;
 }

void main()
 {
   char str[15],str1[15],str2[15],r_str[15];
   int i,j,ascii;
   head();
   flushall();
   do
   {
     printf("\n\n Enter the 1st product name : ");
     gets(str1);
   }while(alpha(str1)==0);

   fflush(stdin);
   do
   {
     printf("\n\n Enter the 2st product name : ");
     gets(str2);
   }while(alpha(str2)==0);
   head();
   //concatination
   i=0;
   j=0;
   while(str1[i]!='\0')
      str[j++]=str1[i++];
   i=0;
   while(str2[i]!='\0')
      str[j++]=str2[i++];
   str[j]='\0';
   printf("\n\n\n Concatination of Product1 and Product2 : %s.",str);

   //length
   printf("\n\n\n Product Name contain : %d letters.",length_of(str));

   //reverse
   i=0;j=length_of(str)-1;
   while(str[i]!='\0')
     r_str[i++]=str[j--];
   r_str[i]='\0';
   printf("\n\n\n Reverse Product Name : %s.",r_str);

   //upper case
   i=0;
   while(str[i]!='\0')
    {
     ascii=str[i];
     if(ascii>=97&&ascii<=123)
       str[i]=ascii-32;
     i++;
    }
   printf("\n\n\n Upper case of product : %s.",str);

   //lower case
   i=0;
   while(str[i]!='\0')
    {
     ascii=str[i];
     if(ascii>=65&&ascii<=92)
       str[i]=ascii+32;
     i++;
    }
   printf("\n\n\n Lower case of product : %s.",str);
   getch();
 }