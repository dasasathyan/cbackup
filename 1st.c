#include <stdio.h>
#include <string.h>
int main(){
  int sno;
  unsigned char cust_name[30];
  long int mobno;
	short int age;
  char tab[30];
  signed int qty;
	float rate;
	double amt;
printf("\nEnter1 the S.No\n ");
scanf("%d",&sno);
printf("Enter the customer name\n");
scanf("%s",cust_name);
printf("Enter the mobile number\n");
scanf("%ld",&mobno);
printf("Enter the age of the customer\n");
scanf("%hd",&age);
printf("Enter the tablet name\n");
scanf("%s",tab);
printf("Enter the quantity\n");
scanf("%i",&qty);
printf("Enter the rate of the tablet\n");
scanf("%f",&rate);
	amt=qty*rate;
  printf("The bill for %s for %s is %.2lf\n",cust_name,tab,amt);
}
