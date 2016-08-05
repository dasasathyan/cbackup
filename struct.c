#include<stdio.h>
struct stud
{
      int regno;
      char name[20];
      float marks;
};
int grade(struct stud);
int main()
{
   int i,n=2;
   struct stud student[10];
    for(i=0;i<n;i++)
   {
   scanf("%d ",&student[i].regno);
   scanf("%s",student[i].name);
   scanf("%f",&student[i].marks);
   grade(student[i]);
}
  // getch();
   return 0;
}
int  grade(struct stud student1)
{
    char gr;
    if (student1.marks >= 90)  gr = 'A';
    else if (student1.marks>=80) gr = 'B';
    else if (student1.marks >=70) gr = 'C';
    else if (student1.marks >= 60) gr = 'D';
    else if (student1.marks >= 50) gr = 'E';
    else gr = 'F';
    printf("\n%d %s %f %c ",student1.regno,student1.name,student1.marks,gr);
    //  getch();
    return 0;
}
