#include <stdio.h>
register int  try;

int n = 5;
int trueGlobal = 200;
static int staticGlobal = 100;
int main()
{
    n*=5;
    printf("\nIn main function n will be %d\n",n);
    globe();
    stat();
    stat();
    myStoragePrints();
    printf("address of is %p\n",&try );

}

int nonTrueGlobal = 200;

int stat()
{
    int autoVar = 0;
    static int s = 0;
        s+= 5;
        autoVar +=123;
        printf("Static variable %d\n  ",s);
        printf("automatic variable %d\n  ",autoVar);
}
int globe()
{
    n*=10;
    printf("\nin globe function n will be %d\n  ", n);
    printf("nonTrueGlobal: %d\n", nonTrueGlobal);
}
