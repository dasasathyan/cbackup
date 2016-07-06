#include<stdio.h>
int main(){
char nothing[10];
int rate,amt;
printf("Enter the amount");
scanf("%s%d",&nothing,&rate);
switch(nothing[0]){
  case 'n':
  if(rate>1000&& rate>=2000){
    amt+=(rate*5/100);
    printf("%d",amt);
  }
  else if(rate>2000&& rate>=5000){
    amt=amt+(rate*7.5/100);
    printf("%d",amt);
  }
  else if(rate>5000&& rate>=10000){
    amt=amt+(rate*10/100);
    printf("%d",amt);
  }
  else{
    amt=amt+(rate*20/100);
    printf("%d",amt);
  }
  break;
case 'i':
if(rate>0&& rate>=1000){
  amt=amt+(rate*5/100);
  printf("%d",amt);
}
else if(rate>1000&& rate>=2000){
  amt=amt+(rate*7.5/100);
  printf("%d",amt);
}
else if(rate>2000&& rate>=5000){
  amt=amt+(rate*10/100);
  printf("%d",amt);
}
else if(rate>5000&& rate>=10000){
  amt=amt+(rate*12.5/100);
  printf("%d",amt);
}
else{
amt=amt+(rate*20/100);
printf("%d",amt);
}
break;
default: printf("Entered type is wrong");
}
}
