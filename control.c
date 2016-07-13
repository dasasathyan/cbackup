#include <stdio.h>

int main () {
   int a,saridon=10,qty,rate;
   char name[10];
   do {
      printf("\nThe medicine that is bought is: \n");
      scanf("%s",name);
      printf("\nenter the quantitiy\n");
      scanf("%d",&qty);
      saridon-=qty;
   }while( saridon == 0 );

   printf("\nthe available stock is %d\n",saridon);
   return 1;
   getch();
}
