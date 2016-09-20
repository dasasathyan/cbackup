#include<stdio.h>
#include<stdlib.h>
struct tablet
{
	char name[30];
	int qty,rate,amt;

}tab;
int main()
{
	int i,j,num;
	int total,avg;
	FILE *fptr;
	fptr=fopen("tab.txt","a");

	if(fptr==NULL)
	{
		printf("Error in opening file");
		exit(0);
	}
else

printf("\nEnter how many tablets are duplicate\t");
scanf("%d",&num);
for(i=0;i<num;i++)
{
	printf("\nEnter the name of the tablet\t");
	scanf("%s",tab.name);
	printf("Enter the number of tablets that expired?");
	scanf("%d",&tab.qty);
	printf("\n Enter the purchase value of tab and not the selling price");
	scanf("%d",&tab.rate);
	tab.amt=(tab.rate)*(tab.qty);
	fprintf(fptr,"\n\nName:\t%s\t No.of Quantities\t%d\t Rate:\t%d\t Total Value\t%d \t Edited on:\t%s\t",tab.name,tab.qty,tab.rate,tab.amt,__DATE__);

	fclose(fptr);
	int qty,rate,amt;
	char c[1000];
	char name[30],date[30];
	FILE *fpri;
	fpri=fopen("tab.txt","r");
	fscanf(fpri,"%s %d %d %d %s",name,&qty,&rate,&amt,date);
/*	while (c!=EOF) {

		fscanf("%c",c);
		printf("%s\n", );
	}*/
	printf("%s\n%d\n%d\n%d\n%s",name,qty,rate,amt,date );

}


}
