#include <stdio.h>

int main () {
   int saridon=40,restyl=20,sqty,rqty,rate,amt;
   do {
      printf("\nenter the quantity for saridon..Available stock of saridon is %d\n",saridon);
      scanf("%d",&sqty);
      if(sqty>0 ){
      printf("\nenter the rate of each saridon\n");
      scanf("%d",&rate);
      amt=sqty*rate;
      saridon-=sqty;
      printf("\nThe total bill amount is %d\n",amt);
      printf("\nThe available stock of sariidon is %d\n", saridon);
}
else{
  printf("\nYou have entered a wrong quantity...Enter the quantity lesser or equal to the available stock\n");
}
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
}
