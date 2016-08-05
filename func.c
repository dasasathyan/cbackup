#include<stdio.h>

void fun(int *y) {
  printf("%d\n", *y);
  (*y) += 10;
  printf("%d\n", *y);
}
int main() {
	int b=10;

	printf("b = %d \n", b);
	fun(&b);
	printf("b = %d \n", b);
}
