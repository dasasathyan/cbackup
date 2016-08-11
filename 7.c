#include<stdio.h>
#include<string.h>
int upper_string(char*);
int main()
{
   char name[30],tab[30],dup[30];
   int i=0,length=0;
   printf("Enter the name of the Customer.Dont worry if its in small letter we will convert it to upper\n");
   scanf("%s",name);
   upper_string(name);
   printf("The name of the customer is %s\n", name);//to upper ends here
   while(name[i]!='\0'){
     dup[i]=name[i];
     i++;
   }
   printf("The name of the customer is %s and it is duplicated here\n",dup );//strcpy ends here
   printf("The name of the tablet.Dont worry if its in upper letter we will convert it to lower\n");
   scanf("%s",tab);
   lower_string(tab);
   printf("The name of the tablet is %s\n", tab);//to lower ends here
   while (tab[length] != '\0')
   length++;
   printf("The length of the tablet is : %d\n", length);//strlen ends here
 }
int upper_string(char *name)
{
   while(*name)
   {
       if ( *name >= 'a' && *name <= 'z' )
       {
          *name = *name - 32;
       }
       name++;
   }
}

int lower_string(char *tab)
{
   while(*tab)
   {
      if ( *tab >= 'A' && *tab <= 'Z' )
      {
         *tab = *tab + 32;
      }
      tab++;
   }
}
