#include<stdio.h>
int main(){
int i,a[10]={90,91,89,93,96,97,95,86,82,80},b[10]={80,48,98,93,92,99,98,95,94,93};
printf("%p\n",a);
printf("%p\n",b);
for( i=0;i<10;i++){
  printf("a[%d]%d\t",i+1,a[i]);
  printf("b[%d]%d\n",i+1,b[i]);
}
}
