#include <stdio.h>

int main() {
   int a,b,c = 0;
   printf("Enter the value of a\n" );
   scanf("%d",&a );
   printf("Enter the value of b\n" );
   scanf("%d",&b );
   c = a & b;//AND
   printf("AND of a & b is %d\n", c );
   c = a | b;//OR
   printf("OR of a & b is %d\n", c );
   c = a ^ b;//XOR
   printf("XOR of a is %d\n", c );
   c = ~a;//NOT
   printf("NOT of a is %d\n", c );
   c = a << 2;
   printf("LEFT shift of a is %d\n", c );
   c = a >> 2;
   printf("RIGHT shift of a is %d\n", c );
}
