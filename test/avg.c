#include<stdio.h>
int main(){
int n,stud[5],i,sum=0;
float avg;
printf("enter the number of students");
scanf("%d",&n);
for (i=0;i<n;i++){
printf("Enter the marks of %d student\n",i+1 );
scanf("%d",&stud[i] );
}
for(i=0;i<n;i++){
  printf("The marks of stud %d is %d \n",i+1,stud[i] );
  sum= sum+stud[i];
}
printf("the total is %d\n",sum );
avg=(float)sum/n;
printf("the average is %.2f\n", avg);
}
