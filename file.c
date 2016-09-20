#include<stdio.h>
struct stud{
int reg[20];
char name[20][20];
int marks[20];
}student;
int main(){
FILE *fptr;
fptr=fopen("student.txt","w");
int i,j,n;
char name[20];
printf("Enter the number of students\n");
scanf("%d",&n);
for(i=0;i<n;i++){
  printf("Enter the name\n");
  scanf("%s",student.name[i]);
  printf("Enter the register no.\n");
  scanf("%d",&student.reg[i]);
    for(j=0;j<3;j++){
      printf("Enter the marks for 3 subjects\n" );
      scanf("%d",&student.marks[j]);
}
}
for(i=0;i<n;i++){
//printf("%s,%d,%d,%d,%d\n",student.name[i],student.reg[i],student.marks[0],student.marks[1],student.marks[2]);
fprintf(fptr,"%s,%d,%d,%d,%d\n",student.name[i],student.reg[i],student.marks[0],student.marks[1],student.marks[2]);
}
}
