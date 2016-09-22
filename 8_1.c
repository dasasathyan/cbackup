#include<stdio.h>
int go_static(){
  int i=0;
  static int s=0;
  s+=5;
  i+=3;
  printf("%d\n%d\n",s,i );
}
int main(){
go_static();go_static();
go_static();
}
