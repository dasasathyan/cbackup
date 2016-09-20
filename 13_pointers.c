struct tab{
  char name[20];
  char purpose[20];
  char manufacturer[20];
  char batch[8];
}tablet[4];

union tab{
//int qty,rate;
char amt[3],qty[2],rate[3];
char name[20];
};

int main(){
printf("The size of structure is %d",sizeof(tablet));
printf("The size of Union is %d",sizeof(tablet));
printf("The address of structure is %p",&tablet);
printf("The address of Union is %p",&tab);
}
