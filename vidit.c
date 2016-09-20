#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
union food {
  char *name;
  int ID;
  char brand[20]; 
};
int main(int argc, char *argv[])
{
 union food t1,*sptr;
 sptr = &t1;
 t1.name = "SPAR HYPER MARKET";
 printf("\n name of the company : %s",(*sptr).name);
 printf("\n");
 int n,number,flag;
 struct food_database {
     char name[10];
     char food_no[20];
     char max_products[20];
 }stud1 = {"ss","7","10"};
 struct food_database *ptr;
 ptr = &stud1;
 printf("Name : %s",(ptr)->name);
 printf("\n");
 do{
  printf("food Number : %s",(ptr)->food_no);
  flag=num_valid((ptr)->food_no);
  if(flag==1)
  {
   printf("\nINVALID INPUT");
  }
 }while(flag==1);
 n=atoi((ptr)->food_no);
 printf("\n");
 do{
  printf("Maximum products  : %s",(ptr)->max_products);
  flag=num_valid((ptr)->max_products);
  if(flag==1)
  {
   printf("\nINVALID INPUT");
  }
 }while(flag==1);
 n=atoi((ptr)->max_products);
 printf("\n");
}
int num_valid(char check[])
{
 int i, flag=0;
 for(i=0;check[i]!='\0';i++)
 {
  if(!isdigit(check[i]))
  {
   flag=1;
   break;
  }
 }
 return flag;
}
