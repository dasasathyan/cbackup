#include <stdio.h>
#include<string.h>
int main()
{
      char tab;
      printf("enter the tab name\n");
      scanf("%s",tab );
     switch( 'tab' ){
       case 'a':
     if(strcmp(tab,"saridon")==0){
           printf("\nThis tab is for headache\n");
   		}
     else if(strcmp(tab,"restyl")==0){
           printf("\nThis tab is for headache\n");
   		}
     else if(strcmp(tab,"dolo650")==0){
           printf("\nThis tab is for headache\n");
   		}
     else{
         printf("There is no change in the stock");
   }
   case 'b':
   printf("You have entered an invalid tablet name");
 }
 }
