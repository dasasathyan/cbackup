#include <stdio.h>
#include"valid.h"
struct tab{
  char name[20];
  char purpose[20];
  char manufacturer[20];
  char batch[8];
}tablet[4];
int main(){
  int i,validnum,validname,validpurpose,validmanufacturer;
  printf("\nsize of structure is %ld\n",sizeof(tablet));
  printf("address of structure is %p\n",&tablet );
  for(i=0;i<4;i++){
  printf("\nEnter the name of the tablet\n");
  scanf("%s",tablet[i].name);
  validname=alphanum(tablet[i].name);
  if(validname==0){
    printf("Invalid Input...\n" );
  }else{
  printf("For what purpose %s is used for?\n",tablet[i].name );
  scanf("%s",tablet[i].purpose );
  validpurpose=alpha(tablet[i].purpose);
  if(validpurpose==0){
    printf("Invalid Input...\n" );
  }else{
  printf("Who is manufacturing %s \n",tablet[i].name);
  scanf("%s",tablet[i].manufacturer );
  validmanufacturer=alpha(tablet[i].manufacturer);
  if(validmanufacturer==0){
    printf("Invalid Input...\n" );
  }else{
  printf("What's the batch code of %s\n",tablet[i].name );
  scanf("%s",tablet[i].batch );
  validnum=digit(tablet[i].batch);
  if(validnum==0){
  printf("\nInvalid Input.Please enter only numeric value \n");
}
}
}}}

for(i=0;i<4;i++){
printf("%s having %s as BATCH CODE is manufactured by %s and can be used for %s \n",tablet[i].name,tablet[i].batch,tablet[i].manufacturer,tablet[i].purpose );
}
}
