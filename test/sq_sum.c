#include<stdio.h>
int main(){
int i,n,temp,sq;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++){
  temp=i*i*i;
  sq+=temp;
}
printf("%d\n",sq );
}
