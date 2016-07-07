#include <stdio.h>
int main(){
     int tab[10],i,n,total=0;
     printf("Enter number of tablets: ");
     scanf("%d",&n);
     for(i=0;i<n;++i){
          printf("Enter the available stock of tablet %d: ",i+1);
          scanf("%d",&tab[i]);
          total+=tab[i];
     }
     printf("The total available tablets in stock is %d\n",total);
return 0;
}
