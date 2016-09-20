#include<stdio.h>
#include "valid.h"
#define bill pf("what tablet you need.?\n\n");scanf("%s",name );
#define go pf("enter the quantity of it and then the rate with macro\n");scanf("%d%d",&qty,&rate);
#if(!defined(pf))
#define pf printf
#endif
#define headache pf("The list of available tablets for headache are:\n1.Saridon\n2.Migranil\n3.Vasograine\n4.Headset\n");
#define cold pf("The list of available tablets for cold are:\n1.Crocin\n2.Coldact\n3.D-Cold Total\n4.Dolo\n");
#define sleeping pf("The list of available tablets for sleeping are:\n1.Restyl 0.5\n2.Restyl 0.25\n3.Eptoin\n");
#define  riskyTabs(a, b)   pf(#a " and " #b " are highly risky tablets\n")
#define stock(n) pf("\nThe available stock is "#n "\n");
int main(){
  char name[20];
int qty,rate,amt,ch;
stock(40);
riskyTabs(restyl,avil);
pf("\nAvailable medicines\n");
pf("1.Headache\n");
pf("2.Cold\n");
pf("3.Sleeping tabs\n");
pf("4.EXIT\n\n");
scanf("%d",&ch );
switch(ch){
  case 1:
  headache;
  bill;
  break;
  case 2:
  cold;
  bill;
  break;
  case 3:
  sleeping;
  bill;
  case 4:
  return(0);
  break;
}
pf("enter your choice ");
if(strcmp(name,"restyl")==0){
  pf("Sorry.As you require a powerful tab,Please come back with doctor's prescription\n");
}
else{
  go;
  amt=qty*rate;
  pf("The total bill amount for %s is %d\n",name,amt);
}
}
