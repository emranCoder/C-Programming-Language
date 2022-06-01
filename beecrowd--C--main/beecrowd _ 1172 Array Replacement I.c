#include<stdio.h>

int main()
{
    int x[10],n,i;
    for (i=0; i<10; i++)
    {
        scanf("%d", &n);
        if (n==1 || n<=0)
        {
            x[i]=1;
        }else
        {
            x[i]=n;
        }
    }
    for (i=0; i<10; i++)
    {
        printf("X[%d] = %d\n", i,x[i] );
    }
    return 0;
}
