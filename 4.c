#include <stdio.h>
#include <math.h>
int main(){
char arrayOfWords[5][10];
int i,n,j=0,qty[10],rate[10],amt[10],total=0;
printf("\n\n\t\t\tENTER THE STOCK DETAILS\t\t\t\n\n");
printf("\nenter the number of tablets\n");
scanf("%d",&n);
for (i=0; i<n; i++) {
    j=i+1;
    printf("\nEnter the name of the %d. tablet\n",j);
    scanf ("%s" , arrayOfWords[i]);
    printf("\nenter the amount of new addition to the stock\n");
    scanf("%d",&qty[i]);
    printf("\nenter the rate of the tab\n");
    scanf("%d",&rate[i] );
    amt[i]=rate[i]*qty[i];
    printf("__________________________________________________");
}
for (i=0; i<n; i++) {
printf ("\nThe available stock of %s is %d worth Rs.%d\n\n" , arrayOfWords[i],qty[i],amt[i]);
total=total+amt[i];
}
printf("__________________________________________________");
printf("\nThe total worth of stock is %d\n", total);
}
