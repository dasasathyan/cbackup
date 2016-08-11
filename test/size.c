#include<stdio.h>
struct {
  char c;
  short s;
  int i;
} myStruct;

int main()
{
   printf("int size is %d\n", sizeof(int));
   printf("char size is %d\n", sizeof(char));
   printf("float size is %d\n", sizeof(float));
   printf("double size is %d\n", sizeof(double));
   printf("int size is %d\n", sizeof(int*));
   printf("char size is %d\n", sizeof(char*));
   printf("float size is %d\n", sizeof(float*));
   printf("double size is %d\n", sizeof(double*));
   printf("Long int size is %d\n", sizeof(long int));
   printf("Short int size is %d\n", sizeof(short int));
   printf("char size is %d\n", sizeof(char[20][2]));
   printf("int array size is %d\n", sizeof(int[20][2]));
   printf("pointer int array size is %d\n", sizeof(int*[20][2]));
   printf("Size of structure is %d\n",sizeof(myStruct) );
}
