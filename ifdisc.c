#include<stdio.h>
#include<string.h>
int main(){
char name[10];
int rate,amt;
printf("enter the type and amount\n");
scanf("%s%d",&name,&rate);
if(strcmp(name,"normal")==0){
if(rate>1000&& rate<=2000){
  amt=rate+(rate*5/100);
  printf("%d",amt);
}
else if(rate>2000&& rate<=5000){
  amt=rate+(rate*7.5/100);
  printf("%d",amt);
}
else if(rate>5000&& rate<=10000){
  amt=rate+(rate*10/100);
  printf("%d",amt);
}
else{
  amt=rate+(rate*20/100);
  printf("%d",amt);
}
}
else{
if(rate>0&& rate<=1000){
  amt=rate+(rate*5/100);
  printf("%d",amt);
}
else if(rate>1000&& rate<=2000){
  amt=rate+(rate*7.5/100);
  printf("%d",amt);
}
else if(rate>2000&& rate<=5000){
  amt=rate+(rate*10/100);
  printf("%d",amt);
}
else if(rate>5000&& rate<=10000){
  amt=rate+(rate*12.5/100);
  printf("%d",amt);
}
else{
amt=rate+(rate*20/100);
printf("%d",amt);
}
}
}
