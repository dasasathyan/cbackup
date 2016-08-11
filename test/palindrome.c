#include <stdio.h>
#include <string.h>
int main() {
	char a[10];
	int i,len,flag=0;
	printf("\nENTER A STRING: ");
	scanf("%s",a );
	len=strlen(a);
	for (i=0;i<len;i++) {
		if(a[i]==a[len-i-1])
		     flag=flag+1;
	}
	if(flag==len)
	             printf("\nTHE STRING IS PALINDROM\n"); else
	             printf("\nTHE STRING IS NOT PALINDROM\n");

}
