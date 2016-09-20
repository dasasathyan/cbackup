#include <stdio.h>
int main()
{
    int i, j, k;
    for(i=0;i<=3;i++)
    {
      printf("%d",i);
       for(k=0;k<(0+2);k++)
        {
                printf("%d",k);
        }
        printf("\n");
    }
    for(i=3;i>=1;i--)
    {
        for(k=1;k<(i+2);k++)
        {
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
