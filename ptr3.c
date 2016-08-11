#include<stdio.h>
int main()
{
    int x,y,z;
    int *p1,*p2,a,b;
    a=12;
    b=4;
    p1=&a;
    p2=&b;
    x=*p1 * *p2 -6;
    y =4 - *p2 / *p1 + 10;
    printf("value of a is %d address of a is %u\n",a,p1);
    printf("Value of b is %d Address of b= %u\n",b,p2);
    printf("x is %d, y is %d \n",x,y);
    *p2 = *p2 +3;
    *p1= *p2 - 5;
    z= *p1 * *p2 - 6;
    printf("\n a = %d , b = %d\n",a,b);
    printf("z = %d \n",z);
    getch();
    return 0;
}
