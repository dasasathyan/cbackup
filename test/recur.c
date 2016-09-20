#include<stdio.h>
int recur(int n){
if(n>0){
printf("enter the name");
char name[20];
int age;
scanf("%s",name);
printf("enter ur age");
scanf("%d",&age);
printf("x=%d\n",n );
}
n --;
recur(n);
}
int main(){
int n;
printf("enter the ");
scanf("%d",&n);
recur(n);
}
