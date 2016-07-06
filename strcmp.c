#include <stdio.h>
#include <string.h>
int main(){
		int saridon=100;
		long int restyl=45;
		short int dolo650=30;
	signed int qty;
	unsigned int new;
	float rate;
	double amt;
	char tab[30];
printf("Enter the purchase details of name,qty,rate\n ");
	scanf("%s%d%f",&tab,&qty,&rate);
	amt=qty*rate;
  printf("\nThe amount to be paid for %s is %f\n",tab,amt);

  if(strcmp(tab,"saridon")==0){
		saridon-=qty;
        printf("\nThe remaining stock of %s is %d\n",tab,saridon);
		}
  else if(strcmp(tab,"restyl")==0){
		restyl-=qty;
        printf("\nThe remaining stock of %s is %d\n",tab,restyl);
		}
  else if(strcmp(tab,"dolo650")==0){
		dolo650-=qty;
        printf("\nThe remaining stock of %s is %d\n",tab,dolo650);
		}
  else{
      printf("There is no change in the stock");
}
printf("Enter the name of the new medicine and quantity that needs to be added to the stock\n ");
	scanf("%s%d",&tab,&new);
	saridon+=new;
	restyl+=new;
	dolo650+=new;
	 if(strcmp(tab,"saridon")==0){
        printf("\nThe remaining stock of %s is %d\n",tab,saridon);
		}
  else if(strcmp(tab,"restyl")==0){
        printf("\nThe remaining stock of %s is %d\n",tab,restyl);
		}
  else if(strcmp(tab,"dolo650")==0){
        printf("\nThe remaining stock of %s is %d\n",tab,dolo650);
		}
  else{
      printf("There is no change in the stock\t");
}
}
