#include<stdio.h>
int main ()
{
    int i,T,j,n, y;
    scanf("%d", &T);
    for ( i=0; i<T; i++)
    {
        y=0;
        scanf("%d", &n);
        for ( j=1; j<n; j++)
        {
            if (n%j==0)
            {
                y+=j;
            }
        }
        if (y==n)
        {
            printf("%d eh perfeito\n", n);
        }
        else
        {
            printf("%d nao eh perfeito\n", n);
        }
    }

    return 0;
}

