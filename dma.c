#include<stdio.h>
#include<stdlib.h>
#include "valid.h"
static int i=0;
int main()
{
	char *a,*b,num[20];
	int i;
	a=(char *)malloc(15*sizeof(char));
	b=(char *)calloc(10,sizeof(char));
  printf("%p\n",a );
  printf("%p\n",b);
	do
	{
	printf("enter the tab name");
	scanf("%s",a);
	}while(alpha(a)==0);
	do
	{
		printf("enter the manufacturer");
	scanf("%s",b);
	}while(alpha(b)==0);
	do
	{
	printf("enter the num");
	scanf("%s",num);
}while(digit(num)==0);
	printf("\t*********************************************************\n");
	printf("%s\n",a);
	printf("%s\n",b);
	printf("%s\n",num);
}
