#include <stdio.h>
#include <string.h>
int main(){
		int saridon=20,restyl=45,dolo650=30,i,rem;
    float amt,rate;
    short int qty;
	char tab[30];
printf("Enter the purchase details of name,qty,rate\n ");
	scanf("%s%hu%f",tab,&qty,&rate);
	amt=qty*rate;
  printf("\nThe amount to be paid for %s is	%.2f\n",tab,amt);
	for(i=0;i<strlen(tab);i++){
		rem=saridon-qty;
		printf("The available stock in saridon is %d\n",rem);
	}
}
