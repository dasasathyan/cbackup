#include <stdio.h>
int main()
{
    int i, j, k;
    for(i=0;i<=3;i++)
    {
      printf("*");
       for(k=0;k<(i*2);k++)
        {
                printf("*");
        }
        printf("\n");
    }
    for(i=3;i>=1;i--)
    {
        for(k=1;k<(i*2);k++)
        {
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
