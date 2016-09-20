#include<stdio.h>
struct stud{
char name[20];
float marks1,marks2,marks3;
}student[20];

struct filestud{
  char fname[20];
  float fmarks1,fmarks2,fmarks3;
}fstudent[20];

int main()
{
FILE *fptr,*frank;
fptr=fopen("stu.dat","w");
int i,j,n;
float total,avg;

  printf("Enter the number of students\n" );
  scanf("%d",&n );

for(i=0;i<n;i++){

  printf("Enter the name of the student\n" );
  scanf("%s",student[i].name );
  printf("Enter the marks of 1st subject\n" );
  scanf("%f",&student[i].marks1);
  printf("Enter the marks of 2nd subject\n" );
  scanf("%f",&student[i].marks2 );
  printf("Enter the marks of 3rd subject\n" );
  scanf("%f",&student[i].marks3 );
  printf("%s has scored the following marks\t%.2f\t%.2f\t%.2f\n", student[i].name,student[i].marks1,student[i].marks2,student[i].marks3);
}
for(i=0;i<n;i++){

  fscanf(fptr, "%s,%f,%f,%f",student[i].name,&student[i].marks1,&student[i].marks2,&student[i].marks3);
  total=student[i].marks1+student[i].marks2+student[i].marks3;
  avg=total/3;
  printf("The average of %s is %.2f for the total %.2f\n",student[i].name,avg,total );
  fprintf(fptr,"%s has scored ,%.2f,%.2f,%.2f\nThe total marks secured is %.2f\nAnd the average is %.2f",student[i].name,student[i].marks1,student[i].marks2,student[i].marks3,total,avg);

}

}
