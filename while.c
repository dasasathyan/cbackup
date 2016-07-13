#include <stdio.h>

int main () {
   int saridon=40,restyl=20,sqty,rqty,rate,amt;
   do {
      printf("\nenter the quantity for saridon\n");
      scanf("%d",&sqty);
      printf("\nenter the rate of each saridon\n");
      scanf("%d",&rate);
      amt=sqty*rate;
      saridon-=sqty;
      printf("\nThe total bill amount is %d\n",amt);
      printf("\nThe available stock of sariidon is %d\n", saridon);
}while(saridon!=0);
for(restyl=20;restyl!=0;restyl-rqty){
  printf("\nenter the quantity for restyl\n");
  scanf("%d",&rqty);
  printf("\nenter the rate of each restyl\n");
  scanf("%d",&rate);
  amt=rqty*rate;
  restyl-=rqty;
  printf("\nThe total bill amount for restyl is %d\n",amt);
  printf("\nThe available stock of restyl is %d\n", restyl);
}

}
