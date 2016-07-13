#include <stdio.h>

int main () {
   int saridon=40,restyl=20,dolo650=30,sqty,rqty,dqty,rate,amt;
   do {
      printf("\nenter the quantity for saridon..Available stock of saridon is %d\n",saridon);
      scanf("%d",&sqty);
      printf("\nenter the rate of each saridon\n");
      scanf("%d",&rate);
      amt=sqty*rate;
      saridon-=sqty;
      printf("\nThe total bill amount is %d\n",amt);
      printf("\nThe available stock of sariidon is %d\n", saridon);
}while(saridon!=0);
for(restyl=20;restyl!=0;restyl-rqty){
  printf("\nenter the quantity for restyl..Available stock of restyl is %d\n",restyl);
  scanf("%d",&rqty);
  printf("\nenter the rate of each restyl\n");
  scanf("%d",&rate);
  amt=rqty*rate;
  restyl-=rqty;
  printf("\nThe total bill amount for restyl is %d\n",amt);
  printf("\nThe available stock of restyl is %d\n", restyl);
}
while(dolo650<=0){
  printf("\nenter the quantity for dolo650..Available stock of dolo650 is %d\n",dolo650);
  scanf("%d",&dqty);
  printf("\nenter the rate of each restyl\n");
  scanf("%d",&rate);
  amt=rqty*rate;
  dolo650-=dqty;
  printf("\nThe total bill amount for restyl is %d\n",amt);
  printf("\nThe available stock of restyl is %d\n", dolo650);
}
}
