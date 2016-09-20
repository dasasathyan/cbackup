#include<stdio.h>
struct stud{
char reg[10];
char name[20];
char marks[20];
}student;
int main(){
int i;
printf("enter the reg no.,name,marks");
for(i=0;i<1;i++){
scanf("%s",student.reg[i]);
scanf("%s",student.name[i]);
scanf("%s",student.marks[i]);
}

/*file *ptr;
fptr= fopen("inputsStudent.txt","w");*/
for(i=0;i<5;i++){
printf("%s",student.reg[i]);
printf("%s",student.name[i]);
printf("%s",student.marks[i]);
}
}
