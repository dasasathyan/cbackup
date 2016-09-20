#include <stdio.h>

int main()
{

   int rate,amt,qty;
  char name[20];
  int *r=&rate,**ra=&r,*a=&amt,**am=&a,*q=&qty,**qt=&q,add,multi;
    printf("The address of rate is %p\n",r );
    printf("The address of rate pointer variable is %p\n\n",ra );

    printf("The address of quantity is %p\n",q );
    printf("The address of quantity pointer variable is %p\n\n",qt );

    amt=qty*rate;//full of trash values
    printf("____________________________________________________________________\n" );
    printf("The quantity  is %d\n",qty );
    printf("The rate  is %d\n",rate );
    printf("The total bill amount  is %d\n",amt );//check what happens when a variable is unassigned
    printf("**ra and **am = %p\t%p\n",**ra,**am );
    add=**ra+**am;
    multi=**ra***am;
    printf("adding pointer variables = %p\n",add );
    printf("multiplying pointer variables = %p\n",multi );
    printf("____________________________________________________________________\n" );
    printf("Enter the qty followeed by the rate\n" );
  //  scanf("%d%d",&qty,&rate );

    amt=qty*rate;
    printf("The total bill amount  is %d\n",amt );
    printf("The address of amount is %p\n",a);
    printf("The address of amount pointer variable is %p\n\n",am );

    }
