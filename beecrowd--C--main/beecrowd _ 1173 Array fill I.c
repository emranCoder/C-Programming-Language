#include<stdio.h>

int main()
{
    int x[10],n,i;
    scanf("%d", &n);
    for (i=0; i<10; i++)
    {
            x[i]=n;
            n=x[i]*2;
    }
    for (i=0; i<10; i++)
    {
        printf("N[%d] = %d\n", i,x[i] );
    }
    return 0;
}
