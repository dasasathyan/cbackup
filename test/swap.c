#include<stdio.h>
int myswap_byref(int *num1, int *num2) {
  printf("myswap_byref() x add= %p y add=%p\n",num1,num2 );
   int temp;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}
int myswap_byval(int num1, int num2) {
  printf("myswap_byval(): x add= %p y add=%p\n",&num1,&num2 );
  printf("myswap_byval(): Before Swap. x = %d, y  = %d ", num1,num2 );

   int temp;
   temp = num1;
   num1 = num2;
   num2 = temp;

printf("myswap_byval(): After Swap. x = %d, y  = %d ", num1,num2 );

}
int main() {
   int x, y;

   printf("\nmain(): Enter the  numbers ");
   scanf("%d %d", &x,&y);

    printf("\nmain(): Before Swaping x = %d and y = %d\n", x, y);
    printf("main(): Address of x is %p address of y is %p\n",&x,&y );

   myswap_byref(&x, &y);


   printf("\nmain(): After Swaping x = %d and y = %d\n", x, y);
   printf("main(): Address of x is %p address of y is %p\n",&x,&y );


   printf("\nmain(): Enter the  numbers by using val...");
   scanf("%d %d", &x,&y);

    printf("\nmain(): Before Swaping x = %d and y = %d\n", x, y);
    printf("main(): Address of x is %p address of y is %p\n",&x,&y );

   myswap_byval(x, y);

   printf("\nmain(): After Swaping x = %d and y = %d\n", x, y);
   printf("main(): Address of x is %p address of y is %p\n",&x,&y );
}
