#include<stdio.h>
void call_by_val(int x){
printf("%d\n",x);
x++;
printf("%d",x);
}
int main()
{
int a =10;
printf("before val - %d\n",a);
call_by_val(a);
printf("val - %d\n",a);
}
