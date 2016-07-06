#include<stdio.h>
int main(){
int n,m,i,j;
int a[n][m];
printf("enter the rows");
scanf("%d",&n);
printf("enter the columns");
scanf("%d",&m);
for(i = 0; i < n; ++i)
{
   for(j = 0; j < m ; ++j)
   {
     scanf("%d",&a[i][j]);
      printf("%d\t",a[i][j]);
   }
printf("\n");
}
}
