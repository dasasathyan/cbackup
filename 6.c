#include<stdio.h>
int digit(char num[])
 {
   int i=0,flag=0;
   while(num[i]!='\0')
    {
     if(num[i]>=48&&num[i]<=57)
       flag=1;
     else
      {
       flag=0;
       break;
      }
     i++;
    }
  return flag;
 }
int alphanum(char num[])
 {
   int i=0,flag=0;
   while(num[i]!='\0')
    {
     if((num[i]>=48&&num[i]<=57)||((num[i]>=65&&num[i]<=91)||(num[i]>=97&&num[i]<123)))
       flag=1;
     else
      {
       flag=0;
       break;
      }
     i++;
    }
  return flag;
 }
 int alpha(char name[])
  {
    int i=0,flag=0;
    while(name[i]!='\0')
     {
       if((name[i]>=65&&name[i]<=90)||(name[i]>=97&&name[i]<122))
 	flag=1;
       else
        {
 	flag=0;
 	break;
        }
      i++;
     }
   return flag;
  }

 int call_by_ref(int *y) {
  int temp;
  printf("Enter the new Quantity\n");
  scanf("%d",&temp );
  *y =temp;
}
int call_by_val(int x){
  int temp_amt,temp_rate;
  printf("In case if you want to check the price for a different quantity enter the quantity\n");
  scanf("%d",&x );
  printf("Enter the rate\n");
  scanf("%d",&temp_rate );
  temp_amt=temp_rate*x;
  printf("The amount will be %d\n",temp_amt );
}
int pass(char purchase[]){
  int amt,qty,rate;
  char tab[30];
  printf("Enter the tablet name\n");
  scanf("%s",tab );
  printf("Enter the Quantity\n");
  scanf("%d",&qty );
  printf("Enter the rate\n");
  scanf("%d",&rate );
  amt=qty*rate;
  printf("The total amount for %s %s is %d\n", purchase,tab,amt);
}
int recursion(int counter){
  int qty;
  char name[20];
  if(counter>0){
    printf("enter the name\n" );
    scanf("%s",name );
    if(strcmp(name,"dasa")==0){
      printf("Sorry you have been banned from purchasing tabs from any of our stores.Please pay your dues first or get lost\n" );
    }
    else{
    printf("Enter the quantity\n" );
    scanf("%d",&qty );
    printf("%s has bought %d quantities of tablet\n",name,qty );
  }
  }
  else{
    return 0;
  }
  counter --;
  recursion(counter);
}
int main() {
  int ch,amt,qty,rate,validnum,validname,counter;
  char name[30],tab[30],no[30],purchase[20];
  printf("1.Edit the Bill\n2.View the bill\n3.Know what  he has purchased\n4.Look at the available counters\n" );
  printf("Enter the choice\n");
  scanf("%d",&ch );
  switch (ch) {
    case 1:
    printf("Enter the bill No.\n");
    scanf("%s",no);
    validnum=digit(no);
    if(validnum==0){
    printf("\nInvalid Input.Please enter only numeric value \n");
  }
    else{
    printf("Enter the name\n" );
    scanf("%s",name );
    validname=alpha(name);
    if(validname==0){
      printf("Invalid Input..Enter only characters\n" );
    }
    else{
    printf("Enter the tablet name\n");
    scanf("%s",tab );
    printf("Enter the Quantity\n");
    scanf("%d",&qty );
    printf("Enter the rate\n");
    scanf("%d",&rate );
    amt=qty*rate;
    printf("The total amount it %d\n", amt);
    call_by_ref(&qty);
    printf("The new Quantity has been updated to %d \n", qty);
    amt=qty*rate;
    printf("The updated bill amount for %s is %d\n",tab,amt );
  }
   }
    break;
    case 2:
    printf("Enter the bill No.\n");
    scanf("%s",no );
    printf("Enter the name\n" );
    scanf("%s",name );
    printf("Enter the tablet name\n");
    scanf("%s",tab );
    printf("Enter the Quantity\n");
    scanf("%d",&qty );
    printf("Enter the rate\n");
    scanf("%d",&rate );
    amt=qty*rate;
    printf("The total amount is %d\n", amt);
    call_by_val(qty);
    printf("But collect only %d\n",amt );
    break;
    case 3:
  printf("What has he purchased\n");
  scanf("%s",purchase);
   pass(purchase);
   break;
   case 4:
   printf("Enter the available counters\n" );
   scanf("%d",&counter );
   recursion(counter);
}
}
