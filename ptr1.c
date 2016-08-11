#include<stdio.h>
int main()
{
    char a;
    int x;
    float p,q;
    a='A';
    x=125;
    p=10.25; q=18.76;
    printf("\n%c is stored in %p \n",a,&a);
    printf("\n%d is stored in %p \n",x,&x);
    printf("\n%f is stored in %p \n",p,&p);
    printf("\n%f is stored in %p \n",q,&q);
    getch();
    return 0;
}
