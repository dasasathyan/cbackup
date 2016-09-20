#include<stdio.h>
#include "valid.h"
#define pf printf
union tab{
//int qty,rate;
char amt[3],qty[2],rate[3];
char name[20];
};
int main(){
int validamt,validqty,validrate,validname;
int qaty,raate,aamt;
union tab tablet;
printf("Enter the name of the tablet\n" );
scanf("%s",tablet.name );
validname=alpha(tablet.name);
if(validname==0){
  printf("\nInvalid Input.. Enter only characters\n" );
}else{
pf("Enter the quantity\n" );
scanf("%s",tablet.qty);
validqty=digit(tablet.qty);
if(validqty==0){
  pf("\nInvalid Input..Enter only numerals\n");
}
else{
qaty=atoi(tablet.qty);
printf("Enter the rate of each tablet\n" );
scanf("%s",tablet.rate );
validqty=digit(tablet.rate);
if(validrate==0){
  pf("\nInvalid Input..Enter only numerals\n");
}
else{
raate=atoi(tablet.rate);
aamt=raate*qaty;
printf("\nThe total amount is %d\n",aamt);
printf("size of the union is %ld\n",sizeof(tablet));
printf("The address of union is %p\n",&tablet );
}
}
}
}
