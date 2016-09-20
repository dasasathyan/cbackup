#include<stdio.h>
struct tab{
  char name[20];
  char purpose[20];
  char manufacturer[20];
  char batch[8];
};

union taboo{
//int qty,rate;
char amt[3],qty[2],rate[3];
char name[20];
};

int main(){
  union taboo tabu;
  struct tab  tablet;
  struct tab* ptr;
  ptr= &tablet;
  union taboo* ptr1;
  ptr1=&tabu;
printf("The size of structure is %ld\n",sizeof(tablet));
printf("The size of Union is %ld\n",sizeof(tabu));
printf("The address of structure is %p\n",&tablet);
printf("The value of ptr is %p\n",ptr );
printf("The value of ptr1 is %p\n",ptr1 );
printf("The address of Union is %p\n",&tabu);
}
