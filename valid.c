#include<stdio.h>
int digit(char num[]){
int i=0,flag=0;
while(num[i]!='\0'){
  if(num[i]>=48&&num[i]<=57){
    flag=1;
  }
  else{
    flag=0;
    break;
  }
  i++;
}
return flag;
}
int main(){
  char s[10];
  scanf("%s",s);
  digit(s);
  if(digit(s)==0){
    printf("Invalid Input\n" );
  }
  else{
    printf("Correct input\n" );
  }
}
