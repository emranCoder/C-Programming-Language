#include<stdio.h>

int main()
{
    int a,i;
    while(1)
    {
        scanf("%d", &a);
        if (a==0)
        {
            break;
        }
        else
        {
            printf("%d", 1);
            for (i=1+1; i<=a; i++)
            {
                printf(" %d", i);
            }
            printf("\n");
        }
    }
    return 0;
}
