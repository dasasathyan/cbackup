#include<stdio.h>
int main()
{
int n,first,second,sum,temp=0;
printf("Enter the number of terms\n" );
scanf("%d",&n);
printf("Enter the first and 2nd number\n" );
scanf("%d%d", &first,&second);
printf("%d%d",first,second );
while(temp<n){
  sum=first+second;
  printf("%d",sum);
  first=second;
  second=sum;
  temp++;
}
}
