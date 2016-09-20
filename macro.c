#include<stdio.h>
#define bill pf("what tablet you need.?\n");scanf("%s",name );
#define go pf("enter the quantity of it and then the rate with macro\n");scanf("%d%d",&qty,&rate);
#if(!defined(pf))
#define pf printf
#endif
#define headache pf("The list of available tablets for headache are:\n1.Saridon\n2.Migranil\n3.Vasograine\n4.Headset\n");
#define cold pf("The list of available tablets for cold are:\n1.Crocin\n2.Coldact\n3.D-Cold Total\n4.Dolo\n");
#define sleeping pf("The list of available tablets for sleeping are:\n1.Restyl 0.5\n2.Restyl 0.25\n3.Eptoin\n");
int main(){
  char name[20];
int qty,rate,amt;
headache;
cold;
sleeping;
bill;
if(strcmp(name,"restyl")==0){
  pf("Sorry.As you require a powerful tab,Please come back with doctor's prescription\n");
}
else{
  go;
  amt=qty*rate;
  pf("The total bill amount for %s is %d\n",name,amt);
}
}
