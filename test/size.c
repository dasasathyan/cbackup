#include<stdio.h>
struct {
  char c;
  short s;
  int i;
} myStruct;

int main()
{
   printf("int size is %ld\n", sizeof(int));
   printf("char size is %ld\n", sizeof(char));
   printf("float size is %ld\n", sizeof(float));
   printf("double size is %ld\n", sizeof(double));
   printf("int size is %ld\n", sizeof(int*));
   printf("char size is %ld\n", sizeof(char*));
   printf("float size is %ld\n", sizeof(float*));
   printf("double size is %ld\n", sizeof(double*));
   printf("Long int size is %ld\n", sizeof(long int));
   printf("Short int size is %ld\n", sizeof(short int));
   printf("char size is %ld\n", sizeof(char[20][2]));
   printf("int array size is %ld\n", sizeof(int[20][2]));
   printf("pointer int array size is %ld\n", sizeof(int*[20][2]));
   printf("Size of structure is %ld\n",sizeof(myStruct) );
   printf("%d",'0' );
}
