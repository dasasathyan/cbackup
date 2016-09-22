#include<stdio.h>
#define pf printf
int call_by_val(int x){
  int temp_rate,temp_amt;
  printf("Enter the quantity for which you want to check rate\n" );
  scanf("%d",&temp_rate );
  temp_amt=x*temp_rate;
  printf("The quotation for %d\n",temp_amt );
}
int call_by_ref(int *x){
  int new_rate;
  pf("enter the correct price\n");
  scanf("%d",&new_rate );
  *x=new_rate;
}
int recursion(int counter){
  int many;
  char who[30];
  if(counter>0){
    printf("Enter the name of the person\n" );
    scanf("%s",who );
    printf("Enter how many he has purchased\n" );
    scanf("%d",&many );
  }
  else{
    return(0);
  }
  counter--;
  recursion(counter);
}
int main(){
  int ch,qty,rate,amt,counter;
  printf("Enter your choice\n" );
  printf("1.Call by Value\n");
  pf("2.call be ref\n");
  pf("3.recursion\n");
  scanf("%d",&ch );
  switch(ch){
    case 1:
    printf("Enter the qty\n" );
    scanf("%d",&qty );
    printf("Enter the rate\n");
    scanf("%d",&rate );
    amt=rate*qty;
    printf("the total amount is %d\n",amt );
    call_by_val(rate);
    case 2:
    printf("Enter the correct qty\n" );
    scanf("%d",&qty);
    pf("enter the rate");
    scanf("%d",&rate );
    amt=qty*rate;
    pf("the total amount is %d",amt);
    call_by_ref(&rate);
    pf("the correct rate is %d\n",rate);
    case 3:
    pf("enter the no.of counter\n");
    scanf("%d",&counter );
    recursion(counter);
  }

}
